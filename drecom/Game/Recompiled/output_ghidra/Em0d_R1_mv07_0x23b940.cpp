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

// Function: Em0d_R1_mv07
// Address: 0x23b940 - 0x23bfe0
void Em0d_R1_mv07_0x23b940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv07_0x23b940");
#endif

    switch (ctx->pc) {
        case 0x23b9a4u: goto label_23b9a4;
        case 0x23b9d8u: goto label_23b9d8;
        case 0x23ba68u: goto label_23ba68;
        case 0x23bba8u: goto label_23bba8;
        case 0x23bbc4u: goto label_23bbc4;
        case 0x23bbdcu: goto label_23bbdc;
        case 0x23bbe8u: goto label_23bbe8;
        case 0x23bc74u: goto label_23bc74;
        case 0x23bcf8u: goto label_23bcf8;
        case 0x23bd00u: goto label_23bd00;
        case 0x23bd88u: goto label_23bd88;
        case 0x23bd98u: goto label_23bd98;
        case 0x23bda8u: goto label_23bda8;
        case 0x23bdccu: goto label_23bdcc;
        case 0x23be14u: goto label_23be14;
        case 0x23be38u: goto label_23be38;
        case 0x23be4cu: goto label_23be4c;
        case 0x23be60u: goto label_23be60;
        default: break;
    }

    ctx->pc = 0x23b940u;

    // 0x23b940: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x23b940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23b944: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x23b944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x23b948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23b94c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23b950: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x23b950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x23b954: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23b954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b958: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x23b958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23b95c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x23b95cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23b960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b964: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x23B964u;
    {
        const bool branch_taken_0x23b964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23b964) {
            ctx->pc = 0x23BAB4u;
            goto label_23bab4;
        }
    }
    ctx->pc = 0x23B96Cu;
    // 0x23b96c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B96Cu;
    {
        const bool branch_taken_0x23b96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b96c) {
            ctx->pc = 0x23B97Cu;
            goto label_23b97c;
        }
    }
    ctx->pc = 0x23B974u;
    // 0x23b974: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x23B974u;
    {
        const bool branch_taken_0x23b974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b974) {
            ctx->pc = 0x23BE80u;
            goto label_23be80;
        }
    }
    ctx->pc = 0x23B97Cu;
label_23b97c:
    // 0x23b97c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b980: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x23b980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23b984: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23b988: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x23b988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x23b98c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b990: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23b990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b994: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x23b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x23b998: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x23b998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23b99c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B99Cu;
    SET_GPR_U32(ctx, 31, 0x23B9A4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B99Cu, 0x23B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9A4u;
label_23b9a4:
    // 0x23b9a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23b9a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23b9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23b9ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B9ACu;
    {
        const bool branch_taken_0x23b9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b9ac) {
            ctx->pc = 0x23B9B8u;
            goto label_23b9b8;
        }
    }
    ctx->pc = 0x23B9B4u;
    // 0x23b9b4: 0x24100021  addiu       $s0, $zero, 0x21
    ctx->pc = 0x23b9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_23b9b8:
    // 0x23b9b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b9bc: 0x36061e00  ori         $a2, $s0, 0x1E00
    ctx->pc = 0x23b9bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)7680);
    // 0x23b9c0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b9c4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23b9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23b9c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23b9c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b9cc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23b9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23b9d0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23B9D0u;
    SET_GPR_U32(ctx, 31, 0x23B9D8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23B9D0u, 0x23B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B9D8u;
label_23b9d8:
    // 0x23b9d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b9d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b9dc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b9e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b9e4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23b9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23b9e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b9e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b9ec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23b9f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b9f4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23b9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23b9f8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23b9fc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23b9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23ba00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ba00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ba04: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba08: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ba0c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23ba0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23ba10: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23ba14: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23ba18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ba18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ba1c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ba24: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23ba24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23ba28: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba2c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x23ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ba30: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x23ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x23ba34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ba34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ba38: 0x0  nop
    ctx->pc = 0x23ba38u;
    // NOP
    // 0x23ba3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ba3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ba40: 0x0  nop
    ctx->pc = 0x23ba40u;
    // NOP
    // 0x23ba44: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23BA44u;
    {
        const bool branch_taken_0x23ba44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ba44) {
            ctx->pc = 0x23BA60u;
            goto label_23ba60;
        }
    }
    ctx->pc = 0x23BA4Cu;
    // 0x23ba4c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x23ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x23ba50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ba50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ba54: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ba5c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23ba5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_23ba60:
    // 0x23ba60: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BA60u;
    SET_GPR_U32(ctx, 31, 0x23BA68u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BA60u, 0x23BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BA68u;
label_23ba68:
    // 0x23ba68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23ba68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23ba6c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23ba6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23ba70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ba74: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23ba74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23ba78: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23ba78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23ba7c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba80: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x23ba80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x23ba84: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x23ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x23ba88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23ba88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23ba8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23ba8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ba90: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23ba94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ba98: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23ba98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23ba9c: 0x3c023ac9  lui         $v0, 0x3AC9
    ctx->pc = 0x23ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15049 << 16));
    // 0x23baa0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23baa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23baa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23baa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23baa8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23baac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23baacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bab0: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23bab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_23bab4:
    // 0x23bab4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bab8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23bab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23babc: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x23babcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x23bac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bac4: 0x0  nop
    ctx->pc = 0x23bac4u;
    // NOP
    // 0x23bac8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23bac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bacc: 0x0  nop
    ctx->pc = 0x23baccu;
    // NOP
    // 0x23bad0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23BAD0u;
    {
        const bool branch_taken_0x23bad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bad0) {
            ctx->pc = 0x23BAF4u;
            goto label_23baf4;
        }
    }
    ctx->pc = 0x23BAD8u;
    // 0x23bad8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x23bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x23badc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23badcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bae0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bae4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bae8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23bae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23baec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x23BAECu;
    {
        const bool branch_taken_0x23baec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23baec) {
            ctx->pc = 0x23BB44u;
            goto label_23bb44;
        }
    }
    ctx->pc = 0x23BAF4u;
label_23baf4:
    // 0x23baf4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23baf8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bafc: 0x3c024461  lui         $v0, 0x4461
    ctx->pc = 0x23bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17505 << 16));
    // 0x23bb00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bb04: 0x0  nop
    ctx->pc = 0x23bb04u;
    // NOP
    // 0x23bb08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23bb08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bb0c: 0x0  nop
    ctx->pc = 0x23bb0cu;
    // NOP
    // 0x23bb10: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23BB10u;
    {
        const bool branch_taken_0x23bb10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bb10) {
            ctx->pc = 0x23BB34u;
            goto label_23bb34;
        }
    }
    ctx->pc = 0x23BB18u;
    // 0x23bb18: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x23bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x23bb1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bb20: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bb28: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23bb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23bb2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23BB2Cu;
    {
        const bool branch_taken_0x23bb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bb2c) {
            ctx->pc = 0x23BB44u;
            goto label_23bb44;
        }
    }
    ctx->pc = 0x23BB34u;
label_23bb34:
    // 0x23bb34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bb38: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23bb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bb40: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23bb40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_23bb44:
    // 0x23bb44: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb48: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x23bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bb4c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x23bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x23bb50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bb50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bb54: 0x0  nop
    ctx->pc = 0x23bb54u;
    // NOP
    // 0x23bb58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23bb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bb5c: 0x0  nop
    ctx->pc = 0x23bb5cu;
    // NOP
    // 0x23bb60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23BB60u;
    {
        const bool branch_taken_0x23bb60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bb60) {
            ctx->pc = 0x23BB7Cu;
            goto label_23bb7c;
        }
    }
    ctx->pc = 0x23BB68u;
    // 0x23bb68: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23bb6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bb6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bb70: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb74: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bb78: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23bb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_23bb7c:
    // 0x23bb7c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb80: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x23bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb84: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bb88: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23bb8c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23bb90: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23bb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23bb94: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23bb98: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23bb9c: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x23bb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23bba0: 0xc05c848  jal         func_172120
    ctx->pc = 0x23BBA0u;
    SET_GPR_U32(ctx, 31, 0x23BBA8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23BBA0u, 0x23BBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBA8u;
label_23bba8:
    // 0x23bba8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x23bba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x23bbac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bbb0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23bbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bbb4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x23bbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23bbb8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23bbb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23bbbc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23BBBCu;
    SET_GPR_U32(ctx, 31, 0x23BBC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23BBBCu, 0x23BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBC4u;
label_23bbc4:
    // 0x23bbc4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bbc8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23bbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23bbcc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23bbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bbd0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23bbd4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23BBD4u;
    SET_GPR_U32(ctx, 31, 0x23BBDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23BBD4u, 0x23BBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBDCu;
label_23bbdc:
    // 0x23bbdc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bbe0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23BBE0u;
    SET_GPR_U32(ctx, 31, 0x23BBE8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23BBE0u, 0x23BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BBE8u;
label_23bbe8:
    // 0x23bbe8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bbec: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x23bbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x23bbf0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23bbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23bbf4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23bbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23bbf8: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x23BBF8u;
    {
        const bool branch_taken_0x23bbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bbf8) {
            ctx->pc = 0x23BDCCu;
            goto label_23bdcc;
        }
    }
    ctx->pc = 0x23BC00u;
    // 0x23bc00: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bc04: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23bc08: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23bc0c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x23bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x23bc10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bc10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc14: 0x0  nop
    ctx->pc = 0x23bc14u;
    // NOP
    // 0x23bc18: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x23bc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23bc1c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23bc20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc24: 0x0  nop
    ctx->pc = 0x23bc24u;
    // NOP
    // 0x23bc28: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x23bc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x23bc2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bc2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc30: 0x0  nop
    ctx->pc = 0x23bc30u;
    // NOP
    // 0x23bc34: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x23bc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x23bc38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23bc3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bc3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc40: 0x0  nop
    ctx->pc = 0x23bc40u;
    // NOP
    // 0x23bc44: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x23bc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x23bc48: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23bc4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bc4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc50: 0x0  nop
    ctx->pc = 0x23bc50u;
    // NOP
    // 0x23bc54: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23bc54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x23bc58: 0xa7a00054  sh          $zero, 0x54($sp)
    ctx->pc = 0x23bc58u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x23bc5c: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x23bc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x23bc60: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x23bc60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x23bc64: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23bc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bc68: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x23bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23bc6c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23BC6Cu;
    SET_GPR_U32(ctx, 31, 0x23BC74u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23BC6Cu, 0x23BC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BC74u;
label_23bc74:
    // 0x23bc74: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23BC74u;
    {
        const bool branch_taken_0x23bc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bc74) {
            ctx->pc = 0x23BDCCu;
            goto label_23bdcc;
        }
    }
    ctx->pc = 0x23BC7Cu;
    // 0x23bc7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bc7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc80: 0x0  nop
    ctx->pc = 0x23bc80u;
    // NOP
    // 0x23bc84: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x23bc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23bc88: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23bc8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bc8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc90: 0x0  nop
    ctx->pc = 0x23bc90u;
    // NOP
    // 0x23bc94: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23bc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23bc98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bc98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bc9c: 0x0  nop
    ctx->pc = 0x23bc9cu;
    // NOP
    // 0x23bca0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x23bca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23bca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23bca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bcac: 0x0  nop
    ctx->pc = 0x23bcacu;
    // NOP
    // 0x23bcb0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x23bcb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x23bcb4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bcb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23bcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23bcbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23bcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23bcc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23bcc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23bcc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23bcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23bccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23bcd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23bcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23bcd4: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23bcd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23bcd8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bcdc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23bce0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23bce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23bce4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23bce4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23bce8: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23bce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23bcec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23bcecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23bcf0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23BCF0u;
    SET_GPR_U32(ctx, 31, 0x23BCF8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23BCF0u, 0x23BCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BCF8u;
label_23bcf8:
    // 0x23bcf8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BCF8u;
    SET_GPR_U32(ctx, 31, 0x23BD00u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BCF8u, 0x23BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD00u;
label_23bd00:
    // 0x23bd00: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23BD00u;
    {
        const bool branch_taken_0x23bd00 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23bd00) {
            ctx->pc = 0x23BD1Cu;
            goto label_23bd1c;
        }
    }
    ctx->pc = 0x23BD08u;
    // 0x23bd08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23bd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bd0c: 0x0  nop
    ctx->pc = 0x23bd0cu;
    // NOP
    // 0x23bd10: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23bd10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23bd14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23BD14u;
    {
        const bool branch_taken_0x23bd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd14) {
            ctx->pc = 0x23BD38u;
            goto label_23bd38;
        }
    }
    ctx->pc = 0x23BD1Cu;
label_23bd1c:
    // 0x23bd1c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x23bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x23bd20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23bd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23bd24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23bd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23bd28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23bd28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bd2c: 0x0  nop
    ctx->pc = 0x23bd2cu;
    // NOP
    // 0x23bd30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23bd30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23bd34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x23bd34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23bd38:
    // 0x23bd38: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x23bd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23bd3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23bd3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23bd40: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23bd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x23bd44: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bd48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23bd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23bd4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23bd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23bd50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23bd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23bd54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23bd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23bd58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23bd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23bd5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23bd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23bd60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23bd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23bd64: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23bd64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23bd68: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bd6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23bd70: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x23bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x23bd74: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23bd74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23bd78: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23bd78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23bd7c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23bd7cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23bd80: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23BD80u;
    SET_GPR_U32(ctx, 31, 0x23BD88u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23BD80u, 0x23BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD88u;
label_23bd88:
    // 0x23bd88: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x23bd88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x23bd8c: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x23bd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x23bd90: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23BD90u;
    SET_GPR_U32(ctx, 31, 0x23BD98u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23BD90u, 0x23BD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BD98u;
label_23bd98:
    // 0x23bd98: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x23bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x23bd9c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x23bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x23bda0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x23BDA0u;
    SET_GPR_U32(ctx, 31, 0x23BDA8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x23BDA0u, 0x23BDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDA8u;
label_23bda8:
    // 0x23bda8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bdac: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23bdb0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23bdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23bdb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23bdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23bdb8: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x23bdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x23bdbc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x23bdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23bdc0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23bdc0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23bdc4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23BDC4u;
    SET_GPR_U32(ctx, 31, 0x23BDCCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23BDC4u, 0x23BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BDCCu;
label_23bdcc:
    // 0x23bdcc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bdd0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x23bdd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x23bdd4: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x23BDD4u;
    {
        const bool branch_taken_0x23bdd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bdd4) {
            ctx->pc = 0x23BE80u;
            goto label_23be80;
        }
    }
    ctx->pc = 0x23BDDCu;
    // 0x23bddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23bde0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bde4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23bde4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23bde8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23bdec: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bdf0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23bdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23bdf4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bdf8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23bdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23bdfc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23be00: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23be00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23be04: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23be04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23be08: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23be08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23be0c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BE0Cu;
    SET_GPR_U32(ctx, 31, 0x23BE14u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BE0Cu, 0x23BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE14u;
label_23be14:
    // 0x23be14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23be18: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23be18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x23be1c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x23be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x23be20: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x23be20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23be24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23be24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23be28: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x23be28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23be2c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x23be2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x23be30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BE30u;
    SET_GPR_U32(ctx, 31, 0x23BE38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BE30u, 0x23BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE38u;
label_23be38:
    // 0x23be38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23be38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23be3c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23be40: 0x2451000a  addiu       $s1, $v0, 0xA
    ctx->pc = 0x23be40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x23be44: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BE44u;
    SET_GPR_U32(ctx, 31, 0x23BE4Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BE44u, 0x23BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE4Cu;
label_23be4c:
    // 0x23be4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23be4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23be50: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23be50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x23be54: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x23be54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x23be58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23BE58u;
    SET_GPR_U32(ctx, 31, 0x23BE60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23BE58u, 0x23BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE60u;
label_23be60:
    // 0x23be60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23be60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23be64: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x23be64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x23be68: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x23be68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x23be6c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23be6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23be70: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23be70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23be74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23be74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23be78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23be7c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x23be7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
label_23be80:
    // 0x23be80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23be84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23be84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23be88: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23be8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23be8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23be90: 0x0  nop
    ctx->pc = 0x23be90u;
    // NOP
    // 0x23be94: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23be94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23be98: 0x0  nop
    ctx->pc = 0x23be98u;
    // NOP
    // 0x23be9c: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x23BE9Cu;
    {
        const bool branch_taken_0x23be9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23be9c) {
            ctx->pc = 0x23BF80u;
            goto label_23bf80;
        }
    }
    ctx->pc = 0x23BEA4u;
    // 0x23bea4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bea8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23beac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23beb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23beb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23beb4: 0x0  nop
    ctx->pc = 0x23beb4u;
    // NOP
    // 0x23beb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23beb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bebc: 0x0  nop
    ctx->pc = 0x23bebcu;
    // NOP
    // 0x23bec0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x23BEC0u;
    {
        const bool branch_taken_0x23bec0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bec0) {
            ctx->pc = 0x23BF28u;
            goto label_23bf28;
        }
    }
    ctx->pc = 0x23BEC8u;
    // 0x23bec8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23becc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23beccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bed0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23bed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bed4: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23bed8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23bed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23bedc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23bedcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bee0: 0x0  nop
    ctx->pc = 0x23bee0u;
    // NOP
    // 0x23bee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23bee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23bee8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23bee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23beec: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bef0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bef4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23bef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23befc: 0x0  nop
    ctx->pc = 0x23befcu;
    // NOP
    // 0x23bf00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23bf00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bf04: 0x0  nop
    ctx->pc = 0x23bf04u;
    // NOP
    // 0x23bf08: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23BF08u;
    {
        const bool branch_taken_0x23bf08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bf08) {
            ctx->pc = 0x23BF80u;
            goto label_23bf80;
        }
    }
    ctx->pc = 0x23BF10u;
    // 0x23bf10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bf10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bf14: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bf18: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bf1c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23bf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23bf20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23BF20u;
    {
        const bool branch_taken_0x23bf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bf20) {
            ctx->pc = 0x23BF80u;
            goto label_23bf80;
        }
    }
    ctx->pc = 0x23BF28u;
label_23bf28:
    // 0x23bf28: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bf2c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bf30: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23bf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bf34: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23bf38: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23bf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23bf3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23bf3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bf40: 0x0  nop
    ctx->pc = 0x23bf40u;
    // NOP
    // 0x23bf44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23bf44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23bf48: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23bf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23bf4c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bf50: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bf54: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23bf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bf58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bf58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bf5c: 0x0  nop
    ctx->pc = 0x23bf5cu;
    // NOP
    // 0x23bf60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23bf60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bf64: 0x0  nop
    ctx->pc = 0x23bf64u;
    // NOP
    // 0x23bf68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23BF68u;
    {
        const bool branch_taken_0x23bf68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bf68) {
            ctx->pc = 0x23BF80u;
            goto label_23bf80;
        }
    }
    ctx->pc = 0x23BF70u;
    // 0x23bf70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23bf70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bf74: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bf78: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bf7c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23bf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_23bf80:
    // 0x23bf80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bf84: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x23bf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23bf88: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x23bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x23bf8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23bf8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23bf90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23bf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23bf94: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23bf94u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23bf98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23bf98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23bf9c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23bf9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23bfa0: 0x0  nop
    ctx->pc = 0x23bfa0u;
    // NOP
    // 0x23bfa4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23BFA4u;
    {
        const bool branch_taken_0x23bfa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23bfa4) {
            ctx->pc = 0x23BFC8u;
            goto label_23bfc8;
        }
    }
    ctx->pc = 0x23BFACu;
    // 0x23bfac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x23bfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23bfb0: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23bfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23bfb4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x23bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x23bfb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23bfb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23bfbc: 0x0  nop
    ctx->pc = 0x23bfbcu;
    // NOP
    // 0x23bfc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23bfc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23bfc4: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23bfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_23bfc8:
    // 0x23bfc8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x23bfc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23bfcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23bfccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23bfd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23bfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bfd4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x23bfd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23bfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x23BFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BFE0u;
}
