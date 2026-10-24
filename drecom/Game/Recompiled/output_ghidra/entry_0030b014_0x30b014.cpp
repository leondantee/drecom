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

// Function: entry_0030b014
// Address: 0x30b014 - 0x30b05c
void entry_0030b014_0x30b014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b014_0x30b014");
#endif

    ctx->pc = 0x30b014u;

    // 0x30b014: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b018: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x30b018u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x30b01c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30b01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30b020: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30b020u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x30b024: 0x4410031  bgez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x30B024u;
    {
        const bool branch_taken_0x30b024 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x30b024) {
            ctx->pc = 0x30B0ECu;
            return;
        }
    }
    ctx->pc = 0x30B02Cu;
    // 0x30b02c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b030: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x30b030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
    // 0x30b034: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30b034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30b038: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30B038u;
    {
        const bool branch_taken_0x30b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b038) {
            ctx->pc = 0x30B05Cu;
            return;
        }
    }
    ctx->pc = 0x30B040u;
    // 0x30b040: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b044: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30b048: 0x24510cf0  addiu       $s1, $v0, 0xCF0
    ctx->pc = 0x30b048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
    // 0x30b04c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b050: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b050u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30b054: 0xc079140  jal         func_1E4500
    ctx->pc = 0x30B054u;
    SET_GPR_U32(ctx, 31, 0x30B05Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B054u, 0x30B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B05Cu;
}
