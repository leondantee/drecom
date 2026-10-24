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

// Function: entry_003086dc
// Address: 0x3086dc - 0x308764
void entry_003086dc_0x3086dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003086dc_0x3086dc");
#endif

    switch (ctx->pc) {
        case 0x3086fcu: goto label_3086fc;
        case 0x308708u: goto label_308708;
        case 0x308718u: goto label_308718;
        case 0x308724u: goto label_308724;
        default: break;
    }

    ctx->pc = 0x3086dcu;

    // 0x3086dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3086dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3086e0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x3086e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x3086e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3086e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3086e8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x3086e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x3086ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3086ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3086f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3086f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3086f4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3086F4u;
    SET_GPR_U32(ctx, 31, 0x3086FCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3086F4u, 0x3086FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086FCu;
label_3086fc:
    // 0x3086fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3086fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308700: 0xc05cd10  jal         func_173440
    ctx->pc = 0x308700u;
    SET_GPR_U32(ctx, 31, 0x308708u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x308700u, 0x308708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308708u;
label_308708:
    // 0x308708: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30870c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30870cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x308710: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x308710u;
    SET_GPR_U32(ctx, 31, 0x308718u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x308710u, 0x308718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308718u;
label_308718:
    // 0x308718: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30871c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30871Cu;
    SET_GPR_U32(ctx, 31, 0x308724u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30871Cu, 0x308724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308724u;
label_308724:
    // 0x308724: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308728: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x308728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30872c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30872Cu;
    {
        const bool branch_taken_0x30872c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30872c) {
            ctx->pc = 0x308764u;
            return;
        }
    }
    ctx->pc = 0x308734u;
    // 0x308734: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308738: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30873c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30873cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308744: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308748: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308748u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30874c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308750: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308754: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308758: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30875c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308760: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x308764u;
}
