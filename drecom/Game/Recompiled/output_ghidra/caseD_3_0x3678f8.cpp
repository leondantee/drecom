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

// Function: caseD_3
// Address: 0x3678f8 - 0x367958
void caseD_3_0x3678f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x3678f8");
#endif

    switch (ctx->pc) {
        case 0x367908u: goto label_367908;
        case 0x367914u: goto label_367914;
        case 0x367924u: goto label_367924;
        case 0x367930u: goto label_367930;
        default: break;
    }

    ctx->pc = 0x3678f8u;

    // 0x3678f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3678f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3678fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3678fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367900: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367900u;
    SET_GPR_U32(ctx, 31, 0x367908u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367900u, 0x367908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367908u;
label_367908:
    // 0x367908: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36790c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36790Cu;
    SET_GPR_U32(ctx, 31, 0x367914u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36790Cu, 0x367914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367914u;
label_367914:
    // 0x367914: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367918: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367918u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36791c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36791Cu;
    SET_GPR_U32(ctx, 31, 0x367924u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36791Cu, 0x367924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367924u;
label_367924:
    // 0x367924: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367928: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x367928u;
    SET_GPR_U32(ctx, 31, 0x367930u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367928u, 0x367930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367930u;
label_367930:
    // 0x367930: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367934: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x367938: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x367938u;
    {
        const bool branch_taken_0x367938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367938) {
            ctx->pc = 0x367AC4u;
            return;
        }
    }
    ctx->pc = 0x367940u;
    // 0x367940: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367944: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x367948: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36794c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x36794cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x367950: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x367950u;
    {
        const bool branch_taken_0x367950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367950) {
            ctx->pc = 0x367AC4u;
            return;
        }
    }
    ctx->pc = 0x367958u;
}
