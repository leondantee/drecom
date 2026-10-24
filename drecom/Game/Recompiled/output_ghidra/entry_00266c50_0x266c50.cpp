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

// Function: entry_00266c50
// Address: 0x266c50 - 0x266c78
void entry_00266c50_0x266c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266c50_0x266c50");
#endif

    switch (ctx->pc) {
        case 0x266c64u: goto label_266c64;
        default: break;
    }

    ctx->pc = 0x266c50u;

    // 0x266c50: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x266c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x266c54: 0x26450a68  addiu       $a1, $s2, 0xA68
    ctx->pc = 0x266c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2664));
    // 0x266c58: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x266c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x266c5c: 0xc0506e8  jal         func_141BA0
    ctx->pc = 0x266C5Cu;
    SET_GPR_U32(ctx, 31, 0x266C64u);
    ctx->pc = 0x141BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141BA0u, 0x266C5Cu, 0x266C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C64u;
label_266c64:
    // 0x266c64: 0xae021248  sw          $v0, 0x1248($s0)
    ctx->pc = 0x266c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4680), GPR_U32(ctx, 2));
    // 0x266c68: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x266c68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x266c6c: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x266c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x266c70: 0xc099a54  jal         func_266950
    ctx->pc = 0x266C70u;
    SET_GPR_U32(ctx, 31, 0x266C78u);
    ctx->pc = 0x266950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266950u, 0x266C70u, 0x266C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C78u;
}
