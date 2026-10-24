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

// Function: Pl_r1_d_sky_dm_sml
// Address: 0x26e810 - 0x26ed54
void Pl_r1_d_sky_dm_sml_0x26e810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_d_sky_dm_sml_0x26e810");
#endif

    switch (ctx->pc) {
        case 0x26e874u: goto label_26e874;
        case 0x26e8e4u: goto label_26e8e4;
        case 0x26e938u: goto label_26e938;
        case 0x26e95cu: goto label_26e95c;
        case 0x26e9c0u: goto label_26e9c0;
        case 0x26e9e4u: goto label_26e9e4;
        case 0x26ea00u: goto label_26ea00;
        case 0x26ea14u: goto label_26ea14;
        case 0x26ea2cu: goto label_26ea2c;
        case 0x26ea7cu: goto label_26ea7c;
        case 0x26eb80u: goto label_26eb80;
        case 0x26eba8u: goto label_26eba8;
        case 0x26ebc8u: goto label_26ebc8;
        case 0x26ebd4u: goto label_26ebd4;
        case 0x26ebe8u: goto label_26ebe8;
        case 0x26ec00u: goto label_26ec00;
        case 0x26ec50u: goto label_26ec50;
        default: break;
    }

    ctx->pc = 0x26e810u;

    // 0x26e810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26e810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26e814: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x26e814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x26e818: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x26e818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x26e81c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e820: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x26e820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26e824: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x26e824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x26e828: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26e828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e82c: 0x108300e2  beq         $a0, $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x26E82Cu;
    {
        const bool branch_taken_0x26e82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26e82c) {
            ctx->pc = 0x26EBB8u;
            goto label_26ebb8;
        }
    }
    ctx->pc = 0x26E834u;
    // 0x26e834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e838: 0x108300c5  beq         $a0, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x26E838u;
    {
        const bool branch_taken_0x26e838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26e838) {
            ctx->pc = 0x26EB50u;
            goto label_26eb50;
        }
    }
    ctx->pc = 0x26E840u;
    // 0x26e840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26e840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e844: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x26E844u;
    {
        const bool branch_taken_0x26e844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26e844) {
            ctx->pc = 0x26E9B0u;
            goto label_26e9b0;
        }
    }
    ctx->pc = 0x26E84Cu;
    // 0x26e84c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E84Cu;
    {
        const bool branch_taken_0x26e84c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e84c) {
            ctx->pc = 0x26E85Cu;
            goto label_26e85c;
        }
    }
    ctx->pc = 0x26E854u;
    // 0x26e854: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x26E854u;
    {
        const bool branch_taken_0x26e854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e854) {
            ctx->pc = 0x26ED44u;
            goto label_26ed44;
        }
    }
    ctx->pc = 0x26E85Cu;
label_26e85c:
    // 0x26e85c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e860: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e864: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x26e864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e868: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x26e868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26e86c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x26E86Cu;
    SET_GPR_U32(ctx, 31, 0x26E874u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x26E86Cu, 0x26E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E874u;
label_26e874:
    // 0x26e874: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26e874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x26e878: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x26e878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e87c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26e87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e880: 0x0  nop
    ctx->pc = 0x26e880u;
    // NOP
    // 0x26e884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26e884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e888: 0x0  nop
    ctx->pc = 0x26e888u;
    // NOP
    // 0x26e88c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26E88Cu;
    {
        const bool branch_taken_0x26e88c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e88c) {
            ctx->pc = 0x26E8A0u;
            goto label_26e8a0;
        }
    }
    ctx->pc = 0x26E894u;
    // 0x26e894: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x26e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e898: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26e898u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x26e89c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26e89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_26e8a0:
    // 0x26e8a0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x26e8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e8a4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x26e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x26e8a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26e8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26e8ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e8b0: 0x0  nop
    ctx->pc = 0x26e8b0u;
    // NOP
    // 0x26e8b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26e8b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e8b8: 0x0  nop
    ctx->pc = 0x26e8b8u;
    // NOP
    // 0x26e8bc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x26E8BCu;
    {
        const bool branch_taken_0x26e8bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26e8bc) {
            ctx->pc = 0x26E918u;
            goto label_26e918;
        }
    }
    ctx->pc = 0x26E8C4u;
    // 0x26e8c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e8cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26e8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26e8d0: 0x24060377  addiu       $a2, $zero, 0x377
    ctx->pc = 0x26e8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 887));
    // 0x26e8d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26e8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e8d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26e8d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26e8dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26E8DCu;
    SET_GPR_U32(ctx, 31, 0x26E8E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26E8DCu, 0x26E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E8E4u;
label_26e8e4:
    // 0x26e8e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e8e8: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x26e8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26e8ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e8f0: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26e8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26e8f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e8f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e8fc: 0xac431b64  sw          $v1, 0x1B64($v0)
    ctx->pc = 0x26e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 3));
    // 0x26e900: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x26e900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x26e904: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e908: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e90c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x26e90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x26e910: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26E910u;
    {
        const bool branch_taken_0x26e910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e910) {
            ctx->pc = 0x26E97Cu;
            goto label_26e97c;
        }
    }
    ctx->pc = 0x26E918u;
label_26e918:
    // 0x26e918: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26e918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e91c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e920: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26e920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26e924: 0x2406037a  addiu       $a2, $zero, 0x37A
    ctx->pc = 0x26e924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 890));
    // 0x26e928: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26e928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e92c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26e92cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26e930: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26E930u;
    SET_GPR_U32(ctx, 31, 0x26E938u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26E930u, 0x26E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E938u;
label_26e938:
    // 0x26e938: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e93c: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x26e93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e940: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x26e940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x26e944: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26e944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26e948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e94c: 0x0  nop
    ctx->pc = 0x26e94cu;
    // NOP
    // 0x26e950: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x26e950u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26e954: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x26E954u;
    SET_GPR_U32(ctx, 31, 0x26E95Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x26E954u, 0x26E95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E95Cu;
label_26e95c:
    // 0x26e95c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e960: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x26e960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x26e964: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e968: 0xac401b64  sw          $zero, 0x1B64($v0)
    ctx->pc = 0x26e968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7012), GPR_U32(ctx, 0));
    // 0x26e96c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26e970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26e970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e974: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e978: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x26e978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_26e97c:
    // 0x26e97c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x26e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e980: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e984: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x26e984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x26e988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26e988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e98c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e990: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x26e990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x26e994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26e994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e998: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e99c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x26e99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x26e9a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9a4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26e9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26e9a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26e9ac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26e9acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26e9b0:
    // 0x26e9b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26e9b8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26E9B8u;
    SET_GPR_U32(ctx, 31, 0x26E9C0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26E9B8u, 0x26E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9C0u;
label_26e9c0:
    // 0x26e9c0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9c8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x26e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x26e9cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x26e9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26e9d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x26e9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26e9d4: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x26e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e9d8: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x26e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26e9dc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x26E9DCu;
    SET_GPR_U32(ctx, 31, 0x26E9E4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26E9DCu, 0x26E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E9E4u;
label_26e9e4:
    // 0x26e9e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9e8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x26e9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x26e9ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26e9f4: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x26e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26e9f8: 0xc05cd58  jal         func_173560
    ctx->pc = 0x26E9F8u;
    SET_GPR_U32(ctx, 31, 0x26EA00u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x26E9F8u, 0x26EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA00u;
label_26ea00:
    // 0x26ea00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ea00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ea04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26ea08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ea0c: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26EA0Cu;
    SET_GPR_U32(ctx, 31, 0x26EA14u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26EA0Cu, 0x26EA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA14u;
label_26ea14:
    // 0x26ea14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea1c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26ea20: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x26ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x26ea24: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26EA24u;
    SET_GPR_U32(ctx, 31, 0x26EA2Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26EA24u, 0x26EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA2Cu;
label_26ea2c:
    // 0x26ea2c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26ea2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26ea30: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26ea34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ea34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ea38: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26ea38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ea3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ea40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea44: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ea48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ea4c: 0x0  nop
    ctx->pc = 0x26ea4cu;
    // NOP
    // 0x26ea50: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26EA50u;
    {
        const bool branch_taken_0x26ea50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ea50) {
            ctx->pc = 0x26EA70u;
            goto label_26ea70;
        }
    }
    ctx->pc = 0x26EA58u;
    // 0x26ea58: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26ea5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ea5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ea60: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ea64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ea64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ea68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea6c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26ea6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_26ea70:
    // 0x26ea70: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26ea70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ea74: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26EA74u;
    SET_GPR_U32(ctx, 31, 0x26EA7Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26EA74u, 0x26EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EA7Cu;
label_26ea7c:
    // 0x26ea7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea80: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x26ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x26ea84: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26EA84u;
    {
        const bool branch_taken_0x26ea84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ea84) {
            ctx->pc = 0x26EADCu;
            goto label_26eadc;
        }
    }
    ctx->pc = 0x26EA8Cu;
    // 0x26ea8c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ea90: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26ea90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ea94: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26ea98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26ea98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ea9c: 0x0  nop
    ctx->pc = 0x26ea9cu;
    // NOP
    // 0x26eaa0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26eaa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26eaa4: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26eaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26eaa8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eaac: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26eab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eab4: 0x0  nop
    ctx->pc = 0x26eab4u;
    // NOP
    // 0x26eab8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26eab8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26eabc: 0x0  nop
    ctx->pc = 0x26eabcu;
    // NOP
    // 0x26eac0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x26EAC0u;
    {
        const bool branch_taken_0x26eac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26eac0) {
            ctx->pc = 0x26EB28u;
            goto label_26eb28;
        }
    }
    ctx->pc = 0x26EAC8u;
    // 0x26eac8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eacc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ead0: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26ead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x26ead4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26EAD4u;
    {
        const bool branch_taken_0x26ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ead4) {
            ctx->pc = 0x26EB28u;
            goto label_26eb28;
        }
    }
    ctx->pc = 0x26EADCu;
label_26eadc:
    // 0x26eadc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26eadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eae0: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26eae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26eae4: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x26eae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x26eae8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x26eae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x26eaec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26eaecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eaf0: 0x0  nop
    ctx->pc = 0x26eaf0u;
    // NOP
    // 0x26eaf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26eaf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26eaf8: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26eaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26eafc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb00: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26eb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26eb04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eb08: 0x0  nop
    ctx->pc = 0x26eb08u;
    // NOP
    // 0x26eb0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26eb0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26eb10: 0x0  nop
    ctx->pc = 0x26eb10u;
    // NOP
    // 0x26eb14: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26EB14u;
    {
        const bool branch_taken_0x26eb14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26eb14) {
            ctx->pc = 0x26EB28u;
            goto label_26eb28;
        }
    }
    ctx->pc = 0x26EB1Cu;
    // 0x26eb1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26eb1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eb20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb24: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26eb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_26eb28:
    // 0x26eb28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb2c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26eb2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26eb30: 0x10600084  beqz        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x26EB30u;
    {
        const bool branch_taken_0x26eb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb30) {
            ctx->pc = 0x26ED44u;
            goto label_26ed44;
        }
    }
    ctx->pc = 0x26EB38u;
    // 0x26eb38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb3c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26eb3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26eb40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26eb44: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26eb44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x26eb48: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x26EB48u;
    {
        const bool branch_taken_0x26eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb48) {
            ctx->pc = 0x26ED44u;
            goto label_26ed44;
        }
    }
    ctx->pc = 0x26EB50u;
label_26eb50:
    // 0x26eb50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb54: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x26eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x26eb58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26EB58u;
    {
        const bool branch_taken_0x26eb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb58) {
            ctx->pc = 0x26EB88u;
            goto label_26eb88;
        }
    }
    ctx->pc = 0x26EB60u;
    // 0x26eb60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb68: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26eb6c: 0x24060079  addiu       $a2, $zero, 0x79
    ctx->pc = 0x26eb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x26eb70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26eb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eb74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26eb74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26eb78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26EB78u;
    SET_GPR_U32(ctx, 31, 0x26EB80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26EB78u, 0x26EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB80u;
label_26eb80:
    // 0x26eb80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26EB80u;
    {
        const bool branch_taken_0x26eb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb80) {
            ctx->pc = 0x26EBA8u;
            goto label_26eba8;
        }
    }
    ctx->pc = 0x26EB88u;
label_26eb88:
    // 0x26eb88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26eb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26eb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26eb94: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x26eb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x26eb98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26eb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eb9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26eb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26eba0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26EBA0u;
    SET_GPR_U32(ctx, 31, 0x26EBA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26EBA0u, 0x26EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBA8u;
label_26eba8:
    // 0x26eba8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x26ebacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x26ebb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26ebb4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x26ebb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_26ebb8:
    // 0x26ebb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ebc0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26EBC0u;
    SET_GPR_U32(ctx, 31, 0x26EBC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26EBC0u, 0x26EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBC8u;
label_26ebc8:
    // 0x26ebc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebcc: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x26EBCCu;
    SET_GPR_U32(ctx, 31, 0x26EBD4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26EBCCu, 0x26EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBD4u;
label_26ebd4:
    // 0x26ebd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ebd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ebd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebdc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26ebdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ebe0: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26EBE0u;
    SET_GPR_U32(ctx, 31, 0x26EBE8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26EBE0u, 0x26EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBE8u;
label_26ebe8:
    // 0x26ebe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebf0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26ebf4: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x26ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x26ebf8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26EBF8u;
    SET_GPR_U32(ctx, 31, 0x26EC00u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26EBF8u, 0x26EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC00u;
label_26ec00:
    // 0x26ec00: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26ec00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26ec04: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26ec08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ec08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ec0c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ec10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ec10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ec14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec18: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ec1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ec1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ec20: 0x0  nop
    ctx->pc = 0x26ec20u;
    // NOP
    // 0x26ec24: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26EC24u;
    {
        const bool branch_taken_0x26ec24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ec24) {
            ctx->pc = 0x26EC44u;
            goto label_26ec44;
        }
    }
    ctx->pc = 0x26EC2Cu;
    // 0x26ec2c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26ec30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ec30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ec34: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ec38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ec38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ec3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec40: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26ec40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_26ec44:
    // 0x26ec44: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26ec44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ec48: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26EC48u;
    SET_GPR_U32(ctx, 31, 0x26EC50u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26EC48u, 0x26EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC50u;
label_26ec50:
    // 0x26ec50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec54: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x26ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x26ec58: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x26EC58u;
    {
        const bool branch_taken_0x26ec58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ec58) {
            ctx->pc = 0x26ECB0u;
            goto label_26ecb0;
        }
    }
    ctx->pc = 0x26EC60u;
    // 0x26ec60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ec60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec64: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26ec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ec68: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x26ec6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26ec6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ec70: 0x0  nop
    ctx->pc = 0x26ec70u;
    // NOP
    // 0x26ec74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ec74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ec78: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26ec78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26ec7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec80: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ec84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ec84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ec88: 0x0  nop
    ctx->pc = 0x26ec88u;
    // NOP
    // 0x26ec8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x26ec8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ec90: 0x0  nop
    ctx->pc = 0x26ec90u;
    // NOP
    // 0x26ec94: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x26EC94u;
    {
        const bool branch_taken_0x26ec94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ec94) {
            ctx->pc = 0x26ECFCu;
            goto label_26ecfc;
        }
    }
    ctx->pc = 0x26EC9Cu;
    // 0x26ec9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ec9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26eca0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eca4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26eca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x26eca8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26ECA8u;
    {
        const bool branch_taken_0x26eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eca8) {
            ctx->pc = 0x26ECFCu;
            goto label_26ecfc;
        }
    }
    ctx->pc = 0x26ECB0u;
label_26ecb0:
    // 0x26ecb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ecb4: 0xc4810188  lwc1        $f1, 0x188($a0)
    ctx->pc = 0x26ecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ecb8: 0x3c033f99  lui         $v1, 0x3F99
    ctx->pc = 0x26ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16281 << 16));
    // 0x26ecbc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x26ecbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x26ecc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26ecc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ecc4: 0x0  nop
    ctx->pc = 0x26ecc4u;
    // NOP
    // 0x26ecc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26ecc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26eccc: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x26ecccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x26ecd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ecd4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x26ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ecd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ecd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ecdc: 0x0  nop
    ctx->pc = 0x26ecdcu;
    // NOP
    // 0x26ece0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ece0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ece4: 0x0  nop
    ctx->pc = 0x26ece4u;
    // NOP
    // 0x26ece8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x26ECE8u;
    {
        const bool branch_taken_0x26ece8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ece8) {
            ctx->pc = 0x26ECFCu;
            goto label_26ecfc;
        }
    }
    ctx->pc = 0x26ECF0u;
    // 0x26ecf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26ecf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26ecf4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ecf8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x26ecf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
label_26ecfc:
    // 0x26ecfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed00: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26ed00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26ed04: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26ED04u;
    {
        const bool branch_taken_0x26ed04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ed04) {
            ctx->pc = 0x26ED44u;
            goto label_26ed44;
        }
    }
    ctx->pc = 0x26ED0Cu;
    // 0x26ed0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed10: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x26ed10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ed14: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26ed18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed1c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26ed1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26ed20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26ed20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26ed24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed28: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26ed28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26ed2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26ed30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ed34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed38: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26ed38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ed3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ed40: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_26ed44:
    // 0x26ed44: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x26ed44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26ed48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26ed48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26ed4c: 0x3e00008  jr          $ra
    ctx->pc = 0x26ED4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26ED4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26ED54u;
}
