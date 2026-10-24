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

// Function: Dest_adjust
// Address: 0x173810 - 0x173944
void Dest_adjust_0x173810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dest_adjust_0x173810");
#endif

    switch (ctx->pc) {
        case 0x173840u: goto label_173840;
        case 0x173850u: goto label_173850;
        case 0x173864u: goto label_173864;
        case 0x173878u: goto label_173878;
        case 0x17388cu: goto label_17388c;
        case 0x1738a0u: goto label_1738a0;
        case 0x1738e0u: goto label_1738e0;
        case 0x17390cu: goto label_17390c;
        case 0x173920u: goto label_173920;
        default: break;
    }

    ctx->pc = 0x173810u;

    // 0x173810: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x173810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x173814: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x173814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x173818: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x173818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x17381c: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x17381cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x173820: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x173820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x173824: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x173824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x173828: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x173828u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x17382c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x17382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173830: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x173830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173834: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x173834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x173838: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x173838u;
    SET_GPR_U32(ctx, 31, 0x173840u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x173838u, 0x173840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173840u;
label_173840:
    // 0x173840: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x173840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173844: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x173844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x173848: 0xc0455e6  jal         func_115798
    ctx->pc = 0x173848u;
    SET_GPR_U32(ctx, 31, 0x173850u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x173848u, 0x173850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173850u;
label_173850:
    // 0x173850: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x173850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x173854: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x173854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173858: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x173858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17385c: 0xc067844  jal         func_19E110
    ctx->pc = 0x17385Cu;
    SET_GPR_U32(ctx, 31, 0x173864u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x17385Cu, 0x173864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173864u;
label_173864:
    // 0x173864: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x173864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173868: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x173868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17386c: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x17386cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x173870: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x173870u;
    SET_GPR_U32(ctx, 31, 0x173878u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x173878u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173878u) { return; }
    ctx->pc = 0x173878u;
label_173878:
    // 0x173878: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x173878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17387c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x17387cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173880: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x173880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173884: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x173884u;
    SET_GPR_U32(ctx, 31, 0x17388Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x173884u, 0x17388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17388Cu;
label_17388c:
    // 0x17388c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17388cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x173890: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x173890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173894: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x173894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x173898: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x173898u;
    SET_GPR_U32(ctx, 31, 0x1738A0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x173898u, 0x1738A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738A0u;
label_1738a0:
    // 0x1738a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1738a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1738a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1738a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1738a8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1738a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1738ac: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1738acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1738b0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1738b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1738b4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1738b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1738b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1738b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1738bc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1738bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1738c0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1738c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1738c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1738c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1738c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1738c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1738cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1738ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1738d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1738d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1738d4: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x1738d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1738d8: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1738D8u;
    SET_GPR_U32(ctx, 31, 0x1738E0u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1738D8u, 0x1738E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1738E0u;
label_1738e0:
    // 0x1738e0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1738e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1738e4: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1738e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1738e8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1738e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1738ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1738ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1738f0: 0x0  nop
    ctx->pc = 0x1738f0u;
    // NOP
    // 0x1738f4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x1738F4u;
    {
        const bool branch_taken_0x1738f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1738f4) {
            ctx->pc = 0x173930u;
            goto label_173930;
        }
    }
    ctx->pc = 0x1738FCu;
    // 0x1738fc: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1738fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x173900: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x173900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x173904: 0xc040c24  jal         func_103090
    ctx->pc = 0x173904u;
    SET_GPR_U32(ctx, 31, 0x17390Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17390Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17390Cu) { return; }
    ctx->pc = 0x17390Cu;
label_17390c:
    // 0x17390c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17390cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x173910: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x173910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x173914: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x173914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x173918: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x173918u;
    SET_GPR_U32(ctx, 31, 0x173920u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x173920u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173920u) { return; }
    ctx->pc = 0x173920u;
label_173920:
    // 0x173920: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x173920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x173924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173928: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x173928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17392c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x17392cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_173930:
    // 0x173930: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x173930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173934: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x173934u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173938: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x173938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17393c: 0x3e00008  jr          $ra
    ctx->pc = 0x17393Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17393Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173944u;
}
