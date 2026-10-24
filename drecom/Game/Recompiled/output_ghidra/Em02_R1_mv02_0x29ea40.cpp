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

// Function: Em02_R1_mv02
// Address: 0x29ea40 - 0x29ee44
void Em02_R1_mv02_0x29ea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv02_0x29ea40");
#endif

    switch (ctx->pc) {
        case 0x29ead8u: goto label_29ead8;
        case 0x29eafcu: goto label_29eafc;
        case 0x29eb34u: goto label_29eb34;
        case 0x29eb3cu: goto label_29eb3c;
        case 0x29ebd0u: goto label_29ebd0;
        case 0x29ec38u: goto label_29ec38;
        case 0x29ec74u: goto label_29ec74;
        case 0x29ec90u: goto label_29ec90;
        case 0x29eca8u: goto label_29eca8;
        case 0x29ecb8u: goto label_29ecb8;
        case 0x29ecc4u: goto label_29ecc4;
        case 0x29ecd0u: goto label_29ecd0;
        case 0x29ed20u: goto label_29ed20;
        default: break;
    }

    ctx->pc = 0x29ea40u;

    // 0x29ea40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29ea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29ea44: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x29ea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x29ea48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ea48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ea4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ea50: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x29ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x29ea54: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ea58: 0x8c7102d0  lw          $s1, 0x2D0($v1)
    ctx->pc = 0x29ea58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x29ea5c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29ea60: 0x24636b48  addiu       $v1, $v1, 0x6B48
    ctx->pc = 0x29ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27464));
    // 0x29ea64: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x29ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x29ea68: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29ea68u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396B48u));
    // 0x29ea6c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x29ea6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x29ea70: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29ea74: 0x24636b50  addiu       $v1, $v1, 0x6B50
    ctx->pc = 0x29ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27472));
    // 0x29ea78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29ea7c: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x29ea7cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x396B50u));
    // 0x29ea80: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x29ea80u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x29ea84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ea84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ea88: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x29ea88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x29ea8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x29ea8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29ea90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ea94: 0x1083005c  beq         $a0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x29EA94u;
    {
        const bool branch_taken_0x29ea94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29ea94) {
            ctx->pc = 0x29EC08u;
            goto label_29ec08;
        }
    }
    ctx->pc = 0x29EA9Cu;
    // 0x29ea9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29EA9Cu;
    {
        const bool branch_taken_0x29ea9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ea9c) {
            ctx->pc = 0x29EAACu;
            goto label_29eaac;
        }
    }
    ctx->pc = 0x29EAA4u;
    // 0x29eaa4: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x29EAA4u;
    {
        const bool branch_taken_0x29eaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eaa4) {
            ctx->pc = 0x29EE2Cu;
            goto label_29ee2c;
        }
    }
    ctx->pc = 0x29EAACu;
label_29eaac:
    // 0x29eaac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29eab0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eab4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x29eab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x29eab8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eabc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29eac0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x29eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x29eac4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x29eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x29eac8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29EAC8u;
    {
        const bool branch_taken_0x29eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eac8) {
            ctx->pc = 0x29EAF4u;
            goto label_29eaf4;
        }
    }
    ctx->pc = 0x29EAD0u;
    // 0x29ead0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EAD0u;
    SET_GPR_U32(ctx, 31, 0x29EAD8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EAD0u, 0x29EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EAD8u;
label_29ead8:
    // 0x29ead8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ead8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29eadc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29eadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29eae0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29eae4: 0x90420038  lbu         $v0, 0x38($v0)
    ctx->pc = 0x29eae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x29eae8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29eae8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29eaec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29EAECu;
    {
        const bool branch_taken_0x29eaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eaec) {
            ctx->pc = 0x29EB10u;
            goto label_29eb10;
        }
    }
    ctx->pc = 0x29EAF4u;
label_29eaf4:
    // 0x29eaf4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EAF4u;
    SET_GPR_U32(ctx, 31, 0x29EAFCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EAF4u, 0x29EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EAFCu;
label_29eafc:
    // 0x29eafc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29eafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29eb00: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x29eb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x29eb04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29eb08: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x29eb08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x29eb0c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29eb0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29eb10:
    // 0x29eb10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eb14: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x29eb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29eb18: 0x34460800  ori         $a2, $v0, 0x800
    ctx->pc = 0x29eb18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x29eb1c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29eb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eb20: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x29eb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x29eb24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29eb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29eb28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29eb28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29eb2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x29EB2Cu;
    SET_GPR_U32(ctx, 31, 0x29EB34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x29EB2Cu, 0x29EB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB34u;
label_29eb34:
    // 0x29eb34: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EB34u;
    SET_GPR_U32(ctx, 31, 0x29EB3Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EB34u, 0x29EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB3Cu;
label_29eb3c:
    // 0x29eb3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29eb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29eb40: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x29eb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x29eb44: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x29eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x29eb48: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29eb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29eb4c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29eb4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29eb50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eb54: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29eb54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29eb58: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x29eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x29eb5c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29eb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29eb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29eb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eb64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eb68: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29eb6c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29eb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x29eb70: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29eb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29eb74: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x29eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29eb78: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EB78u;
    {
        const bool branch_taken_0x29eb78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29eb78) {
            ctx->pc = 0x29EB98u;
            goto label_29eb98;
        }
    }
    ctx->pc = 0x29EB80u;
    // 0x29eb80: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x29eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x29eb84: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29eb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29eb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29eb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29eb8c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eb90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29eb94: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29eb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_29eb98:
    // 0x29eb98: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29eb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29eb9c: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x29eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x29eba0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29EBA0u;
    {
        const bool branch_taken_0x29eba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29eba0) {
            ctx->pc = 0x29EBC0u;
            goto label_29ebc0;
        }
    }
    ctx->pc = 0x29EBA8u;
    // 0x29eba8: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x29eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x29ebac: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x29ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x29ebb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ebb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ebb4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ebb8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29ebbc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29ebbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_29ebc0:
    // 0x29ebc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ebc4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x29ebc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x29ebc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EBC8u;
    SET_GPR_U32(ctx, 31, 0x29EBD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EBC8u, 0x29EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBD0u;
label_29ebd0:
    // 0x29ebd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ebd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29ebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29ebd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29EBD8u;
    {
        const bool branch_taken_0x29ebd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ebd8) {
            ctx->pc = 0x29EC08u;
            goto label_29ec08;
        }
    }
    ctx->pc = 0x29EBE0u;
    // 0x29ebe0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ebe4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29ebe8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29ebec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ebecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ebf0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x29ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ebf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29ebf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ebf8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x29ebf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x29ebfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ec00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec04: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x29ec04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_29ec08:
    // 0x29ec08: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec0c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x29ec0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x29ec10: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29EC10u;
    {
        const bool branch_taken_0x29ec10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ec10) {
            ctx->pc = 0x29EC48u;
            goto label_29ec48;
        }
    }
    ctx->pc = 0x29EC18u;
    // 0x29ec18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29ec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29ec20: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x29ec20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ec24: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec28: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x29ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ec2c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x29ec2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29ec30: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29EC30u;
    SET_GPR_U32(ctx, 31, 0x29EC38u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29EC30u, 0x29EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC38u;
label_29ec38:
    // 0x29ec38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec3c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29ec3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x29ec40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29EC40u;
    {
        const bool branch_taken_0x29ec40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ec40) {
            ctx->pc = 0x29EC98u;
            goto label_29ec98;
        }
    }
    ctx->pc = 0x29EC48u;
label_29ec48:
    // 0x29ec48: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29ec48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec50: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x29ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x29ec54: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29ec58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29ec58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29ec5c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29ec60: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x29ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29ec64: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29ec68: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29ec68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29ec6c: 0xc05c848  jal         func_172120
    ctx->pc = 0x29EC6Cu;
    SET_GPR_U32(ctx, 31, 0x29EC74u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x29EC6Cu, 0x29EC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC74u;
label_29ec74:
    // 0x29ec74: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x29ec74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x29ec78: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec7c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x29ec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ec80: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x29ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ec84: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x29ec84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x29ec88: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x29EC88u;
    SET_GPR_U32(ctx, 31, 0x29EC90u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x29EC88u, 0x29EC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC90u;
label_29ec90:
    // 0x29ec90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec94: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x29ec94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_29ec98:
    // 0x29ec98: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29ec98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29ec9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29eca0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x29ECA0u;
    SET_GPR_U32(ctx, 31, 0x29ECA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x29ECA0u, 0x29ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECA8u;
label_29eca8:
    // 0x29eca8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29eca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x29ecacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29ecb0: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x29ECB0u;
    SET_GPR_U32(ctx, 31, 0x29ECB8u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x29ECB0u, 0x29ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECB8u;
label_29ecb8:
    // 0x29ecb8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecbc: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x29ECBCu;
    SET_GPR_U32(ctx, 31, 0x29ECC4u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x29ECBCu, 0x29ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECC4u;
label_29ecc4:
    // 0x29ecc4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x29ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecc8: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x29ECC8u;
    SET_GPR_U32(ctx, 31, 0x29ECD0u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x29ECC8u, 0x29ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECD0u;
label_29ecd0:
    // 0x29ecd0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x29ecd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecd4: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x29ecd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x29ecd8: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x29ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x29ecdc: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x29ecdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29ece0: 0x14800052  bnez        $a0, . + 4 + (0x52 << 2)
    ctx->pc = 0x29ECE0u;
    {
        const bool branch_taken_0x29ece0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29ece0) {
            ctx->pc = 0x29EE2Cu;
            goto label_29ee2c;
        }
    }
    ctx->pc = 0x29ECE8u;
    // 0x29ece8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ecec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecf0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x29ecf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ecf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ecf8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ecfc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x29ecfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x29ed00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed04: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x29ed04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ed08: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed0c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x29ed0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ed10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed14: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x29ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x29ed18: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29ED18u;
    SET_GPR_U32(ctx, 31, 0x29ED20u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29ED18u, 0x29ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED20u;
label_29ed20:
    // 0x29ed20: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29ed20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ed24: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29ed24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29ed28: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29ED28u;
    {
        const bool branch_taken_0x29ed28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ed28) {
            ctx->pc = 0x29ED60u;
            goto label_29ed60;
        }
    }
    ctx->pc = 0x29ED30u;
    // 0x29ed30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ed34: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29ed38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ed3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29ed40: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29ed44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ed48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29ed4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ed50: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29ed54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ed58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29ed60:
    // 0x29ed60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29ed68: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29ed6c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29ed6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29ed70: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x29ED70u;
    {
        const bool branch_taken_0x29ed70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ed70) {
            ctx->pc = 0x29EDD4u;
            goto label_29edd4;
        }
    }
    ctx->pc = 0x29ED78u;
    // 0x29ed78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ed7c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29ed80: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29ed84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ed84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ed88: 0x0  nop
    ctx->pc = 0x29ed88u;
    // NOP
    // 0x29ed8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29ed8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ed90: 0x0  nop
    ctx->pc = 0x29ed90u;
    // NOP
    // 0x29ed94: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x29ED94u;
    {
        const bool branch_taken_0x29ed94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29ed94) {
            ctx->pc = 0x29EE2Cu;
            goto label_29ee2c;
        }
    }
    ctx->pc = 0x29ED9Cu;
    // 0x29ed9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29eda0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29eda4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29eda4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29eda8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29edac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29edacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29edb0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29edb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29edb4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29edb8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29edb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29edbc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29edc0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29edc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29edc4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29edc8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29edcc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29EDCCu;
    {
        const bool branch_taken_0x29edcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29edcc) {
            ctx->pc = 0x29EE2Cu;
            goto label_29ee2c;
        }
    }
    ctx->pc = 0x29EDD4u;
label_29edd4:
    // 0x29edd4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29edd8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29edd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29eddc: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x29eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x29ede0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29ede0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29ede4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29ede4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ede8: 0x0  nop
    ctx->pc = 0x29ede8u;
    // NOP
    // 0x29edec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29edecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29edf0: 0x0  nop
    ctx->pc = 0x29edf0u;
    // NOP
    // 0x29edf4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29EDF4u;
    {
        const bool branch_taken_0x29edf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29edf4) {
            ctx->pc = 0x29EE2Cu;
            goto label_29ee2c;
        }
    }
    ctx->pc = 0x29EDFCu;
    // 0x29edfc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29edfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ee00: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ee04: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29ee04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ee08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29ee08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ee0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ee10: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29ee10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ee14: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ee18: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29ee18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ee1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ee20: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29ee20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ee24: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ee28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29ee2c:
    // 0x29ee2c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29ee2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ee30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ee30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ee34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ee34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ee38: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29ee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ee3c: 0x3e00008  jr          $ra
    ctx->pc = 0x29EE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EE44u;
}
