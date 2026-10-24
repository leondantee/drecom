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

// Function: Pl_r1_d_sky_dm_big
// Address: 0x26ed60 - 0x26f2c8
void Pl_r1_d_sky_dm_big_0x26ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_d_sky_dm_big_0x26ed60");
#endif

    switch (ctx->pc) {
        case 0x26edc4u: goto label_26edc4;
        case 0x26ee34u: goto label_26ee34;
        case 0x26ee88u: goto label_26ee88;
        case 0x26eeacu: goto label_26eeac;
        case 0x26ef1cu: goto label_26ef1c;
        case 0x26ef40u: goto label_26ef40;
        case 0x26ef5cu: goto label_26ef5c;
        case 0x26ef70u: goto label_26ef70;
        case 0x26ef88u: goto label_26ef88;
        case 0x26efd8u: goto label_26efd8;
        case 0x26f0f8u: goto label_26f0f8;
        case 0x26f120u: goto label_26f120;
        case 0x26f140u: goto label_26f140;
        case 0x26f14cu: goto label_26f14c;
        case 0x26f160u: goto label_26f160;
        case 0x26f178u: goto label_26f178;
        case 0x26f1c8u: goto label_26f1c8;
        default: break;
    }

    ctx->pc = 0x26ed60u;

    // 0x26ed60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26ed64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x26ed64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x26ed68: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x26ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x26ed6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed70: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x26ed70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26ed74: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x26ed74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26ed78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26ed78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26ed7c: 0x108300ec  beq         $a0, $v1, . + 4 + (0xEC << 2)
    ctx->pc = 0x26ED7Cu;
    {
        const bool branch_taken_0x26ed7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26ed7c) {
            ctx->pc = 0x26F130u;
            goto label_26f130;
        }
    }
    ctx->pc = 0x26ED84u;
    // 0x26ed84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ed88: 0x108300cf  beq         $a0, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x26ED88u;
    {
        const bool branch_taken_0x26ed88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26ed88) {
            ctx->pc = 0x26F0C8u;
            goto label_26f0c8;
        }
    }
    ctx->pc = 0x26ED90u;
    // 0x26ed90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ed94: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x26ED94u;
    {
        const bool branch_taken_0x26ed94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26ed94) {
            ctx->pc = 0x26EF0Cu;
            goto label_26ef0c;
        }
    }
    ctx->pc = 0x26ED9Cu;
    // 0x26ed9c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26ED9Cu;
    {
        const bool branch_taken_0x26ed9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ed9c) {
            ctx->pc = 0x26EDACu;
            goto label_26edac;
        }
    }
    ctx->pc = 0x26EDA4u;
    // 0x26eda4: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x26EDA4u;
    {
        const bool branch_taken_0x26eda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eda4) {
            ctx->pc = 0x26F2B8u;
            goto label_26f2b8;
        }
    }
    ctx->pc = 0x26EDACu;
label_26edac:
    // 0x26edac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26edacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26edb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26edb4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x26edb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26edb8: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x26edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26edbc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x26EDBCu;
    SET_GPR_U32(ctx, 31, 0x26EDC4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x26EDBCu, 0x26EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EDC4u;
label_26edc4:
    // 0x26edc4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26edc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x26edc8: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x26edc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26edcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26edccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26edd0: 0x0  nop
    ctx->pc = 0x26edd0u;
    // NOP
    // 0x26edd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26edd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26edd8: 0x0  nop
    ctx->pc = 0x26edd8u;
    // NOP
    // 0x26eddc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26EDDCu;
    {
        const bool branch_taken_0x26eddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26eddc) {
            ctx->pc = 0x26EDF0u;
            goto label_26edf0;
        }
    }
    ctx->pc = 0x26EDE4u;
    // 0x26ede4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x26ede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ede8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26ede8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26edec: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26edecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_26edf0:
    // 0x26edf0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x26edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26edf4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x26edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x26edf8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26edfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26edfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ee00: 0x0  nop
    ctx->pc = 0x26ee00u;
    // NOP
    // 0x26ee04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ee04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ee08: 0x0  nop
    ctx->pc = 0x26ee08u;
    // NOP
    // 0x26ee0c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x26EE0Cu;
    {
        const bool branch_taken_0x26ee0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ee0c) {
            ctx->pc = 0x26EE68u;
            goto label_26ee68;
        }
    }
    ctx->pc = 0x26EE14u;
    // 0x26ee14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26ee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26ee20: 0x24060378  addiu       $a2, $zero, 0x378
    ctx->pc = 0x26ee20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 888));
    // 0x26ee24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26ee24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ee28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26ee28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26ee2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26EE2Cu;
    SET_GPR_U32(ctx, 31, 0x26EE34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26EE2Cu, 0x26EE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE34u;
label_26ee34:
    // 0x26ee34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee38: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x26ee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ee3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee40: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26ee40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26ee44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ee48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee4c: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x26ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
    // 0x26ee50: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x26ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x26ee54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ee54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ee58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee5c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x26ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x26ee60: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26EE60u;
    {
        const bool branch_taken_0x26ee60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ee60) {
            ctx->pc = 0x26EECCu;
            goto label_26eecc;
        }
    }
    ctx->pc = 0x26EE68u;
label_26ee68:
    // 0x26ee68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ee68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee70: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26ee70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26ee74: 0x2406037b  addiu       $a2, $zero, 0x37B
    ctx->pc = 0x26ee74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 891));
    // 0x26ee78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26ee78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ee7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26ee7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26ee80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26EE80u;
    SET_GPR_U32(ctx, 31, 0x26EE88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26EE80u, 0x26EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EE88u;
label_26ee88:
    // 0x26ee88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ee8c: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x26ee8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ee90: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26ee90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26ee94: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26ee94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26ee98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26ee98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ee9c: 0x0  nop
    ctx->pc = 0x26ee9cu;
    // NOP
    // 0x26eea0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x26eea0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26eea4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x26EEA4u;
    SET_GPR_U32(ctx, 31, 0x26EEACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x26EEA4u, 0x26EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EEACu;
label_26eeac:
    // 0x26eeac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eeb0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26eeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26eeb4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eeb8: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x26eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x26eebc: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x26eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x26eec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26eec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eec4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eec8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x26eec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_26eecc:
    // 0x26eecc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x26eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26eed0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eed4: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26eed4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x26eed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eedc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eee0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x26eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x26eee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eee8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eeec: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x26eeecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x26eef0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26eef4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eef8: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26eef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    // 0x26eefc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef00: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26ef00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26ef04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26ef08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26ef08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26ef0c:
    // 0x26ef0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef10: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26ef10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ef14: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26EF14u;
    SET_GPR_U32(ctx, 31, 0x26EF1Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26EF14u, 0x26EF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF1Cu;
label_26ef1c:
    // 0x26ef1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef24: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x26ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x26ef28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26ef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26ef2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26ef2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26ef30: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x26ef30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26ef34: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x26ef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26ef38: 0xc058f50  jal         func_163D40
    ctx->pc = 0x26EF38u;
    SET_GPR_U32(ctx, 31, 0x26EF40u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26EF38u, 0x26EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF40u;
label_26ef40:
    // 0x26ef40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef44: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x26ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x26ef48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef50: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x26ef50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26ef54: 0xc05cd58  jal         func_173560
    ctx->pc = 0x26EF54u;
    SET_GPR_U32(ctx, 31, 0x26EF5Cu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x26EF54u, 0x26EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF5Cu;
label_26ef5c:
    // 0x26ef5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ef5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ef60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26ef64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ef68: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26EF68u;
    SET_GPR_U32(ctx, 31, 0x26EF70u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26EF68u, 0x26EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF70u;
label_26ef70:
    // 0x26ef70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ef78: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26ef7c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x26ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x26ef80: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26EF80u;
    SET_GPR_U32(ctx, 31, 0x26EF88u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26EF80u, 0x26EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EF88u;
label_26ef88:
    // 0x26ef88: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26ef88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26ef8c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26ef90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ef90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ef94: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26ef94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ef98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ef98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ef9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26efa0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26efa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26efa4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26efa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26efa8: 0x0  nop
    ctx->pc = 0x26efa8u;
    // NOP
    // 0x26efac: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26EFACu;
    {
        const bool branch_taken_0x26efac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26efac) {
            ctx->pc = 0x26EFCCu;
            goto label_26efcc;
        }
    }
    ctx->pc = 0x26EFB4u;
    // 0x26efb4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26efb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26efb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26efbc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26efbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26efc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26efc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26efc4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26efc8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26efc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_26efcc:
    // 0x26efcc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26efccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26efd0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26EFD0u;
    SET_GPR_U32(ctx, 31, 0x26EFD8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26EFD0u, 0x26EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFD8u;
label_26efd8:
    // 0x26efd8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26efdc: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x26efdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x26efe0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26EFE0u;
    {
        const bool branch_taken_0x26efe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26efe0) {
            ctx->pc = 0x26F038u;
            goto label_26f038;
        }
    }
    ctx->pc = 0x26EFE8u;
    // 0x26efe8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26efe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26efec: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26efecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26eff0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26eff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26eff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26eff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eff8: 0x0  nop
    ctx->pc = 0x26eff8u;
    // NOP
    // 0x26effc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26effcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f000: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26f000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26f004: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f008: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26f008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f00c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f00cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f010: 0x0  nop
    ctx->pc = 0x26f010u;
    // NOP
    // 0x26f014: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26f014u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f018: 0x0  nop
    ctx->pc = 0x26f018u;
    // NOP
    // 0x26f01c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x26F01Cu;
    {
        const bool branch_taken_0x26f01c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f01c) {
            ctx->pc = 0x26F080u;
            goto label_26f080;
        }
    }
    ctx->pc = 0x26F024u;
    // 0x26f024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f028: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f02c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26f02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x26f030: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26F030u;
    {
        const bool branch_taken_0x26f030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f030) {
            ctx->pc = 0x26F080u;
            goto label_26f080;
        }
    }
    ctx->pc = 0x26F038u;
label_26f038:
    // 0x26f038: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f03c: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26f03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f040: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x26f040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x26f044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f048: 0x0  nop
    ctx->pc = 0x26f048u;
    // NOP
    // 0x26f04c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26f04cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f050: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26f050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26f054: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f058: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26f058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f05c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f05cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f060: 0x0  nop
    ctx->pc = 0x26f060u;
    // NOP
    // 0x26f064: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f068: 0x0  nop
    ctx->pc = 0x26f068u;
    // NOP
    // 0x26f06c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26F06Cu;
    {
        const bool branch_taken_0x26f06c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f06c) {
            ctx->pc = 0x26F080u;
            goto label_26f080;
        }
    }
    ctx->pc = 0x26F074u;
    // 0x26f074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f078: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f07c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26f07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_26f080:
    // 0x26f080: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f084: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26f084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26f088: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x26F088u;
    {
        const bool branch_taken_0x26f088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f088) {
            ctx->pc = 0x26F2B8u;
            goto label_26f2b8;
        }
    }
    ctx->pc = 0x26F090u;
    // 0x26f090: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f094: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x26f094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x26f098: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26f098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26f09c: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x26f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    // 0x26f0a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f0a4: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x26f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x26f0a8: 0x14600083  bnez        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x26F0A8u;
    {
        const bool branch_taken_0x26f0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f0a8) {
            ctx->pc = 0x26F2B8u;
            goto label_26f2b8;
        }
    }
    ctx->pc = 0x26F0B0u;
    // 0x26f0b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f0b4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26f0b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26f0b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f0bc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26f0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f0c0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x26F0C0u;
    {
        const bool branch_taken_0x26f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f0c0) {
            ctx->pc = 0x26F2B8u;
            goto label_26f2b8;
        }
    }
    ctx->pc = 0x26F0C8u;
label_26f0c8:
    // 0x26f0c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f0cc: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x26f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x26f0d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26F0D0u;
    {
        const bool branch_taken_0x26f0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f0d0) {
            ctx->pc = 0x26F100u;
            goto label_26f100;
        }
    }
    ctx->pc = 0x26F0D8u;
    // 0x26f0d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f0dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f0e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26f0e4: 0x24060079  addiu       $a2, $zero, 0x79
    ctx->pc = 0x26f0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x26f0e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f0ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f0ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26f0f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26F0F0u;
    SET_GPR_U32(ctx, 31, 0x26F0F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F0F0u, 0x26F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0F8u;
label_26f0f8:
    // 0x26f0f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26F0F8u;
    {
        const bool branch_taken_0x26f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f0f8) {
            ctx->pc = 0x26F120u;
            goto label_26f120;
        }
    }
    ctx->pc = 0x26F100u;
label_26f100:
    // 0x26f100: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f104: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f108: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26f108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26f10c: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x26f10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x26f110: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f110u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f114: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26f114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26f118: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26F118u;
    SET_GPR_U32(ctx, 31, 0x26F120u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26F118u, 0x26F120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F120u;
label_26f120:
    // 0x26f120: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f124: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26f124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26f128: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26f12c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26f12cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26f130:
    // 0x26f130: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f134: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26f134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26f138: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26F138u;
    SET_GPR_U32(ctx, 31, 0x26F140u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26F138u, 0x26F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F140u;
label_26f140:
    // 0x26f140: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f144: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x26F144u;
    SET_GPR_U32(ctx, 31, 0x26F14Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26F144u, 0x26F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F14Cu;
label_26f14c:
    // 0x26f14c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f14cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26f150: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f154: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26f154u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f158: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26F158u;
    SET_GPR_U32(ctx, 31, 0x26F160u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26F158u, 0x26F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F160u;
label_26f160:
    // 0x26f160: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f164: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f168: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26f168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26f16c: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x26f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x26f170: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26F170u;
    SET_GPR_U32(ctx, 31, 0x26F178u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26F170u, 0x26F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F178u;
label_26f178:
    // 0x26f178: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26f178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26f17c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26f180: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26f180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f184: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f188: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26f188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f18c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f190: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26f190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f198: 0x0  nop
    ctx->pc = 0x26f198u;
    // NOP
    // 0x26f19c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26F19Cu;
    {
        const bool branch_taken_0x26f19c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f19c) {
            ctx->pc = 0x26F1BCu;
            goto label_26f1bc;
        }
    }
    ctx->pc = 0x26F1A4u;
    // 0x26f1a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26f1a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26f1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f1ac: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26f1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f1b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26f1b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f1b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f1b8: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26f1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_26f1bc:
    // 0x26f1bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26f1bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26f1c0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26F1C0u;
    SET_GPR_U32(ctx, 31, 0x26F1C8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26F1C0u, 0x26F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1C8u;
label_26f1c8:
    // 0x26f1c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f1cc: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x26f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x26f1d0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26F1D0u;
    {
        const bool branch_taken_0x26f1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f1d0) {
            ctx->pc = 0x26F228u;
            goto label_26f228;
        }
    }
    ctx->pc = 0x26F1D8u;
    // 0x26f1d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f1dc: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26f1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f1e0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26f1e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f1e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f1e8: 0x0  nop
    ctx->pc = 0x26f1e8u;
    // NOP
    // 0x26f1ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26f1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f1f0: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26f1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26f1f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f1f8: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26f1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f1fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f1fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f200: 0x0  nop
    ctx->pc = 0x26f200u;
    // NOP
    // 0x26f204: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26f204u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f208: 0x0  nop
    ctx->pc = 0x26f208u;
    // NOP
    // 0x26f20c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x26F20Cu;
    {
        const bool branch_taken_0x26f20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f20c) {
            ctx->pc = 0x26F270u;
            goto label_26f270;
        }
    }
    ctx->pc = 0x26F214u;
    // 0x26f214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f218: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f21c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26f21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x26f220: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26F220u;
    {
        const bool branch_taken_0x26f220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f220) {
            ctx->pc = 0x26F270u;
            goto label_26f270;
        }
    }
    ctx->pc = 0x26F228u;
label_26f228:
    // 0x26f228: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f22c: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26f22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f230: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x26f230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x26f234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26f234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f238: 0x0  nop
    ctx->pc = 0x26f238u;
    // NOP
    // 0x26f23c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26f23cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26f240: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26f240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26f244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f248: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26f248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f24c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f24cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f250: 0x0  nop
    ctx->pc = 0x26f250u;
    // NOP
    // 0x26f254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f258: 0x0  nop
    ctx->pc = 0x26f258u;
    // NOP
    // 0x26f25c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26F25Cu;
    {
        const bool branch_taken_0x26f25c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f25c) {
            ctx->pc = 0x26F270u;
            goto label_26f270;
        }
    }
    ctx->pc = 0x26F264u;
    // 0x26f264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26f264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f268: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f26c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26f26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_26f270:
    // 0x26f270: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f274: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26f274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26f278: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26F278u;
    {
        const bool branch_taken_0x26f278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f278) {
            ctx->pc = 0x26F2B8u;
            goto label_26f2b8;
        }
    }
    ctx->pc = 0x26F280u;
    // 0x26f280: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f284: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x26f284u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f288: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26f288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26f28c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f290: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26f290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26f294: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26f294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f29c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26f29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26f2a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f2a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26f2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f2a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f2ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26f2acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f2b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f2b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_26f2b8:
    // 0x26f2b8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x26f2b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f2bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26f2bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26f2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x26F2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F2C8u;
}
