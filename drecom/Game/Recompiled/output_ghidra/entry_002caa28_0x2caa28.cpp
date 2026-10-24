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

// Function: entry_002caa28
// Address: 0x2caa28 - 0x2caac0
void entry_002caa28_0x2caa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002caa28_0x2caa28");
#endif

    switch (ctx->pc) {
        case 0x2caa30u: goto label_2caa30;
        case 0x2caa7cu: goto label_2caa7c;
        default: break;
    }

    ctx->pc = 0x2caa28u;

    // 0x2caa28: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CAA28u;
    SET_GPR_U32(ctx, 31, 0x2CAA30u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CAA28u, 0x2CAA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA30u;
label_2caa30:
    // 0x2caa30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2caa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2caa34: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2caa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2caa38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2caa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caa3c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2CAA3Cu;
    {
        const bool branch_taken_0x2caa3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2caa3c) {
            ctx->pc = 0x2CAAC0u;
            return;
        }
    }
    ctx->pc = 0x2CAA44u;
    // 0x2caa44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2caa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caa48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2caa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caa50: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2caa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2caa54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa58: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2caa58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caa5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa60: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2caa60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caa64: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa68: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2caa68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caa6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2caa70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2caa74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CAA74u;
    SET_GPR_U32(ctx, 31, 0x2CAA7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CAA74u, 0x2CAA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA7Cu;
label_2caa7c:
    // 0x2caa7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2caa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2caa80: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2caa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2caa84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2caa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2caa88: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CAA88u;
    {
        const bool branch_taken_0x2caa88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2caa88) {
            ctx->pc = 0x2CAAC0u;
            return;
        }
    }
    ctx->pc = 0x2CAA90u;
    // 0x2caa90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2caa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2caa94: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caa98: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2caa98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caa9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2caa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2caaa0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caaa4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2caaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2caaa8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caaac: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2caaacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caab0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caab4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2caab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2caab8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caabc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2caabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2caac0u;
}
