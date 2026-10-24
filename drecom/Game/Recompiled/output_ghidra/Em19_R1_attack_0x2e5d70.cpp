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

// Function: Em19_R1_attack
// Address: 0x2e5d70 - 0x2e63a8
void Em19_R1_attack_0x2e5d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_attack_0x2e5d70");
#endif

    switch (ctx->pc) {
        case 0x2e5dd4u: goto label_2e5dd4;
        case 0x2e5de4u: goto label_2e5de4;
        case 0x2e5ef8u: goto label_2e5ef8;
        case 0x2e5f14u: goto label_2e5f14;
        case 0x2e5f3cu: goto label_2e5f3c;
        case 0x2e5f58u: goto label_2e5f58;
        case 0x2e5f74u: goto label_2e5f74;
        case 0x2e601cu: goto label_2e601c;
        case 0x2e6124u: goto label_2e6124;
        case 0x2e6160u: goto label_2e6160;
        case 0x2e619cu: goto label_2e619c;
        case 0x2e61d8u: goto label_2e61d8;
        case 0x2e6284u: goto label_2e6284;
        case 0x2e62b4u: goto label_2e62b4;
        case 0x2e62e4u: goto label_2e62e4;
        case 0x2e6314u: goto label_2e6314;
        case 0x2e6324u: goto label_2e6324;
        case 0x2e6330u: goto label_2e6330;
        case 0x2e6340u: goto label_2e6340;
        case 0x2e634cu: goto label_2e634c;
        default: break;
    }

    ctx->pc = 0x2e5d70u;

    // 0x2e5d70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e5d74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2e5d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2e5d78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e5d7c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2e5d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2e5d80: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5d84: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x2e5d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2e5d88: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e5d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5d8c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e5d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5d90: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e5d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e5d94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5d98: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E5D98u;
    {
        const bool branch_taken_0x2e5d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e5d98) {
            ctx->pc = 0x2E5E1Cu;
            goto label_2e5e1c;
        }
    }
    ctx->pc = 0x2E5DA0u;
    // 0x2e5da0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5DA0u;
    {
        const bool branch_taken_0x2e5da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5da0) {
            ctx->pc = 0x2E5DB0u;
            goto label_2e5db0;
        }
    }
    ctx->pc = 0x2E5DA8u;
    // 0x2e5da8: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x2E5DA8u;
    {
        const bool branch_taken_0x2e5da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5da8) {
            ctx->pc = 0x2E6394u;
            goto label_2e6394;
        }
    }
    ctx->pc = 0x2E5DB0u;
label_2e5db0:
    // 0x2e5db0: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x2e5db0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5db4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5db8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e5db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5dbc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e5dc0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2e5dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e5dc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e5dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5dc8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e5dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e5dcc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E5DCCu;
    SET_GPR_U32(ctx, 31, 0x2E5DD4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E5DCCu, 0x2E5DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DD4u;
label_2e5dd4:
    // 0x2e5dd4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5dd8: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x2e5dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2e5ddc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E5DDCu;
    SET_GPR_U32(ctx, 31, 0x2E5DE4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E5DDCu, 0x2E5DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5DE4u;
label_2e5de4:
    // 0x2e5de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5de8: 0x0  nop
    ctx->pc = 0x2e5de8u;
    // NOP
    // 0x2e5dec: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e5decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e5df0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5df4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5df8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2e5df8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e5dfc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e5e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5e04: 0x0  nop
    ctx->pc = 0x2e5e04u;
    // NOP
    // 0x2e5e08: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e5e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e5e0c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e10: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e5e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5e14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e5e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e5e18: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e5e18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e5e1c:
    // 0x2e5e1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e5e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e20: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e5e24: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e5e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e5e28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5e2c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2e5e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5e30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5e34: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e5e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e5e38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e3c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5e40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5e44: 0x0  nop
    ctx->pc = 0x2e5e44u;
    // NOP
    // 0x2e5e48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5e48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5e4c: 0x0  nop
    ctx->pc = 0x2e5e4cu;
    // NOP
    // 0x2e5e50: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E5E50u;
    {
        const bool branch_taken_0x2e5e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5e50) {
            ctx->pc = 0x2E5E90u;
            goto label_2e5e90;
        }
    }
    ctx->pc = 0x2E5E58u;
    // 0x2e5e58: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e5c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5e60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5e68: 0x0  nop
    ctx->pc = 0x2e5e68u;
    // NOP
    // 0x2e5e6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5e70: 0x0  nop
    ctx->pc = 0x2e5e70u;
    // NOP
    // 0x2e5e74: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2E5E74u;
    {
        const bool branch_taken_0x2e5e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5e74) {
            ctx->pc = 0x2E5EC0u;
            goto label_2e5ec0;
        }
    }
    ctx->pc = 0x2E5E7Cu;
    // 0x2e5e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5e80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e84: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e5e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2e5e88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E5E88u;
    {
        const bool branch_taken_0x2e5e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5e88) {
            ctx->pc = 0x2E5EC0u;
            goto label_2e5ec0;
        }
    }
    ctx->pc = 0x2E5E90u;
label_2e5e90:
    // 0x2e5e90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e94: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5e98: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e5e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e5e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5ea0: 0x0  nop
    ctx->pc = 0x2e5ea0u;
    // NOP
    // 0x2e5ea4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5ea4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5ea8: 0x0  nop
    ctx->pc = 0x2e5ea8u;
    // NOP
    // 0x2e5eac: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5EACu;
    {
        const bool branch_taken_0x2e5eac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5eac) {
            ctx->pc = 0x2E5EC0u;
            goto label_2e5ec0;
        }
    }
    ctx->pc = 0x2E5EB4u;
    // 0x2e5eb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5eb8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5ebc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e5ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2e5ec0:
    // 0x2e5ec0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2e5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e5ec4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2e5ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2e5ec8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2e5ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2e5ecc: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2e5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2e5ed0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e5ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e5ed4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e5ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e5ed8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e5ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5edc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5ee0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e5ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e5ee4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2e5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5ee8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2e5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2e5eec: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2e5eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2e5ef0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2E5EF0u;
    SET_GPR_U32(ctx, 31, 0x2E5EF8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2E5EF0u, 0x2E5EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5EF8u;
label_2e5ef8:
    // 0x2e5ef8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2e5ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e5efc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5f00: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2e5f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5f04: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2e5f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5f08: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e5f08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5f0c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E5F0Cu;
    SET_GPR_U32(ctx, 31, 0x2E5F14u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E5F0Cu, 0x2E5F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F14u;
label_2e5f14:
    // 0x2e5f14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5f18: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e5f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e5f1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5f20: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e5f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e5f24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e5f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e5f28: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2e5f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2e5f2c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2E5F2Cu;
    {
        const bool branch_taken_0x2e5f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5f2c) {
            ctx->pc = 0x2E601Cu;
            goto label_2e601c;
        }
    }
    ctx->pc = 0x2E5F34u;
    // 0x2e5f34: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E5F34u;
    SET_GPR_U32(ctx, 31, 0x2E5F3Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E5F34u, 0x2E5F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F3Cu;
label_2e5f3c:
    // 0x2e5f3c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2e5f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2e5f40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5f44: 0x0  nop
    ctx->pc = 0x2e5f44u;
    // NOP
    // 0x2e5f48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5f4c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e5f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e5f50: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E5F50u;
    SET_GPR_U32(ctx, 31, 0x2E5F58u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E5F50u, 0x2E5F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F58u;
label_2e5f58:
    // 0x2e5f58: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2e5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2e5f5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5f60: 0x0  nop
    ctx->pc = 0x2e5f60u;
    // NOP
    // 0x2e5f64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5f68: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e5f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e5f6c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2E5F6Cu;
    SET_GPR_U32(ctx, 31, 0x2E5F74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2E5F6Cu, 0x2E5F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F74u;
label_2e5f74:
    // 0x2e5f74: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x2e5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x2e5f78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5f7c: 0x0  nop
    ctx->pc = 0x2e5f7cu;
    // NOP
    // 0x2e5f80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e5f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e5f84: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2e5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x2e5f88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5f8c: 0x0  nop
    ctx->pc = 0x2e5f8cu;
    // NOP
    // 0x2e5f90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5f94: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e5f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e5f98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5f9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5fa0: 0x0  nop
    ctx->pc = 0x2e5fa0u;
    // NOP
    // 0x2e5fa4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e5fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e5fa8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5fa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5fac: 0x0  nop
    ctx->pc = 0x2e5facu;
    // NOP
    // 0x2e5fb0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2e5fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e5fb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5fb8: 0x0  nop
    ctx->pc = 0x2e5fb8u;
    // NOP
    // 0x2e5fbc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2e5fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e5fc0: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2e5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x2e5fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5fc8: 0x0  nop
    ctx->pc = 0x2e5fc8u;
    // NOP
    // 0x2e5fcc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2e5fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e5fd0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2e5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2e5fd4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e5fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e5fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5fdc: 0x0  nop
    ctx->pc = 0x2e5fdcu;
    // NOP
    // 0x2e5fe0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2e5fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e5fe4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2e5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2e5fe8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e5fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e5fec: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2e5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2e5ff0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e5ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e5ff4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x2e5ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x2e5ff8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e5ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e5ffc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e5ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e6000: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e6000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e6004: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6008: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e6008u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e600c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e600cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e6010: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e6010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6014: 0xc086584  jal         func_219610
    ctx->pc = 0x2E6014u;
    SET_GPR_U32(ctx, 31, 0x2E601Cu);
    ctx->pc = 0x219610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219610u, 0x2E6014u, 0x2E601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E601Cu;
label_2e601c:
    // 0x2e601c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6020: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e6020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e6024: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6028: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2e6028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2e602c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E602Cu;
    {
        const bool branch_taken_0x2e602c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e602c) {
            ctx->pc = 0x2E60B8u;
            goto label_2e60b8;
        }
    }
    ctx->pc = 0x2E6034u;
    // 0x2e6034: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x2e6034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6038: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e6038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e603c: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2e603cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2e6040: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e6040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e6044: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e6044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e6048: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x2e6048u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2e604c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E604Cu;
    {
        const bool branch_taken_0x2e604c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e604c) {
            ctx->pc = 0x2E6074u;
            goto label_2e6074;
        }
    }
    ctx->pc = 0x2E6054u;
    // 0x2e6054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6058: 0xa2020083  sb          $v0, 0x83($s0)
    ctx->pc = 0x2e6058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e605c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6060: 0xa2020084  sb          $v0, 0x84($s0)
    ctx->pc = 0x2e6060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e6064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6068: 0xa2020085  sb          $v0, 0x85($s0)
    ctx->pc = 0x2e6068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e606c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E606Cu;
    {
        const bool branch_taken_0x2e606c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e606c) {
            ctx->pc = 0x2E60B0u;
            goto label_2e60b0;
        }
    }
    ctx->pc = 0x2E6074u;
label_2e6074:
    // 0x2e6074: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e6074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6078: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2e6078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2e607c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e6080: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e6080u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e6084: 0x284101f4  slti        $at, $v0, 0x1F4
    ctx->pc = 0x2e6084u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x2e6088: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E6088u;
    {
        const bool branch_taken_0x2e6088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6088) {
            ctx->pc = 0x2E60A8u;
            goto label_2e60a8;
        }
    }
    ctx->pc = 0x2E6090u;
    // 0x2e6090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6094: 0xa2020084  sb          $v0, 0x84($s0)
    ctx->pc = 0x2e6094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e6098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e609c: 0xa2020085  sb          $v0, 0x85($s0)
    ctx->pc = 0x2e609cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e60a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E60A0u;
    {
        const bool branch_taken_0x2e60a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e60a0) {
            ctx->pc = 0x2E60B0u;
            goto label_2e60b0;
        }
    }
    ctx->pc = 0x2E60A8u;
label_2e60a8:
    // 0x2e60a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e60ac: 0xa2020083  sb          $v0, 0x83($s0)
    ctx->pc = 0x2e60acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 2));
label_2e60b0:
    // 0x2e60b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e60b4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2e60b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_2e60b8:
    // 0x2e60b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e60bc: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2e60bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2e60c0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2E60C0u;
    {
        const bool branch_taken_0x2e60c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e60c0) {
            ctx->pc = 0x2E61E0u;
            goto label_2e61e0;
        }
    }
    ctx->pc = 0x2E60C8u;
    // 0x2e60c8: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2e60c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e60cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2e60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2e60d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e60d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e60d4: 0x0  nop
    ctx->pc = 0x2e60d4u;
    // NOP
    // 0x2e60d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e60d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e60dc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e60dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e60e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e60e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e60e4: 0x0  nop
    ctx->pc = 0x2e60e4u;
    // NOP
    // 0x2e60e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e60e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e60ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e60ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e60f0: 0x0  nop
    ctx->pc = 0x2e60f0u;
    // NOP
    // 0x2e60f4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e60f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e60f8: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2e60f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x2e60fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e60fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6100: 0x0  nop
    ctx->pc = 0x2e6100u;
    // NOP
    // 0x2e6104: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e6104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e6108: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e6108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e610c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e610cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6110: 0x0  nop
    ctx->pc = 0x2e6110u;
    // NOP
    // 0x2e6114: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e6114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e6118: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e6118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e611c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E611Cu;
    SET_GPR_U32(ctx, 31, 0x2E6124u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E611Cu, 0x2E6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6124u;
label_2e6124:
    // 0x2e6124: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e6124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e6128: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e6128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e612c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e612cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e6130: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e6130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e6134: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e6134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e6138: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e6138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e613c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e613cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6140: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e6140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e6144: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e6144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e6148: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e6148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e614c: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e614cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6150: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e6150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6154: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e6154u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e6158: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E6158u;
    SET_GPR_U32(ctx, 31, 0x2E6160u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E6158u, 0x2E6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6160u;
label_2e6160:
    // 0x2e6160: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e6160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e6164: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e6164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e6168: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e6168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e616c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e616cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e6170: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e6170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e6174: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e6174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e6178: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e617c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e617cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e6180: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e6180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e6184: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e6184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6188: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e6188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e618c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e618cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6190: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e6190u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e6194: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E6194u;
    SET_GPR_U32(ctx, 31, 0x2E619Cu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E6194u, 0x2E619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E619Cu;
label_2e619c:
    // 0x2e619c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e619cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e61a0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e61a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e61a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e61a8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2e61a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e61ac: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2e61acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2e61b0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2e61b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e61b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e61b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e61b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e61bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e61bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e61c0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e61c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e61c4: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e61c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e61c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e61c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e61cc: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e61ccu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e61d0: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E61D0u;
    SET_GPR_U32(ctx, 31, 0x2E61D8u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E61D0u, 0x2E61D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E61D8u;
label_2e61d8:
    // 0x2e61d8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2E61D8u;
    {
        const bool branch_taken_0x2e61d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e61d8) {
            ctx->pc = 0x2E6314u;
            goto label_2e6314;
        }
    }
    ctx->pc = 0x2E61E0u;
label_2e61e0:
    // 0x2e61e0: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2e61e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e61e4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2e61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2e61e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e61e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e61ec: 0x0  nop
    ctx->pc = 0x2e61ecu;
    // NOP
    // 0x2e61f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e61f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e61f4: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e61f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e61f8: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2e61f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e61fc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e61fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e6200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6204: 0x0  nop
    ctx->pc = 0x2e6204u;
    // NOP
    // 0x2e6208: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e6208u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e620c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e6210: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2e6210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6218: 0x0  nop
    ctx->pc = 0x2e6218u;
    // NOP
    // 0x2e621c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e621cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6220: 0x0  nop
    ctx->pc = 0x2e6220u;
    // NOP
    // 0x2e6224: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
    ctx->pc = 0x2E6224u;
    {
        const bool branch_taken_0x2e6224 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6224) {
            ctx->pc = 0x2E6314u;
            goto label_2e6314;
        }
    }
    ctx->pc = 0x2E622Cu;
    // 0x2e622c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e622cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6230: 0x0  nop
    ctx->pc = 0x2e6230u;
    // NOP
    // 0x2e6234: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2e6234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e6238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e623c: 0x0  nop
    ctx->pc = 0x2e623cu;
    // NOP
    // 0x2e6240: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e6240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e6244: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2e6244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x2e6248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e624c: 0x0  nop
    ctx->pc = 0x2e624cu;
    // NOP
    // 0x2e6250: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e6250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e6254: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e6254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e6258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e6258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e625c: 0x0  nop
    ctx->pc = 0x2e625cu;
    // NOP
    // 0x2e6260: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e6260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e6264: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2e6264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2e6268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e6268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e626c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6270: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e6270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e6274: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2e6274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2e6278: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e6278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e627c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E627Cu;
    SET_GPR_U32(ctx, 31, 0x2E6284u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E627Cu, 0x2E6284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6284u;
label_2e6284:
    // 0x2e6284: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6288: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e6288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e628c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e628cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e6290: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e6290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e6294: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e6294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e6298: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x2e6298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e629c: 0xc7ae004c  lwc1        $f14, 0x4C($sp)
    ctx->pc = 0x2e629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e62a0: 0xc60f0098  lwc1        $f15, 0x98($s0)
    ctx->pc = 0x2e62a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e62a4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e62a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e62a8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e62a8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e62ac: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E62ACu;
    SET_GPR_U32(ctx, 31, 0x2E62B4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E62ACu, 0x2E62B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62B4u;
label_2e62b4:
    // 0x2e62b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e62b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e62b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e62b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e62bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e62bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e62c0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e62c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e62c4: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e62c8: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x2e62c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e62cc: 0xc7ae004c  lwc1        $f14, 0x4C($sp)
    ctx->pc = 0x2e62ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e62d0: 0xc60f0098  lwc1        $f15, 0x98($s0)
    ctx->pc = 0x2e62d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e62d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e62d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e62d8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e62d8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e62dc: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E62DCu;
    SET_GPR_U32(ctx, 31, 0x2E62E4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E62DCu, 0x2E62E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E62E4u;
label_2e62e4:
    // 0x2e62e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e62e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e62e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e62e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e62ec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2e62ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e62f0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2e62f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e62f4: 0xc60c0094  lwc1        $f12, 0x94($s0)
    ctx->pc = 0x2e62f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e62f8: 0xc7ad004c  lwc1        $f13, 0x4C($sp)
    ctx->pc = 0x2e62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2e62fc: 0xc7ae004c  lwc1        $f14, 0x4C($sp)
    ctx->pc = 0x2e62fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2e6300: 0xc60f0098  lwc1        $f15, 0x98($s0)
    ctx->pc = 0x2e6300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2e6304: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e6304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6308: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2e6308u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e630c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2E630Cu;
    SET_GPR_U32(ctx, 31, 0x2E6314u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2E630Cu, 0x2E6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6314u;
label_2e6314:
    // 0x2e6314: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6318: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e6318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e631c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E631Cu;
    SET_GPR_U32(ctx, 31, 0x2E6324u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E631Cu, 0x2E6324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6324u;
label_2e6324:
    // 0x2e6324: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6328: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2E6328u;
    SET_GPR_U32(ctx, 31, 0x2E6330u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2E6328u, 0x2E6330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6330u;
label_2e6330:
    // 0x2e6330: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6334: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e6334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e6338: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E6338u;
    SET_GPR_U32(ctx, 31, 0x2E6340u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E6338u, 0x2E6340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6340u;
label_2e6340:
    // 0x2e6340: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e6340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6344: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E6344u;
    SET_GPR_U32(ctx, 31, 0x2E634Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E6344u, 0x2E634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E634Cu;
label_2e634c:
    // 0x2e634c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6350: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2e6350u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2e6354: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E6354u;
    {
        const bool branch_taken_0x2e6354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6354) {
            ctx->pc = 0x2E6394u;
            goto label_2e6394;
        }
    }
    ctx->pc = 0x2E635Cu;
    // 0x2e635c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6360: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e6360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6364: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e6364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6368: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e6368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e636c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6370: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e6370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e6374: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e6374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6378: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e6378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e637c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6380: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e6380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6384: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e6384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6388: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e6388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e638c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2E638Cu;
    {
        const bool branch_taken_0x2e638c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e638c) {
            ctx->pc = 0x2E6394u;
            goto label_2e6394;
        }
    }
    ctx->pc = 0x2E6394u;
label_2e6394:
    // 0x2e6394: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2e6394u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e6398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e639c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e639cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e63a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E63A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E63A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E63A8u;
}
