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

// Function: entry_0035cd50
// Address: 0x35cd50 - 0x35cd90
void entry_0035cd50_0x35cd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035cd50_0x35cd50");
#endif

    switch (ctx->pc) {
        case 0x35cd60u: goto label_35cd60;
        case 0x35cd74u: goto label_35cd74;
        case 0x35cd80u: goto label_35cd80;
        case 0x35cd8cu: goto label_35cd8c;
        default: break;
    }

    ctx->pc = 0x35cd50u;

    // 0x35cd50: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x35cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x35cd54: 0x34440005  ori         $a0, $v0, 0x5
    ctx->pc = 0x35cd54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x35cd58: 0xc0d7320  jal         func_35CC80
    ctx->pc = 0x35CD58u;
    SET_GPR_U32(ctx, 31, 0x35CD60u);
    ctx->pc = 0x35CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC80u, 0x35CD58u, 0x35CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD60u;
label_35cd60:
    // 0x35cd60: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35cd64: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x35cd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x35cd68: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x35cd68u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, 0x1000B400u));
    // 0x35cd6c: 0xc0761f0  jal         func_1D87C0
    ctx->pc = 0x35CD6Cu;
    SET_GPR_U32(ctx, 31, 0x35CD74u);
    ctx->pc = 0x1D87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D87C0u, 0x35CD6Cu, 0x35CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD74u;
label_35cd74:
    // 0x35cd74: 0x36240100  ori         $a0, $s1, 0x100
    ctx->pc = 0x35cd74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)256);
    // 0x35cd78: 0xc0d7320  jal         func_35CC80
    ctx->pc = 0x35CD78u;
    SET_GPR_U32(ctx, 31, 0x35CD80u);
    ctx->pc = 0x35CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CC80u, 0x35CD78u, 0x35CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD80u;
label_35cd80:
    // 0x35cd80: 0x8e0402a4  lw          $a0, 0x2A4($s0)
    ctx->pc = 0x35cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x35cd84: 0xc084a90  jal         func_212A40
    ctx->pc = 0x35CD84u;
    SET_GPR_U32(ctx, 31, 0x35CD8Cu);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x35CD8Cu;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35CD8Cu) { return; }
    ctx->pc = 0x35CD8Cu;
label_35cd8c:
    // 0x35cd8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x35cd90u;
}
