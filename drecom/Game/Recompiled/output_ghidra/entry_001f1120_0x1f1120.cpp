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

// Function: entry_001f1120
// Address: 0x1f1120 - 0x1f116c
void entry_001f1120_0x1f1120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1120_0x1f1120");
#endif

    switch (ctx->pc) {
        case 0x1f1128u: goto label_1f1128;
        case 0x1f1160u: goto label_1f1160;
        default: break;
    }

    ctx->pc = 0x1f1120u;

    // 0x1f1120: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1120u;
    SET_GPR_U32(ctx, 31, 0x1F1128u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1120u, 0x1F1128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1128u;
label_1f1128:
    // 0x1f1128: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1128u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f112c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f112cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f1130: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f1130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f1134: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1134u;
    {
        const bool branch_taken_0x1f1134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1134) {
            ctx->pc = 0x1F116Cu;
            return;
        }
    }
    ctx->pc = 0x1F113Cu;
    // 0x1f113c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f113cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f1140: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f1140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f1144: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1148: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f114c: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1f114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1f1150: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f1150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f1154: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1158: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1158u;
    SET_GPR_U32(ctx, 31, 0x1F1160u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1158u, 0x1F1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1160u;
label_1f1160:
    // 0x1f1160: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1160u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1164: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F1164u;
    {
        const bool branch_taken_0x1f1164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1164) {
            ctx->pc = 0x1F1194u;
            return;
        }
    }
    ctx->pc = 0x1F116Cu;
}
