using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using UnityEngine;

public class Example: MonoBehaviour
{
    private void Start()
    {
        WhenAny().Forget();
        WhenAny_Suppressed().Forget();
    }

    private async UniTask WhenAny()
    {
        var ct = this.GetCancellationTokenOnDestroy();
        await UniTask.WhenAny(
            Task1(ct),
            Task2(ct),
            Task3(ct)
        );
    }

    private async UniTask WhenAny_Suppressed()
    {
        var ct = this.GetCancellationTokenOnDestroy();
        await UniTask.WhenAny(
            Task1(ct).SuppressCancellationThrow(),
            Task2(ct).SuppressCancellationThrow(),
            Task3(ct).SuppressCancellationThrow()
        );
    }

    
    private async UniTask Task1(CancellationToken ct)
    {
        await UniTask.Delay(100, cancellationToken: ct);
    }

    private async UniTask Task2(CancellationToken ct)
    {
        await UniTask.Delay(100, cancellationToken: ct);
    }

    private async UniTask Task3(CancellationToken ct)
    {
        await UniTask.Delay(100, cancellationToken: ct);
    }

    // Uncomment for code explosion
    // private async UniTask<int> Task1(CancellationToken ct)
    // {
    //     await UniTask.Delay(100, cancellationToken: ct);
    //     return 1;
    // }
    //
    // private async UniTask<float> Task2(CancellationToken ct)
    // {
    //     await UniTask.Delay(100, cancellationToken: ct);
    //     return 1f;
    // }
    //
    // private async UniTask<string> Task3(CancellationToken ct)
    // {
    //     await UniTask.Delay(100, cancellationToken: ct);
    //     return "1f";
    // }
}
