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

// Function: entry_001e31e8
// Address: 0x1e31e8 - 0x1e3238
void entry_001e31e8_0x1e31e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e31e8_0x1e31e8");
#endif

    switch (ctx->pc) {
        case 0x1e3200u: goto label_1e3200;
        default: break;
    }

    ctx->pc = 0x1e31e8u;

    // 0x1e31e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1e31e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e31ec: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x1e31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1e31f0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e31f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e31f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e31f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e31f8: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E31F8u;
    SET_GPR_U32(ctx, 31, 0x1E3200u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E31F8u, 0x1E3200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3200u;
label_1e3200:
    // 0x1e3200: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e3200u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e3204: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1e3204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1e3208: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e3208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e320c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e320cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3210: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1e3210u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e3214: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3214u;
    {
        const bool branch_taken_0x1e3214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3214) {
            ctx->pc = 0x1E3238u;
            return;
        }
    }
    ctx->pc = 0x1E321Cu;
    // 0x1e321c: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x1e321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1e3220: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e3220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3224: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e3224u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e3228: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x1e3228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e322c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E322Cu;
    {
        const bool branch_taken_0x1e322c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e322c) {
            ctx->pc = 0x1E3240u;
            return;
        }
    }
    ctx->pc = 0x1E3234u;
    // 0x1e3234: 0x0  nop
    ctx->pc = 0x1e3234u;
    // NOP
    ctx->pc = 0x1e3238u;
}
