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

// Function: Em03_dm_ck
// Address: 0x2c3d10 - 0x2c4248
void Em03_dm_ck_0x2c3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_dm_ck_0x2c3d10");
#endif

    switch (ctx->pc) {
        case 0x2c3d6cu: goto label_2c3d6c;
        case 0x2c3e0cu: goto label_2c3e0c;
        case 0x2c3e50u: goto label_2c3e50;
        case 0x2c3e84u: goto label_2c3e84;
        case 0x2c3ea0u: goto label_2c3ea0;
        case 0x2c3f98u: goto label_2c3f98;
        case 0x2c4038u: goto label_2c4038;
        default: break;
    }

    ctx->pc = 0x2c3d10u;

    // 0x2c3d10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c3d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c3d14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2c3d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2c3d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c3d1c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2c3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2c3d20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3d24: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x2c3d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x2c3d28: 0x10600142  beqz        $v1, . + 4 + (0x142 << 2)
    ctx->pc = 0x2C3D28u;
    {
        const bool branch_taken_0x2c3d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d28) {
            ctx->pc = 0x2C4234u;
            goto label_2c4234;
        }
    }
    ctx->pc = 0x2C3D30u;
    // 0x2c3d30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3d34: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x2c3d34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3d38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3d3c: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x2c3d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x2c3d40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3d44: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x2c3d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x2c3d48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3d4c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2c3d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3d50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3d54: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2c3d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3d58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3d5c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x2c3d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3d60: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2c3d60u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c3d64: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2C3D64u;
    SET_GPR_U32(ctx, 31, 0x2C3D6Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2C3D64u, 0x2C3D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3D6Cu;
label_2c3d6c:
    // 0x2c3d6c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c3d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2c3d70: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2c3d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c3d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3d78: 0x0  nop
    ctx->pc = 0x2c3d78u;
    // NOP
    // 0x2c3d7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c3d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3d80: 0x0  nop
    ctx->pc = 0x2c3d80u;
    // NOP
    // 0x2c3d84: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3D84u;
    {
        const bool branch_taken_0x2c3d84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3d84) {
            ctx->pc = 0x2C3DA0u;
            goto label_2c3da0;
        }
    }
    ctx->pc = 0x2C3D8Cu;
    // 0x2c3d8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2c3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2c3d90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c3d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3d94: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c3d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3d98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c3d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3d9c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2c3d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2c3da0:
    // 0x2c3da0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3da4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x2c3da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2c3da8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c3dac: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2c3dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2c3db0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C3DB0u;
    {
        const bool branch_taken_0x2c3db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3db0) {
            ctx->pc = 0x2C3DF4u;
            goto label_2c3df4;
        }
    }
    ctx->pc = 0x2C3DB8u;
    // 0x2c3db8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3dbc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c3dc0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2c3dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c3dc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C3DC4u;
    {
        const bool branch_taken_0x2c3dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3dc4) {
            ctx->pc = 0x2C3DF4u;
            goto label_2c3df4;
        }
    }
    ctx->pc = 0x2C3DCCu;
    // 0x2c3dcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3dd0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c3dd4: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x2c3dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c3dd8: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2c3dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2c3ddc: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x2c3ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x2c3de0: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2c3de0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c3de4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3de8: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x2c3de8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x2c3dec: 0x3042bfff  andi        $v0, $v0, 0xBFFF
    ctx->pc = 0x2c3decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49151);
    // 0x2c3df0: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x2c3df0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
label_2c3df4:
    // 0x2c3df4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3df8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2c3df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3dfc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x2c3dfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2c3e00: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x2c3e00u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x2c3e04: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x2C3E04u;
    SET_GPR_U32(ctx, 31, 0x2C3E0Cu);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x2C3E04u, 0x2C3E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E0Cu;
label_2c3e0c:
    // 0x2c3e0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e10: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2c3e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c3e14: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2c3e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2c3e18: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c3e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c3e1c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2c3e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2c3e20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c3e24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c3e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c3e28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2c3e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2c3e2c: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2c3e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2c3e30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e38: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2c3e38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c3e3c: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x2c3e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2c3e40: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2c3e40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c3e44: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2c3e44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c3e48: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2C3E48u;
    SET_GPR_U32(ctx, 31, 0x2C3E50u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2C3E48u, 0x2C3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E50u;
label_2c3e50:
    // 0x2c3e50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c3e58: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x2c3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2c3e5c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2c3e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2c3e60: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C3E60u;
    {
        const bool branch_taken_0x2c3e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e60) {
            ctx->pc = 0x2C3ED4u;
            goto label_2c3ed4;
        }
    }
    ctx->pc = 0x2C3E68u;
    // 0x2c3e68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e6c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c3e70: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c3e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c3e74: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2c3e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2c3e78: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2c3e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3e7c: 0xc0c4c10  jal         func_313040
    ctx->pc = 0x2C3E7Cu;
    SET_GPR_U32(ctx, 31, 0x2C3E84u);
    ctx->pc = 0x313040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313040u, 0x2C3E7Cu, 0x2C3E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E84u;
label_2c3e84:
    // 0x2c3e84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3e88: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2c3e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c3e8c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c3e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c3e90: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x2c3e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2c3e94: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x2c3e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2c3e98: 0xc0c4bc8  jal         func_312F20
    ctx->pc = 0x2C3E98u;
    SET_GPR_U32(ctx, 31, 0x2C3EA0u);
    ctx->pc = 0x312F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F20u, 0x2C3E98u, 0x2C3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EA0u;
label_2c3ea0:
    // 0x2c3ea0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3ea4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2c3ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c3ea8: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2c3ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2c3eac: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2c3eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2c3eb0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2c3eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c3eb4: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2c3eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x2c3eb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c3eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c3ebc: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c3ec0: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x2c3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x2c3ec4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c3ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c3ec8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2c3ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c3ecc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c3eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c3ed0: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2c3ed0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
label_2c3ed4:
    // 0x2c3ed4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3ed8: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2c3ed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2c3edc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c3edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c3ee0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c3ee0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c3ee4: 0x460009a  bltz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x2C3EE4u;
    {
        const bool branch_taken_0x2c3ee4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2c3ee4) {
            ctx->pc = 0x2C4150u;
            goto label_2c4150;
        }
    }
    ctx->pc = 0x2C3EECu;
    // 0x2c3eec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3ef0: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2c3ef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2c3ef4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2c3ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c3ef8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2c3ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c3efc: 0x10830084  beq         $a0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x2C3EFCu;
    {
        const bool branch_taken_0x2c3efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3efc) {
            ctx->pc = 0x2C4110u;
            goto label_2c4110;
        }
    }
    ctx->pc = 0x2C3F04u;
    // 0x2c3f04: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2c3f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c3f08: 0x10830081  beq         $a0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x2C3F08u;
    {
        const bool branch_taken_0x2c3f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f08) {
            ctx->pc = 0x2C4110u;
            goto label_2c4110;
        }
    }
    ctx->pc = 0x2C3F10u;
    // 0x2c3f10: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2c3f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c3f14: 0x1083007e  beq         $a0, $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x2C3F14u;
    {
        const bool branch_taken_0x2c3f14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f14) {
            ctx->pc = 0x2C4110u;
            goto label_2c4110;
        }
    }
    ctx->pc = 0x2C3F1Cu;
    // 0x2c3f1c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c3f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c3f20: 0x1083007b  beq         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x2C3F20u;
    {
        const bool branch_taken_0x2c3f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f20) {
            ctx->pc = 0x2C4110u;
            goto label_2c4110;
        }
    }
    ctx->pc = 0x2C3F28u;
    // 0x2c3f28: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2c3f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c3f2c: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x2C3F2Cu;
    {
        const bool branch_taken_0x2c3f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f2c) {
            ctx->pc = 0x2C4084u;
            goto label_2c4084;
        }
    }
    ctx->pc = 0x2C3F34u;
    // 0x2c3f34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3f38: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x2C3F38u;
    {
        const bool branch_taken_0x2c3f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f38) {
            ctx->pc = 0x2C4084u;
            goto label_2c4084;
        }
    }
    ctx->pc = 0x2C3F40u;
    // 0x2c3f40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3f44: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2C3F44u;
    {
        const bool branch_taken_0x2c3f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c3f44) {
            ctx->pc = 0x2C4084u;
            goto label_2c4084;
        }
    }
    ctx->pc = 0x2C3F4Cu;
    // 0x2c3f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3f50: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3F50u;
    {
        const bool branch_taken_0x2c3f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c3f50) {
            ctx->pc = 0x2C3F60u;
            goto label_2c3f60;
        }
    }
    ctx->pc = 0x2C3F58u;
    // 0x2c3f58: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2C3F58u;
    {
        const bool branch_taken_0x2c3f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f58) {
            ctx->pc = 0x2C3F60u;
            goto label_2c3f60;
        }
    }
    ctx->pc = 0x2C3F60u;
label_2c3f60:
    // 0x2c3f60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3f64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3f68: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c3f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3f70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3f74: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c3f74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3f78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3f7c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c3f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3f80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3f84: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c3f84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3f88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3f8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c3f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c3f90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C3F90u;
    SET_GPR_U32(ctx, 31, 0x2C3F98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C3F90u, 0x2C3F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F98u;
label_2c3f98:
    // 0x2c3f98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3f9c: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c3f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c3fa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3fa4: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C3FA4u;
    {
        const bool branch_taken_0x2c3fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c3fa4) {
            ctx->pc = 0x2C3FDCu;
            goto label_2c3fdc;
        }
    }
    ctx->pc = 0x2C3FACu;
    // 0x2c3fac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c3facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3fb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3fb4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c3fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3fb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c3fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3fbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3fc0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c3fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3fc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3fc8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c3fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3fcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3fd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c3fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3fd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3fd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c3fdc:
    // 0x2c3fdc: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2c3fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3fe0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2c3fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2c3fe4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2c3fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2c3fe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3fec: 0x0  nop
    ctx->pc = 0x2c3fecu;
    // NOP
    // 0x2c3ff0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c3ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3ff4: 0x0  nop
    ctx->pc = 0x2c3ff4u;
    // NOP
    // 0x2c3ff8: 0x4501008e  bc1t        . + 4 + (0x8E << 2)
    ctx->pc = 0x2C3FF8u;
    {
        const bool branch_taken_0x2c3ff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3ff8) {
            ctx->pc = 0x2C4234u;
            goto label_2c4234;
        }
    }
    ctx->pc = 0x2C4000u;
    // 0x2c4000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c4000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4004: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c4004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4008: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c4008u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c400c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4010: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4014: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c4014u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4018: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c4018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c401c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c401cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4020: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c4020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4024: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c4024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4028: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c4028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c402c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c402cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c4030: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C4030u;
    SET_GPR_U32(ctx, 31, 0x2C4038u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C4030u, 0x2C4038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4038u;
label_2c4038:
    // 0x2c4038: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c4038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c403c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2c403cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2c4040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4044: 0x1483007b  bne         $a0, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x2C4044u;
    {
        const bool branch_taken_0x2c4044 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c4044) {
            ctx->pc = 0x2C4234u;
            goto label_2c4234;
        }
    }
    ctx->pc = 0x2C404Cu;
    // 0x2c404c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4050: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4054: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c4054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4058: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c4058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c405c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c405cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4060: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c4060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4064: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4068: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c4068u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c406c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c406cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4070: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c4070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4074: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4078: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c4078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c407c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2C407Cu;
    {
        const bool branch_taken_0x2c407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c407c) {
            ctx->pc = 0x2C4234u;
            goto label_2c4234;
        }
    }
    ctx->pc = 0x2C4084u;
label_2c4084:
    // 0x2c4084: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c4084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c4088: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c408c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c408cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4090: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c4090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4094: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4098: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c4098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c409c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c40a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c40a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c40a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c40ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c40b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c40b4: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2c40b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c40b8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2c40b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2c40bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2c40bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2c40c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c40c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c40c4: 0x0  nop
    ctx->pc = 0x2c40c4u;
    // NOP
    // 0x2c40c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c40c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c40cc: 0x0  nop
    ctx->pc = 0x2c40ccu;
    // NOP
    // 0x2c40d0: 0x45010058  bc1t        . + 4 + (0x58 << 2)
    ctx->pc = 0x2C40D0u;
    {
        const bool branch_taken_0x2c40d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c40d0) {
            ctx->pc = 0x2C4234u;
            goto label_2c4234;
        }
    }
    ctx->pc = 0x2C40D8u;
    // 0x2c40d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c40d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c40dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c40e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c40e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2c40e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c40e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40ec: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c40ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c40f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40f4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c40f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c40f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c40fc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c40fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4100: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4104: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c4104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c4108: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2C4108u;
    {
        const bool branch_taken_0x2c4108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4108) {
            ctx->pc = 0x2C4234u;
            goto label_2c4234;
        }
    }
    ctx->pc = 0x2C4110u;
label_2c4110:
    // 0x2c4110: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2c4110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c4114: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4118: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x2c4118u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c411c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c4120: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4124: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c4124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4128: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c412c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c412cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4130: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4134: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c4134u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c413c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c413cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4140: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4144: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c4144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c4148: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2C4148u;
    {
        const bool branch_taken_0x2c4148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4148) {
            ctx->pc = 0x2C4234u;
            goto label_2c4234;
        }
    }
    ctx->pc = 0x2C4150u;
label_2c4150:
    // 0x2c4150: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4154: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c4154u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c4158: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2c4158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2c415c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2c415cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c4160: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4164: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2c4164u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x2c4168: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c4168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c416c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c416cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c4170: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x2c4170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x2c4174: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c4174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c4178: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2c4178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c417c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c417cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c4180: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x2c4180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x2c4184: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4188: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2c4188u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2c418c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2c418cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c4190: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2c4190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c4194: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C4194u;
    {
        const bool branch_taken_0x2c4194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c4194) {
            ctx->pc = 0x2C4208u;
            goto label_2c4208;
        }
    }
    ctx->pc = 0x2C419Cu;
    // 0x2c419c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2c419cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c41a0: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C41A0u;
    {
        const bool branch_taken_0x2c41a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c41a0) {
            ctx->pc = 0x2C4208u;
            goto label_2c4208;
        }
    }
    ctx->pc = 0x2C41A8u;
    // 0x2c41a8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2c41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c41ac: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C41ACu;
    {
        const bool branch_taken_0x2c41ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c41ac) {
            ctx->pc = 0x2C4208u;
            goto label_2c4208;
        }
    }
    ctx->pc = 0x2C41B4u;
    // 0x2c41b4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2c41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c41b8: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C41B8u;
    {
        const bool branch_taken_0x2c41b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c41b8) {
            ctx->pc = 0x2C4208u;
            goto label_2c4208;
        }
    }
    ctx->pc = 0x2C41C0u;
    // 0x2c41c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c41c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c41c4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C41C4u;
    {
        const bool branch_taken_0x2c41c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c41c4) {
            ctx->pc = 0x2C41D4u;
            goto label_2c41d4;
        }
    }
    ctx->pc = 0x2C41CCu;
    // 0x2c41cc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2C41CCu;
    {
        const bool branch_taken_0x2c41cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c41cc) {
            ctx->pc = 0x2C41D4u;
            goto label_2c41d4;
        }
    }
    ctx->pc = 0x2C41D4u;
label_2c41d4:
    // 0x2c41d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c41d8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c41dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c41dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c41e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c41e4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c41e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c41e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c41e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c41ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c41ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c41f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c41f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c41f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c41f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c41fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c4200: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C4200u;
    {
        const bool branch_taken_0x2c4200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4200) {
            ctx->pc = 0x2C4234u;
            goto label_2c4234;
        }
    }
    ctx->pc = 0x2C4208u;
label_2c4208:
    // 0x2c4208: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c4208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c420c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4210: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c4210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4214: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4218: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c4218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c421c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4220: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c4220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4224: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4228: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c4228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c422c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4230: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c4230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2c4234:
    // 0x2c4234: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2c4234u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4238: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c423c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c423cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c4240: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4248u;
}
