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

// Function: entry_00367440
// Address: 0x367440 - 0x3674bc
void entry_00367440_0x367440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00367440_0x367440");
#endif

    switch (ctx->pc) {
        case 0x367450u: goto label_367450;
        case 0x36745cu: goto label_36745c;
        case 0x36746cu: goto label_36746c;
        case 0x367478u: goto label_367478;
        default: break;
    }

    ctx->pc = 0x367440u;

    // 0x367440: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367444: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367444u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367448: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367448u;
    SET_GPR_U32(ctx, 31, 0x367450u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367448u, 0x367450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367450u;
label_367450:
    // 0x367450: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367454: 0xc05cd10  jal         func_173440
    ctx->pc = 0x367454u;
    SET_GPR_U32(ctx, 31, 0x36745Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x367454u, 0x36745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36745Cu;
label_36745c:
    // 0x36745c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36745cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367464: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x367464u;
    SET_GPR_U32(ctx, 31, 0x36746Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367464u, 0x36746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36746Cu;
label_36746c:
    // 0x36746c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36746cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367470: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x367470u;
    SET_GPR_U32(ctx, 31, 0x367478u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367470u, 0x367478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367478u;
label_367478:
    // 0x367478: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36747c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36747cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x367480: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x367480u;
    {
        const bool branch_taken_0x367480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367480) {
            ctx->pc = 0x3674BCu;
            return;
        }
    }
    ctx->pc = 0x367488u;
    // 0x367488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x367488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36748c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367490: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x367490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x367494: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367498: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x367498u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36749c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3674a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3674a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3674a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3674a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3674a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3674a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3674ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3674acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3674b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3674b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3674b4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3674B4u;
    {
        const bool branch_taken_0x3674b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3674b4) {
            ctx->pc = 0x3674BCu;
            return;
        }
    }
    ctx->pc = 0x3674BCu;
}
