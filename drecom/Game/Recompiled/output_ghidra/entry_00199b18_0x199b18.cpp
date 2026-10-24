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

// Function: entry_00199b18
// Address: 0x199b18 - 0x199b3c
void entry_00199b18_0x199b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199b18_0x199b18");
#endif

    ctx->pc = 0x199b18u;

    // 0x199b18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199b1c: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x199b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x199b20: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x199b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x199b24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x199b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x199b28: 0xac821344  sw          $v0, 0x1344($a0)
    ctx->pc = 0x199b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 2));
    // 0x199b2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199b30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x199b30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x199b34: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x199B34u;
    SET_GPR_U32(ctx, 31, 0x199B3Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x199B34u, 0x199B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B3Cu;
}
