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

// Function: Em09_R1_mv00
// Address: 0x344a00 - 0x344b74
void Em09_R1_mv00_0x344a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_mv00_0x344a00");
#endif

    switch (ctx->pc) {
        case 0x344a80u: goto label_344a80;
        case 0x344b04u: goto label_344b04;
        case 0x344b20u: goto label_344b20;
        case 0x344b38u: goto label_344b38;
        case 0x344b44u: goto label_344b44;
        case 0x344b54u: goto label_344b54;
        case 0x344b60u: goto label_344b60;
        default: break;
    }

    ctx->pc = 0x344a00u;

    // 0x344a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x344a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x344a04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x344a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x344a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x344a0c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x344a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x344a10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x344a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a14: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x344a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x344a18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x344a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a1c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x344a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x344a20: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x344a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x344a24: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x344a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x344a28: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x344a28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x344a2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x344a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a30: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x344a30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x344a34: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x344a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x344a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344a3c: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x344A3Cu;
    {
        const bool branch_taken_0x344a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x344a3c) {
            ctx->pc = 0x344AD8u;
            goto label_344ad8;
        }
    }
    ctx->pc = 0x344A44u;
    // 0x344a44: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x344A44u;
    {
        const bool branch_taken_0x344a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x344a44) {
            ctx->pc = 0x344A54u;
            goto label_344a54;
        }
    }
    ctx->pc = 0x344A4Cu;
    // 0x344a4c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x344A4Cu;
    {
        const bool branch_taken_0x344a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344a4c) {
            ctx->pc = 0x344B60u;
            goto label_344b60;
        }
    }
    ctx->pc = 0x344A54u;
label_344a54:
    // 0x344a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x344a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344a58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a5c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x344a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x344a60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a68: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x344a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x344a6c: 0x24061e02  addiu       $a2, $zero, 0x1E02
    ctx->pc = 0x344a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7682));
    // 0x344a70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x344a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344a74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x344a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x344a78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x344A78u;
    SET_GPR_U32(ctx, 31, 0x344A80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x344A78u, 0x344A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344A80u;
label_344a80:
    // 0x344a80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a84: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x344a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344a88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x344a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x344a8c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x344a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x344a90: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x344a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x344a94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344a98: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x344a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344a9c: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x344a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x344aa0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344aa4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x344aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344aa8: 0xa040006f  sb          $zero, 0x6F($v0)
    ctx->pc = 0x344aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x344aac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x344aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x344ab0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344ab4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x344ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x344ab8: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x344ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
    // 0x344abc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344ac0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x344ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x344ac4: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x344ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x344ac8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x344ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x344acc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x344accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344ad0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x344ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x344ad4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x344ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_344ad8:
    // 0x344ad8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344adc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x344adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344ae0: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x344ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x344ae4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x344ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x344ae8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x344ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x344aec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x344aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x344af0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x344af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344af4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x344af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x344af8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x344af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x344afc: 0xc05c848  jal         func_172120
    ctx->pc = 0x344AFCu;
    SET_GPR_U32(ctx, 31, 0x344B04u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x344AFCu, 0x344B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B04u;
label_344b04:
    // 0x344b04: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x344b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x344b08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b0c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x344b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344b10: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x344b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344b14: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x344b14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x344b18: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x344B18u;
    SET_GPR_U32(ctx, 31, 0x344B20u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x344B18u, 0x344B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B20u;
label_344b20:
    // 0x344b20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x344b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b24: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x344b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x344b28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x344b2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x344b30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x344B30u;
    SET_GPR_U32(ctx, 31, 0x344B38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x344B30u, 0x344B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B38u;
label_344b38:
    // 0x344b38: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x344B3Cu;
    SET_GPR_U32(ctx, 31, 0x344B44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x344B3Cu, 0x344B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B44u;
label_344b44:
    // 0x344b44: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x344b48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x344b4c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x344B4Cu;
    SET_GPR_U32(ctx, 31, 0x344B54u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x344B4Cu, 0x344B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B54u;
label_344b54:
    // 0x344b54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x344b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x344b58: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x344B58u;
    SET_GPR_U32(ctx, 31, 0x344B60u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x344B58u, 0x344B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B60u;
label_344b60:
    // 0x344b60: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x344b60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344b64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344b68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x344b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x344b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x344B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344B74u;
}
