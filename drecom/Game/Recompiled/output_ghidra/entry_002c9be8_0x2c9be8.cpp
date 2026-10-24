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

// Function: entry_002c9be8
// Address: 0x2c9be8 - 0x2c9ca8
void entry_002c9be8_0x2c9be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c9be8_0x2c9be8");
#endif

    switch (ctx->pc) {
        case 0x2c9bf0u: goto label_2c9bf0;
        case 0x2c9c18u: goto label_2c9c18;
        case 0x2c9c64u: goto label_2c9c64;
        default: break;
    }

    ctx->pc = 0x2c9be8u;

    // 0x2c9be8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9BE8u;
    SET_GPR_U32(ctx, 31, 0x2C9BF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9BE8u, 0x2C9BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9BF0u;
label_2c9bf0:
    // 0x2c9bf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c9bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9bf4: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2c9bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2c9bf8: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x2c9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x2c9bfc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c9bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9c00: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c9c00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c9c04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9c0c: 0xa4430058  sh          $v1, 0x58($v0)
    ctx->pc = 0x2c9c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c9c10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9C10u;
    SET_GPR_U32(ctx, 31, 0x2C9C18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9C10u, 0x2C9C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C18u;
label_2c9c18:
    // 0x2c9c18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c9c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9c1c: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c9c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c9c20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9c24: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C9C24u;
    {
        const bool branch_taken_0x2c9c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9c24) {
            ctx->pc = 0x2C9CA8u;
            return;
        }
    }
    ctx->pc = 0x2C9C2Cu;
    // 0x2c9c2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9c30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c9c34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9c38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c9c3c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c40: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c9c40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c9c44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c48: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c9c48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9c4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c50: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c9c50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9c54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c9c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c9c5c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C9C5Cu;
    SET_GPR_U32(ctx, 31, 0x2C9C64u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C9C5Cu, 0x2C9C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9C64u;
label_2c9c64:
    // 0x2c9c64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c9c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c9c68: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2c9c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2c9c6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c9c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c9c70: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C9C70u;
    {
        const bool branch_taken_0x2c9c70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c9c70) {
            ctx->pc = 0x2C9CA8u;
            return;
        }
    }
    ctx->pc = 0x2C9C78u;
    // 0x2c9c78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9c7c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c9c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9c84: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c9c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c9c88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c9c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9c90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c9c94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9c98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9c9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c9c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9ca0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c9ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c9ca4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c9ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c9ca8u;
}
