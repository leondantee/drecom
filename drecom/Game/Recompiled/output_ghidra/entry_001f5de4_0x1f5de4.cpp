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

// Function: entry_001f5de4
// Address: 0x1f5de4 - 0x1f5f74
void entry_001f5de4_0x1f5de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5de4_0x1f5de4");
#endif

    switch (ctx->pc) {
        case 0x1f5df4u: goto label_1f5df4;
        case 0x1f5e00u: goto label_1f5e00;
        case 0x1f5e48u: goto label_1f5e48;
        case 0x1f5e6cu: goto label_1f5e6c;
        case 0x1f5eb4u: goto label_1f5eb4;
        case 0x1f5ee8u: goto label_1f5ee8;
        case 0x1f5f34u: goto label_1f5f34;
        default: break;
    }

    ctx->pc = 0x1f5de4u;

    // 0x1f5de4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5de8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f5de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5dec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F5DECu;
    SET_GPR_U32(ctx, 31, 0x1F5DF4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F5DECu, 0x1F5DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DF4u;
label_1f5df4:
    // 0x1f5df4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5df8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F5DF8u;
    SET_GPR_U32(ctx, 31, 0x1F5E00u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F5DF8u, 0x1F5E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E00u;
label_1f5e00:
    // 0x1f5e00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e04: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f5e04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f5e08: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x1F5E08u;
    {
        const bool branch_taken_0x1f5e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5e08) {
            ctx->pc = 0x1F5F74u;
            return;
        }
    }
    ctx->pc = 0x1F5E10u;
    // 0x1f5e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5e14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e18: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f5e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f5e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5e20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e24: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f5e24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5e28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e2c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f5e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5e30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e34: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f5e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5e38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f5e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f5e40: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5E40u;
    SET_GPR_U32(ctx, 31, 0x1F5E48u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5E40u, 0x1F5E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E48u;
label_1f5e48:
    // 0x1f5e48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5e4c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f5e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f5e50: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f5e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f5e54: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f5e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5e58: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f5e58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f5e5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e60: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f5e60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5e64: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5E64u;
    SET_GPR_U32(ctx, 31, 0x1F5E6Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5E64u, 0x1F5E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5E6Cu;
label_1f5e6c:
    // 0x1f5e6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f5e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5e70: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f5e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f5e74: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f5e78: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f5e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f5e7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f5e7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f5e80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e84: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5e88: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f5e88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5e8c: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x1f5e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x1f5e90: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x1f5e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x1f5e94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f5e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f5e98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5e9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5ea0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1f5ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f5ea4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1f5ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f5ea8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1f5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1f5eac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1F5EACu;
    SET_GPR_U32(ctx, 31, 0x1F5EB4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1F5EACu, 0x1F5EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EB4u;
label_1f5eb4:
    // 0x1f5eb4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F5EB4u;
    {
        const bool branch_taken_0x1f5eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5eb4) {
            ctx->pc = 0x1F5F74u;
            return;
        }
    }
    ctx->pc = 0x1F5EBCu;
    // 0x1f5ebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5ec0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f5ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5ec4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1f5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1f5ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f5ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5ecc: 0x0  nop
    ctx->pc = 0x1f5eccu;
    // NOP
    // 0x1f5ed0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5ed0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5ed4: 0x0  nop
    ctx->pc = 0x1f5ed4u;
    // NOP
    // 0x1f5ed8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x1F5ED8u;
    {
        const bool branch_taken_0x1f5ed8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f5ed8) {
            ctx->pc = 0x1F5F74u;
            return;
        }
    }
    ctx->pc = 0x1F5EE0u;
    // 0x1f5ee0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5EE0u;
    SET_GPR_U32(ctx, 31, 0x1F5EE8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5EE0u, 0x1F5EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5EE8u;
label_1f5ee8:
    // 0x1f5ee8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f5ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5eec: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1f5eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f5ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5ef4: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F5EF4u;
    {
        const bool branch_taken_0x1f5ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5ef4) {
            ctx->pc = 0x1F5F74u;
            return;
        }
    }
    ctx->pc = 0x1F5EFCu;
    // 0x1f5efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5f00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f04: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f5f04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5f08: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1f5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f5f0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f10: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f5f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f5f14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f18: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f5f18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5f1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f20: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f5f20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5f24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f5f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f5f2c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F5F2Cu;
    SET_GPR_U32(ctx, 31, 0x1F5F34u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F5F2Cu, 0x1F5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5F34u;
label_1f5f34:
    // 0x1f5f34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f5f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f5f38: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1f5f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f5f3c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5F3Cu;
    {
        const bool branch_taken_0x1f5f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5f3c) {
            ctx->pc = 0x1F5F74u;
            return;
        }
    }
    ctx->pc = 0x1F5F44u;
    // 0x1f5f44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5f48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f4c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f5f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f5f50: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1f5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f5f54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f58: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f5f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f5f5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f60: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f5f60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5f64: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f68: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f5f68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5f6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5f70: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1f5f74u;
}
