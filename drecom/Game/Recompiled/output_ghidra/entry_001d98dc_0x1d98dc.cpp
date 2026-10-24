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

// Function: entry_001d98dc
// Address: 0x1d98dc - 0x1d9928
void entry_001d98dc_0x1d98dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d98dc_0x1d98dc");
#endif

    switch (ctx->pc) {
        case 0x1d98f4u: goto label_1d98f4;
        default: break;
    }

    ctx->pc = 0x1d98dcu;

    // 0x1d98dc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d98e0: 0x24530b10  addiu       $s3, $v0, 0xB10
    ctx->pc = 0x1d98e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 2832));
    // 0x1d98e4: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d98e8: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1d98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d98ec: 0xc0656a8  jal         func_195AA0
    ctx->pc = 0x1D98ECu;
    SET_GPR_U32(ctx, 31, 0x1D98F4u);
    ctx->pc = 0x195AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195AA0u, 0x1D98ECu, 0x1D98F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D98F4u;
label_1d98f4:
    // 0x1d98f4: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d98f8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1d98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1d98fc: 0xae62005c  sw          $v0, 0x5C($s3)
    ctx->pc = 0x1d98fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 2));
    // 0x1d9900: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d9900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9904: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1d9904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d9908: 0xae6201ec  sw          $v0, 0x1EC($s3)
    ctx->pc = 0x1d9908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 2));
    // 0x1d990c: 0x8e021a14  lw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d9910: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1d9910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d9914: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9914u;
    {
        const bool branch_taken_0x1d9914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9914) {
            ctx->pc = 0x1D9928u;
            return;
        }
    }
    ctx->pc = 0x1D991Cu;
    // 0x1d991c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1d991cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1d9920: 0xc079304  jal         func_1E4C10
    ctx->pc = 0x1D9920u;
    SET_GPR_U32(ctx, 31, 0x1D9928u);
    ctx->pc = 0x1E4C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4C10u, 0x1D9920u, 0x1D9928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9928u;
}
