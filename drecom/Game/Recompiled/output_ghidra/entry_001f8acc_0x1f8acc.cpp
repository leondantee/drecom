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

// Function: entry_001f8acc
// Address: 0x1f8acc - 0x1f8bac
void entry_001f8acc_0x1f8acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8acc_0x1f8acc");
#endif

    switch (ctx->pc) {
        case 0x1f8b04u: goto label_1f8b04;
        case 0x1f8b28u: goto label_1f8b28;
        case 0x1f8b60u: goto label_1f8b60;
        default: break;
    }

    ctx->pc = 0x1f8accu;

    // 0x1f8acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8ad0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ad4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f8ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8ad8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8adc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ae0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f8ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8ae4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ae8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f8ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8aec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8af0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f8af0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8af4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8af8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f8afc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8AFCu;
    SET_GPR_U32(ctx, 31, 0x1F8B04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8AFCu, 0x1F8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B04u;
label_1f8b04:
    // 0x1f8b04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f8b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8b08: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f8b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f8b0c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f8b10: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f8b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8b14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8b14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8b18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8b1c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f8b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8b20: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8B20u;
    SET_GPR_U32(ctx, 31, 0x1F8B28u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8B20u, 0x1F8B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B28u;
label_1f8b28:
    // 0x1f8b28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f8b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8b2c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f8b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f8b30: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f8b34: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f8b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8b38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8b38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8b3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8b40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8b44: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f8b44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8b48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8b4c: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x1f8b4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1f8b50: 0x3042f8ff  andi        $v0, $v0, 0xF8FF
    ctx->pc = 0x1f8b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63743);
    // 0x1f8b54: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x1f8b54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f8b58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8B58u;
    SET_GPR_U32(ctx, 31, 0x1F8B60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8B58u, 0x1F8B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B60u;
label_1f8b60:
    // 0x1f8b60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f8b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8b64: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1f8b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1f8b68: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1f8b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f8b6c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f8b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f8b70: 0x24639c20  addiu       $v1, $v1, -0x63E0
    ctx->pc = 0x1f8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x1f8b74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f8b78: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1f8b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8b7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8b80: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1f8b80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f8b84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f8b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f8b88: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f8b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f8b8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8b94: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8B94u;
    {
        const bool branch_taken_0x1f8b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8b94) {
            ctx->pc = 0x1F8BACu;
            return;
        }
    }
    ctx->pc = 0x1F8B9Cu;
    // 0x1f8b9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ba0: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8ba4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f8ba8: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f8bacu;
}
