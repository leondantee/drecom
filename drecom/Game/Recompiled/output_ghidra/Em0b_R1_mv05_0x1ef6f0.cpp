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

// Function: Em0b_R1_mv05
// Address: 0x1ef6f0 - 0x1eff80
void Em0b_R1_mv05_0x1ef6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv05_0x1ef6f0");
#endif

    switch (ctx->pc) {
        case 0x1ef750u: goto label_1ef750;
        case 0x1ef7d4u: goto label_1ef7d4;
        case 0x1ef7e4u: goto label_1ef7e4;
        case 0x1ef818u: goto label_1ef818;
        case 0x1ef820u: goto label_1ef820;
        case 0x1ef854u: goto label_1ef854;
        case 0x1ef880u: goto label_1ef880;
        case 0x1ef95cu: goto label_1ef95c;
        case 0x1ef9a8u: goto label_1ef9a8;
        case 0x1ef9c4u: goto label_1ef9c4;
        case 0x1ef9dcu: goto label_1ef9dc;
        case 0x1ef9e8u: goto label_1ef9e8;
        case 0x1efaacu: goto label_1efaac;
        case 0x1efb30u: goto label_1efb30;
        case 0x1efb38u: goto label_1efb38;
        case 0x1efbc0u: goto label_1efbc0;
        case 0x1efbd0u: goto label_1efbd0;
        case 0x1efbe0u: goto label_1efbe0;
        case 0x1efc04u: goto label_1efc04;
        case 0x1efc4cu: goto label_1efc4c;
        case 0x1efc70u: goto label_1efc70;
        default: break;
    }

    ctx->pc = 0x1ef6f0u;

    // 0x1ef6f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ef6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ef6f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ef6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ef6f8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1ef6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x1ef6fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef700: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1ef700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ef704: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ef704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef708: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef70c: 0x1083005e  beq         $a0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1EF70Cu;
    {
        const bool branch_taken_0x1ef70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ef70c) {
            ctx->pc = 0x1EF888u;
            goto label_1ef888;
        }
    }
    ctx->pc = 0x1EF714u;
    // 0x1ef714: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF714u;
    {
        const bool branch_taken_0x1ef714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef714) {
            ctx->pc = 0x1EF724u;
            goto label_1ef724;
        }
    }
    ctx->pc = 0x1EF71Cu;
    // 0x1ef71c: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x1EF71Cu;
    {
        const bool branch_taken_0x1ef71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef71c) {
            ctx->pc = 0x1EFC90u;
            goto label_1efc90;
        }
    }
    ctx->pc = 0x1EF724u;
label_1ef724:
    // 0x1ef724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef728: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef72c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1ef72cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef730: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ef730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef734: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef738: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1ef738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1ef73c: 0x24063c1e  addiu       $a2, $zero, 0x3C1E
    ctx->pc = 0x1ef73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15390));
    // 0x1ef740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ef740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef744: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ef744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ef748: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EF748u;
    SET_GPR_U32(ctx, 31, 0x1EF750u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EF748u, 0x1EF750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF750u;
label_1ef750:
    // 0x1ef750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef754: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef758: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef75c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ef75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1ef760: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ef760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ef764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef768: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef76c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef770: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ef774: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ef774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ef778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef77c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef780: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef784: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ef784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ef788: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1ef788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x1ef78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef790: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef794: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef798: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ef798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ef79c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1ef79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1ef7a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef7a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef7ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef7b0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ef7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ef7b4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1ef7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1ef7b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef7c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef7c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef7c8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ef7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ef7cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF7CCu;
    SET_GPR_U32(ctx, 31, 0x1EF7D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF7CCu, 0x1EF7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF7D4u;
label_1ef7d4:
    // 0x1ef7d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef7d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ef7dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF7DCu;
    SET_GPR_U32(ctx, 31, 0x1EF7E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF7DCu, 0x1EF7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF7E4u;
label_1ef7e4:
    // 0x1ef7e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef7e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ef7ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EF7ECu;
    {
        const bool branch_taken_0x1ef7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef7ec) {
            ctx->pc = 0x1EF818u;
            goto label_1ef818;
        }
    }
    ctx->pc = 0x1EF7F4u;
    // 0x1ef7f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ef7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef7f8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1ef7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1ef7fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ef7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ef800: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ef800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef804: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1ef804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1ef808: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1ef808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1ef80c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ef80cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef810: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EF810u;
    SET_GPR_U32(ctx, 31, 0x1EF818u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EF810u, 0x1EF818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF818u;
label_1ef818:
    // 0x1ef818: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF818u;
    SET_GPR_U32(ctx, 31, 0x1EF820u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF818u, 0x1EF820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF820u;
label_1ef820:
    // 0x1ef820: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef824: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ef828: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EF828u;
    {
        const bool branch_taken_0x1ef828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef828) {
            ctx->pc = 0x1EF85Cu;
            goto label_1ef85c;
        }
    }
    ctx->pc = 0x1EF830u;
    // 0x1ef830: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ef830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef834: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1ef834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1ef838: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ef838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ef83c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ef83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef840: 0x24040516  addiu       $a0, $zero, 0x516
    ctx->pc = 0x1ef840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
    // 0x1ef844: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1ef844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1ef848: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ef848u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef84c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EF84Cu;
    SET_GPR_U32(ctx, 31, 0x1EF854u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EF84Cu, 0x1EF854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF854u;
label_1ef854:
    // 0x1ef854: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EF854u;
    {
        const bool branch_taken_0x1ef854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef854) {
            ctx->pc = 0x1EF880u;
            goto label_1ef880;
        }
    }
    ctx->pc = 0x1EF85Cu;
label_1ef85c:
    // 0x1ef85c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1ef85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1ef860: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ef860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ef864: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ef864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef868: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef86c: 0x24040522  addiu       $a0, $zero, 0x522
    ctx->pc = 0x1ef86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1314));
    // 0x1ef870: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1ef870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1ef874: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ef874u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef878: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EF878u;
    SET_GPR_U32(ctx, 31, 0x1EF880u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EF878u, 0x1EF880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF880u;
label_1ef880:
    // 0x1ef880: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef884: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x1ef884u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
label_1ef888:
    // 0x1ef888: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef88c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1ef88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef890: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x1ef890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x1ef894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef898: 0x0  nop
    ctx->pc = 0x1ef898u;
    // NOP
    // 0x1ef89c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ef89cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef8a0: 0x0  nop
    ctx->pc = 0x1ef8a0u;
    // NOP
    // 0x1ef8a4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF8A4u;
    {
        const bool branch_taken_0x1ef8a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef8a4) {
            ctx->pc = 0x1EF8C8u;
            goto label_1ef8c8;
        }
    }
    ctx->pc = 0x1EF8ACu;
    // 0x1ef8ac: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ef8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ef8b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef8b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef8b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef8b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef8bc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ef8c0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF8C0u;
    {
        const bool branch_taken_0x1ef8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef8c0) {
            ctx->pc = 0x1EF918u;
            goto label_1ef918;
        }
    }
    ctx->pc = 0x1EF8C8u;
label_1ef8c8:
    // 0x1ef8c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef8cc: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1ef8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef8d0: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x1ef8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x1ef8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef8d8: 0x0  nop
    ctx->pc = 0x1ef8d8u;
    // NOP
    // 0x1ef8dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ef8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef8e0: 0x0  nop
    ctx->pc = 0x1ef8e0u;
    // NOP
    // 0x1ef8e4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF8E4u;
    {
        const bool branch_taken_0x1ef8e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef8e4) {
            ctx->pc = 0x1EF908u;
            goto label_1ef908;
        }
    }
    ctx->pc = 0x1EF8ECu;
    // 0x1ef8ec: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1ef8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1ef8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef8f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef8f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef8fc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ef900: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF900u;
    {
        const bool branch_taken_0x1ef900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef900) {
            ctx->pc = 0x1EF918u;
            goto label_1ef918;
        }
    }
    ctx->pc = 0x1EF908u;
label_1ef908:
    // 0x1ef908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef90c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef910: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef914: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1ef918:
    // 0x1ef918: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef91c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef920: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ef920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ef924: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ef924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ef928: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF928u;
    {
        const bool branch_taken_0x1ef928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef928) {
            ctx->pc = 0x1EF968u;
            goto label_1ef968;
        }
    }
    ctx->pc = 0x1EF930u;
    // 0x1ef930: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef934: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ef934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef938: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef93c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ef93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef940: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ef940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ef944: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ef944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef948: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ef948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ef94c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ef94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ef950: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ef950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef954: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EF954u;
    SET_GPR_U32(ctx, 31, 0x1EF95Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EF954u, 0x1EF95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF95Cu;
label_1ef95c:
    // 0x1ef95c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ef95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1ef960: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF960u;
    {
        const bool branch_taken_0x1ef960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef960) {
            ctx->pc = 0x1EF9ACu;
            goto label_1ef9ac;
        }
    }
    ctx->pc = 0x1EF968u;
label_1ef968:
    // 0x1ef968: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef96c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef970: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ef970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ef974: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef97c: 0x0  nop
    ctx->pc = 0x1ef97cu;
    // NOP
    // 0x1ef980: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ef980u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef984: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef988: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef98c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ef98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef990: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ef990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ef994: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ef994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ef998: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ef998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ef99c: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ef99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef9a0: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EF9A0u;
    SET_GPR_U32(ctx, 31, 0x1EF9A8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EF9A0u, 0x1EF9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9A8u;
label_1ef9a8:
    // 0x1ef9a8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ef9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_1ef9ac:
    // 0x1ef9ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef9b0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ef9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef9b4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1ef9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef9b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ef9b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ef9bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EF9BCu;
    SET_GPR_U32(ctx, 31, 0x1EF9C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EF9BCu, 0x1EF9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9C4u;
label_1ef9c4:
    // 0x1ef9c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef9c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ef9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ef9cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef9d0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ef9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ef9d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EF9D4u;
    SET_GPR_U32(ctx, 31, 0x1EF9DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EF9D4u, 0x1EF9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9DCu;
label_1ef9dc:
    // 0x1ef9dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef9e0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EF9E0u;
    SET_GPR_U32(ctx, 31, 0x1EF9E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EF9E0u, 0x1EF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF9E8u;
label_1ef9e8:
    // 0x1ef9e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ef9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef9ec: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1ef9ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1ef9f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ef9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ef9f4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1ef9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1ef9f8: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1EF9F8u;
    {
        const bool branch_taken_0x1ef9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef9f8) {
            ctx->pc = 0x1EFC04u;
            goto label_1efc04;
        }
    }
    ctx->pc = 0x1EFA00u;
    // 0x1efa00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efa04: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efa08: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x1efa08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1efa0c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1efa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1efa10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efa10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa14: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efa18: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1efa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1efa1c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1efa1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1efa20: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1efa20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1efa24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efa24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efa2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1efa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1efa30: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1efa30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1efa34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efa38: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1efa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1efa3c: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x1efa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1efa40: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1efa40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1efa44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efa44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa48: 0x0  nop
    ctx->pc = 0x1efa48u;
    // NOP
    // 0x1efa4c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1efa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1efa50: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1efa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1efa54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efa54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa58: 0x0  nop
    ctx->pc = 0x1efa58u;
    // NOP
    // 0x1efa5c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1efa5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1efa60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efa60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa64: 0x0  nop
    ctx->pc = 0x1efa64u;
    // NOP
    // 0x1efa68: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1efa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1efa6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1efa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1efa70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efa70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa74: 0x0  nop
    ctx->pc = 0x1efa74u;
    // NOP
    // 0x1efa78: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1efa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1efa7c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x1efa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x1efa80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efa80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efa84: 0x0  nop
    ctx->pc = 0x1efa84u;
    // NOP
    // 0x1efa88: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1efa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1efa8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efa90: 0xa7a20034  sh          $v0, 0x34($sp)
    ctx->pc = 0x1efa90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x1efa94: 0xa3a00036  sb          $zero, 0x36($sp)
    ctx->pc = 0x1efa94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x1efa98: 0xa3a00037  sb          $zero, 0x37($sp)
    ctx->pc = 0x1efa98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x1efa9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efaa0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1efaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1efaa4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1EFAA4u;
    SET_GPR_U32(ctx, 31, 0x1EFAACu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1EFAA4u, 0x1EFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFAACu;
label_1efaac:
    // 0x1efaac: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1EFAACu;
    {
        const bool branch_taken_0x1efaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efaac) {
            ctx->pc = 0x1EFC04u;
            goto label_1efc04;
        }
    }
    ctx->pc = 0x1EFAB4u;
    // 0x1efab4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efab8: 0x0  nop
    ctx->pc = 0x1efab8u;
    // NOP
    // 0x1efabc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1efabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1efac0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1efac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1efac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efac8: 0x0  nop
    ctx->pc = 0x1efac8u;
    // NOP
    // 0x1efacc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1efaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1efad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efad4: 0x0  nop
    ctx->pc = 0x1efad4u;
    // NOP
    // 0x1efad8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1efad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1efadc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1efadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1efae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efae4: 0x0  nop
    ctx->pc = 0x1efae4u;
    // NOP
    // 0x1efae8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1efae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1efaec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efaf0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1efaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1efaf4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1efaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1efaf8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1efaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1efafc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1efafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1efb00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1efb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1efb04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1efb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1efb08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1efb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1efb0c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1efb0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1efb10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efb14: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1efb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1efb18: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1efb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1efb1c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1efb1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efb20: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1efb20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1efb24: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1efb24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efb28: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1EFB28u;
    SET_GPR_U32(ctx, 31, 0x1EFB30u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1EFB28u, 0x1EFB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB30u;
label_1efb30:
    // 0x1efb30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EFB30u;
    SET_GPR_U32(ctx, 31, 0x1EFB38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EFB30u, 0x1EFB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB38u;
label_1efb38:
    // 0x1efb38: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFB38u;
    {
        const bool branch_taken_0x1efb38 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1efb38) {
            ctx->pc = 0x1EFB54u;
            goto label_1efb54;
        }
    }
    ctx->pc = 0x1EFB40u;
    // 0x1efb40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1efb40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efb44: 0x0  nop
    ctx->pc = 0x1efb44u;
    // NOP
    // 0x1efb48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1efb48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efb4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFB4Cu;
    {
        const bool branch_taken_0x1efb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb4c) {
            ctx->pc = 0x1EFB70u;
            goto label_1efb70;
        }
    }
    ctx->pc = 0x1EFB54u;
label_1efb54:
    // 0x1efb54: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1efb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1efb58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1efb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1efb5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1efb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1efb60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efb60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efb64: 0x0  nop
    ctx->pc = 0x1efb64u;
    // NOP
    // 0x1efb68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1efb68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1efb6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1efb6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1efb70:
    // 0x1efb70: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1efb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efb74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1efb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1efb78: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1efb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1efb7c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efb80: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1efb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1efb84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1efb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1efb88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1efb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1efb8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1efb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1efb90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1efb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1efb94: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1efb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1efb98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1efb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1efb9c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x1efb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x1efba0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efba4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1efba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1efba8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1efba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1efbac: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1efbacu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efbb0: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x1efbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1efbb4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1efbb4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efbb8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1EFBB8u;
    SET_GPR_U32(ctx, 31, 0x1EFBC0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1EFBB8u, 0x1EFBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBC0u;
label_1efbc0:
    // 0x1efbc0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1efbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1efbc4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x1efbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x1efbc8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1EFBC8u;
    SET_GPR_U32(ctx, 31, 0x1EFBD0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1EFBC8u, 0x1EFBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBD0u;
label_1efbd0:
    // 0x1efbd0: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x1efbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x1efbd4: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x1efbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x1efbd8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x1EFBD8u;
    SET_GPR_U32(ctx, 31, 0x1EFBE0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x1EFBD8u, 0x1EFBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFBE0u;
label_1efbe0:
    // 0x1efbe0: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1efbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1efbe4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1efbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1efbe8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1efbe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1efbec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efbf0: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x1efbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x1efbf4: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1efbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1efbf8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1efbf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1efbfc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EFBFCu;
    SET_GPR_U32(ctx, 31, 0x1EFC04u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EFBFCu, 0x1EFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC04u;
label_1efc04:
    // 0x1efc04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1efc08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1efc0c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EFC0Cu;
    {
        const bool branch_taken_0x1efc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efc0c) {
            ctx->pc = 0x1EFC90u;
            goto label_1efc90;
        }
    }
    ctx->pc = 0x1EFC14u;
    // 0x1efc14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1efc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efc18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc1c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1efc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1efc20: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1efc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1efc24: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc28: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1efc28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1efc2c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc30: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1efc30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1efc34: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc38: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1efc38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1efc3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc40: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1efc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1efc44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EFC44u;
    SET_GPR_U32(ctx, 31, 0x1EFC4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EFC44u, 0x1EFC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC4Cu;
label_1efc4c:
    // 0x1efc4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1efc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1efc50: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1efc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1efc54: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1efc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1efc58: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1efc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1efc5c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1efc5cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1efc60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1efc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc64: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1efc64u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1efc68: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EFC68u;
    SET_GPR_U32(ctx, 31, 0x1EFC70u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EFC68u, 0x1EFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC70u;
label_1efc70:
    // 0x1efc70: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1efc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1efc74: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1efc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1efc78: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1efc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1efc7c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1efc7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1efc80: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1efc80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1efc84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efc8c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1efc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_1efc90:
    // 0x1efc90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efc94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efc98: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1efc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efc9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efc9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efca0: 0x0  nop
    ctx->pc = 0x1efca0u;
    // NOP
    // 0x1efca4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1efca4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efca8: 0x0  nop
    ctx->pc = 0x1efca8u;
    // NOP
    // 0x1efcac: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1EFCACu;
    {
        const bool branch_taken_0x1efcac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efcac) {
            ctx->pc = 0x1EFD90u;
            goto label_1efd90;
        }
    }
    ctx->pc = 0x1EFCB4u;
    // 0x1efcb4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efcb8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efcbc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1efcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efcc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efcc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efcc4: 0x0  nop
    ctx->pc = 0x1efcc4u;
    // NOP
    // 0x1efcc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1efcc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efccc: 0x0  nop
    ctx->pc = 0x1efcccu;
    // NOP
    // 0x1efcd0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1EFCD0u;
    {
        const bool branch_taken_0x1efcd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efcd0) {
            ctx->pc = 0x1EFD38u;
            goto label_1efd38;
        }
    }
    ctx->pc = 0x1EFCD8u;
    // 0x1efcd8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efcdc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1efcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efce0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1efce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efce4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1efce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1efce8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1efce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1efcec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efcecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efcf0: 0x0  nop
    ctx->pc = 0x1efcf0u;
    // NOP
    // 0x1efcf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efcf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efcf8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1efcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1efcfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efd04: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1efd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efd08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd0c: 0x0  nop
    ctx->pc = 0x1efd0cu;
    // NOP
    // 0x1efd10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1efd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efd14: 0x0  nop
    ctx->pc = 0x1efd14u;
    // NOP
    // 0x1efd18: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x1EFD18u;
    {
        const bool branch_taken_0x1efd18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efd18) {
            ctx->pc = 0x1EFD90u;
            goto label_1efd90;
        }
    }
    ctx->pc = 0x1EFD20u;
    // 0x1efd20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efd20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd28: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efd2c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1efd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1efd30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EFD30u;
    {
        const bool branch_taken_0x1efd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efd30) {
            ctx->pc = 0x1EFD90u;
            goto label_1efd90;
        }
    }
    ctx->pc = 0x1EFD38u;
label_1efd38:
    // 0x1efd38: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd3c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1efd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efd40: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1efd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd44: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1efd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1efd48: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1efd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1efd4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efd4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd50: 0x0  nop
    ctx->pc = 0x1efd50u;
    // NOP
    // 0x1efd54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efd54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efd58: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1efd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1efd5c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efd64: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1efd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efd68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd6c: 0x0  nop
    ctx->pc = 0x1efd6cu;
    // NOP
    // 0x1efd70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1efd70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efd74: 0x0  nop
    ctx->pc = 0x1efd74u;
    // NOP
    // 0x1efd78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFD78u;
    {
        const bool branch_taken_0x1efd78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efd78) {
            ctx->pc = 0x1EFD90u;
            goto label_1efd90;
        }
    }
    ctx->pc = 0x1EFD80u;
    // 0x1efd80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1efd80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efd84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efd8c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1efd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1efd90:
    // 0x1efd90: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efd94: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1efd94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1efd98: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x1EFD98u;
    {
        const bool branch_taken_0x1efd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efd98) {
            ctx->pc = 0x1EFF70u;
            goto label_1eff70;
        }
    }
    ctx->pc = 0x1EFDA0u;
    // 0x1efda0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efda4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1efda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1efda8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1efda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1efdac: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x1efdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1efdb0: 0x14600049  bnez        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1EFDB0u;
    {
        const bool branch_taken_0x1efdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efdb0) {
            ctx->pc = 0x1EFED8u;
            goto label_1efed8;
        }
    }
    ctx->pc = 0x1EFDB8u;
    // 0x1efdb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efdbc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1efdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efdc0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1efdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1efdc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1efdc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efdc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1efdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1efdcc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1efdccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efdd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efdd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efdd4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1efdd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efdd8: 0x0  nop
    ctx->pc = 0x1efdd8u;
    // NOP
    // 0x1efddc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFDDCu;
    {
        const bool branch_taken_0x1efddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efddc) {
            ctx->pc = 0x1EFE00u;
            goto label_1efe00;
        }
    }
    ctx->pc = 0x1EFDE4u;
    // 0x1efde4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efde8: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1efde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efdec: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1efdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1efdf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efdf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efdf4: 0x0  nop
    ctx->pc = 0x1efdf4u;
    // NOP
    // 0x1efdf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efdf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efdfc: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1efdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1efe00:
    // 0x1efe00: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efe04: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1efe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efe08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1efe08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1efe0c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1efe0cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efe10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1efe10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efe14: 0x0  nop
    ctx->pc = 0x1efe14u;
    // NOP
    // 0x1efe18: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFE18u;
    {
        const bool branch_taken_0x1efe18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efe18) {
            ctx->pc = 0x1EFE3Cu;
            goto label_1efe3c;
        }
    }
    ctx->pc = 0x1EFE20u;
    // 0x1efe20: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efe24: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1efe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efe28: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1efe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1efe2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efe2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe30: 0x0  nop
    ctx->pc = 0x1efe30u;
    // NOP
    // 0x1efe34: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efe34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efe38: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1efe38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1efe3c:
    // 0x1efe3c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efe40: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1efe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efe44: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1efe44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1efe48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1efe48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efe4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1efe4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1efe50: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1efe50u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efe54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efe54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efe58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1efe58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efe5c: 0x0  nop
    ctx->pc = 0x1efe5cu;
    // NOP
    // 0x1efe60: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFE60u;
    {
        const bool branch_taken_0x1efe60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efe60) {
            ctx->pc = 0x1EFE84u;
            goto label_1efe84;
        }
    }
    ctx->pc = 0x1EFE68u;
    // 0x1efe68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efe6c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1efe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efe70: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1efe70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1efe74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efe74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe78: 0x0  nop
    ctx->pc = 0x1efe78u;
    // NOP
    // 0x1efe7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efe7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efe80: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1efe80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1efe84:
    // 0x1efe84: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1efe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efe88: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1efe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efe8c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1efe8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1efe90: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x1efe90u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efe94: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x1efe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x1efe98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efe98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efe9c: 0x0  nop
    ctx->pc = 0x1efe9cu;
    // NOP
    // 0x1efea0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1efea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efea4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1efea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efea8: 0x0  nop
    ctx->pc = 0x1efea8u;
    // NOP
    // 0x1efeac: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x1EFEACu;
    {
        const bool branch_taken_0x1efeac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efeac) {
            ctx->pc = 0x1EFF70u;
            goto label_1eff70;
        }
    }
    ctx->pc = 0x1EFEB4u;
    // 0x1efeb4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efeb8: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1efeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efebc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1efebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1efec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1efec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efec4: 0x0  nop
    ctx->pc = 0x1efec4u;
    // NOP
    // 0x1efec8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efecc: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1efeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1efed0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1EFED0u;
    {
        const bool branch_taken_0x1efed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efed0) {
            ctx->pc = 0x1EFF70u;
            goto label_1eff70;
        }
    }
    ctx->pc = 0x1EFED8u;
label_1efed8:
    // 0x1efed8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1efed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1efedc: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x1efedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efee0: 0x3c0344d4  lui         $v1, 0x44D4
    ctx->pc = 0x1efee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17620 << 16));
    // 0x1efee4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1efee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1efee8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1efee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efeec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1efeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1efef0: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1efef0u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efef4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1efef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1efef8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1efef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efefc: 0x0  nop
    ctx->pc = 0x1efefcu;
    // NOP
    // 0x1eff00: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFF00u;
    {
        const bool branch_taken_0x1eff00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eff00) {
            ctx->pc = 0x1EFF24u;
            goto label_1eff24;
        }
    }
    ctx->pc = 0x1EFF08u;
    // 0x1eff08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1eff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eff0c: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1eff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eff10: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1eff10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1eff14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eff14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff18: 0x0  nop
    ctx->pc = 0x1eff18u;
    // NOP
    // 0x1eff1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eff1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eff20: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1eff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_1eff24:
    // 0x1eff24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1eff24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eff28: 0xc4820124  lwc1        $f2, 0x124($a0)
    ctx->pc = 0x1eff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eff2c: 0x3c0644bb  lui         $a2, 0x44BB
    ctx->pc = 0x1eff2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17595 << 16));
    // 0x1eff30: 0x34c58000  ori         $a1, $a2, 0x8000
    ctx->pc = 0x1eff30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1eff34: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1eff34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eff38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1eff38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1eff3c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1eff3cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eff40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eff44: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1eff44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eff48: 0x0  nop
    ctx->pc = 0x1eff48u;
    // NOP
    // 0x1eff4c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFF4Cu;
    {
        const bool branch_taken_0x1eff4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eff4c) {
            ctx->pc = 0x1EFF70u;
            goto label_1eff70;
        }
    }
    ctx->pc = 0x1EFF54u;
    // 0x1eff54: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1eff54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1eff58: 0xc4e10124  lwc1        $f1, 0x124($a3)
    ctx->pc = 0x1eff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eff5c: 0x3c084100  lui         $t0, 0x4100
    ctx->pc = 0x1eff5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16640 << 16));
    // 0x1eff60: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1eff60u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eff64: 0x0  nop
    ctx->pc = 0x1eff64u;
    // NOP
    // 0x1eff68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eff68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eff6c: 0xe4e00124  swc1        $f0, 0x124($a3)
    ctx->pc = 0x1eff6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 292), bits); }
label_1eff70:
    // 0x1eff70: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1eff70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eff74: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1eff74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1eff78: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFF80u;
}
