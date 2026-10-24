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

// Function: Em0d_R1_br_mv01
// Address: 0x238a30 - 0x238ee4
void Em0d_R1_br_mv01_0x238a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_br_mv01_0x238a30");
#endif

    switch (ctx->pc) {
        case 0x238ab4u: goto label_238ab4;
        case 0x238b08u: goto label_238b08;
        case 0x238b98u: goto label_238b98;
        case 0x238bc4u: goto label_238bc4;
        case 0x238c24u: goto label_238c24;
        case 0x238c98u: goto label_238c98;
        case 0x238d54u: goto label_238d54;
        default: break;
    }

    ctx->pc = 0x238a30u;

    // 0x238a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x238a34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x238a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x238a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x238a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x238a3c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x238a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x238a40: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x238a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x238a44: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x238a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x238a48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238a4c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x238a4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x238a50: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x238A50u;
    {
        const bool branch_taken_0x238a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238a50) {
            ctx->pc = 0x238B5Cu;
            goto label_238b5c;
        }
    }
    ctx->pc = 0x238A58u;
    // 0x238a58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238a5c: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x238a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238a60: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x238a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x238a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238a68: 0x0  nop
    ctx->pc = 0x238a68u;
    // NOP
    // 0x238a6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238a70: 0x0  nop
    ctx->pc = 0x238a70u;
    // NOP
    // 0x238a74: 0x4500003d  bc1f        . + 4 + (0x3D << 2)
    ctx->pc = 0x238A74u;
    {
        const bool branch_taken_0x238a74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238a74) {
            ctx->pc = 0x238B6Cu;
            goto label_238b6c;
        }
    }
    ctx->pc = 0x238A7Cu;
    // 0x238a7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238a80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238a84: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x238a84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238a88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x238a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238a8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238a90: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x238a90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x238a94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238a98: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x238a98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238a9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238aa0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x238aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238aa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238aa8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x238aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x238aac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x238AACu;
    SET_GPR_U32(ctx, 31, 0x238AB4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x238AACu, 0x238AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AB4u;
label_238ab4:
    // 0x238ab4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x238ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x238ab8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x238ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x238abc: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x238abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x238ac0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x238ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x238ac4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x238ac4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x238ac8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238acc: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x238accu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x238ad0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ad4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ad8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x238ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238adc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x238adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238ae0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ae4: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x238ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x238ae8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238aec: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x238aecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238af0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238af4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x238af4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238af8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238afc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x238afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x238b00: 0xc067694  jal         func_19DA50
    ctx->pc = 0x238B00u;
    SET_GPR_U32(ctx, 31, 0x238B08u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x238B00u, 0x238B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B08u;
label_238b08:
    // 0x238b08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x238b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x238b0c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x238b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x238b10: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x238b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x238b14: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x238b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x238b18: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x238b18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x238b1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238b20: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x238b20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x238b24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238b28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238b2c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x238b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x238b30: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x238b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238b34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238b38: 0x0  nop
    ctx->pc = 0x238b38u;
    // NOP
    // 0x238b3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238b3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238b40: 0x0  nop
    ctx->pc = 0x238b40u;
    // NOP
    // 0x238b44: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x238B44u;
    {
        const bool branch_taken_0x238b44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238b44) {
            ctx->pc = 0x238B6Cu;
            goto label_238b6c;
        }
    }
    ctx->pc = 0x238B4Cu;
    // 0x238b4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238b50: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x238b50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x238b54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x238B54u;
    {
        const bool branch_taken_0x238b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238b54) {
            ctx->pc = 0x238B6Cu;
            goto label_238b6c;
        }
    }
    ctx->pc = 0x238B5Cu;
label_238b5c:
    // 0x238b5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238b60: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x238b60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x238b64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x238b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x238b68: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x238b68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_238b6c:
    // 0x238b6c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x238b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x238b70: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x238b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x238b74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x238b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x238b78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238b7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238b80: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x238b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x238b84: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x238b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238b88: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x238b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x238b8c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x238b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x238b90: 0xc05c848  jal         func_172120
    ctx->pc = 0x238B90u;
    SET_GPR_U32(ctx, 31, 0x238B98u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x238B90u, 0x238B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238B98u;
label_238b98:
    // 0x238b98: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x238b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x238b9c: 0x3c023f32  lui         $v0, 0x3F32
    ctx->pc = 0x238b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16178 << 16));
    // 0x238ba0: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x238ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x238ba4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x238ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x238ba8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238bac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238bb0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x238bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x238bb4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x238bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238bb8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x238bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x238bbc: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x238BBCu;
    SET_GPR_U32(ctx, 31, 0x238BC4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x238BBCu, 0x238BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238BC4u;
label_238bc4:
    // 0x238bc4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x238BC4u;
    {
        const bool branch_taken_0x238bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238bc4) {
            ctx->pc = 0x238C70u;
            goto label_238c70;
        }
    }
    ctx->pc = 0x238BCCu;
    // 0x238bcc: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x238bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238bd0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x238bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x238bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238bd8: 0x0  nop
    ctx->pc = 0x238bd8u;
    // NOP
    // 0x238bdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238bdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238be0: 0x0  nop
    ctx->pc = 0x238be0u;
    // NOP
    // 0x238be4: 0x45010022  bc1t        . + 4 + (0x22 << 2)
    ctx->pc = 0x238BE4u;
    {
        const bool branch_taken_0x238be4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238be4) {
            ctx->pc = 0x238C70u;
            goto label_238c70;
        }
    }
    ctx->pc = 0x238BECu;
    // 0x238bec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238bf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238bf4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x238bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238bf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x238bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238bfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c00: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x238c00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x238c04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c08: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x238c08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238c0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c10: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x238c10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238c14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x238c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x238c1c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x238C1Cu;
    SET_GPR_U32(ctx, 31, 0x238C24u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x238C1Cu, 0x238C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C24u;
label_238c24:
    // 0x238c24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x238c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x238c28: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x238c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x238c2c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x238c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x238c30: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x238c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x238c34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x238c34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x238c38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c3c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x238c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x238c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238c44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c48: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x238c48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x238c4c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x238c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238c50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238c54: 0x0  nop
    ctx->pc = 0x238c54u;
    // NOP
    // 0x238c58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238c58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238c5c: 0x0  nop
    ctx->pc = 0x238c5cu;
    // NOP
    // 0x238c60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x238C60u;
    {
        const bool branch_taken_0x238c60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238c60) {
            ctx->pc = 0x238C70u;
            goto label_238c70;
        }
    }
    ctx->pc = 0x238C68u;
    // 0x238c68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c6c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x238c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_238c70:
    // 0x238c70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x238c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238c78: 0x3c023fdf  lui         $v0, 0x3FDF
    ctx->pc = 0x238c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16351 << 16));
    // 0x238c7c: 0x344266f3  ori         $v0, $v0, 0x66F3
    ctx->pc = 0x238c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26355);
    // 0x238c80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x238c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x238c84: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x238c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x238c88: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x238c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x238c8c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x238c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x238c90: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x238C90u;
    SET_GPR_U32(ctx, 31, 0x238C98u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x238C90u, 0x238C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238C98u;
label_238c98:
    // 0x238c98: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x238C98u;
    {
        const bool branch_taken_0x238c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238c98) {
            ctx->pc = 0x238CE4u;
            goto label_238ce4;
        }
    }
    ctx->pc = 0x238CA0u;
    // 0x238ca0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ca4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x238ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x238ca8: 0x84630074  lh          $v1, 0x74($v1)
    ctx->pc = 0x238ca8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x238cac: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x238CACu;
    {
        const bool branch_taken_0x238cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238cac) {
            ctx->pc = 0x238CE4u;
            goto label_238ce4;
        }
    }
    ctx->pc = 0x238CB4u;
    // 0x238cb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238cb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238cbc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238cc0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x238cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238cc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238cc8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x238cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x238ccc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238cd0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x238cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238cd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238cd8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x238cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238cdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ce0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x238ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_238ce4:
    // 0x238ce4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ce8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x238ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x238cec: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x238cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x238cf0: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x238CF0u;
    {
        const bool branch_taken_0x238cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238cf0) {
            ctx->pc = 0x238D94u;
            goto label_238d94;
        }
    }
    ctx->pc = 0x238CF8u;
    // 0x238cf8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238cfc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x238cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238d00: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x238d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x238d04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238d04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238d08: 0x0  nop
    ctx->pc = 0x238d08u;
    // NOP
    // 0x238d0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238d10: 0x0  nop
    ctx->pc = 0x238d10u;
    // NOP
    // 0x238d14: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x238D14u;
    {
        const bool branch_taken_0x238d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238d14) {
            ctx->pc = 0x238D94u;
            goto label_238d94;
        }
    }
    ctx->pc = 0x238D1Cu;
    // 0x238d1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x238d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238d20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x238d24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238d28: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x238d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x238d2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d30: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x238d30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x238d34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d38: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x238d38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238d3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d40: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x238d40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238d44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x238d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x238d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x238d4c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x238D4Cu;
    SET_GPR_U32(ctx, 31, 0x238D54u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x238D4Cu, 0x238D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238D54u;
label_238d54:
    // 0x238d54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x238d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x238d58: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x238d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x238d5c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x238D5Cu;
    {
        const bool branch_taken_0x238d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x238d5c) {
            ctx->pc = 0x238D94u;
            goto label_238d94;
        }
    }
    ctx->pc = 0x238D64u;
    // 0x238d64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238d68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238d70: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x238d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x238d74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d78: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x238d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x238d7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x238d80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238d84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x238d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238d8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x238d90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_238d94:
    // 0x238d94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238d98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x238d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x238d9c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x238d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238da0: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x238da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x238da4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x238da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x238da8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238dac: 0x0  nop
    ctx->pc = 0x238dacu;
    // NOP
    // 0x238db0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238db4: 0x0  nop
    ctx->pc = 0x238db4u;
    // NOP
    // 0x238db8: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x238DB8u;
    {
        const bool branch_taken_0x238db8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238db8) {
            ctx->pc = 0x238E14u;
            goto label_238e14;
        }
    }
    ctx->pc = 0x238DC0u;
    // 0x238dc0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238dc4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x238dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238dc8: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x238dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x238dcc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238dccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238dd0: 0x0  nop
    ctx->pc = 0x238dd0u;
    // NOP
    // 0x238dd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238dd8: 0x0  nop
    ctx->pc = 0x238dd8u;
    // NOP
    // 0x238ddc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x238DDCu;
    {
        const bool branch_taken_0x238ddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238ddc) {
            ctx->pc = 0x238E14u;
            goto label_238e14;
        }
    }
    ctx->pc = 0x238DE4u;
    // 0x238de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238de8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238dec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238df0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x238df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238df4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238df8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x238df8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x238dfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e00: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x238e00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238e04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x238e08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238e0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e10: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x238e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_238e14:
    // 0x238e14: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e18: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x238e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x238e1c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x238e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238e20: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x238e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x238e24: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x238e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x238e28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238e28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e2c: 0x0  nop
    ctx->pc = 0x238e2cu;
    // NOP
    // 0x238e30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x238e30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238e34: 0x0  nop
    ctx->pc = 0x238e34u;
    // NOP
    // 0x238e38: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x238E38u;
    {
        const bool branch_taken_0x238e38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x238e38) {
            ctx->pc = 0x238E70u;
            goto label_238e70;
        }
    }
    ctx->pc = 0x238E40u;
    // 0x238e40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238e44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238e4c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x238e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238e50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x238e54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x238e58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x238e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238e60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x238e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238e68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x238e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_238e70:
    // 0x238e70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238e74: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x238e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x238e78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238e78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e7c: 0x0  nop
    ctx->pc = 0x238e7cu;
    // NOP
    // 0x238e80: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x238e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x238e84: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x238e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x238e88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238e8c: 0x0  nop
    ctx->pc = 0x238e8cu;
    // NOP
    // 0x238e90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x238e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238e94: 0x0  nop
    ctx->pc = 0x238e94u;
    // NOP
    // 0x238e98: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x238E98u;
    {
        const bool branch_taken_0x238e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238e98) {
            ctx->pc = 0x238ED0u;
            goto label_238ed0;
        }
    }
    ctx->pc = 0x238EA0u;
    // 0x238ea0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ea4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ea8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x238ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238eac: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x238eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x238eb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238eb4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x238eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x238eb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ebc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x238ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x238ec0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ec4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x238ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x238ec8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238ecc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x238eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_238ed0:
    // 0x238ed0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x238ed0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ed8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x238ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x238edc: 0x3e00008  jr          $ra
    ctx->pc = 0x238EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238EE4u;
}
