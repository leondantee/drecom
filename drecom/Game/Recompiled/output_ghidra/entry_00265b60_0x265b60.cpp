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

// Function: entry_00265b60
// Address: 0x265b60 - 0x265b90
void entry_00265b60_0x265b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265b60_0x265b60");
#endif

    switch (ctx->pc) {
        case 0x265b74u: goto label_265b74;
        default: break;
    }

    ctx->pc = 0x265b60u;

    // 0x265b60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x265b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265b64: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x265b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x265b68: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x265b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x265b6c: 0xc076744  jal         func_1D9D10
    ctx->pc = 0x265B6Cu;
    SET_GPR_U32(ctx, 31, 0x265B74u);
    ctx->pc = 0x1D9D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D10u, 0x265B6Cu, 0x265B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265B74u;
label_265b74:
    // 0x265b74: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x265b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x265b78: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x265b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x265b7c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x265b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x265b80: 0xac64124c  sw          $a0, 0x124C($v1)
    ctx->pc = 0x265b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4684), GPR_U32(ctx, 4));
    // 0x265b84: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265b88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x265b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x265b8c: 0x0  nop
    ctx->pc = 0x265b8cu;
    // NOP
    ctx->pc = 0x265b90u;
}
