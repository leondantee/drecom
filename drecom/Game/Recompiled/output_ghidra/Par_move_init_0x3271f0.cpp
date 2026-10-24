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

// Function: Par_move_init
// Address: 0x3271f0 - 0x327378
void Par_move_init_0x3271f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Par_move_init_0x3271f0");
#endif

    switch (ctx->pc) {
        case 0x327210u: goto label_327210;
        case 0x32721cu: goto label_32721c;
        case 0x327260u: goto label_327260;
        case 0x32726cu: goto label_32726c;
        case 0x327278u: goto label_327278;
        case 0x3272d0u: goto label_3272d0;
        case 0x3272e8u: goto label_3272e8;
        case 0x327300u: goto label_327300;
        case 0x32731cu: goto label_32731c;
        default: break;
    }

    ctx->pc = 0x3271f0u;

    // 0x3271f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3271f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3271f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3271f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3271f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3271f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3271fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x3271fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x327200: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x327200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x327204: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x327204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327208: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x327208u;
    SET_GPR_U32(ctx, 31, 0x327210u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x327208u, 0x327210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327210u;
label_327210:
    // 0x327210: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x327210u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x327214: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x327214u;
    {
        const bool branch_taken_0x327214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327214) {
            ctx->pc = 0x327350u;
            goto label_327350;
        }
    }
    ctx->pc = 0x32721Cu;
label_32721c:
    // 0x32721c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x32721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327220: 0x90620041  lbu         $v0, 0x41($v1)
    ctx->pc = 0x327220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
    // 0x327224: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x327224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x327228: 0xa0620041  sb          $v0, 0x41($v1)
    ctx->pc = 0x327228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x32722c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x32722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327230: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x327230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x327234: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x327234u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327238: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x327238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32723c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x32723cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x327240: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x327240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327244: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x327244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x327248: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x327248u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32724c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32724cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327250: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x327250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x327254: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x327254u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x327258: 0xc067648  jal         func_19D920
    ctx->pc = 0x327258u;
    SET_GPR_U32(ctx, 31, 0x327260u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x327258u, 0x327260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327260u;
label_327260:
    // 0x327260: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x327260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x327264: 0xc067648  jal         func_19D920
    ctx->pc = 0x327264u;
    SET_GPR_U32(ctx, 31, 0x32726Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x327264u, 0x32726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32726Cu;
label_32726c:
    // 0x32726c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x32726cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x327270: 0xc067648  jal         func_19D920
    ctx->pc = 0x327270u;
    SET_GPR_U32(ctx, 31, 0x327278u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x327270u, 0x327278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327278u;
label_327278:
    // 0x327278: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x327278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x32727c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x32727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327280: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x327280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327284: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x327284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x327288: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x327288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32728c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x32728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327290: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x327290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x327294: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x327294u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x327298: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x327298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32729c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x32729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3272a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3272a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3272a4: 0x46020040  add.s       $f1, $f0, $f2
    ctx->pc = 0x3272a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3272a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3272a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3272ac: 0xc4400238  lwc1        $f0, 0x238($v0)
    ctx->pc = 0x3272acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3272b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3272b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3272b4: 0x0  nop
    ctx->pc = 0x3272b4u;
    // NOP
    // 0x3272b8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3272B8u;
    {
        const bool branch_taken_0x3272b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3272b8) {
            ctx->pc = 0x3272D0u;
            goto label_3272d0;
        }
    }
    ctx->pc = 0x3272C0u;
    // 0x3272c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3272c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3272c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272c8: 0xc0675b8  jal         func_19D6E0
    ctx->pc = 0x3272C8u;
    SET_GPR_U32(ctx, 31, 0x3272D0u);
    ctx->pc = 0x19D6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6E0u, 0x3272C8u, 0x3272D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272D0u;
label_3272d0:
    // 0x3272d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3272d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3272d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3272d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3272d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272dc: 0xc44c0238  lwc1        $f12, 0x238($v0)
    ctx->pc = 0x3272dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3272e0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x3272E0u;
    SET_GPR_U32(ctx, 31, 0x3272E8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x3272E8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3272E8u) { return; }
    ctx->pc = 0x3272E8u;
label_3272e8:
    // 0x3272e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3272e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3272ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3272ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3272f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272f4: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x3272f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x3272f8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3272F8u;
    SET_GPR_U32(ctx, 31, 0x327300u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3272F8u, 0x327300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327300u;
label_327300:
    // 0x327300: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327304: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x327304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327308: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x327308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x32730c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327310: 0xc44c0224  lwc1        $f12, 0x224($v0)
    ctx->pc = 0x327310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327314: 0xc040c8c  jal         func_103230
    ctx->pc = 0x327314u;
    SET_GPR_U32(ctx, 31, 0x32731Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x32731Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32731Cu) { return; }
    ctx->pc = 0x32731Cu;
label_32731c:
    // 0x32731c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32731cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x327320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327324: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327328: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x327328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x32732c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x32732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327330: 0x946301a8  lhu         $v1, 0x1A8($v1)
    ctx->pc = 0x327330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x327334: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x327334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x327338: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x327338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32733c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x32733cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x327340: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327344: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x327344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x327348: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x327348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x32734c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32734cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_327350:
    // 0x327350: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x327350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327354: 0x8c630298  lw          $v1, 0x298($v1)
    ctx->pc = 0x327354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 664)));
    // 0x327358: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x327358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x32735c: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x32735Cu;
    {
        const bool branch_taken_0x32735c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32735c) {
            ctx->pc = 0x32721Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32721c;
        }
    }
    ctx->pc = 0x327364u;
    // 0x327364: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x327364u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32736c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x32736cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327370: 0x3e00008  jr          $ra
    ctx->pc = 0x327370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327378u;
}
