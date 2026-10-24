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

// Function: entry_001316c8
// Address: 0x1316c8 - 0x13174c
void entry_001316c8_0x1316c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001316c8_0x1316c8");
#endif

    switch (ctx->pc) {
        case 0x1316d8u: goto label_1316d8;
        case 0x1316e4u: goto label_1316e4;
        case 0x1316f4u: goto label_1316f4;
        case 0x131700u: goto label_131700;
        default: break;
    }

    ctx->pc = 0x1316c8u;

    // 0x1316c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1316c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1316ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1316d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1316D0u;
    SET_GPR_U32(ctx, 31, 0x1316D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1316D0u, 0x1316D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316D8u;
label_1316d8:
    // 0x1316d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1316d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316dc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1316DCu;
    SET_GPR_U32(ctx, 31, 0x1316E4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1316DCu, 0x1316E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316E4u;
label_1316e4:
    // 0x1316e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1316e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1316e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1316ec: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1316ECu;
    SET_GPR_U32(ctx, 31, 0x1316F4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1316ECu, 0x1316F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316F4u;
label_1316f4:
    // 0x1316f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1316f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1316F8u;
    SET_GPR_U32(ctx, 31, 0x131700u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1316F8u, 0x131700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131700u;
label_131700:
    // 0x131700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131704: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x131704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x131708: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x131708u;
    {
        const bool branch_taken_0x131708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131708) {
            ctx->pc = 0x13174Cu;
            return;
        }
    }
    ctx->pc = 0x131710u;
    // 0x131710: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131718: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x131718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x13171c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131720: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131724: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x131724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x131728: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13172c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x13172cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x131730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131734: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x131734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x131738: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13173c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13173cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x131740: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x131740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x131744: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131744u;
    {
        const bool branch_taken_0x131744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131744) {
            ctx->pc = 0x13174Cu;
            return;
        }
    }
    ctx->pc = 0x13174Cu;
}
