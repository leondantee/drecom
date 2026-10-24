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

// Function: Em18_flash_move
// Address: 0x2dae50 - 0x2dafec
void Em18_flash_move_0x2dae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em18_flash_move_0x2dae50");
#endif

    switch (ctx->pc) {
        case 0x2daf50u: goto label_2daf50;
        case 0x2dafccu: goto label_2dafcc;
        default: break;
    }

    ctx->pc = 0x2dae50u;

    // 0x2dae50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dae54: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2dae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2dae58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dae5c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2dae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2dae60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2dae60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dae64: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2dae64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2dae68: 0x920300da  lbu         $v1, 0xDA($s0)
    ctx->pc = 0x2dae68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
    // 0x2dae6c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2dae6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2dae70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dae74: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2DAE74u;
    {
        const bool branch_taken_0x2dae74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dae74) {
            ctx->pc = 0x2DAF7Cu;
            goto label_2daf7c;
        }
    }
    ctx->pc = 0x2DAE7Cu;
    // 0x2dae7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dae80: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2DAE80u;
    {
        const bool branch_taken_0x2dae80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dae80) {
            ctx->pc = 0x2DAED4u;
            goto label_2daed4;
        }
    }
    ctx->pc = 0x2DAE88u;
    // 0x2dae88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAE88u;
    {
        const bool branch_taken_0x2dae88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dae88) {
            ctx->pc = 0x2DAE98u;
            goto label_2dae98;
        }
    }
    ctx->pc = 0x2DAE90u;
    // 0x2dae90: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2DAE90u;
    {
        const bool branch_taken_0x2dae90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dae90) {
            ctx->pc = 0x2DAFD8u;
            goto label_2dafd8;
        }
    }
    ctx->pc = 0x2DAE98u;
label_2dae98:
    // 0x2dae98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2dae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dae9c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2dae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2daea0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2daea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2daea4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2daea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2daea8: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2DAEA8u;
    {
        const bool branch_taken_0x2daea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daea8) {
            ctx->pc = 0x2DAFD8u;
            goto label_2dafd8;
        }
    }
    ctx->pc = 0x2DAEB0u;
    // 0x2daeb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daeb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daeb4: 0x0  nop
    ctx->pc = 0x2daeb4u;
    // NOP
    // 0x2daeb8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x2daeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x2daebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daec0: 0x0  nop
    ctx->pc = 0x2daec0u;
    // NOP
    // 0x2daec4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2daec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2daec8: 0x920200da  lbu         $v0, 0xDA($s0)
    ctx->pc = 0x2daec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
    // 0x2daecc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2daeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2daed0: 0xa20200da  sb          $v0, 0xDA($s0)
    ctx->pc = 0x2daed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 218), (uint8_t)GPR_U32(ctx, 2));
label_2daed4:
    // 0x2daed4: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x2daed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daed8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2daed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2daedc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daee0: 0x0  nop
    ctx->pc = 0x2daee0u;
    // NOP
    // 0x2daee4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2daee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2daee8: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x2daee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x2daeec: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x2daeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daef0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2daef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2daef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daef8: 0x0  nop
    ctx->pc = 0x2daef8u;
    // NOP
    // 0x2daefc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2daefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2daf00: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2daf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2daf04: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x2daf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daf08: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2daf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2daf0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daf0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daf10: 0x0  nop
    ctx->pc = 0x2daf10u;
    // NOP
    // 0x2daf14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2daf14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2daf18: 0x0  nop
    ctx->pc = 0x2daf18u;
    // NOP
    // 0x2daf1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DAF1Cu;
    {
        const bool branch_taken_0x2daf1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2daf1c) {
            ctx->pc = 0x2DAF34u;
            goto label_2daf34;
        }
    }
    ctx->pc = 0x2DAF24u;
    // 0x2daf24: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2daf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2daf28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daf28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daf2c: 0x0  nop
    ctx->pc = 0x2daf2cu;
    // NOP
    // 0x2daf30: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2daf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
label_2daf34:
    // 0x2daf34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2daf34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2daf38: 0xc60c0080  lwc1        $f12, 0x80($s0)
    ctx->pc = 0x2daf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2daf3c: 0xc60d0084  lwc1        $f13, 0x84($s0)
    ctx->pc = 0x2daf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2daf40: 0xc60e0084  lwc1        $f14, 0x84($s0)
    ctx->pc = 0x2daf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2daf44: 0xc60f0084  lwc1        $f15, 0x84($s0)
    ctx->pc = 0x2daf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2daf48: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x2DAF48u;
    SET_GPR_U32(ctx, 31, 0x2DAF50u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x2DAF48u, 0x2DAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF50u;
label_2daf50:
    // 0x2daf50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2daf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2daf54: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2daf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2daf58: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2daf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2daf5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2daf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2daf60: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2DAF60u;
    {
        const bool branch_taken_0x2daf60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daf60) {
            ctx->pc = 0x2DAFD8u;
            goto label_2dafd8;
        }
    }
    ctx->pc = 0x2DAF68u;
    // 0x2daf68: 0x920300da  lbu         $v1, 0xDA($s0)
    ctx->pc = 0x2daf68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
    // 0x2daf6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2daf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2daf70: 0xa20300da  sb          $v1, 0xDA($s0)
    ctx->pc = 0x2daf70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 218), (uint8_t)GPR_U32(ctx, 3));
    // 0x2daf74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2DAF74u;
    {
        const bool branch_taken_0x2daf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daf74) {
            ctx->pc = 0x2DAFD8u;
            goto label_2dafd8;
        }
    }
    ctx->pc = 0x2DAF7Cu;
label_2daf7c:
    // 0x2daf7c: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x2daf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daf80: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2daf80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2daf84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2daf84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daf88: 0x0  nop
    ctx->pc = 0x2daf88u;
    // NOP
    // 0x2daf8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2daf8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2daf90: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2daf90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2daf94: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x2daf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daf98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daf98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daf9c: 0x0  nop
    ctx->pc = 0x2daf9cu;
    // NOP
    // 0x2dafa0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dafa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dafa4: 0x0  nop
    ctx->pc = 0x2dafa4u;
    // NOP
    // 0x2dafa8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2DAFA8u;
    {
        const bool branch_taken_0x2dafa8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dafa8) {
            ctx->pc = 0x2DAFD4u;
            goto label_2dafd4;
        }
    }
    ctx->pc = 0x2DAFB0u;
    // 0x2dafb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2dafb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dafb4: 0xc60c0080  lwc1        $f12, 0x80($s0)
    ctx->pc = 0x2dafb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dafb8: 0xc60d0084  lwc1        $f13, 0x84($s0)
    ctx->pc = 0x2dafb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dafbc: 0xc60e0084  lwc1        $f14, 0x84($s0)
    ctx->pc = 0x2dafbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2dafc0: 0xc60f0084  lwc1        $f15, 0x84($s0)
    ctx->pc = 0x2dafc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2dafc4: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x2DAFC4u;
    SET_GPR_U32(ctx, 31, 0x2DAFCCu);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x2DAFC4u, 0x2DAFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFCCu;
label_2dafcc:
    // 0x2dafcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DAFCCu;
    {
        const bool branch_taken_0x2dafcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dafcc) {
            ctx->pc = 0x2DAFD8u;
            goto label_2dafd8;
        }
    }
    ctx->pc = 0x2DAFD4u;
label_2dafd4:
    // 0x2dafd4: 0xa20000da  sb          $zero, 0xDA($s0)
    ctx->pc = 0x2dafd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 218), (uint8_t)GPR_U32(ctx, 0));
label_2dafd8:
    // 0x2dafd8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2dafd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dafdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dafdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dafe0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dafe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dafe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAFECu;
}
