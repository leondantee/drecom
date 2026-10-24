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

// Function: entry_0030b0ec
// Address: 0x30b0ec - 0x30b138
void entry_0030b0ec_0x30b0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030b0ec_0x30b0ec");
#endif

    switch (ctx->pc) {
        case 0x30b11cu: goto label_30b11c;
        default: break;
    }

    ctx->pc = 0x30b0ecu;

    // 0x30b0ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b0f0: 0x8c421368  lw          $v0, 0x1368($v0)
    ctx->pc = 0x30b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4968)));
    // 0x30b0f4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x30b0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x30b0f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30B0F8u;
    {
        const bool branch_taken_0x30b0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b0f8) {
            ctx->pc = 0x30B138u;
            return;
        }
    }
    ctx->pc = 0x30B100u;
    // 0x30b100: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b104: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30b108: 0x24511710  addiu       $s1, $v0, 0x1710
    ctx->pc = 0x30b108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 5904));
    // 0x30b10c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b110: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b110u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30b114: 0xc079140  jal         func_1E4500
    ctx->pc = 0x30B114u;
    SET_GPR_U32(ctx, 31, 0x30B11Cu);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B114u, 0x30B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B11Cu;
label_30b11c:
    // 0x30b11c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b120: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x30b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x30b124: 0x245117a0  addiu       $s1, $v0, 0x17A0
    ctx->pc = 0x30b124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6048));
    // 0x30b128: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x30b128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30b12c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x30b12cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x30b130: 0xc079140  jal         func_1E4500
    ctx->pc = 0x30B130u;
    SET_GPR_U32(ctx, 31, 0x30B138u);
    ctx->pc = 0x1E4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4500u, 0x30B130u, 0x30B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B138u;
}
