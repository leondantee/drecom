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

// Function: Check_front_wall
// Address: 0x163050 - 0x163264
void Check_front_wall_0x163050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_front_wall_0x163050");
#endif

    switch (ctx->pc) {
        case 0x163074u: goto label_163074;
        case 0x163114u: goto label_163114;
        case 0x163128u: goto label_163128;
        case 0x163140u: goto label_163140;
        case 0x163168u: goto label_163168;
        case 0x163208u: goto label_163208;
        case 0x16321cu: goto label_16321c;
        case 0x163234u: goto label_163234;
        default: break;
    }

    ctx->pc = 0x163050u;

    // 0x163050: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x163050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x163054: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x163054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x163058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16305c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x16305cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x163060: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x163060u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x163064: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163068: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x163068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16306c: 0xc067844  jal         func_19E110
    ctx->pc = 0x16306Cu;
    SET_GPR_U32(ctx, 31, 0x163074u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x16306Cu, 0x163074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163074u;
label_163074:
    // 0x163074: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x163074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x163078: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x163078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x16307c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16307cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163080: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x163080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x163084: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x163084u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x163088: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x163088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x16308c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16308cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163090: 0x0  nop
    ctx->pc = 0x163090u;
    // NOP
    // 0x163094: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x163094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x163098: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x163098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16309c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x16309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1630a0: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x1630a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1630a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1630a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1630a8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1630a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1630ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1630acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1630b0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1630b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1630b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1630b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1630b8: 0x0  nop
    ctx->pc = 0x1630b8u;
    // NOP
    // 0x1630bc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1630bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1630c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1630c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1630c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1630c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1630c8: 0x0  nop
    ctx->pc = 0x1630c8u;
    // NOP
    // 0x1630cc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1630ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1630d0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1630d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1630d4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1630d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1630d8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1630d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1630dc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1630dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1630e0: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x1630e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x1630e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1630e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1630e8: 0x0  nop
    ctx->pc = 0x1630e8u;
    // NOP
    // 0x1630ec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1630ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1630f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1630f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1630f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1630f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1630f8: 0x0  nop
    ctx->pc = 0x1630f8u;
    // NOP
    // 0x1630fc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1630fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x163100: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x163100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x163104: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x163104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163108: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x163108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16310c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x16310Cu;
    SET_GPR_U32(ctx, 31, 0x163114u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x163114u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163114u) { return; }
    ctx->pc = 0x163114u;
label_163114:
    // 0x163114: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x163114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163118: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x163118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16311c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x16311cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163120: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x163120u;
    SET_GPR_U32(ctx, 31, 0x163128u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x163128u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163128u) { return; }
    ctx->pc = 0x163128u;
label_163128:
    // 0x163128: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x163128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16312c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16312cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x163130: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x163130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163134: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x163134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x163138: 0xc059e1c  jal         func_167870
    ctx->pc = 0x163138u;
    SET_GPR_U32(ctx, 31, 0x163140u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x163138u, 0x163140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163140u;
label_163140:
    // 0x163140: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x163140u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x163144: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163144u;
    {
        const bool branch_taken_0x163144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x163144) {
            ctx->pc = 0x163158u;
            goto label_163158;
        }
    }
    ctx->pc = 0x16314Cu;
    // 0x16314c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x16314cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x163150: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x163150u;
    {
        const bool branch_taken_0x163150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163150) {
            ctx->pc = 0x163250u;
            goto label_163250;
        }
    }
    ctx->pc = 0x163158u;
label_163158:
    // 0x163158: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16315c: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x16315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163160: 0xc067844  jal         func_19E110
    ctx->pc = 0x163160u;
    SET_GPR_U32(ctx, 31, 0x163168u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x163160u, 0x163168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163168u;
label_163168:
    // 0x163168: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16316c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x16316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x163170: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x163170u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163174: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x163174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x163178: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x163178u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16317c: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x16317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
    // 0x163180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163184: 0x0  nop
    ctx->pc = 0x163184u;
    // NOP
    // 0x163188: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x163188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x16318c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x163190: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x163190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x163194: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x163194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163198: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x163198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16319c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x16319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1631a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1631a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1631a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1631a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1631a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1631a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631ac: 0x0  nop
    ctx->pc = 0x1631acu;
    // NOP
    // 0x1631b0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1631b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1631b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1631b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1631b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1631b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631bc: 0x0  nop
    ctx->pc = 0x1631bcu;
    // NOP
    // 0x1631c0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1631c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1631c4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1631c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1631c8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1631c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1631cc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1631ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1631d0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1631d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1631d4: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x1631d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x1631d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1631d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631dc: 0x0  nop
    ctx->pc = 0x1631dcu;
    // NOP
    // 0x1631e0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1631e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1631e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1631e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1631e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1631e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631ec: 0x0  nop
    ctx->pc = 0x1631ecu;
    // NOP
    // 0x1631f0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1631f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1631f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1631f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1631f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1631fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1631fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x163200: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x163200u;
    SET_GPR_U32(ctx, 31, 0x163208u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x163208u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163208u) { return; }
    ctx->pc = 0x163208u;
label_163208:
    // 0x163208: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x163208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16320c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163210: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x163210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163214: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x163214u;
    SET_GPR_U32(ctx, 31, 0x16321Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x16321Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16321Cu) { return; }
    ctx->pc = 0x16321Cu;
label_16321c:
    // 0x16321c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x163220: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x163220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x163224: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x163224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163228: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x163228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x16322c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x16322Cu;
    SET_GPR_U32(ctx, 31, 0x163234u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x16322Cu, 0x163234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163234u;
label_163234:
    // 0x163234: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x163234u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x163238: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163238u;
    {
        const bool branch_taken_0x163238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x163238) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x163240u;
    // 0x163240: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x163240u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x163244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x163244u;
    {
        const bool branch_taken_0x163244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163244) {
            ctx->pc = 0x163250u;
            goto label_163250;
        }
    }
    ctx->pc = 0x16324Cu;
label_16324c:
    // 0x16324c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_163250:
    // 0x163250: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x163250u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163258: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x163258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16325c: 0x3e00008  jr          $ra
    ctx->pc = 0x16325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16325Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163264u;
}
