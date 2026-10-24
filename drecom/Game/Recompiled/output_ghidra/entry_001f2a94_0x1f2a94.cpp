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

// Function: entry_001f2a94
// Address: 0x1f2a94 - 0x1f2b4c
void entry_001f2a94_0x1f2a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2a94_0x1f2a94");
#endif

    switch (ctx->pc) {
        case 0x1f2accu: goto label_1f2acc;
        case 0x1f2af0u: goto label_1f2af0;
        default: break;
    }

    ctx->pc = 0x1f2a94u;

    // 0x1f2a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2a98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a9c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f2a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2aa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2aa4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2aa8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f2aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2aac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2ab0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f2ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2ab4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2ab8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f2ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2abc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2ac0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f2ac4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F2AC4u;
    SET_GPR_U32(ctx, 31, 0x1F2ACCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F2AC4u, 0x1F2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2ACCu;
label_1f2acc:
    // 0x1f2acc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f2accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2ad0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f2ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f2ad4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f2ad8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f2ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f2adc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f2adcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f2ae0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2ae4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f2ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2ae8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F2AE8u;
    SET_GPR_U32(ctx, 31, 0x1F2AF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F2AE8u, 0x1F2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AF0u;
label_1f2af0:
    // 0x1f2af0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f2af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2af4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f2af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f2af8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f2afc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f2afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f2b00: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f2b00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f2b04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2b0c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f2b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f2b10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b14: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x1f2b14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f2b18: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x1f2b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x1f2b1c: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1f2b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2b20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b24: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f2b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2b28: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f2b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b2c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f2b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f2b30: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1f2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f2b34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2b38: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f2b38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f2b3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f2b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f2b44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f2b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f2b48: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f2b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1f2b4cu;
}
