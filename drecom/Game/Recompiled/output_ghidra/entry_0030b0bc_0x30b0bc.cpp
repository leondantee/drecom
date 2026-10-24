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

// Function: entry_0030b0bc
// Address: 0x30b0bc - 0x30b0ec
void entry_0030b0bc_0x30b0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b0bc_0x30b0bc");
#endif

    ctx->pc = 0x30b0bcu;

    // 0x30b0bc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b0c0: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x30b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
    // 0x30b0c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x30b0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x30b0c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30B0C8u;
    {
        const bool branch_taken_0x30b0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b0c8) {
            ctx->pc = 0x30B0ECu;
            return;
        }
    }
    ctx->pc = 0x30B0D0u;
    // 0x30b0d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b0d4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30b0d8: 0x24511320  addiu       $s1, $v0, 0x1320
    ctx->pc = 0x30b0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x30b0dc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b0e0: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b0e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30b0e4: 0xc079140  jal         func_1E4500
    ctx->pc = 0x30B0E4u;
    SET_GPR_U32(ctx, 31, 0x30B0ECu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B0E4u, 0x30B0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0ECu;
}
