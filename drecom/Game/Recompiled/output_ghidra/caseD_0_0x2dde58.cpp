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

// Function: caseD_0
// Address: 0x2dde58 - 0x2dde9c
void caseD_0_0x2dde58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x2dde58");
#endif

    switch (ctx->pc) {
        case 0x2dde94u: goto label_2dde94;
        default: break;
    }

    ctx->pc = 0x2dde58u;

    // 0x2dde58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dde58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dde5c: 0xa20200d6  sb          $v0, 0xD6($s0)
    ctx->pc = 0x2dde5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dde60: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x2dde60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dde64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2dde64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dde68: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2dde68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dde6c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DDE6Cu;
    {
        const bool branch_taken_0x2dde6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dde6c) {
            ctx->pc = 0x2DDE9Cu;
            return;
        }
    }
    ctx->pc = 0x2DDE74u;
    // 0x2dde74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2dde74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dde78: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2dde78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dde7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2dde7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2dde80: 0x24060a37  addiu       $a2, $zero, 0xA37
    ctx->pc = 0x2dde80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2615));
    // 0x2dde84: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2dde84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dde88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2dde88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dde8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DDE8Cu;
    SET_GPR_U32(ctx, 31, 0x2DDE94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDE8Cu, 0x2DDE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDE94u;
label_2dde94:
    // 0x2dde94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2DDE94u;
    {
        const bool branch_taken_0x2dde94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dde94) {
            ctx->pc = 0x2DDEBCu;
            return;
        }
    }
    ctx->pc = 0x2DDE9Cu;
}
