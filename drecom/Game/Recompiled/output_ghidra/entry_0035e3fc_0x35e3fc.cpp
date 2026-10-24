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

// Function: entry_0035e3fc
// Address: 0x35e3fc - 0x35e450
void entry_0035e3fc_0x35e3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e3fc_0x35e3fc");
#endif

    switch (ctx->pc) {
        case 0x35e408u: goto label_35e408;
        case 0x35e438u: goto label_35e438;
        default: break;
    }

    ctx->pc = 0x35e3fcu;

    // 0x35e3fc: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35e3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x35e400: 0xc084a8c  jal         func_212A30
    ctx->pc = 0x35E400u;
    SET_GPR_U32(ctx, 31, 0x35E408u);
    ctx->pc = 0x212A30u;
    {
        ctx->pc = 0x35E408u;
        ps2_syscalls::DeleteSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35E408u) { return; }
    ctx->pc = 0x35E408u;
label_35e408:
    // 0x35e408: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35e408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35e40c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x35e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x35e410: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x35e414: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x35e414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x35e418: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35e418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35e41c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35e41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35e420: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x35e420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x35e424: 0x8e0202a8  lw          $v0, 0x2A8($s0)
    ctx->pc = 0x35e424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35e428: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x35e428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x35e42c: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x35e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    // 0x35e430: 0xc0674dc  jal         func_19D370
    ctx->pc = 0x35E430u;
    SET_GPR_U32(ctx, 31, 0x35E438u);
    ctx->pc = 0x19D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D370u, 0x35E430u, 0x35E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E438u;
label_35e438:
    // 0x35e438: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35e438u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e43c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e43cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e440: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e444: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35e444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35e448: 0x3e00008  jr          $ra
    ctx->pc = 0x35E448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E450u;
}
