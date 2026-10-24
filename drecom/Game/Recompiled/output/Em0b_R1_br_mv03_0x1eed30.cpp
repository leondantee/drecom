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

// Function: Em0b_R1_br_mv03
// Address: 0x1eed30 - 0x1ef190
void Em0b_R1_br_mv03_0x1eed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_br_mv03_0x1eed30");
#endif

    switch (ctx->pc) {
        case 0x1eed94u: goto label_1eed94;
        case 0x1eedb8u: goto label_1eedb8;
        case 0x1eee00u: goto label_1eee00;
        case 0x1eee24u: goto label_1eee24;
        case 0x1eeee0u: goto label_1eeee0;
        case 0x1eef54u: goto label_1eef54;
        default: break;
    }

    ctx->pc = 0x1eed30u;

    // 0x1eed30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eed34: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1eed34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1eed38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eed3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eed3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eed40: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1eed40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1eed44: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1eed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1eed48: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x1eed48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x1eed4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eed50: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1eed50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1eed54: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1EED54u;
    {
        const bool branch_taken_0x1eed54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eed54) {
            ctx->pc = 0x1EEE70u;
            goto label_1eee70;
        }
    }
    ctx->pc = 0x1EED5Cu;
    // 0x1eed5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eed60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eed64: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1eed64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eed68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eed68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eed6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eed70: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1eed70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eed74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eed78: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1eed78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eed7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eed80: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1eed80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eed84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eed84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eed88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eed88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eed8c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EED8Cu;
    SET_GPR_U32(ctx, 31, 0x1EED94u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EED8Cu, 0x1EED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED94u;
label_1eed94:
    // 0x1eed94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eed94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eed98: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1eed98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1eed9c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1eed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1eeda0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1eeda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1eeda4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1eeda4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1eeda8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eedac: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1eedacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eedb0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EEDB0u;
    SET_GPR_U32(ctx, 31, 0x1EEDB8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EEDB0u, 0x1EEDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEDB8u;
label_1eedb8:
    // 0x1eedb8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1eedb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eedbc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1eedbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1eedc0: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1EEDC0u;
    {
        const bool branch_taken_0x1eedc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eedc0) {
            ctx->pc = 0x1EEEFCu;
            goto label_1eeefc;
        }
    }
    ctx->pc = 0x1EEDC8u;
    // 0x1eedc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eedcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eedccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eedd0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1eedd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eedd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eedd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eedd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeddc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1eeddcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eede0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eede4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1eede4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eede8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eede8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eedec: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1eedecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eedf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eedf4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eedf8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EEDF8u;
    SET_GPR_U32(ctx, 31, 0x1EEE00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EEDF8u, 0x1EEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE00u;
label_1eee00:
    // 0x1eee00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eee00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eee04: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1eee04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1eee08: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1eee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1eee0c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1eee0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1eee10: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1eee10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1eee14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eee18: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1eee18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eee1c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EEE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EEE24u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EEE1Cu, 0x1EEE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEE24u;
label_1eee24:
    // 0x1eee24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1eee24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eee28: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1eee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1eee2c: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1EEE2Cu;
    {
        const bool branch_taken_0x1eee2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eee2c) {
            ctx->pc = 0x1EEEFCu;
            goto label_1eeefc;
        }
    }
    ctx->pc = 0x1EEE34u;
    // 0x1eee34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eee34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eee38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eee3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1eee3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eee40: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1eee40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eee44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eee48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1eee48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eee4c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1eee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eee50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eee50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eee54: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1eee54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eee58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eee58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eee5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1eee5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eee60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eee60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eee64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1eee64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1eee68: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1EEE68u;
    {
        const bool branch_taken_0x1eee68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eee68) {
            ctx->pc = 0x1EEEFCu;
            goto label_1eeefc;
        }
    }
    ctx->pc = 0x1EEE70u;
label_1eee70:
    // 0x1eee70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1eee70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eee74: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1eee74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1eee78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eee7c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1eee7cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eee80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eee80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eee84: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1eee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eee88: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1eee88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1eee8c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1eee8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1eee90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eee90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eee94: 0x0  nop
    ctx->pc = 0x1eee94u;
    // NOP
    // 0x1eee98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1eee98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eee9c: 0x0  nop
    ctx->pc = 0x1eee9cu;
    // NOP
    // 0x1eeea0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EEEA0u;
    {
        const bool branch_taken_0x1eeea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eeea0) {
            ctx->pc = 0x1EEEFCu;
            goto label_1eeefc;
        }
    }
    ctx->pc = 0x1EEEA8u;
    // 0x1eeea8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eeea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeeac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeeb0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1eeeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eeeb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eeeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eeeb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeebc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1eeebcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eeec0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeec4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1eeec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eeec8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeecc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1eeeccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eeed0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eeed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeed4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eeed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eeed8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EEED8u;
    SET_GPR_U32(ctx, 31, 0x1EEEE0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EEED8u, 0x1EEEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEEE0u;
label_1eeee0:
    // 0x1eeee0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1eeee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eeee4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1eeee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1eeee8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1eeee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1eeeec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1eeeecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1eeef0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1eeef0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1eeef4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eeef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeef8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1eeef8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1eeefc:
    // 0x1eeefc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eeefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eef04: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1eef04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1eef08: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1eef08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1eef0c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1eef0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1eef10: 0x2861002e  slti        $at, $v1, 0x2E
    ctx->pc = 0x1eef10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x1eef14: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EEF14u;
    {
        const bool branch_taken_0x1eef14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef14) {
            ctx->pc = 0x1EEF80u;
            goto label_1eef80;
        }
    }
    ctx->pc = 0x1EEF1Cu;
    // 0x1eef1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eef20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1eef24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eef28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1eef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eef2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef30: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1eef30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eef34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eef34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef38: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1eef38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eef3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef40: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1eef40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eef44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1eef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1eef48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1eef4c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EEF4Cu;
    SET_GPR_U32(ctx, 31, 0x1EEF54u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EEF4Cu, 0x1EEF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEF54u;
label_1eef54:
    // 0x1eef54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1eef54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eef58: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1eef58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1eef5c: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1eef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1eef60: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1eef60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1eef64: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1eef64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1eef68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef6c: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1eef6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1eef70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eef74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eef78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eef78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eef7c: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x1eef7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
label_1eef80:
    // 0x1eef80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1eef80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1eef84: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1eef84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1eef88: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1eef88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1eef8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1eef8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1eef90: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEF90u;
    {
        const bool branch_taken_0x1eef90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eef90) {
            ctx->pc = 0x1EEFACu;
            goto label_1eefac;
        }
    }
    ctx->pc = 0x1EEF98u;
    // 0x1eef98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1eef98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1eef9c: 0x8c241a50  lw          $a0, 0x1A50($at)
    ctx->pc = 0x1eef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A50u));
    // 0x1eefa0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1eefa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1eefa4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1eefa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1eefa8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1eefa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1eefac:
    // 0x1eefac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eefacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eefb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eefb4: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1eefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1eefb8: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1EEFB8u;
    {
        const bool branch_taken_0x1eefb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eefb8) {
            ctx->pc = 0x1EF0A8u;
            goto label_1ef0a8;
        }
    }
    ctx->pc = 0x1EEFC0u;
    // 0x1eefc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eefc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eefc4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eefc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eefc8: 0x84630076  lh          $v1, 0x76($v1)
    ctx->pc = 0x1eefc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 118)));
    // 0x1eefcc: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1EEFCCu;
    {
        const bool branch_taken_0x1eefcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eefcc) {
            ctx->pc = 0x1EF0A8u;
            goto label_1ef0a8;
        }
    }
    ctx->pc = 0x1EEFD4u;
    // 0x1eefd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eefd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eefd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eefd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eefdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1eefdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eefe0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1eefe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1eefe4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eefe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eefe8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1eefe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1eefec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eefecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeff0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1eeff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eeff4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eeff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1eeff8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1eeff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eeffc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1eeffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef000: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ef000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ef004: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef008: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ef008u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ef00c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ef00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef010: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ef010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ef014: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef018: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ef018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ef01c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef020: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef024: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ef024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ef028: 0x240401a4  addiu       $a0, $zero, 0x1A4
    ctx->pc = 0x1ef028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x1ef02c: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1ef02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1ef030: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1ef030u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ef034: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef038: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef03c: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ef03cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ef040: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef044: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1ef044u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ef048: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ef048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ef04c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef04cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef050: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1ef050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ef054: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF054u;
    {
        const bool branch_taken_0x1ef054 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef054) {
            ctx->pc = 0x1EF090u;
            goto label_1ef090;
        }
    }
    ctx->pc = 0x1EF05Cu;
    // 0x1ef05c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef05cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ef060: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ef060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ef064: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef064u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef068: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ef068u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ef06c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF06Cu;
    {
        const bool branch_taken_0x1ef06c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef06c) {
            ctx->pc = 0x1EF090u;
            goto label_1ef090;
        }
    }
    ctx->pc = 0x1EF074u;
    // 0x1ef074: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ef078: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1ef078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ef07c: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef07cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef080: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ef080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef084: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ef084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ef088: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ef088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ef08c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ef08cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1ef090:
    // 0x1ef090: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef094: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ef094u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ef098: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ef098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ef09c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ef09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ef0a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef0a4: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ef0a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_1ef0a8:
    // 0x1ef0a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef0ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef0b0: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x1ef0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ef0b4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1EF0B4u;
    {
        const bool branch_taken_0x1ef0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0b4) {
            ctx->pc = 0x1EF178u;
            goto label_1ef178;
        }
    }
    ctx->pc = 0x1EF0BCu;
    // 0x1ef0bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef0c0: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ef0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ef0c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ef0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ef0c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ef0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ef0cc: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1EF0CCu;
    {
        const bool branch_taken_0x1ef0cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef0cc) {
            ctx->pc = 0x1EF178u;
            goto label_1ef178;
        }
    }
    ctx->pc = 0x1EF0D4u;
    // 0x1ef0d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ef0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef0d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef0dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ef0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ef0e0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1ef0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ef0e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef0e8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ef0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ef0ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef0f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ef0f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef0f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef0f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ef0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef0fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef100: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ef100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ef104: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef108: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ef108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ef10c: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ef10cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ef110: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ef110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef114: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1ef114u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ef118: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ef118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ef11c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef11cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef120: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1ef120u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ef124: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1EF124u;
    {
        const bool branch_taken_0x1ef124 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef124) {
            ctx->pc = 0x1EF160u;
            goto label_1ef160;
        }
    }
    ctx->pc = 0x1EF12Cu;
    // 0x1ef12c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef12cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ef130: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ef130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ef134: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ef134u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ef138: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ef138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ef13c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF13Cu;
    {
        const bool branch_taken_0x1ef13c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef13c) {
            ctx->pc = 0x1EF160u;
            goto label_1ef160;
        }
    }
    ctx->pc = 0x1EF144u;
    // 0x1ef144: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef144u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ef148: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1ef148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ef14c: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ef14cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef150: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ef150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef154: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ef154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ef158: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ef158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ef15c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ef15cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1ef160:
    // 0x1ef160: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef164: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ef164u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ef168: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ef168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ef16c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ef16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ef170: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ef170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ef174: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ef174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_1ef178:
    // 0x1ef178: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1ef178u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef17c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef17cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef180: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef184: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ef184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ef188: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF190u;
}
