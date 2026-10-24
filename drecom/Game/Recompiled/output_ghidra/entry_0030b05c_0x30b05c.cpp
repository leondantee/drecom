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

// Function: entry_0030b05c
// Address: 0x30b05c - 0x30b08c
void entry_0030b05c_0x30b05c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b05c_0x30b05c");
#endif

    ctx->pc = 0x30b05cu;

    // 0x30b05c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b060: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x30b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
    // 0x30b064: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30b064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x30b068: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30B068u;
    {
        const bool branch_taken_0x30b068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b068) {
            ctx->pc = 0x30B08Cu;
            return;
        }
    }
    ctx->pc = 0x30B070u;
    // 0x30b070: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b074: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30b078: 0x24511440  addiu       $s1, $v0, 0x1440
    ctx->pc = 0x30b078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5184));
    // 0x30b07c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b080: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b080u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30b084: 0xc079140  jal         func_1E4500
    ctx->pc = 0x30B084u;
    SET_GPR_U32(ctx, 31, 0x30B08Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B084u, 0x30B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B08Cu;
}
