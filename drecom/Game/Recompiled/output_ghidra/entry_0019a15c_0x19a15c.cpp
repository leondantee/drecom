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

// Function: entry_0019a15c
// Address: 0x19a15c - 0x19a180
void entry_0019a15c_0x19a15c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a15c_0x19a15c");
#endif

    ctx->pc = 0x19a15cu;

    // 0x19a15c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a160: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x19a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x19a164: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x19a164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19a168: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19a16c: 0xac821344  sw          $v0, 0x1344($a0)
    ctx->pc = 0x19a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 2));
    // 0x19a170: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19a170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19a174: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19a174u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a178: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19A178u;
    SET_GPR_U32(ctx, 31, 0x19A180u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19A178u, 0x19A180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A180u;
}
