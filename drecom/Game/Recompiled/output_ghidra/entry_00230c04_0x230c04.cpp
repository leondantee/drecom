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

// Function: entry_00230c04
// Address: 0x230c04 - 0x230ca4
void entry_00230c04_0x230c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230c04_0x230c04");
#endif

    switch (ctx->pc) {
        case 0x230c3cu: goto label_230c3c;
        case 0x230c60u: goto label_230c60;
        default: break;
    }

    ctx->pc = 0x230c04u;

    // 0x230c04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230c08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c0c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x230c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x230c10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230c14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c18: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x230c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x230c1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c20: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x230c20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x230c24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c28: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x230c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x230c2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x230c30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x230c34: 0xc067694  jal         func_19DA50
    ctx->pc = 0x230C34u;
    SET_GPR_U32(ctx, 31, 0x230C3Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x230C34u, 0x230C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C3Cu;
label_230c3c:
    // 0x230c3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x230c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x230c40: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x230c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x230c44: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x230c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x230c48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x230c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x230c4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x230c4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x230c50: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c54: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x230c54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x230c58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x230C58u;
    SET_GPR_U32(ctx, 31, 0x230C60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x230C58u, 0x230C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C60u;
label_230c60:
    // 0x230c60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x230c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x230c64: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x230c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x230c68: 0x24630104  addiu       $v1, $v1, 0x104
    ctx->pc = 0x230c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x230c6c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x230c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x230c70: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x230c70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x230c74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x230c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x230c7c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x230c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x230c80: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c84: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x230c84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x230c88: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x230c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x230c8c: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x230c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x230c90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230c94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x230c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x230c98: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x230c98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x230c9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ca0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x230ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x230ca4u;
}
