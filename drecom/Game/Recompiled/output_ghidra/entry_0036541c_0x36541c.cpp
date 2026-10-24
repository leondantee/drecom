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

// Function: entry_0036541c
// Address: 0x36541c - 0x365490
void entry_0036541c_0x36541c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036541c_0x36541c");
#endif

    switch (ctx->pc) {
        case 0x36542cu: goto label_36542c;
        case 0x365438u: goto label_365438;
        case 0x365448u: goto label_365448;
        case 0x365454u: goto label_365454;
        default: break;
    }

    ctx->pc = 0x36541cu;

    // 0x36541c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36541cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365420: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365420u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365424: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365424u;
    SET_GPR_U32(ctx, 31, 0x36542Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365424u, 0x36542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36542Cu;
label_36542c:
    // 0x36542c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365430: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365430u;
    SET_GPR_U32(ctx, 31, 0x365438u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365430u, 0x365438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365438u;
label_365438:
    // 0x365438: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36543c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36543cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365440: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365440u;
    SET_GPR_U32(ctx, 31, 0x365448u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365440u, 0x365448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365448u;
label_365448:
    // 0x365448: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36544c: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x36544Cu;
    SET_GPR_U32(ctx, 31, 0x365454u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x36544Cu, 0x365454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365454u;
label_365454:
    // 0x365454: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365458: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x365458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36545c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x36545Cu;
    {
        const bool branch_taken_0x36545c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36545c) {
            ctx->pc = 0x365490u;
            return;
        }
    }
    ctx->pc = 0x365464u;
    // 0x365464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365468: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36546c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36546cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365470: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365474: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x365474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x365478: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36547c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36547cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365484: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365488: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36548c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36548cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x365490u;
}
