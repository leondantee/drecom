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

// Function: Em03_R1_mv03
// Address: 0x2c6b70 - 0x2c6e44
void Em03_R1_mv03_0x2c6b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_mv03_0x2c6b70");
#endif

    switch (ctx->pc) {
        case 0x2c6bdcu: goto label_2c6bdc;
        case 0x2c6c68u: goto label_2c6c68;
        case 0x2c6c84u: goto label_2c6c84;
        case 0x2c6c9cu: goto label_2c6c9c;
        case 0x2c6cc4u: goto label_2c6cc4;
        case 0x2c6cd4u: goto label_2c6cd4;
        case 0x2c6ce0u: goto label_2c6ce0;
        case 0x2c6d04u: goto label_2c6d04;
        case 0x2c6d4cu: goto label_2c6d4c;
        case 0x2c6d88u: goto label_2c6d88;
        case 0x2c6decu: goto label_2c6dec;
        default: break;
    }

    ctx->pc = 0x2c6b70u;

    // 0x2c6b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c6b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c6b74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c6b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c6b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6b7c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2c6b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x2c6b80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6b84: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x2c6b84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2c6b88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6b8c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2c6b8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2c6b90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c6b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c6b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6b98: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C6B98u;
    {
        const bool branch_taken_0x2c6b98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c6b98) {
            ctx->pc = 0x2C6C2Cu;
            goto label_2c6c2c;
        }
    }
    ctx->pc = 0x2C6BA0u;
    // 0x2c6ba0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6BA0u;
    {
        const bool branch_taken_0x2c6ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ba0) {
            ctx->pc = 0x2C6BB0u;
            goto label_2c6bb0;
        }
    }
    ctx->pc = 0x2C6BA8u;
    // 0x2c6ba8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2C6BA8u;
    {
        const bool branch_taken_0x2c6ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ba8) {
            ctx->pc = 0x2C6E30u;
            goto label_2c6e30;
        }
    }
    ctx->pc = 0x2C6BB0u;
label_2c6bb0:
    // 0x2c6bb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6bb4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6bb8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c6bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6bbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6bc0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6bc4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c6bc8: 0x24061e08  addiu       $a2, $zero, 0x1E08
    ctx->pc = 0x2c6bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7688));
    // 0x2c6bcc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c6bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6bd0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c6bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c6bd4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C6BD4u;
    SET_GPR_U32(ctx, 31, 0x2C6BDCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C6BD4u, 0x2C6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BDCu;
label_2c6bdc:
    // 0x2c6bdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6bdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6be0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6be4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6be8: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c6be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c6bec: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2c6becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2c6bf0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2c6bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2c6bf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6bf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6bf8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6bfc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6c00: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c6c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c6c04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c08: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c6c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6c0c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c6c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c6c10: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c6c14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c6c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6c18: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c6c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c6c1c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c20: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2c6c20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c6c24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c28: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2c6c28u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2c6c2c:
    // 0x2c6c2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c30: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2c6c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2c6c34: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C6C34u;
    {
        const bool branch_taken_0x2c6c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6c34) {
            ctx->pc = 0x2C6C8Cu;
            goto label_2c6c8c;
        }
    }
    ctx->pc = 0x2C6C3Cu;
    // 0x2c6c3c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c44: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2c6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2c6c48: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2c6c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2c6c4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2c6c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c6c50: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2c6c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2c6c54: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2c6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c6c58: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2c6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2c6c5c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2c6c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2c6c60: 0xc05c848  jal         func_172120
    ctx->pc = 0x2C6C60u;
    SET_GPR_U32(ctx, 31, 0x2C6C68u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2C6C60u, 0x2C6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C68u;
label_2c6c68:
    // 0x2c6c68: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c6c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2c6c6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c70: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2c6c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c74: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2c6c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c78: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2c6c78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6c7c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C6C7Cu;
    SET_GPR_U32(ctx, 31, 0x2C6C84u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C6C7Cu, 0x2C6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C84u;
label_2c6c84:
    // 0x2c6c84: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c88: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c6c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_2c6c8c:
    // 0x2c6c8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6c90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c6c90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c6c94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2C6C94u;
    SET_GPR_U32(ctx, 31, 0x2C6C9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2C6C94u, 0x2C6C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C9Cu;
label_2c6c9c:
    // 0x2c6c9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6ca0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6ca4: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x2c6ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6ca8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6cac: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x2c6cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6cb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c6cb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c6cb4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c6cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c6cb8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6cbc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2C6CBCu;
    SET_GPR_U32(ctx, 31, 0x2C6CC4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2C6CBCu, 0x2C6CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CC4u;
label_2c6cc4:
    // 0x2c6cc4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6cc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c6cc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c6ccc: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2C6CCCu;
    SET_GPR_U32(ctx, 31, 0x2C6CD4u);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2C6CCCu, 0x2C6CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CD4u;
label_2c6cd4:
    // 0x2c6cd4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2c6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6cd8: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2C6CD8u;
    SET_GPR_U32(ctx, 31, 0x2C6CE0u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2C6CD8u, 0x2C6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CE0u;
label_2c6ce0:
    // 0x2c6ce0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6ce4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x2c6ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2c6ce8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2c6ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c6cec: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2c6cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2c6cf0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C6CF0u;
    {
        const bool branch_taken_0x2c6cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6cf0) {
            ctx->pc = 0x2C6DA8u;
            goto label_2c6da8;
        }
    }
    ctx->pc = 0x2C6CF8u;
    // 0x2c6cf8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2c6cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6cfc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C6CFCu;
    SET_GPR_U32(ctx, 31, 0x2C6D04u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C6CFCu, 0x2C6D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D04u;
label_2c6d04:
    // 0x2c6d04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c6d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c6d0c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c6d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c6d10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c6d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c6d14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c6d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c6d18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c6d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c6d1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c6d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c6d20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c6d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c6d24: 0x34440007  ori         $a0, $v0, 0x7
    ctx->pc = 0x2c6d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x2c6d28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d2c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d30: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c6d34: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2c6d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c6d38: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x2c6d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2c6d3c: 0x24470080  addiu       $a3, $v0, 0x80
    ctx->pc = 0x2c6d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c6d40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2c6d40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c6d44: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2C6D44u;
    SET_GPR_U32(ctx, 31, 0x2C6D4Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2C6D44u, 0x2C6D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D4Cu;
label_2c6d4c:
    // 0x2c6d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6d50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d54: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c6d54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c6d58: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d5c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6d60: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c6d60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c6d64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6D64u;
    {
        const bool branch_taken_0x2c6d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6d64) {
            ctx->pc = 0x2C6D80u;
            goto label_2c6d80;
        }
    }
    ctx->pc = 0x2C6D6Cu;
    // 0x2c6d6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6d70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c6d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c6d74: 0x80620039  lb          $v0, 0x39($v1)
    ctx->pc = 0x2c6d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2c6d78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c6d7c: 0xa0620039  sb          $v0, 0x39($v1)
    ctx->pc = 0x2c6d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 57), (uint8_t)GPR_U32(ctx, 2));
label_2c6d80:
    // 0x2c6d80: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6D80u;
    SET_GPR_U32(ctx, 31, 0x2C6D88u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6D80u, 0x2C6D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D88u;
label_2c6d88:
    // 0x2c6d88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c6d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6d8c: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2c6d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2c6d90: 0x246301f4  addiu       $v1, $v1, 0x1F4
    ctx->pc = 0x2c6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 500));
    // 0x2c6d94: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2c6d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c6d98: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c6d98u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c6d9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6da0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c6da4: 0xa4640058  sh          $a0, 0x58($v1)
    ctx->pc = 0x2c6da4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 4));
label_2c6da8:
    // 0x2c6da8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6dac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2c6dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2c6db0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C6DB0u;
    {
        const bool branch_taken_0x2c6db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6db0) {
            ctx->pc = 0x2C6E30u;
            goto label_2c6e30;
        }
    }
    ctx->pc = 0x2C6DB8u;
    // 0x2c6db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6dbc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6dc0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c6dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6dc4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6dc8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c6dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6dcc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6dd0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c6dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6dd4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6dd8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c6dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6ddc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6de0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c6de4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C6DE4u;
    SET_GPR_U32(ctx, 31, 0x2C6DECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C6DE4u, 0x2C6DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6DECu;
label_2c6dec:
    // 0x2c6dec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c6decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6df0: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x2c6df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2c6df4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6df8: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6DF8u;
    {
        const bool branch_taken_0x2c6df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6df8) {
            ctx->pc = 0x2C6E30u;
            goto label_2c6e30;
        }
    }
    ctx->pc = 0x2C6E00u;
    // 0x2c6e00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6e04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6e08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c6e08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6e0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c6e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6e10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6e14: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c6e14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6e18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6e1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c6e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6e24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c6e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6e28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6e2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c6e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c6e30:
    // 0x2c6e30: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c6e30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6e34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6e38: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c6e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c6e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6E44u;
}
