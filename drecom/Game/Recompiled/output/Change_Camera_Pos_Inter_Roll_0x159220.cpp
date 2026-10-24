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

// Function: Change_Camera_Pos_Inter_Roll
// Address: 0x159220 - 0x159458
void Change_Camera_Pos_Inter_Roll_0x159220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Change_Camera_Pos_Inter_Roll_0x159220");
#endif

    switch (ctx->pc) {
        case 0x1592bcu: goto label_1592bc;
        case 0x1592e8u: goto label_1592e8;
        case 0x1592fcu: goto label_1592fc;
        case 0x159310u: goto label_159310;
        case 0x1593bcu: goto label_1593bc;
        case 0x159414u: goto label_159414;
        case 0x15943cu: goto label_15943c;
        case 0x159448u: goto label_159448;
        default: break;
    }

    ctx->pc = 0x159220u;

    // 0x159220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x159224: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x159224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x159228: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x159228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x15922c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x15922cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x159230: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x159230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x159234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159238: 0x0  nop
    ctx->pc = 0x159238u;
    // NOP
    // 0x15923c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15923cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x159240: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159244: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x159244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159248: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15924c: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x15924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159250: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x159250u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x159254: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x159254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x159258: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15925c: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x15925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159260: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159264: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x159264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159268: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x159268u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15926c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x15926cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x159270: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159274: 0xc44101a8  lwc1        $f1, 0x1A8($v0)
    ctx->pc = 0x159274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159278: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15927c: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x15927cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159280: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x159280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x159284: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x159284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x159288: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x159288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15928c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x15928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159290: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x159290u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159294: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x159294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159298: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x159298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15929c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15929cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1592a0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1592a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1592a4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1592a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1592a8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1592a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1592ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1592acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1592b0: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x1592b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1592b4: 0xc045630  jal         func_1158C0
    ctx->pc = 0x1592B4u;
    SET_GPR_U32(ctx, 31, 0x1592BCu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x1592B4u, 0x1592BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592BCu;
label_1592bc:
    // 0x1592bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1592bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1592c0: 0xe44001b8  swc1        $f0, 0x1B8($v0)
    ctx->pc = 0x1592c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 440), bits); }
    // 0x1592c4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1592c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1592c8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1592c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1592cc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1592ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1592d0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1592d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1592d4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1592d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1592d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1592d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1592dc: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1592dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1592e0: 0xc045630  jal         func_1158C0
    ctx->pc = 0x1592E0u;
    SET_GPR_U32(ctx, 31, 0x1592E8u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x1592E0u, 0x1592E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592E8u;
label_1592e8:
    // 0x1592e8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1592e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1592ec: 0xc7ac0014  lwc1        $f12, 0x14($sp)
    ctx->pc = 0x1592ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1592f0: 0xc7ad0038  lwc1        $f13, 0x38($sp)
    ctx->pc = 0x1592f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1592f4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1592F4u;
    SET_GPR_U32(ctx, 31, 0x1592FCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1592F4u, 0x1592FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592FCu;
label_1592fc:
    // 0x1592fc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1592fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x159300: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x159300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159304: 0xc7ad0010  lwc1        $f13, 0x10($sp)
    ctx->pc = 0x159304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x159308: 0xc0455e6  jal         func_115798
    ctx->pc = 0x159308u;
    SET_GPR_U32(ctx, 31, 0x159310u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x159308u, 0x159310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159310u;
label_159310:
    // 0x159310: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x159310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x159314: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x159314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x159318: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x159318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15931c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x15931cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x159320: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x159320u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x159324: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x159324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x159328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15932c: 0x0  nop
    ctx->pc = 0x15932cu;
    // NOP
    // 0x159330: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x159330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x159334: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x159334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159338: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15933c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15933cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x159340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x159340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159344: 0x0  nop
    ctx->pc = 0x159344u;
    // NOP
    // 0x159348: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x159348u;
    {
        const bool branch_taken_0x159348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x159348) {
            ctx->pc = 0x15936Cu;
            goto label_15936c;
        }
    }
    ctx->pc = 0x159350u;
    // 0x159350: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x159350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159354: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x159354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x159358: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x159358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15935c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x15935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159360: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159360u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159364: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x159364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x159368: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x159368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_15936c:
    // 0x15936c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x15936cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159370: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159374: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x159374u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x159378: 0x0  nop
    ctx->pc = 0x159378u;
    // NOP
    // 0x15937c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x15937Cu;
    {
        const bool branch_taken_0x15937c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15937c) {
            ctx->pc = 0x1593A0u;
            goto label_1593a0;
        }
    }
    ctx->pc = 0x159384u;
    // 0x159384: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x159384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159388: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x159388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15938c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15938cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159390: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x159390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159394: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x159394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x159398: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x159398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15939c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x15939cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1593a0:
    // 0x1593a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1593a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1593a4: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x1593a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x1593a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1593a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1593ac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1593acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1593b0: 0x24455550  addiu       $a1, $v0, 0x5550
    ctx->pc = 0x1593b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
    // 0x1593b4: 0xc040d62  jal         func_103588
    ctx->pc = 0x1593B4u;
    SET_GPR_U32(ctx, 31, 0x1593BCu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x1593BCu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1593BCu) { return; }
    ctx->pc = 0x1593BCu;
label_1593bc:
    // 0x1593bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1593bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1593c0: 0xc4400190  lwc1        $f0, 0x190($v0)
    ctx->pc = 0x1593c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1593c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1593c8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1593c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1593cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1593ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1593d0: 0xc4400194  lwc1        $f0, 0x194($v0)
    ctx->pc = 0x1593d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1593d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1593d8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1593d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1593dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1593dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1593e0: 0xc4400198  lwc1        $f0, 0x198($v0)
    ctx->pc = 0x1593e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1593e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1593e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1593e8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1593e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1593ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1593ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1593f0: 0x0  nop
    ctx->pc = 0x1593f0u;
    // NOP
    // 0x1593f4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1593f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1593f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1593f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1593fc: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x1593fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x159400: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159404: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x159404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159408: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x159408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15940c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15940Cu;
    SET_GPR_U32(ctx, 31, 0x159414u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159414u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159414u) { return; }
    ctx->pc = 0x159414u;
label_159414:
    // 0x159414: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15941c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159420: 0xe440014c  swc1        $f0, 0x14C($v0)
    ctx->pc = 0x159420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 332), bits); }
    // 0x159424: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x159424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159428: 0xc44001bc  lwc1        $f0, 0x1BC($v0)
    ctx->pc = 0x159428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15942c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x15942cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x159430: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x159430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159434: 0xc056718  jal         func_159C60
    ctx->pc = 0x159434u;
    SET_GPR_U32(ctx, 31, 0x15943Cu);
    ctx->pc = 0x159C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C60u, 0x159434u, 0x15943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15943Cu;
label_15943c:
    // 0x15943c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x159440: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159440u;
    SET_GPR_U32(ctx, 31, 0x159448u);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159440u, 0x159448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159448u;
label_159448:
    // 0x159448: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x159448u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15944c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x15944cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159450: 0x3e00008  jr          $ra
    ctx->pc = 0x159450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159458u;
}
