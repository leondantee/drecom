#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Moji_init
// Address: 0x167050 - 0x167090
void Moji_init_0x167050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Moji_init_0x167050");
#endif

    switch (ctx->pc) {
        case 0x167060u: goto label_167060;
        case 0x167068u: goto label_167068;
        case 0x167080u: goto label_167080;
        default: break;
    }

    ctx->pc = 0x167050u;

    // 0x167050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x167050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x167054: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x167054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x167058: 0xc059c24  jal         func_167090
    ctx->pc = 0x167058u;
    SET_GPR_U32(ctx, 31, 0x167060u);
    ctx->pc = 0x167090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167090u, 0x167058u, 0x167060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167060u;
label_167060:
    // 0x167060: 0xc059c3c  jal         func_1670F0
    ctx->pc = 0x167060u;
    SET_GPR_U32(ctx, 31, 0x167068u);
    ctx->pc = 0x1670F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1670F0u, 0x167060u, 0x167068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167068u;
label_167068:
    // 0x167068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x167068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16706c: 0x8c25fdf4  lw          $a1, -0x20C($at)
    ctx->pc = 0x16706cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CFDF4u));
    // 0x167070: 0x2404002b  addiu       $a0, $zero, 0x2B
    ctx->pc = 0x167070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x167074: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x167074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x167078: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x167078u;
    SET_GPR_U32(ctx, 31, 0x167080u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x167078u, 0x167080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167080u;
label_167080:
    // 0x167080: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x167080u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167084: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x167084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x167088: 0x3e00008  jr          $ra
    ctx->pc = 0x167088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167090u;
}
