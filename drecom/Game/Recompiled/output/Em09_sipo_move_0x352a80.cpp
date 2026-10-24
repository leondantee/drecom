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

// Function: Em09_sipo_move
// Address: 0x352a80 - 0x352efc
void Em09_sipo_move_0x352a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_sipo_move_0x352a80");
#endif

    switch (ctx->pc) {
        case 0x352b00u: goto label_352b00;
        case 0x352b28u: goto label_352b28;
        case 0x352b48u: goto label_352b48;
        case 0x352be0u: goto label_352be0;
        case 0x352c08u: goto label_352c08;
        case 0x352c28u: goto label_352c28;
        case 0x352cc0u: goto label_352cc0;
        case 0x352ce8u: goto label_352ce8;
        case 0x352d08u: goto label_352d08;
        default: break;
    }

    ctx->pc = 0x352a80u;

    // 0x352a80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x352a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x352a84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x352a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x352a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x352a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x352a8c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x352a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x352a90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352a94: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x352a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x352a98: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x352a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x352a9c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x352a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x352aa0: 0x146000ab  bnez        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x352AA0u;
    {
        const bool branch_taken_0x352aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x352aa0) {
            ctx->pc = 0x352D50u;
            goto label_352d50;
        }
    }
    ctx->pc = 0x352AA8u;
    // 0x352aa8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352aac: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x352aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x352ab0: 0x24502bc0  addiu       $s0, $v0, 0x2BC0
    ctx->pc = 0x352ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11200));
    // 0x352ab4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352ab8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352abc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352ac0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352ac4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x352ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352ac8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352acc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352ad0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352ad4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x352ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352ad8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x352adc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352ae0: 0x0  nop
    ctx->pc = 0x352ae0u;
    // NOP
    // 0x352ae4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352ae8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352aec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352af0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x352af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x352af4: 0x24450730  addiu       $a1, $v0, 0x730
    ctx->pc = 0x352af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
    // 0x352af8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x352AF8u;
    SET_GPR_U32(ctx, 31, 0x352B00u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x352AF8u, 0x352B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352B00u;
label_352b00:
    // 0x352b00: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x352b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x352b04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352b08: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x352b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352b0c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x352b0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x352b10: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x352b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352b14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x352b14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x352b18: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x352b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352b1c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x352b1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x352b20: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x352B20u;
    SET_GPR_U32(ctx, 31, 0x352B28u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x352B20u, 0x352B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352B28u;
label_352b28:
    // 0x352b28: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x352b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x352b2c: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x352b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x352b30: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x352b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x352b34: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x352b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x352b38: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x352b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x352b3c: 0xc60d0120  lwc1        $f13, 0x120($s0)
    ctx->pc = 0x352b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x352b40: 0xc058f50  jal         func_163D40
    ctx->pc = 0x352B40u;
    SET_GPR_U32(ctx, 31, 0x352B48u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x352B40u, 0x352B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352B48u;
label_352b48:
    // 0x352b48: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352b4c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352b50: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352b54: 0xc4400730  lwc1        $f0, 0x730($v0)
    ctx->pc = 0x352b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352b58: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352b5c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x352b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x352b60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352b64: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352b68: 0xc4400734  lwc1        $f0, 0x734($v0)
    ctx->pc = 0x352b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352b6c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352b70: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x352b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x352b74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352b78: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352b7c: 0xc4400738  lwc1        $f0, 0x738($v0)
    ctx->pc = 0x352b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352b80: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352b84: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x352b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x352b88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352b8c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x352b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x352b90: 0x24502ee0  addiu       $s0, $v0, 0x2EE0
    ctx->pc = 0x352b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12000));
    // 0x352b94: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352b98: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352b9c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352ba0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352ba4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x352ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352ba8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352bac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352bb0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352bb4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x352bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352bb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x352bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352bc0: 0x0  nop
    ctx->pc = 0x352bc0u;
    // NOP
    // 0x352bc4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352bc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352bcc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352bd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x352bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x352bd4: 0x244507b0  addiu       $a1, $v0, 0x7B0
    ctx->pc = 0x352bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x352bd8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x352BD8u;
    SET_GPR_U32(ctx, 31, 0x352BE0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x352BD8u, 0x352BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352BE0u;
label_352be0:
    // 0x352be0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x352be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x352be4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352be8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x352be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352bec: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x352becu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x352bf0: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x352bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352bf4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x352bf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x352bf8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x352bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352bfc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x352bfcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x352c00: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x352C00u;
    SET_GPR_U32(ctx, 31, 0x352C08u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x352C00u, 0x352C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352C08u;
label_352c08:
    // 0x352c08: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x352c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x352c0c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x352c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x352c10: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x352c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x352c14: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x352c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x352c18: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x352c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x352c1c: 0xc60d0120  lwc1        $f13, 0x120($s0)
    ctx->pc = 0x352c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x352c20: 0xc058f50  jal         func_163D40
    ctx->pc = 0x352C20u;
    SET_GPR_U32(ctx, 31, 0x352C28u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x352C20u, 0x352C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352C28u;
label_352c28:
    // 0x352c28: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352c2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352c30: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352c34: 0xc44007b0  lwc1        $f0, 0x7B0($v0)
    ctx->pc = 0x352c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352c38: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352c3c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x352c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x352c40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352c44: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352c48: 0xc44007b4  lwc1        $f0, 0x7B4($v0)
    ctx->pc = 0x352c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352c4c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352c50: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x352c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x352c54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352c58: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352c5c: 0xc44007b8  lwc1        $f0, 0x7B8($v0)
    ctx->pc = 0x352c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352c60: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352c64: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x352c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x352c68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352c6c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x352c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x352c70: 0x24503200  addiu       $s0, $v0, 0x3200
    ctx->pc = 0x352c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12800));
    // 0x352c74: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352c78: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x352c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352c7c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352c80: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352c84: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x352c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352c88: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352c8c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352c90: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x352c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352c94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x352c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352c98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x352c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x352c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352ca0: 0x0  nop
    ctx->pc = 0x352ca0u;
    // NOP
    // 0x352ca4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352ca8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352cac: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x352cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x352cb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x352cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x352cb4: 0x24450830  addiu       $a1, $v0, 0x830
    ctx->pc = 0x352cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2096));
    // 0x352cb8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x352CB8u;
    SET_GPR_U32(ctx, 31, 0x352CC0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x352CB8u, 0x352CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352CC0u;
label_352cc0:
    // 0x352cc0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x352cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x352cc4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x352cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352cc8: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x352cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352ccc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x352cccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x352cd0: 0xc6000108  lwc1        $f0, 0x108($s0)
    ctx->pc = 0x352cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352cd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x352cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x352cd8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x352cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352cdc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x352cdcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x352ce0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x352CE0u;
    SET_GPR_U32(ctx, 31, 0x352CE8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x352CE0u, 0x352CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352CE8u;
label_352ce8:
    // 0x352ce8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x352ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x352cec: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x352cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x352cf0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x352cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x352cf4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x352cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x352cf8: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x352cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x352cfc: 0xc60d0120  lwc1        $f13, 0x120($s0)
    ctx->pc = 0x352cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x352d00: 0xc058f50  jal         func_163D40
    ctx->pc = 0x352D00u;
    SET_GPR_U32(ctx, 31, 0x352D08u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x352D00u, 0x352D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352D08u;
label_352d08:
    // 0x352d08: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352d0c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352d10: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352d14: 0xc4600830  lwc1        $f0, 0x830($v1)
    ctx->pc = 0x352d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352d18: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352d1c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x352d20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352d24: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352d28: 0xc4600834  lwc1        $f0, 0x834($v1)
    ctx->pc = 0x352d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352d2c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352d30: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x352d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352d34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352d38: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352d3c: 0xc4600838  lwc1        $f0, 0x838($v1)
    ctx->pc = 0x352d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352d40: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352d44: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352d48: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x352D48u;
    {
        const bool branch_taken_0x352d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352d48) {
            ctx->pc = 0x352EE8u;
            goto label_352ee8;
        }
    }
    ctx->pc = 0x352D50u;
label_352d50:
    // 0x352d50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352d54: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x352d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x352d58: 0x24702bc0  addiu       $s0, $v1, 0x2BC0
    ctx->pc = 0x352d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11200));
    // 0x352d5c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352d60: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x352d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352d64: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352d68: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352d6c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x352d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352d70: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352d74: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352d78: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x352d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352d7c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x352d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352d80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x352d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x352d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x352d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352d88: 0x0  nop
    ctx->pc = 0x352d88u;
    // NOP
    // 0x352d8c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352d90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352d94: 0x0  nop
    ctx->pc = 0x352d94u;
    // NOP
    // 0x352d98: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352d9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352da0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352da4: 0xc4600730  lwc1        $f0, 0x730($v1)
    ctx->pc = 0x352da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352da8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352dac: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x352db0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352db4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352db8: 0xc4600734  lwc1        $f0, 0x734($v1)
    ctx->pc = 0x352db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352dbc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352dc0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x352dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352dc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352dc8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352dcc: 0xc4600738  lwc1        $f0, 0x738($v1)
    ctx->pc = 0x352dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352dd0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352dd4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352dd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352ddc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x352ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x352de0: 0x24702ee0  addiu       $s0, $v1, 0x2EE0
    ctx->pc = 0x352de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12000));
    // 0x352de4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352de8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x352de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352dec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352df0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352df4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x352df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352df8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352dfc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e00: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x352e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e04: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x352e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352e08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x352e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x352e0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x352e0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352e10: 0x0  nop
    ctx->pc = 0x352e10u;
    // NOP
    // 0x352e14: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352e18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352e1c: 0x0  nop
    ctx->pc = 0x352e1cu;
    // NOP
    // 0x352e20: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352e24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352e28: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352e2c: 0xc46007b0  lwc1        $f0, 0x7B0($v1)
    ctx->pc = 0x352e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e30: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e34: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x352e38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352e3c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352e40: 0xc46007b4  lwc1        $f0, 0x7B4($v1)
    ctx->pc = 0x352e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e44: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x352e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352e4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352e50: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352e54: 0xc46007b8  lwc1        $f0, 0x7B8($v1)
    ctx->pc = 0x352e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e58: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e5c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x352e60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352e64: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x352e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x352e68: 0x24703200  addiu       $s0, $v1, 0x3200
    ctx->pc = 0x352e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12800));
    // 0x352e6c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e70: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x352e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e74: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x352e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x352e78: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e7c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x352e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e80: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x352e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x352e84: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352e88: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x352e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352e8c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x352e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x352e90: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x352e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x352e94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x352e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352e98: 0x0  nop
    ctx->pc = 0x352e98u;
    // NOP
    // 0x352e9c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352ea4: 0x0  nop
    ctx->pc = 0x352ea4u;
    // NOP
    // 0x352ea8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x352ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x352eac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352eb0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352eb4: 0xc4600830  lwc1        $f0, 0x830($v1)
    ctx->pc = 0x352eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352eb8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352ebc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x352ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x352ec0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352ec4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352ec8: 0xc4600834  lwc1        $f0, 0x834($v1)
    ctx->pc = 0x352ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352ecc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352ed0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x352ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x352ed4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x352ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x352ed8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x352ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x352edc: 0xc4600838  lwc1        $f0, 0x838($v1)
    ctx->pc = 0x352edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352ee0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x352ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352ee4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x352ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_352ee8:
    // 0x352ee8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x352ee8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x352eec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x352eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352ef0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x352ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x352ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x352EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352EFCu;
}
