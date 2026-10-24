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

// Function: Em0b_R1_mv07
// Address: 0x1f0df0 - 0x1f1a1c
void Em0b_R1_mv07_0x1f0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv07_0x1f0df0");
#endif

    switch (ctx->pc) {
        case 0x1f0e4cu: goto label_1f0e4c;
        case 0x1f0eacu: goto label_1f0eac;
        case 0x1f0f90u: goto label_1f0f90;
        case 0x1f0fecu: goto label_1f0fec;
        case 0x1f1008u: goto label_1f1008;
        case 0x1f10d0u: goto label_1f10d0;
        case 0x1f10e4u: goto label_1f10e4;
        case 0x1f111cu: goto label_1f111c;
        case 0x1f1128u: goto label_1f1128;
        case 0x1f1160u: goto label_1f1160;
        case 0x1f1190u: goto label_1f1190;
        case 0x1f1334u: goto label_1f1334;
        case 0x1f1380u: goto label_1f1380;
        case 0x1f139cu: goto label_1f139c;
        case 0x1f13b4u: goto label_1f13b4;
        case 0x1f13c0u: goto label_1f13c0;
        case 0x1f14a4u: goto label_1f14a4;
        case 0x1f1544u: goto label_1f1544;
        case 0x1f1550u: goto label_1f1550;
        case 0x1f15e0u: goto label_1f15e0;
        case 0x1f15f4u: goto label_1f15f4;
        case 0x1f1608u: goto label_1f1608;
        case 0x1f162cu: goto label_1f162c;
        case 0x1f16e4u: goto label_1f16e4;
        case 0x1f1708u: goto label_1f1708;
        case 0x1f1720u: goto label_1f1720;
        case 0x1f1734u: goto label_1f1734;
        default: break;
    }

    ctx->pc = 0x1f0df0u;

    // 0x1f0df0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f0df4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1f0df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1f0df8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f0df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f0dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f0dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f0e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f0e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f0e04: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x1f0e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
    // 0x1f0e08: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0e0c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0e10: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x1f0e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1f0e14: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F0E14u;
    {
        const bool branch_taken_0x1f0e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e14) {
            ctx->pc = 0x1F0E68u;
            goto label_1f0e68;
        }
    }
    ctx->pc = 0x1F0E1Cu;
    // 0x1f0e1c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0e20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0e24: 0x8c710060  lw          $s1, 0x60($v1)
    ctx->pc = 0x1f0e24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x1f0e28: 0x26231330  addiu       $v1, $s1, 0x1330
    ctx->pc = 0x1f0e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x1f0e2c: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x1f0e2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1f0e30: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f0e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f0e34: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f0e34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f0e38: 0x2881000a  slti        $at, $a0, 0xA
    ctx->pc = 0x1f0e38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f0e3c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0E3Cu;
    {
        const bool branch_taken_0x1f0e3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e3c) {
            ctx->pc = 0x1F0E68u;
            goto label_1f0e68;
        }
    }
    ctx->pc = 0x1F0E44u;
    // 0x1f0e44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0E44u;
    SET_GPR_U32(ctx, 31, 0x1F0E4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0E44u, 0x1F0E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0E4Cu;
label_1f0e4c:
    // 0x1f0e4c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f0e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0e50: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x1f0e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1f0e54: 0x24a7000a  addiu       $a3, $a1, 0xA
    ctx->pc = 0x1f0e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x1f0e58: 0x7243c  dsll32      $a0, $a3, 16
    ctx->pc = 0x1f0e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1f0e5c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f0e5cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f0e60: 0x26231330  addiu       $v1, $s1, 0x1330
    ctx->pc = 0x1f0e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x1f0e64: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f0e64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_1f0e68:
    // 0x1f0e68: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0e6c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0e70: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x1f0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1f0e74: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F0E74u;
    {
        const bool branch_taken_0x1f0e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e74) {
            ctx->pc = 0x1F0EC8u;
            goto label_1f0ec8;
        }
    }
    ctx->pc = 0x1F0E7Cu;
    // 0x1f0e7c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0e80: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0e84: 0x8c710064  lw          $s1, 0x64($v1)
    ctx->pc = 0x1f0e84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1f0e88: 0x26231330  addiu       $v1, $s1, 0x1330
    ctx->pc = 0x1f0e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x1f0e8c: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x1f0e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1f0e90: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f0e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f0e94: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f0e94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f0e98: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1f0e98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f0e9c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1F0E9Cu;
    {
        const bool branch_taken_0x1f0e9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0e9c) {
            ctx->pc = 0x1F0EC8u;
            goto label_1f0ec8;
        }
    }
    ctx->pc = 0x1F0EA4u;
    // 0x1f0ea4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0EA4u;
    SET_GPR_U32(ctx, 31, 0x1F0EACu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0EA4u, 0x1F0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EACu;
label_1f0eac:
    // 0x1f0eac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f0eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0eb0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f0eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f0eb4: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x1f0eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1f0eb8: 0x53c3c  dsll32      $a3, $a1, 16
    ctx->pc = 0x1f0eb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1f0ebc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1f0ebcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1f0ec0: 0x26231330  addiu       $v1, $s1, 0x1330
    ctx->pc = 0x1f0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4912));
    // 0x1f0ec4: 0xa467005c  sh          $a3, 0x5C($v1)
    ctx->pc = 0x1f0ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 7));
label_1f0ec8:
    // 0x1f0ec8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0ecc: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x1f0eccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1f0ed0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1f0ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1f0ed4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f0ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ed8: 0x106400be  beq         $v1, $a0, . + 4 + (0xBE << 2)
    ctx->pc = 0x1F0ED8u;
    {
        const bool branch_taken_0x1f0ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f0ed8) {
            ctx->pc = 0x1F11D4u;
            goto label_1f11d4;
        }
    }
    ctx->pc = 0x1F0EE0u;
    // 0x1f0ee0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0EE0u;
    {
        const bool branch_taken_0x1f0ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ee0) {
            ctx->pc = 0x1F0EF0u;
            goto label_1f0ef0;
        }
    }
    ctx->pc = 0x1F0EE8u;
    // 0x1f0ee8: 0x10000229  b           . + 4 + (0x229 << 2)
    ctx->pc = 0x1F0EE8u;
    {
        const bool branch_taken_0x1f0ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ee8) {
            ctx->pc = 0x1F1790u;
            goto label_1f1790;
        }
    }
    ctx->pc = 0x1F0EF0u;
label_1f0ef0:
    // 0x1f0ef0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f0ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ef4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0ef8: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x1f0ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f0efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f00: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f04: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f0f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f0f08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f0c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0f14: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f0f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f0f18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f0f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f1c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f20: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f0f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0f24: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1f0f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1f0f28: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f0f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f30: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f34: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0f38: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1f0f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1f0f3c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1f0f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1f0f40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f44: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f48: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f0f4c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f0f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1f0f50: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f54: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1f0f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0f58: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1f0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x1f0f5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f60: 0x0  nop
    ctx->pc = 0x1f0f60u;
    // NOP
    // 0x1f0f64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f0f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0f68: 0x0  nop
    ctx->pc = 0x1f0f68u;
    // NOP
    // 0x1f0f6c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0F6Cu;
    {
        const bool branch_taken_0x1f0f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0f6c) {
            ctx->pc = 0x1F0F88u;
            goto label_1f0f88;
        }
    }
    ctx->pc = 0x1F0F74u;
    // 0x1f0f74: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1f0f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x1f0f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0f7c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0f80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0f84: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f0f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1f0f88:
    // 0x1f0f88: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0F88u;
    SET_GPR_U32(ctx, 31, 0x1F0F90u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0F88u, 0x1F0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F90u;
label_1f0f90:
    // 0x1f0f90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f0f90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f0f94: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1f0f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1f0f98: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x1f0f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f0f9c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1f0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f0fa0: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f0fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f0fa4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f0fa4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f0fa8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0fac: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1f0facu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f0fb0: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x1f0fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
    // 0x1f0fb4: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x1f0fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x1f0fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f0fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0fbc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0fc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f0fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0fc4: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f0fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1f0fc8: 0x3c033b3e  lui         $v1, 0x3B3E
    ctx->pc = 0x1f0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15166 << 16));
    // 0x1f0fcc: 0x3462a2f1  ori         $v0, $v1, 0xA2F1
    ctx->pc = 0x1f0fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41713);
    // 0x1f0fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f0fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0fd4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f0fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f0fd8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f0fdc: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f0fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f0fe0: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1f0fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f0fe4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F0FE4u;
    SET_GPR_U32(ctx, 31, 0x1F0FECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F0FE4u, 0x1F0FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0FECu;
label_1f0fec:
    // 0x1f0fec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f0fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f0ff0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f0ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f0ff4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F0FF4u;
    {
        const bool branch_taken_0x1f0ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ff4) {
            ctx->pc = 0x1F1000u;
            goto label_1f1000;
        }
    }
    ctx->pc = 0x1F0FFCu;
    // 0x1f0ffc: 0x24100021  addiu       $s0, $zero, 0x21
    ctx->pc = 0x1f0ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1f1000:
    // 0x1f1000: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1000u;
    SET_GPR_U32(ctx, 31, 0x1F1008u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1000u, 0x1F1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1008u;
label_1f1008:
    // 0x1f1008: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f1008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f100c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1f100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f1010: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1010u;
    {
        const bool branch_taken_0x1f1010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1010) {
            ctx->pc = 0x1F1034u;
            goto label_1f1034;
        }
    }
    ctx->pc = 0x1F1018u;
    // 0x1f1018: 0x24100025  addiu       $s0, $zero, 0x25
    ctx->pc = 0x1f1018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1f101c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1f101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x1f1020: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1f1020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x1f1024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1028: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x1f1028u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f102c: 0x26421330  addiu       $v0, $s2, 0x1330
    ctx->pc = 0x1f102cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4912));
    // 0x1f1030: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f1030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1f1034:
    // 0x1f1034: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f1034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f1038: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f1038u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f103c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f1040: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x1f1040u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f1044: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F1044u;
    {
        const bool branch_taken_0x1f1044 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1044) {
            ctx->pc = 0x1F10B0u;
            goto label_1f10b0;
        }
    }
    ctx->pc = 0x1F104Cu;
    // 0x1f104c: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1f104cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f1050: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1054: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1058: 0x9063007a  lbu         $v1, 0x7A($v1)
    ctx->pc = 0x1f1058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x1f105c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f105cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f1060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1064: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1064u;
    {
        const bool branch_taken_0x1f1064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1064) {
            ctx->pc = 0x1F1088u;
            goto label_1f1088;
        }
    }
    ctx->pc = 0x1F106Cu;
    // 0x1f106c: 0x24100025  addiu       $s0, $zero, 0x25
    ctx->pc = 0x1f106cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1f1070: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x1f1070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
    // 0x1f1074: 0x3464b8c2  ori         $a0, $v1, 0xB8C2
    ctx->pc = 0x1f1074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x1f1078: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f1078u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f107c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1080: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1084: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f1084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_1f1088:
    // 0x1f1088: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1f1088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1f108c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f108cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1090: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1f1090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1094: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x1f1094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1f1098: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1f1098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1f109c: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1f109cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
    // 0x1f10a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f10a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f10a4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f10a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f10ac: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1f10acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1f10b0:
    // 0x1f10b0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f10b4: 0x36063c00  ori         $a2, $s0, 0x3C00
    ctx->pc = 0x1f10b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)15360);
    // 0x1f10b8: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f10b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f10bc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1f10bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1f10c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f10c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f10c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f10c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f10c8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F10C8u;
    SET_GPR_U32(ctx, 31, 0x1F10D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F10C8u, 0x1F10D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10D0u;
label_1f10d0:
    // 0x1f10d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f10d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f10d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f10d8: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x1f10d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f10dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F10DCu;
    SET_GPR_U32(ctx, 31, 0x1F10E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F10DCu, 0x1F10E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10E4u;
label_1f10e4:
    // 0x1f10e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f10e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f10e8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f10e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f10ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f10ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f10f0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F10F0u;
    {
        const bool branch_taken_0x1f10f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f10f0) {
            ctx->pc = 0x1F1120u;
            goto label_1f1120;
        }
    }
    ctx->pc = 0x1F10F8u;
    // 0x1f10f8: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1f10f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f10fc: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f10fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f1100: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f1100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f1104: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1108: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1f1108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1f110c: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x1f110cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1f1110: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1110u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1114: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1114u;
    SET_GPR_U32(ctx, 31, 0x1F111Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1114u, 0x1F111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F111Cu;
label_1f111c:
    // 0x1f111c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f111cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f1120:
    // 0x1f1120: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1120u;
    SET_GPR_U32(ctx, 31, 0x1F1128u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1120u, 0x1F1128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1128u;
label_1f1128:
    // 0x1f1128: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1128u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f112c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f112cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f1130: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f1130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f1134: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1134u;
    {
        const bool branch_taken_0x1f1134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1134) {
            ctx->pc = 0x1F116Cu;
            goto label_1f116c;
        }
    }
    ctx->pc = 0x1F113Cu;
    // 0x1f113c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f113cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f1140: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f1140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f1144: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1148: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f114c: 0x24040512  addiu       $a0, $zero, 0x512
    ctx->pc = 0x1f114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x1f1150: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f1150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f1154: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1158: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1158u;
    SET_GPR_U32(ctx, 31, 0x1F1160u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1158u, 0x1F1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1160u;
label_1f1160:
    // 0x1f1160: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1160u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1164: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F1164u;
    {
        const bool branch_taken_0x1f1164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1164) {
            ctx->pc = 0x1F1194u;
            goto label_1f1194;
        }
    }
    ctx->pc = 0x1F116Cu;
label_1f116c:
    // 0x1f116c: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x1f116cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x1f1170: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1f1170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1f1174: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1f1174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1178: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f117c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x1f117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x1f1180: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f1180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f1184: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1184u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1188: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1188u;
    SET_GPR_U32(ctx, 31, 0x1F1190u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1188u, 0x1F1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1190u;
label_1f1190:
    // 0x1f1190: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1190u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1f1194:
    // 0x1f1194: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1f1194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1f1198: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1f1198u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f119c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f11a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f11a4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f11a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1f11a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f11a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f11ac: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f11acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f11b0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1f11b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1f11b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f11b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f11b8: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1f11b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1f11bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f11c0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f11c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f11c4: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f11c8: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1f11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1f11cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1f11ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f11d0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f11d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_1f11d4:
    // 0x1f11d4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f11d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f11d8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f11d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f11dc: 0x3c0444af  lui         $a0, 0x44AF
    ctx->pc = 0x1f11dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17583 << 16));
    // 0x1f11e0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f11e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f11e4: 0x0  nop
    ctx->pc = 0x1f11e4u;
    // NOP
    // 0x1f11e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f11e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f11ec: 0x0  nop
    ctx->pc = 0x1f11ecu;
    // NOP
    // 0x1f11f0: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1F11F0u;
    {
        const bool branch_taken_0x1f11f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f11f0) {
            ctx->pc = 0x1F1240u;
            goto label_1f1240;
        }
    }
    ctx->pc = 0x1F11F8u;
    // 0x1f11f8: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1f11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x1f11fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f11fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1200: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1204: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1208: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f1208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f120c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f120cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f1210: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f1210u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f1214: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1f1214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1f1218: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1f1218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f121c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F121Cu;
    {
        const bool branch_taken_0x1f121c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f121c) {
            ctx->pc = 0x1F1290u;
            goto label_1f1290;
        }
    }
    ctx->pc = 0x1F1224u;
    // 0x1f1224: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1f1224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x1f1228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f122c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1234: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f1234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f1238: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F1238u;
    {
        const bool branch_taken_0x1f1238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1238) {
            ctx->pc = 0x1F1290u;
            goto label_1f1290;
        }
    }
    ctx->pc = 0x1F1240u;
label_1f1240:
    // 0x1f1240: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1244: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1f1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1248: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x1f1248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x1f124c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f124cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1250: 0x0  nop
    ctx->pc = 0x1f1250u;
    // NOP
    // 0x1f1254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f1254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1258: 0x0  nop
    ctx->pc = 0x1f1258u;
    // NOP
    // 0x1f125c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F125Cu;
    {
        const bool branch_taken_0x1f125c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f125c) {
            ctx->pc = 0x1F1280u;
            goto label_1f1280;
        }
    }
    ctx->pc = 0x1F1264u;
    // 0x1f1264: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x1f1264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x1f1268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f126c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1270: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1274: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f1274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f1278: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1278u;
    {
        const bool branch_taken_0x1f1278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1278) {
            ctx->pc = 0x1F1290u;
            goto label_1f1290;
        }
    }
    ctx->pc = 0x1F1280u;
label_1f1280:
    // 0x1f1280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1284: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1288: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f128c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f128cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1f1290:
    // 0x1f1290: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1294: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1f1294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1298: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1f1298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1f129c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f129cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f12a0: 0x0  nop
    ctx->pc = 0x1f12a0u;
    // NOP
    // 0x1f12a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f12a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f12a8: 0x0  nop
    ctx->pc = 0x1f12a8u;
    // NOP
    // 0x1f12ac: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x1F12ACu;
    {
        const bool branch_taken_0x1f12ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f12ac) {
            ctx->pc = 0x1F12E0u;
            goto label_1f12e0;
        }
    }
    ctx->pc = 0x1F12B4u;
    // 0x1f12b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f12b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f12b8: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f12b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f12bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1f12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1f12c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f12c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f12c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F12C4u;
    {
        const bool branch_taken_0x1f12c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f12c4) {
            ctx->pc = 0x1F12E0u;
            goto label_1f12e0;
        }
    }
    ctx->pc = 0x1F12CCu;
    // 0x1f12cc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1f12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1f12d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f12d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f12d4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f12d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f12dc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f12dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1f12e0:
    // 0x1f12e0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f12e4: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x1f12e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x1f12e8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1F12E8u;
    {
        const bool branch_taken_0x1f12e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f12e8) {
            ctx->pc = 0x1F13A4u;
            goto label_1f13a4;
        }
    }
    ctx->pc = 0x1F12F0u;
    // 0x1f12f0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f12f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f12f8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1f12f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f12fc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1f12fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1f1300: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1300u;
    {
        const bool branch_taken_0x1f1300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1300) {
            ctx->pc = 0x1F1340u;
            goto label_1f1340;
        }
    }
    ctx->pc = 0x1F1308u;
    // 0x1f1308: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f130c: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1f130cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1310: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1314: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1318: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f1318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f131c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f1320: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f1320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f1324: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f1324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f1328: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f1328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f132c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F132Cu;
    SET_GPR_U32(ctx, 31, 0x1F1334u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F132Cu, 0x1F1334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1334u;
label_1f1334:
    // 0x1f1334: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f1334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1f1338: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F1338u;
    {
        const bool branch_taken_0x1f1338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1338) {
            ctx->pc = 0x1F1384u;
            goto label_1f1384;
        }
    }
    ctx->pc = 0x1F1340u;
label_1f1340:
    // 0x1f1340: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1344: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1348: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f1348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f134c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1f134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1f1350: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f1350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f1354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1358: 0x0  nop
    ctx->pc = 0x1f1358u;
    // NOP
    // 0x1f135c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f135cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1360: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1364: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1368: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f1368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f136c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1f136cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1f1370: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1f1370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1f1374: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1f1374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f1378: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F1378u;
    SET_GPR_U32(ctx, 31, 0x1F1380u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F1378u, 0x1F1380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1380u;
label_1f1380:
    // 0x1f1380: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f1380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1f1384:
    // 0x1f1384: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1388: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f1388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f138c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1f138cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1390: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f1390u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1394: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F1394u;
    SET_GPR_U32(ctx, 31, 0x1F139Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F1394u, 0x1F139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F139Cu;
label_1f139c:
    // 0x1f139c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13a0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f13a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1f13a4:
    // 0x1f13a4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13a8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f13a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f13ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F13ACu;
    SET_GPR_U32(ctx, 31, 0x1F13B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F13ACu, 0x1F13B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13B4u;
label_1f13b4:
    // 0x1f13b4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13b8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F13B8u;
    SET_GPR_U32(ctx, 31, 0x1F13C0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F13B8u, 0x1F13C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F13C0u;
label_1f13c0:
    // 0x1f13c0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13c4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1f13c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1f13c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f13c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f13cc: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1f13ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1f13d0: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x1F13D0u;
    {
        const bool branch_taken_0x1f13d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f13d0) {
            ctx->pc = 0x1F163Cu;
            goto label_1f163c;
        }
    }
    ctx->pc = 0x1F13D8u;
    // 0x1f13d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f13dc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13e0: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1f13e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f13e4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f13e8: 0x944209ea  lhu         $v0, 0x9EA($v0)
    ctx->pc = 0x1f13e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2538)));
    // 0x1f13ec: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f13ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f13f0: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1f13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1f13f4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F13F4u;
    {
        const bool branch_taken_0x1f13f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f13f4) {
            ctx->pc = 0x1F1430u;
            goto label_1f1430;
        }
    }
    ctx->pc = 0x1F13FCu;
    // 0x1f13fc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1400: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f1400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f1404: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f1404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1408: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1f1408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x1f140c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f140cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1410: 0x0  nop
    ctx->pc = 0x1f1410u;
    // NOP
    // 0x1f1414: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1418: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f1418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f141c: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1f141cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1f1420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1424: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1428: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f142c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f142cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1f1430:
    // 0x1f1430: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1434: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f1434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f1438: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x1f1438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f143c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f143cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1f1440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1444: 0x0  nop
    ctx->pc = 0x1f1444u;
    // NOP
    // 0x1f1448: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1f1448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f144c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1f144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1f1450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1454: 0x0  nop
    ctx->pc = 0x1f1454u;
    // NOP
    // 0x1f1458: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1f1458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1f145c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f145cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1460: 0x0  nop
    ctx->pc = 0x1f1460u;
    // NOP
    // 0x1f1464: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1f1464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f1468: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f1468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f146c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f146cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1470: 0x0  nop
    ctx->pc = 0x1f1470u;
    // NOP
    // 0x1f1474: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f1474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1f1478: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f1478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f147c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f147cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1480: 0x0  nop
    ctx->pc = 0x1f1480u;
    // NOP
    // 0x1f1484: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1f1484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f1488: 0xa7a00064  sh          $zero, 0x64($sp)
    ctx->pc = 0x1f1488u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f148c: 0xa3a00066  sb          $zero, 0x66($sp)
    ctx->pc = 0x1f148cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1490: 0xa3a00067  sb          $zero, 0x67($sp)
    ctx->pc = 0x1f1490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1494: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1498: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f1498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f149c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F149Cu;
    SET_GPR_U32(ctx, 31, 0x1F14A4u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F149Cu, 0x1F14A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14A4u;
label_1f14a4:
    // 0x1f14a4: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1F14A4u;
    {
        const bool branch_taken_0x1f14a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f14a4) {
            ctx->pc = 0x1F163Cu;
            goto label_1f163c;
        }
    }
    ctx->pc = 0x1F14ACu;
    // 0x1f14ac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f14acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f14b0: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1f14b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f14b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f14b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f14b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f14b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f14bc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1f14bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1f14c0: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1F14C0u;
    {
        const bool branch_taken_0x1f14c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f14c0) {
            ctx->pc = 0x1F163Cu;
            goto label_1f163c;
        }
    }
    ctx->pc = 0x1F14C8u;
    // 0x1f14c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f14c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f14cc: 0x0  nop
    ctx->pc = 0x1f14ccu;
    // NOP
    // 0x1f14d0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1f14d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f14d4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1f14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1f14d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f14d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f14dc: 0x0  nop
    ctx->pc = 0x1f14dcu;
    // NOP
    // 0x1f14e0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f14e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f14e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f14e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f14e8: 0x0  nop
    ctx->pc = 0x1f14e8u;
    // NOP
    // 0x1f14ec: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1f14ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f14f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f14f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f14f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f14f8: 0x0  nop
    ctx->pc = 0x1f14f8u;
    // NOP
    // 0x1f14fc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f14fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1f1500: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1504: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1f1504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f1508: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1f1508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1f150c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f1510: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f1510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f1514: 0x3471ffff  ori         $s1, $v1, 0xFFFF
    ctx->pc = 0x1f1514u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f1518: 0x911824  and         $v1, $a0, $s1
    ctx->pc = 0x1f1518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x1f151c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f151cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f1520: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x1f1520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1f1524: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1528: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1f1528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f152c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1f152cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f1530: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1530u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1534: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x1f1534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f1538: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f1538u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f153c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F153Cu;
    SET_GPR_U32(ctx, 31, 0x1F1544u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F153Cu, 0x1F1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1544u;
label_1f1544:
    // 0x1f1544: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f1544u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1548: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1548u;
    SET_GPR_U32(ctx, 31, 0x1F1550u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1548u, 0x1F1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1550u;
label_1f1550:
    // 0x1f1550: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1550u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1554: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1554u;
    {
        const bool branch_taken_0x1f1554 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1f1554) {
            ctx->pc = 0x1F1570u;
            goto label_1f1570;
        }
    }
    ctx->pc = 0x1F155Cu;
    // 0x1f155c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f155cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1560: 0x0  nop
    ctx->pc = 0x1f1560u;
    // NOP
    // 0x1f1564: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f1564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f1568: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1568u;
    {
        const bool branch_taken_0x1f1568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1568) {
            ctx->pc = 0x1F158Cu;
            goto label_1f158c;
        }
    }
    ctx->pc = 0x1F1570u;
label_1f1570:
    // 0x1f1570: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1f1570u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1f1574: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f1574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f1578: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1f1578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f157c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f157cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1580: 0x0  nop
    ctx->pc = 0x1f1580u;
    // NOP
    // 0x1f1584: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f1584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f1588: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1f1588u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1f158c:
    // 0x1f158c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1f158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f1590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1594: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f1594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f1598: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f159c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1f159cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f15a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1f15a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1f15a4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f15a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f15a8: 0x38c38  dsll        $s1, $v1, 16
    ctx->pc = 0x1f15a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << 16);
    // 0x1f15ac: 0x3623ffff  ori         $v1, $s1, 0xFFFF
    ctx->pc = 0x1f15acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1f15b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f15b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f15b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f15b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f15b8: 0x34620006  ori         $v0, $v1, 0x6
    ctx->pc = 0x1f15b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1f15bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f15c0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1f15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f15c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f15c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f15c8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1f15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f15cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f15ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f15d0: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x1f15d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f15d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f15d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f15d8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F15D8u;
    SET_GPR_U32(ctx, 31, 0x1F15E0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F15D8u, 0x1F15E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15E0u;
label_1f15e0:
    // 0x1f15e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f15e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f15e4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1f15e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1f15e8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1f15e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1f15ec: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F15ECu;
    SET_GPR_U32(ctx, 31, 0x1F15F4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F15ECu, 0x1F15F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F15F4u;
label_1f15f4:
    // 0x1f15f4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f15f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f15f8: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1f15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1f15fc: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1f15fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1f1600: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1F1600u;
    SET_GPR_U32(ctx, 31, 0x1F1608u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1F1600u, 0x1F1608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1608u;
label_1f1608:
    // 0x1f1608: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f160c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f160cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f1610: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f1610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f1614: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f1614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f1618: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1f1618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1f161c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f161cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f1620: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1620u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1624: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F1624u;
    SET_GPR_U32(ctx, 31, 0x1F162Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F1624u, 0x1F162Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F162Cu;
label_1f162c:
    // 0x1f162c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f162cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1630: 0x8483127e  lh          $v1, 0x127E($a0)
    ctx->pc = 0x1f1630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4734)));
    // 0x1f1634: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f1634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f1638: 0xa483127e  sh          $v1, 0x127E($a0)
    ctx->pc = 0x1f1638u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4734), (uint16_t)GPR_U32(ctx, 3));
label_1f163c:
    // 0x1f163c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f1640: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f1640u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f1644: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1f1644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1f1648: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f1648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f164c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F164Cu;
    {
        const bool branch_taken_0x1f164c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f164c) {
            ctx->pc = 0x1F169Cu;
            goto label_1f169c;
        }
    }
    ctx->pc = 0x1F1654u;
    // 0x1f1654: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1658: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1f1658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1f165c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f1660: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1f1660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1f1664: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F1664u;
    {
        const bool branch_taken_0x1f1664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1664) {
            ctx->pc = 0x1F169Cu;
            goto label_1f169c;
        }
    }
    ctx->pc = 0x1F166Cu;
    // 0x1f166c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f166cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1670: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1674: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f1674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f1678: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1f1678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f167c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f167cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1680: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f1680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f1684: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1688: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x1f1688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f168c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f168cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1690: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f1690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1694: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1698: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f1698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1f169c:
    // 0x1f169c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16a0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f16a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f16a4: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1F16A4u;
    {
        const bool branch_taken_0x1f16a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f16a4) {
            ctx->pc = 0x1F1790u;
            goto label_1f1790;
        }
    }
    ctx->pc = 0x1F16ACu;
    // 0x1f16ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f16acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f16b0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16b4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f16b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f16b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f16bc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16c0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f16c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f16c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16c8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f16c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f16cc: 0x8fb00098  lw          $s0, 0x98($sp)
    ctx->pc = 0x1f16ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16d0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1f16d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f16d4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f16d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f16dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F16DCu;
    SET_GPR_U32(ctx, 31, 0x1F16E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F16DCu, 0x1F16E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F16E4u;
label_1f16e4:
    // 0x1f16e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f16e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f16e8: 0x3050001f  andi        $s0, $v0, 0x1F
    ctx->pc = 0x1f16e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f16ec: 0x260200b4  addiu       $v0, $s0, 0xB4
    ctx->pc = 0x1f16ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x1f16f0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f16f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f16f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f16f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f16f8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f16fc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f16fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f1700: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1700u;
    SET_GPR_U32(ctx, 31, 0x1F1708u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1700u, 0x1F1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1708u;
label_1f1708:
    // 0x1f1708: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1f1708u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f170c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1f170cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1f1710: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f1710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f1714: 0x245200a0  addiu       $s2, $v0, 0xA0
    ctx->pc = 0x1f1714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1f1718: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1718u;
    SET_GPR_U32(ctx, 31, 0x1F1720u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1718u, 0x1F1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1720u;
label_1f1720:
    // 0x1f1720: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f1720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f1724: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x1f1724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f1728: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1f1728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1f172c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F172Cu;
    SET_GPR_U32(ctx, 31, 0x1F1734u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F172Cu, 0x1F1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1734u;
label_1f1734:
    // 0x1f1734: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1f1734u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1738: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1f1738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1f173c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f173cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f1740: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f1740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f1744: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f1744u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f1748: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f1748u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f174c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1750: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x1f1750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1754: 0xa604005c  sh          $a0, 0x5C($s0)
    ctx->pc = 0x1f1754u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f1758: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f1758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f175c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f175cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f1760: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f1760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1f1764: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x1f1764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x1f1768: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f1768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f176c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f176cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f1770: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1f1770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1f1774: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1778: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f1778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f177c: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f177cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f1780: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x1f1780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x1f1784: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f1784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f1788: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f1788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f178c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f178cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_1f1790:
    // 0x1f1790: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1794: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x1f1794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1798: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1f1798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f179c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f179cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f17a0: 0x0  nop
    ctx->pc = 0x1f17a0u;
    // NOP
    // 0x1f17a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1f17a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f17a8: 0x0  nop
    ctx->pc = 0x1f17a8u;
    // NOP
    // 0x1f17ac: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1F17ACu;
    {
        const bool branch_taken_0x1f17ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f17ac) {
            ctx->pc = 0x1F1890u;
            goto label_1f1890;
        }
    }
    ctx->pc = 0x1F17B4u;
    // 0x1f17b4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f17b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f17b8: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1f17b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f17bc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1f17bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f17c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f17c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f17c4: 0x0  nop
    ctx->pc = 0x1f17c4u;
    // NOP
    // 0x1f17c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f17c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f17cc: 0x0  nop
    ctx->pc = 0x1f17ccu;
    // NOP
    // 0x1f17d0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1F17D0u;
    {
        const bool branch_taken_0x1f17d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f17d0) {
            ctx->pc = 0x1F1838u;
            goto label_1f1838;
        }
    }
    ctx->pc = 0x1F17D8u;
    // 0x1f17d8: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x1f17d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f17dc: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x1f17dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x1f17e0: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x1f17e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f17e4: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x1f17e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x1f17e8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1f17e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1f17ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f17ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f17f0: 0x0  nop
    ctx->pc = 0x1f17f0u;
    // NOP
    // 0x1f17f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f17f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f17f8: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x1f17f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x1f17fc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f17fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1800: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1804: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f1804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f180c: 0x0  nop
    ctx->pc = 0x1f180cu;
    // NOP
    // 0x1f1810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f1810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1814: 0x0  nop
    ctx->pc = 0x1f1814u;
    // NOP
    // 0x1f1818: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1F1818u;
    {
        const bool branch_taken_0x1f1818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1818) {
            ctx->pc = 0x1F1890u;
            goto label_1f1890;
        }
    }
    ctx->pc = 0x1F1820u;
    // 0x1f1820: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1824: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1828: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f1828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f182c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1f182cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1f1830: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F1830u;
    {
        const bool branch_taken_0x1f1830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1830) {
            ctx->pc = 0x1F1890u;
            goto label_1f1890;
        }
    }
    ctx->pc = 0x1F1838u;
label_1f1838:
    // 0x1f1838: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f183c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f183cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1840: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f1840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1844: 0x3c053d49  lui         $a1, 0x3D49
    ctx->pc = 0x1f1844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15689 << 16));
    // 0x1f1848: 0x34a40fdb  ori         $a0, $a1, 0xFDB
    ctx->pc = 0x1f1848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1f184c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f184cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1850: 0x0  nop
    ctx->pc = 0x1f1850u;
    // NOP
    // 0x1f1854: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1858: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f1858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f185c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1860: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1864: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f1864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1868: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f186c: 0x0  nop
    ctx->pc = 0x1f186cu;
    // NOP
    // 0x1f1870: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f1870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1874: 0x0  nop
    ctx->pc = 0x1f1874u;
    // NOP
    // 0x1f1878: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1878u;
    {
        const bool branch_taken_0x1f1878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1878) {
            ctx->pc = 0x1F1890u;
            goto label_1f1890;
        }
    }
    ctx->pc = 0x1F1880u;
    // 0x1f1880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1884: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1888: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f188c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f188cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1f1890:
    // 0x1f1890: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1894: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1f1894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f1898: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1F1898u;
    {
        const bool branch_taken_0x1f1898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1898) {
            ctx->pc = 0x1F1A00u;
            goto label_1f1a00;
        }
    }
    ctx->pc = 0x1F18A0u;
    // 0x1f18a0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f18a4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f18a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f18a8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1f18a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f18ac: 0x30a31000  andi        $v1, $a1, 0x1000
    ctx->pc = 0x1f18acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x1f18b0: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F18B0u;
    {
        const bool branch_taken_0x1f18b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f18b0) {
            ctx->pc = 0x1F1960u;
            goto label_1f1960;
        }
    }
    ctx->pc = 0x1F18B8u;
    // 0x1f18b8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f18bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f18c0: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f18c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f18c4: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1f18c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x1f18c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f18c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f18cc: 0x0  nop
    ctx->pc = 0x1f18ccu;
    // NOP
    // 0x1f18d0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1f18d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f18d4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f18d8: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x1f18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f18dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f18dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f18e0: 0x0  nop
    ctx->pc = 0x1f18e0u;
    // NOP
    // 0x1f18e4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F18E4u;
    {
        const bool branch_taken_0x1f18e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f18e4) {
            ctx->pc = 0x1F1908u;
            goto label_1f1908;
        }
    }
    ctx->pc = 0x1F18ECu;
    // 0x1f18ec: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1f18ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f18f0: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1f18f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f18f4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1f18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1f18f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f18f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f18fc: 0x0  nop
    ctx->pc = 0x1f18fcu;
    // NOP
    // 0x1f1900: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f1900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f1904: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1f1904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
label_1f1908:
    // 0x1f1908: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f190c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1910: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f1910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1914: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x1f1914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x1f1918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f191c: 0x0  nop
    ctx->pc = 0x1f191cu;
    // NOP
    // 0x1f1920: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1f1920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f1924: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1928: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f1928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f192c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f192cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1930: 0x0  nop
    ctx->pc = 0x1f1930u;
    // NOP
    // 0x1f1934: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x1F1934u;
    {
        const bool branch_taken_0x1f1934 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1934) {
            ctx->pc = 0x1F1A00u;
            goto label_1f1a00;
        }
    }
    ctx->pc = 0x1F193Cu;
    // 0x1f193c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f193cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1940: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1f1940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1944: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1f1944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x1f1948: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f1948u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f194c: 0x0  nop
    ctx->pc = 0x1f194cu;
    // NOP
    // 0x1f1950: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1954: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f1954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f1958: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1F1958u;
    {
        const bool branch_taken_0x1f1958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1958) {
            ctx->pc = 0x1F1A00u;
            goto label_1f1a00;
        }
    }
    ctx->pc = 0x1F1960u;
label_1f1960:
    // 0x1f1960: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1964: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f1964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f1968: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f1968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f196c: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x1f196cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
    // 0x1f1970: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1974: 0x0  nop
    ctx->pc = 0x1f1974u;
    // NOP
    // 0x1f1978: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1f1978u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f197c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f197cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1980: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f1980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1984: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f1984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1988: 0x0  nop
    ctx->pc = 0x1f1988u;
    // NOP
    // 0x1f198c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F198Cu;
    {
        const bool branch_taken_0x1f198c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f198c) {
            ctx->pc = 0x1F19B0u;
            goto label_1f19b0;
        }
    }
    ctx->pc = 0x1F1994u;
    // 0x1f1994: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1998: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f1998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f199c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1f199cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1f19a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f19a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f19a4: 0x0  nop
    ctx->pc = 0x1f19a4u;
    // NOP
    // 0x1f19a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f19a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f19ac: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f19acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1f19b0:
    // 0x1f19b0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f19b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f19b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f19b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f19b8: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f19b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f19bc: 0x3c0444af  lui         $a0, 0x44AF
    ctx->pc = 0x1f19bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17583 << 16));
    // 0x1f19c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f19c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f19c4: 0x0  nop
    ctx->pc = 0x1f19c4u;
    // NOP
    // 0x1f19c8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1f19c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f19cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f19ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f19d0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1f19d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f19d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f19d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f19d8: 0x0  nop
    ctx->pc = 0x1f19d8u;
    // NOP
    // 0x1f19dc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F19DCu;
    {
        const bool branch_taken_0x1f19dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f19dc) {
            ctx->pc = 0x1F1A00u;
            goto label_1f1a00;
        }
    }
    ctx->pc = 0x1F19E4u;
    // 0x1f19e4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f19e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f19e8: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1f19e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f19ec: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1f19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1f19f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f19f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f19f4: 0x0  nop
    ctx->pc = 0x1f19f4u;
    // NOP
    // 0x1f19f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f19f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f19fc: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1f19fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1f1a00:
    // 0x1f1a00: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1f1a00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f1a04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f1a04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f1a08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f1a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f1a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1a10: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1f1a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1f1a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1A1Cu;
}
