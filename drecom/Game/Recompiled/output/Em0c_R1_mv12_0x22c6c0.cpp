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

// Function: Em0c_R1_mv12
// Address: 0x22c6c0 - 0x22cabc
void Em0c_R1_mv12_0x22c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0c_R1_mv12_0x22c6c0");
#endif

    switch (ctx->pc) {
        case 0x22c7bcu: goto label_22c7bc;
        case 0x22c7fcu: goto label_22c7fc;
        case 0x22c8fcu: goto label_22c8fc;
        case 0x22c918u: goto label_22c918;
        case 0x22c930u: goto label_22c930;
        case 0x22c93cu: goto label_22c93c;
        case 0x22c96cu: goto label_22c96c;
        case 0x22c974u: goto label_22c974;
        case 0x22c9a4u: goto label_22c9a4;
        default: break;
    }

    ctx->pc = 0x22c6c0u;

    // 0x22c6c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22c6c4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x22c6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x22c6c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22c6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22c6cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22c6d0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x22c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x22c6d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c6d8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x22c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x22c6dc: 0x24713b60  addiu       $s1, $v1, 0x3B60
    ctx->pc = 0x22c6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x22c6e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c6e4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x22c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x22c6e8: 0x24700510  addiu       $s0, $v1, 0x510
    ctx->pc = 0x22c6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x22c6ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c6f0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x22c6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x22c6f4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x22c6f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22c6f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c6fc: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x22C6FCu;
    {
        const bool branch_taken_0x22c6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22c6fc) {
            ctx->pc = 0x22C838u;
            goto label_22c838;
        }
    }
    ctx->pc = 0x22C704u;
    // 0x22c704: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C704u;
    {
        const bool branch_taken_0x22c704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c704) {
            ctx->pc = 0x22C714u;
            goto label_22c714;
        }
    }
    ctx->pc = 0x22C70Cu;
    // 0x22c70c: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x22C70Cu;
    {
        const bool branch_taken_0x22c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c70c) {
            ctx->pc = 0x22C9A4u;
            goto label_22c9a4;
        }
    }
    ctx->pc = 0x22C714u;
label_22c714:
    // 0x22c714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22c714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c718: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c71c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22c71cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22c720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c724: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c728: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c72c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x22c72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x22c730: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x22c730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x22c734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c738: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c73c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c740: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22c744: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22c748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c74c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c754: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22c754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22c758: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22c758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x22c75c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c760: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c764: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c768: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x22c768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x22c76c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x22c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x22c770: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22c774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c778: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c77c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c780: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x22c780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x22c784: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x22c784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x22c788: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22c788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22c78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c790: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c794: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c798: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x22c798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x22c79c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c7a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c7a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c7a8: 0x24063c24  addiu       $a2, $zero, 0x3C24
    ctx->pc = 0x22c7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15396));
    // 0x22c7ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c7b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c7b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c7b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C7B4u;
    SET_GPR_U32(ctx, 31, 0x22C7BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C7B4u, 0x22C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C7BCu;
label_22c7bc:
    // 0x22c7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c7c0: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x22c7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22c7c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c7c8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c7cc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22c7d0: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x22c7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x22c7d4: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x22c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x22c7d8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x22c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x22c7dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c7e0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x22c7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c7e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c7e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c7e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c7ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c7f0: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x22c7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x22c7f4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22C7F4u;
    SET_GPR_U32(ctx, 31, 0x22C7FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22C7F4u, 0x22C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C7FCu;
label_22c7fc:
    // 0x22c7fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22c7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22c800: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x22c800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x22c804: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x22c804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x22c808: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x22c808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22c80c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22c80cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22c810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c814: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c818: 0xa443005e  sh          $v1, 0x5E($v0)
    ctx->pc = 0x22c818u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 3));
    // 0x22c81c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c820: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c824: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x22c824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x22c828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c82c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c830: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c834: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x22c834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_22c838:
    // 0x22c838: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c83c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c840: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x22c840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x22c844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c848: 0x0  nop
    ctx->pc = 0x22c848u;
    // NOP
    // 0x22c84c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c84cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c850: 0x0  nop
    ctx->pc = 0x22c850u;
    // NOP
    // 0x22c854: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22C854u;
    {
        const bool branch_taken_0x22c854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c854) {
            ctx->pc = 0x22C878u;
            goto label_22c878;
        }
    }
    ctx->pc = 0x22C85Cu;
    // 0x22c85c: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x22c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x22c860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c864: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c868: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c86c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22c870: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22C870u;
    {
        const bool branch_taken_0x22c870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c870) {
            ctx->pc = 0x22C8D0u;
            goto label_22c8d0;
        }
    }
    ctx->pc = 0x22C878u;
label_22c878:
    // 0x22c878: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c87c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x22c87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c880: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x22c880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x22c884: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22c884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x22c888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c88c: 0x0  nop
    ctx->pc = 0x22c88cu;
    // NOP
    // 0x22c890: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c894: 0x0  nop
    ctx->pc = 0x22c894u;
    // NOP
    // 0x22c898: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x22C898u;
    {
        const bool branch_taken_0x22c898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c898) {
            ctx->pc = 0x22C8BCu;
            goto label_22c8bc;
        }
    }
    ctx->pc = 0x22C8A0u;
    // 0x22c8a0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x22c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x22c8a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c8a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c8a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c8ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c8b0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22c8b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22C8B4u;
    {
        const bool branch_taken_0x22c8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c8b4) {
            ctx->pc = 0x22C8D0u;
            goto label_22c8d0;
        }
    }
    ctx->pc = 0x22C8BCu;
label_22c8bc:
    // 0x22c8bc: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x22c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
    // 0x22c8c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22c8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c8c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c8c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c8cc: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x22c8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_22c8d0:
    // 0x22c8d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c8d4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x22c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c8d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c8dc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22c8e0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22c8e4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22c8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22c8e8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22c8ec: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22c8f0: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x22c8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22c8f4: 0xc05c848  jal         func_172120
    ctx->pc = 0x22C8F4u;
    SET_GPR_U32(ctx, 31, 0x22C8FCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22C8F4u, 0x22C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8FCu;
label_22c8fc:
    // 0x22c8fc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22c8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22c900: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c904: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22c904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c908: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x22c908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c90c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22c90cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c910: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22C910u;
    SET_GPR_U32(ctx, 31, 0x22C918u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22C910u, 0x22C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C918u;
label_22c918:
    // 0x22c918: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c91c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22c91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22c920: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c924: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x22c928: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x22C928u;
    SET_GPR_U32(ctx, 31, 0x22C930u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x22C928u, 0x22C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C930u;
label_22c930:
    // 0x22c930: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c934: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x22C934u;
    SET_GPR_U32(ctx, 31, 0x22C93Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x22C934u, 0x22C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C93Cu;
label_22c93c:
    // 0x22c93c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c940: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22c940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22c944: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x22C944u;
    {
        const bool branch_taken_0x22c944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c944) {
            ctx->pc = 0x22C9A4u;
            goto label_22c9a4;
        }
    }
    ctx->pc = 0x22C94Cu;
    // 0x22c94c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c950: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c954: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c958: 0x24063c24  addiu       $a2, $zero, 0x3C24
    ctx->pc = 0x22c958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15396));
    // 0x22c95c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c95cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c960: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c964: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C964u;
    SET_GPR_U32(ctx, 31, 0x22C96Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C964u, 0x22C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C96Cu;
label_22c96c:
    // 0x22c96c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22C96Cu;
    SET_GPR_U32(ctx, 31, 0x22C974u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22C96Cu, 0x22C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C974u;
label_22c974:
    // 0x22c974: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22c974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22c978: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x22c978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x22c97c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22C97Cu;
    {
        const bool branch_taken_0x22c97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c97c) {
            ctx->pc = 0x22C9A4u;
            goto label_22c9a4;
        }
    }
    ctx->pc = 0x22C984u;
    // 0x22c984: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x22c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c988: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x22c988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c98c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x22c98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22c990: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x22c990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x22c994: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22c994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22c998: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22c998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22c99c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22C99Cu;
    SET_GPR_U32(ctx, 31, 0x22C9A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22C99Cu, 0x22C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9A4u;
label_22c9a4:
    // 0x22c9a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c9a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c9ac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c9b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c9b4: 0x0  nop
    ctx->pc = 0x22c9b4u;
    // NOP
    // 0x22c9b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x22c9b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c9bc: 0x0  nop
    ctx->pc = 0x22c9bcu;
    // NOP
    // 0x22c9c0: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x22C9C0u;
    {
        const bool branch_taken_0x22c9c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c9c0) {
            ctx->pc = 0x22CAA4u;
            goto label_22caa4;
        }
    }
    ctx->pc = 0x22C9C8u;
    // 0x22c9c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c9cc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c9d0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c9d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c9d8: 0x0  nop
    ctx->pc = 0x22c9d8u;
    // NOP
    // 0x22c9dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c9dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c9e0: 0x0  nop
    ctx->pc = 0x22c9e0u;
    // NOP
    // 0x22c9e4: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x22C9E4u;
    {
        const bool branch_taken_0x22c9e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c9e4) {
            ctx->pc = 0x22CA4Cu;
            goto label_22ca4c;
        }
    }
    ctx->pc = 0x22C9ECu;
    // 0x22c9ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22c9f0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c9f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22c9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c9f8: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22c9fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22c9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22ca00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ca00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca04: 0x0  nop
    ctx->pc = 0x22ca04u;
    // NOP
    // 0x22ca08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22ca08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22ca0c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22ca0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22ca10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ca14: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ca18: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22ca18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ca1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ca1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca20: 0x0  nop
    ctx->pc = 0x22ca20u;
    // NOP
    // 0x22ca24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ca24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ca28: 0x0  nop
    ctx->pc = 0x22ca28u;
    // NOP
    // 0x22ca2c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x22CA2Cu;
    {
        const bool branch_taken_0x22ca2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ca2c) {
            ctx->pc = 0x22CAA4u;
            goto label_22caa4;
        }
    }
    ctx->pc = 0x22CA34u;
    // 0x22ca34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ca34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ca3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ca40: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22ca40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x22ca44: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x22CA44u;
    {
        const bool branch_taken_0x22ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ca44) {
            ctx->pc = 0x22CAA4u;
            goto label_22caa4;
        }
    }
    ctx->pc = 0x22CA4Cu;
label_22ca4c:
    // 0x22ca4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ca4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ca50: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22ca50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ca54: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22ca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ca58: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22ca58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22ca5c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22ca5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22ca60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ca60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca64: 0x0  nop
    ctx->pc = 0x22ca64u;
    // NOP
    // 0x22ca68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ca68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ca6c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22ca6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22ca70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ca74: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ca78: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22ca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ca7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ca7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca80: 0x0  nop
    ctx->pc = 0x22ca80u;
    // NOP
    // 0x22ca84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ca84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ca88: 0x0  nop
    ctx->pc = 0x22ca88u;
    // NOP
    // 0x22ca8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22CA8Cu;
    {
        const bool branch_taken_0x22ca8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ca8c) {
            ctx->pc = 0x22CAA4u;
            goto label_22caa4;
        }
    }
    ctx->pc = 0x22CA94u;
    // 0x22ca94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22ca94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ca98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ca9c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22caa0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22caa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_22caa4:
    // 0x22caa4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x22caa4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22caa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22caa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22caac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22caacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cab0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22cab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22cab4: 0x3e00008  jr          $ra
    ctx->pc = 0x22CAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CABCu;
}
