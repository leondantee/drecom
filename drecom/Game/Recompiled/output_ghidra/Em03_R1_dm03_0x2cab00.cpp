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

// Function: Em03_R1_dm03
// Address: 0x2cab00 - 0x2cb398
void Em03_R1_dm03_0x2cab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_dm03_0x2cab00");
#endif

    switch (ctx->pc) {
        case 0x2caba8u: goto label_2caba8;
        case 0x2cabb0u: goto label_2cabb0;
        case 0x2caca0u: goto label_2caca0;
        case 0x2cacf0u: goto label_2cacf0;
        case 0x2cad0cu: goto label_2cad0c;
        case 0x2cad80u: goto label_2cad80;
        case 0x2cad98u: goto label_2cad98;
        case 0x2cadd0u: goto label_2cadd0;
        case 0x2cae08u: goto label_2cae08;
        case 0x2cae48u: goto label_2cae48;
        case 0x2cae80u: goto label_2cae80;
        case 0x2caeb8u: goto label_2caeb8;
        case 0x2caf34u: goto label_2caf34;
        case 0x2caf50u: goto label_2caf50;
        case 0x2caf68u: goto label_2caf68;
        case 0x2caf88u: goto label_2caf88;
        case 0x2caf98u: goto label_2caf98;
        case 0x2cafa4u: goto label_2cafa4;
        case 0x2cb054u: goto label_2cb054;
        case 0x2cb06cu: goto label_2cb06c;
        case 0x2cb08cu: goto label_2cb08c;
        case 0x2cb09cu: goto label_2cb09c;
        case 0x2cb0a8u: goto label_2cb0a8;
        case 0x2cb134u: goto label_2cb134;
        case 0x2cb178u: goto label_2cb178;
        case 0x2cb198u: goto label_2cb198;
        case 0x2cb1a8u: goto label_2cb1a8;
        case 0x2cb1b4u: goto label_2cb1b4;
        case 0x2cb1f0u: goto label_2cb1f0;
        case 0x2cb210u: goto label_2cb210;
        case 0x2cb230u: goto label_2cb230;
        case 0x2cb240u: goto label_2cb240;
        case 0x2cb250u: goto label_2cb250;
        case 0x2cb288u: goto label_2cb288;
        case 0x2cb364u: goto label_2cb364;
        default: break;
    }

    ctx->pc = 0x2cab00u;

    // 0x2cab00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cab04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2cab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2cab08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cab08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cab0c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2cab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2cab10: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x2cab10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x2cab14: 0x24838190  addiu       $v1, $a0, -0x7E70
    ctx->pc = 0x2cab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934928));
    // 0x2cab18: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2cab18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2cab1c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2cab1cu;
    { uint32_t bits = FAST_READ32(0x398190u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cab20: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2cab20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2cab24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cab24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cab28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cab2c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2cab2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cab30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cab34: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2cab34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2cab38: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2cab38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cab3c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cab40: 0x108301ad  beq         $a0, $v1, . + 4 + (0x1AD << 2)
    ctx->pc = 0x2CAB40u;
    {
        const bool branch_taken_0x2cab40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cab40) {
            ctx->pc = 0x2CB1F8u;
            goto label_2cb1f8;
        }
    }
    ctx->pc = 0x2CAB48u;
    // 0x2cab48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cab48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cab4c: 0x10830184  beq         $a0, $v1, . + 4 + (0x184 << 2)
    ctx->pc = 0x2CAB4Cu;
    {
        const bool branch_taken_0x2cab4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cab4c) {
            ctx->pc = 0x2CB160u;
            goto label_2cb160;
        }
    }
    ctx->pc = 0x2CAB54u;
    // 0x2cab54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cab54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cab58: 0x10830140  beq         $a0, $v1, . + 4 + (0x140 << 2)
    ctx->pc = 0x2CAB58u;
    {
        const bool branch_taken_0x2cab58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cab58) {
            ctx->pc = 0x2CB05Cu;
            goto label_2cb05c;
        }
    }
    ctx->pc = 0x2CAB60u;
    // 0x2cab60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cab64: 0x108300e8  beq         $a0, $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2CAB64u;
    {
        const bool branch_taken_0x2cab64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cab64) {
            ctx->pc = 0x2CAF08u;
            goto label_2caf08;
        }
    }
    ctx->pc = 0x2CAB6Cu;
    // 0x2cab6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAB6Cu;
    {
        const bool branch_taken_0x2cab6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab6c) {
            ctx->pc = 0x2CAB7Cu;
            goto label_2cab7c;
        }
    }
    ctx->pc = 0x2CAB74u;
    // 0x2cab74: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x2CAB74u;
    {
        const bool branch_taken_0x2cab74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cab74) {
            ctx->pc = 0x2CB384u;
            goto label_2cb384;
        }
    }
    ctx->pc = 0x2CAB7Cu;
label_2cab7c:
    // 0x2cab7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cab80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cab84: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2cab84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cab88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cab8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cab90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cab90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cab94: 0x2406040b  addiu       $a2, $zero, 0x40B
    ctx->pc = 0x2cab94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x2cab98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cab98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cab9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cab9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2caba0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CABA0u;
    SET_GPR_U32(ctx, 31, 0x2CABA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CABA0u, 0x2CABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABA8u;
label_2caba8:
    // 0x2caba8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CABA8u;
    SET_GPR_U32(ctx, 31, 0x2CABB0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CABA8u, 0x2CABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CABB0u;
label_2cabb0:
    // 0x2cabb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cabb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cabb4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2cabb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2cabb8: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2cabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2cabbc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cabbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cabc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cabc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cabc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cabc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cabc8: 0xa462127c  sh          $v0, 0x127C($v1)
    ctx->pc = 0x2cabc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cabcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cabccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cabd0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cabd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cabd4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cabd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cabd8: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2cabd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2cabdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cabdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cabe0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cabe4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cabe8: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2cabe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2cabec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cabecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cabf0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cabf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cabf4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cabf8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cabf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cabfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac00: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cac00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cac04: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2cac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2cac08: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2cac08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2cac0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cac0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cac10: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2cac10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2cac14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cac14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cac18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac1c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cac1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cac20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cac20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cac24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac28: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cac28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cac2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac30: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x2cac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cac34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cac38: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2cac38u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cac3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cac3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cac40: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2cac40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cac44: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2cac44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2cac48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cac48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cac4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cac4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cac50: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2cac50u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cac54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2cac54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cac58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cac58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac5c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cac60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cac60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cac64: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2cac64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cac68: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2cac68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac6c: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2cac6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cac70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cac70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cac74: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2cac74u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cac78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cac78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cac7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cac7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cac80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cac80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cac84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cac84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cac88: 0x0  nop
    ctx->pc = 0x2cac88u;
    // NOP
    // 0x2cac8c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2cac8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2cac90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2cac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cac94: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2cac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cac98: 0xc040c24  jal         func_103090
    ctx->pc = 0x2CAC98u;
    SET_GPR_U32(ctx, 31, 0x2CACA0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2CACA0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CACA0u) { return; }
    ctx->pc = 0x2CACA0u;
label_2caca0:
    // 0x2caca0: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2caca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2caca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2caca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2caca8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2caca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cacac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cacacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cacb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cacb4: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2cacb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2cacb8: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2cacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2cacbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cacbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cacc0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2cacc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cacc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cacc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cacc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caccc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2cacccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2cacd0: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x2cacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x2cacd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cacd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cacd8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2cacd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cacdc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cacdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cace0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cace4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cace4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cace8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CACE8u;
    SET_GPR_U32(ctx, 31, 0x2CACF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CACE8u, 0x2CACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CACF0u;
label_2cacf0:
    // 0x2cacf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cacf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cacf4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x2cacf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cacf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cacf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cacfc: 0x1462007a  bne         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2CACFCu;
    {
        const bool branch_taken_0x2cacfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cacfc) {
            ctx->pc = 0x2CAEE8u;
            goto label_2caee8;
        }
    }
    ctx->pc = 0x2CAD04u;
    // 0x2cad04: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CAD04u;
    SET_GPR_U32(ctx, 31, 0x2CAD0Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CAD04u, 0x2CAD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD0Cu;
label_2cad0c:
    // 0x2cad0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cad10: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2cad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cad14: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2cad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2cad18: 0x9042003c  lbu         $v0, 0x3C($v0)
    ctx->pc = 0x2cad18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cad1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2cad1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cad20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2cad20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cad24: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2cad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cad28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2cad28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cad2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cad30: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2cad30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cad34: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cad38: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cad3c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2cad3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cad40: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cad40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cad44: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cad44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2cad48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cad48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cad4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2cad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2cad50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cad54: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2CAD54u;
    {
        const bool branch_taken_0x2cad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cad54) {
            ctx->pc = 0x2CAEE8u;
            goto label_2caee8;
        }
    }
    ctx->pc = 0x2CAD5Cu;
    // 0x2cad5c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cad60: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2cad60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cad64: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2cad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2cad68: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cad68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cad6c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cad6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cad70: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cad74: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cad74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cad78: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CAD78u;
    SET_GPR_U32(ctx, 31, 0x2CAD80u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CAD78u, 0x2CAD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD80u;
label_2cad80:
    // 0x2cad80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cad80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cad84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cad84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cad88: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CAD88u;
    {
        const bool branch_taken_0x2cad88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cad88) {
            ctx->pc = 0x2CAE40u;
            goto label_2cae40;
        }
    }
    ctx->pc = 0x2CAD90u;
    // 0x2cad90: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CAD90u;
    SET_GPR_U32(ctx, 31, 0x2CAD98u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CAD90u, 0x2CAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAD98u;
label_2cad98:
    // 0x2cad98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cad98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cad9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cad9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cada0: 0x0  nop
    ctx->pc = 0x2cada0u;
    // NOP
    // 0x2cada4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cada4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cada8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2cada8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2cadac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cadacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cadb0: 0x0  nop
    ctx->pc = 0x2cadb0u;
    // NOP
    // 0x2cadb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cadb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cadb8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2cadb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cadbc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cadbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cadc0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cadc4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cadc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cadc8: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CADC8u;
    SET_GPR_U32(ctx, 31, 0x2CADD0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CADC8u, 0x2CADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CADD0u;
label_2cadd0:
    // 0x2cadd0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cadd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cadd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cadd8: 0x0  nop
    ctx->pc = 0x2cadd8u;
    // NOP
    // 0x2caddc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2caddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cade0: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2cade0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2cade4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cade4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cade8: 0x0  nop
    ctx->pc = 0x2cade8u;
    // NOP
    // 0x2cadec: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cadecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cadf0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2cadf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cadf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cadf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cadf8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cadfc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cadfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cae00: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CAE00u;
    SET_GPR_U32(ctx, 31, 0x2CAE08u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CAE00u, 0x2CAE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE08u;
label_2cae08:
    // 0x2cae08: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cae08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cae0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cae0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cae10: 0x0  nop
    ctx->pc = 0x2cae10u;
    // NOP
    // 0x2cae14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cae14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cae18: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cae18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cae1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cae1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae20: 0x0  nop
    ctx->pc = 0x2cae20u;
    // NOP
    // 0x2cae24: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cae24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cae28: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2cae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cae2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cae30: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cae34: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2cae34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x2cae38: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2CAE38u;
    {
        const bool branch_taken_0x2cae38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cae38) {
            ctx->pc = 0x2CAEE8u;
            goto label_2caee8;
        }
    }
    ctx->pc = 0x2CAE40u;
label_2cae40:
    // 0x2cae40: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CAE40u;
    SET_GPR_U32(ctx, 31, 0x2CAE48u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CAE40u, 0x2CAE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE48u;
label_2cae48:
    // 0x2cae48: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cae48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cae4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cae4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cae50: 0x0  nop
    ctx->pc = 0x2cae50u;
    // NOP
    // 0x2cae54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cae54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cae58: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cae58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cae5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cae5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae60: 0x0  nop
    ctx->pc = 0x2cae60u;
    // NOP
    // 0x2cae64: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cae64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cae68: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2cae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cae6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cae6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cae70: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cae74: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cae78: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CAE78u;
    SET_GPR_U32(ctx, 31, 0x2CAE80u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CAE78u, 0x2CAE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAE80u;
label_2cae80:
    // 0x2cae80: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cae80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cae84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cae84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cae88: 0x0  nop
    ctx->pc = 0x2cae88u;
    // NOP
    // 0x2cae8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cae8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cae90: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2cae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2cae94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cae94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cae98: 0x0  nop
    ctx->pc = 0x2cae98u;
    // NOP
    // 0x2cae9c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cae9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2caea0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2caea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caea4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2caea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2caea8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2caea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2caeac: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2caeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2caeb0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CAEB0u;
    SET_GPR_U32(ctx, 31, 0x2CAEB8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CAEB0u, 0x2CAEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEB8u;
label_2caeb8:
    // 0x2caeb8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2caeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2caebc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2caebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2caec0: 0x0  nop
    ctx->pc = 0x2caec0u;
    // NOP
    // 0x2caec4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2caec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2caec8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2caec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2caecc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2caeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2caed0: 0x0  nop
    ctx->pc = 0x2caed0u;
    // NOP
    // 0x2caed4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2caed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2caed8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2caed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caedc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2caedcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2caee0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2caee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2caee4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2caee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2caee8:
    // 0x2caee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2caee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2caeec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caef0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2caef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2caef4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2caef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2caef8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2caef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2caefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2caefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2caf00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf04: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2caf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
label_2caf08:
    // 0x2caf08: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x2caf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x2caf0c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2caf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2caf10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2caf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2caf14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2caf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf1c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2caf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2caf20: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2caf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2caf24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2caf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2caf28: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2caf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2caf2c: 0xc05c848  jal         func_172120
    ctx->pc = 0x2CAF2Cu;
    SET_GPR_U32(ctx, 31, 0x2CAF34u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2CAF2Cu, 0x2CAF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF34u;
label_2caf34:
    // 0x2caf34: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2caf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2caf38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf3c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2caf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2caf40: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2caf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caf44: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2caf44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2caf48: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CAF48u;
    SET_GPR_U32(ctx, 31, 0x2CAF50u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CAF48u, 0x2CAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF50u;
label_2caf50:
    // 0x2caf50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf54: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2caf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2caf58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2caf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2caf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2caf60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CAF60u;
    SET_GPR_U32(ctx, 31, 0x2CAF68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CAF60u, 0x2CAF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF68u;
label_2caf68:
    // 0x2caf68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2caf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2caf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf74: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2caf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2caf78: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2caf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2caf7c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2caf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2caf80: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CAF80u;
    SET_GPR_U32(ctx, 31, 0x2CAF88u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CAF80u, 0x2CAF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF88u;
label_2caf88:
    // 0x2caf88: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2caf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2caf8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2caf90: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CAF90u;
    SET_GPR_U32(ctx, 31, 0x2CAF98u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CAF90u, 0x2CAF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF98u;
label_2caf98:
    // 0x2caf98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2caf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf9c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CAF9Cu;
    SET_GPR_U32(ctx, 31, 0x2CAFA4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CAF9Cu, 0x2CAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAFA4u;
label_2cafa4:
    // 0x2cafa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cafa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cafa8: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cafa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cafac: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cafacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cafb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cafb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cafb4: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2cafb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cafb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cafb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cafbc: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2cafbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2cafc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cafc4: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2cafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2cafc8: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cafc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cafcc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cafccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cafd0: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2cafd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cafd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cafd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cafd8: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2cafd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2cafdc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cafe0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cafe4: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cafe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cafe8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cafec: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2cafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2caff0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2caff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2caff4: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2caff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2caff8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2caff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caffc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2caffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb000: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2cb000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb004: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2cb004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2cb008: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb008u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb00c: 0x0  nop
    ctx->pc = 0x2cb00cu;
    // NOP
    // 0x2cb010: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb014: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cb014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cb018: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb01c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cb01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cb020: 0x106000d8  beqz        $v1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x2CB020u;
    {
        const bool branch_taken_0x2cb020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb020) {
            ctx->pc = 0x2CB384u;
            goto label_2cb384;
        }
    }
    ctx->pc = 0x2CB028u;
    // 0x2cb028: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cb028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cb02c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb030: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cb030u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb034: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb038: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb03c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb040: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2cb040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cb044: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb048: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb04c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB04Cu;
    SET_GPR_U32(ctx, 31, 0x2CB054u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB04Cu, 0x2CB054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB054u;
label_2cb054:
    // 0x2cb054: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x2CB054u;
    {
        const bool branch_taken_0x2cb054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb054) {
            ctx->pc = 0x2CB384u;
            goto label_2cb384;
        }
    }
    ctx->pc = 0x2CB05Cu;
label_2cb05c:
    // 0x2cb05c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb060: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cb060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb064: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CB064u;
    SET_GPR_U32(ctx, 31, 0x2CB06Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CB064u, 0x2CB06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB06Cu;
label_2cb06c:
    // 0x2cb06c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb070: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb074: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb078: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb07c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cb07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cb080: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cb080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cb084: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CB084u;
    SET_GPR_U32(ctx, 31, 0x2CB08Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CB084u, 0x2CB08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB08Cu;
label_2cb08c:
    // 0x2cb08c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb090: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cb090u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb094: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CB094u;
    SET_GPR_U32(ctx, 31, 0x2CB09Cu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CB094u, 0x2CB09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB09Cu;
label_2cb09c:
    // 0x2cb09c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0a0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CB0A0u;
    SET_GPR_U32(ctx, 31, 0x2CB0A8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CB0A0u, 0x2CB0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB0A8u;
label_2cb0a8:
    // 0x2cb0a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0ac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cb0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb0b0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cb0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb0b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0b8: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb0bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cb0bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cb0c0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cb0c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0c8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cb0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb0cc: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2cb0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb0d0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2cb0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2cb0d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cb0d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb0d8: 0x0  nop
    ctx->pc = 0x2cb0d8u;
    // NOP
    // 0x2cb0dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cb0dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cb0e0: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cb0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cb0e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cb0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb0ec: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2cb0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cb0f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb0f4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cb0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cb0f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2cb0f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cb0fc: 0x0  nop
    ctx->pc = 0x2cb0fcu;
    // NOP
    // 0x2cb100: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
    ctx->pc = 0x2CB100u;
    {
        const bool branch_taken_0x2cb100 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cb100) {
            ctx->pc = 0x2CB384u;
            goto label_2cb384;
        }
    }
    ctx->pc = 0x2CB108u;
    // 0x2cb108: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cb108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cb10c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb110: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cb110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb114: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb118: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb11c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb120: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2cb120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2cb124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb128: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb12c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB12Cu;
    SET_GPR_U32(ctx, 31, 0x2CB134u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB12Cu, 0x2CB134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB134u;
label_2cb134:
    // 0x2cb134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb138: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb13c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2cb13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2cb140: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb140u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb144: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb148: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2cb148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2cb14c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb14cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb150: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb154: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2cb154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2cb158: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2CB158u;
    {
        const bool branch_taken_0x2cb158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb158) {
            ctx->pc = 0x2CB384u;
            goto label_2cb384;
        }
    }
    ctx->pc = 0x2CB160u;
label_2cb160:
    // 0x2cb160: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb164: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2cb164u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb168: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb16c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cb16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb170: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CB170u;
    SET_GPR_U32(ctx, 31, 0x2CB178u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CB170u, 0x2CB178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB178u;
label_2cb178:
    // 0x2cb178: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb17c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb180: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb184: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb188: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cb188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cb18c: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cb18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cb190: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CB190u;
    SET_GPR_U32(ctx, 31, 0x2CB198u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CB190u, 0x2CB198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB198u;
label_2cb198:
    // 0x2cb198: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb19c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cb19cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb1a0: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CB1A0u;
    SET_GPR_U32(ctx, 31, 0x2CB1A8u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CB1A0u, 0x2CB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1A8u;
label_2cb1a8:
    // 0x2cb1a8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1ac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CB1ACu;
    SET_GPR_U32(ctx, 31, 0x2CB1B4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CB1ACu, 0x2CB1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1B4u;
label_2cb1b4:
    // 0x2cb1b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cb1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cb1bc: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CB1BCu;
    {
        const bool branch_taken_0x2cb1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1bc) {
            ctx->pc = 0x2CB384u;
            goto label_2cb384;
        }
    }
    ctx->pc = 0x2CB1C4u;
    // 0x2cb1c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2cb1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb1c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1cc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2cb1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb1d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1d4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2cb1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2cb1dc: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2cb1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2cb1e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cb1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb1e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2cb1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cb1e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2CB1E8u;
    SET_GPR_U32(ctx, 31, 0x2CB1F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2CB1E8u, 0x2CB1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB1F0u;
label_2cb1f0:
    // 0x2cb1f0: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2CB1F0u;
    {
        const bool branch_taken_0x2cb1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1f0) {
            ctx->pc = 0x2CB384u;
            goto label_2cb384;
        }
    }
    ctx->pc = 0x2CB1F8u;
label_2cb1f8:
    // 0x2cb1f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb1fc: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x2cb1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb200: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb204: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cb204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cb208: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CB208u;
    SET_GPR_U32(ctx, 31, 0x2CB210u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CB208u, 0x2CB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB210u;
label_2cb210:
    // 0x2cb210: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb214: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb218: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb21c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cb21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cb220: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cb220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cb224: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cb224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cb228: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CB228u;
    SET_GPR_U32(ctx, 31, 0x2CB230u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CB228u, 0x2CB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB230u;
label_2cb230:
    // 0x2cb230: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb234: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cb234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb238: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CB238u;
    SET_GPR_U32(ctx, 31, 0x2CB240u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CB238u, 0x2CB240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB240u;
label_2cb240:
    // 0x2cb240: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cb240u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cb244: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2cb244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb248: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CB248u;
    SET_GPR_U32(ctx, 31, 0x2CB250u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CB248u, 0x2CB250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB250u;
label_2cb250:
    // 0x2cb250: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2cb250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cb254: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb258: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2cb258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2cb25c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x2CB25Cu;
    {
        const bool branch_taken_0x2cb25c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb25c) {
            ctx->pc = 0x2CB384u;
            goto label_2cb384;
        }
    }
    ctx->pc = 0x2CB264u;
    // 0x2cb264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb268: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb26c: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x2cb26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2cb270: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2cb270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x2cb274: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2cb274u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb278: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb27c: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cb27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cb280: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CB280u;
    SET_GPR_U32(ctx, 31, 0x2CB288u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CB280u, 0x2CB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB288u;
label_2cb288:
    // 0x2cb288: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2cb288u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cb28c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cb28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cb290: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x2cb290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x2cb294: 0x2462003c  addiu       $v0, $v1, 0x3C
    ctx->pc = 0x2cb294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x2cb298: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2cb298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cb29c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cb29cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cb2a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2a4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2cb2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb2a8: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x2cb2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cb2ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2b0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2cb2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2b4: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2cb2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2cb2b8: 0xe4c00040  swc1        $f0, 0x40($a2)
    ctx->pc = 0x2cb2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
    // 0x2cb2bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2c0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2cb2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2c4: 0x24e81330  addiu       $t0, $a3, 0x1330
    ctx->pc = 0x2cb2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2cb2c8: 0xe5000044  swc1        $f0, 0x44($t0)
    ctx->pc = 0x2cb2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 68), bits); }
    // 0x2cb2cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cb2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb2d8: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2cb2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2cb2dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2e0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2e4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cb2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cb2e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2ec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2f0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2cb2f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2cb2f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb2f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb2f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb2fc: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2cb2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2cb300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb304: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb308: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2cb308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2cb30c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb310: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb314: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2cb314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb318: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb31c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2cb31cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb320: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb324: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2cb324u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb328: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb32c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2cb32cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cb330: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb334: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2cb334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2cb338: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb33c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2cb33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb340: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x2cb340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2cb344: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2cb344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2cb348: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x2cb348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x2cb34c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cb34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb350: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb354: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cb354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb358: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x2cb358u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cb35c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CB35Cu;
    SET_GPR_U32(ctx, 31, 0x2CB364u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CB35Cu, 0x2CB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB364u;
label_2cb364:
    // 0x2cb364: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2cb364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cb368: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2cb368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2cb36c: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2cb36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2cb370: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2cb370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2cb374: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2cb374u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2cb378: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2cb378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb37c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cb37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cb380: 0xa4850058  sh          $a1, 0x58($a0)
    ctx->pc = 0x2cb380u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 5));
label_2cb384:
    // 0x2cb384: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2cb384u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb388: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb38c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2cb38cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cb390: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB398u;
}
