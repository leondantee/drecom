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

// Function: BTL_get_vec
// Address: 0x185290 - 0x185688
void BTL_get_vec_0x185290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BTL_get_vec_0x185290");
#endif

    switch (ctx->pc) {
        case 0x1852c4u: goto label_1852c4;
        case 0x1852d4u: goto label_1852d4;
        case 0x1852ecu: goto label_1852ec;
        case 0x1852fcu: goto label_1852fc;
        case 0x185310u: goto label_185310;
        case 0x185358u: goto label_185358;
        case 0x18540cu: goto label_18540c;
        case 0x185420u: goto label_185420;
        case 0x1855f0u: goto label_1855f0;
        case 0x18560cu: goto label_18560c;
        case 0x185658u: goto label_185658;
        case 0x185670u: goto label_185670;
        default: break;
    }

    ctx->pc = 0x185290u;

    // 0x185290: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x185290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x185294: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x185294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x185298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18529c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18529cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1852a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1852a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1852a4: 0x8c310af0  lw          $s1, 0xAF0($at)
    ctx->pc = 0x1852a4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1852a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1852a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1852ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1852acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1852b0: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1852b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1852b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1852b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1852b8: 0x244602a0  addiu       $a2, $v0, 0x2A0
    ctx->pc = 0x1852b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x1852bc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1852BCu;
    SET_GPR_U32(ctx, 31, 0x1852C4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1852BCu, 0x1852C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852C4u;
label_1852c4:
    // 0x1852c4: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1852c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1852c8: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x1852c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1852cc: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1852CCu;
    SET_GPR_U32(ctx, 31, 0x1852D4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1852CCu, 0x1852D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852D4u;
label_1852d4:
    // 0x1852d4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1852d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1852d8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1852d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1852dc: 0x262501a0  addiu       $a1, $s1, 0x1A0
    ctx->pc = 0x1852dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
    // 0x1852e0: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x1852e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x1852e4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1852E4u;
    SET_GPR_U32(ctx, 31, 0x1852ECu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1852E4u, 0x1852ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852ECu;
label_1852ec:
    // 0x1852ec: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1852ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1852f0: 0xc7ad0088  lwc1        $f13, 0x88($sp)
    ctx->pc = 0x1852f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1852f4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1852F4u;
    SET_GPR_U32(ctx, 31, 0x1852FCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1852F4u, 0x1852FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852FCu;
label_1852fc:
    // 0x1852fc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1852fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x185300: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x185300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185304: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x185304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185308: 0xc058f20  jal         func_163C80
    ctx->pc = 0x185308u;
    SET_GPR_U32(ctx, 31, 0x185310u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x185308u, 0x185310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185310u;
label_185310:
    // 0x185310: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x185310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x185314: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x185314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18531c: 0x0  nop
    ctx->pc = 0x18531cu;
    // NOP
    // 0x185320: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185324: 0x0  nop
    ctx->pc = 0x185324u;
    // NOP
    // 0x185328: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x185328u;
    {
        const bool branch_taken_0x185328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185328) {
            ctx->pc = 0x18534Cu;
            goto label_18534c;
        }
    }
    ctx->pc = 0x185330u;
    // 0x185330: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x185330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185334: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x185334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x185338: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x18533c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18533cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185340: 0x0  nop
    ctx->pc = 0x185340u;
    // NOP
    // 0x185344: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185348: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x185348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_18534c:
    // 0x18534c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x18534cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x185350: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x185350u;
    {
        const bool branch_taken_0x185350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185350) {
            ctx->pc = 0x185398u;
            goto label_185398;
        }
    }
    ctx->pc = 0x185358u;
label_185358:
    // 0x185358: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x185358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18535c: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x18535cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x185360: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x185360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x185364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x185364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185368: 0x0  nop
    ctx->pc = 0x185368u;
    // NOP
    // 0x18536c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18536cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x185370: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x185370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x185374: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x185374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18537c: 0x0  nop
    ctx->pc = 0x18537cu;
    // NOP
    // 0x185380: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185384: 0x0  nop
    ctx->pc = 0x185384u;
    // NOP
    // 0x185388: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x185388u;
    {
        const bool branch_taken_0x185388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185388) {
            ctx->pc = 0x1853A8u;
            goto label_1853a8;
        }
    }
    ctx->pc = 0x185390u;
    // 0x185390: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x185390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x185394: 0x0  nop
    ctx->pc = 0x185394u;
    // NOP
label_185398:
    // 0x185398: 0x2a03000f  slti        $v1, $s0, 0xF
    ctx->pc = 0x185398u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x18539c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x18539Cu;
    {
        const bool branch_taken_0x18539c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18539c) {
            ctx->pc = 0x185358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185358;
        }
    }
    ctx->pc = 0x1853A4u;
    // 0x1853a4: 0x0  nop
    ctx->pc = 0x1853a4u;
    // NOP
label_1853a8:
    // 0x1853a8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1853a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1853ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1853acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1853b0: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1853b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1853b4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1853b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1853b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1853b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1853bc: 0xac23033c  sw          $v1, 0x33C($at)
    ctx->pc = 0x1853bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x48033Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48033Cu, _value); } while (0);
    // 0x1853c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1853c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1853c4: 0x90230344  lbu         $v1, 0x344($at)
    ctx->pc = 0x1853c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x480344u));
    // 0x1853c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1853c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1853cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1853ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1853d0: 0x146000a7  bnez        $v1, . + 4 + (0xA7 << 2)
    ctx->pc = 0x1853D0u;
    {
        const bool branch_taken_0x1853d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1853d0) {
            ctx->pc = 0x185670u;
            goto label_185670;
        }
    }
    ctx->pc = 0x1853D8u;
    // 0x1853d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1853d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1853dc: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1853dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1853e0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1853e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1853e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1853e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1853e8: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1853E8u;
    {
        const bool branch_taken_0x1853e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1853e8) {
            ctx->pc = 0x185670u;
            goto label_185670;
        }
    }
    ctx->pc = 0x1853F0u;
    // 0x1853f0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1853f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1853f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1853f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1853f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1853f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1853fc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1853fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185400: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x185400u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185404: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x185404u;
    SET_GPR_U32(ctx, 31, 0x18540Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x185404u, 0x18540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18540Cu;
label_18540c:
    // 0x18540c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x18540cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x185410: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x185410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185414: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x185414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185418: 0xc058f20  jal         func_163C80
    ctx->pc = 0x185418u;
    SET_GPR_U32(ctx, 31, 0x185420u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x185418u, 0x185420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185420u;
label_185420:
    // 0x185420: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x185420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x185424: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185428: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18542c: 0x0  nop
    ctx->pc = 0x18542cu;
    // NOP
    // 0x185430: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185430u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185434: 0x0  nop
    ctx->pc = 0x185434u;
    // NOP
    // 0x185438: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x185438u;
    {
        const bool branch_taken_0x185438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185438) {
            ctx->pc = 0x185508u;
            goto label_185508;
        }
    }
    ctx->pc = 0x185440u;
    // 0x185440: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x185444: 0x90220347  lbu         $v0, 0x347($at)
    ctx->pc = 0x185444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x480347u));
    // 0x185448: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x185448u;
    {
        const bool branch_taken_0x185448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185448) {
            ctx->pc = 0x1854ACu;
            goto label_1854ac;
        }
    }
    ctx->pc = 0x185450u;
    // 0x185450: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185454: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x185454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x185458: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18545c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18545cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185460: 0x0  nop
    ctx->pc = 0x185460u;
    // NOP
    // 0x185464: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x185464u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185468: 0x0  nop
    ctx->pc = 0x185468u;
    // NOP
    // 0x18546c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x18546Cu;
    {
        const bool branch_taken_0x18546c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18546c) {
            ctx->pc = 0x185488u;
            goto label_185488;
        }
    }
    ctx->pc = 0x185474u;
    // 0x185474: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x185474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x185478: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18547c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18547cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185480: 0x0  nop
    ctx->pc = 0x185480u;
    // NOP
    // 0x185484: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x185484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_185488:
    // 0x185488: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18548c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x18548cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x185490: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185498: 0x0  nop
    ctx->pc = 0x185498u;
    // NOP
    // 0x18549c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18549cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1854a0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1854a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1854a4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1854A4u;
    {
        const bool branch_taken_0x1854a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1854a4) {
            ctx->pc = 0x1855C8u;
            goto label_1855c8;
        }
    }
    ctx->pc = 0x1854ACu;
label_1854ac:
    // 0x1854ac: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1854acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1854b0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1854b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1854b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1854b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1854b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1854b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1854bc: 0x0  nop
    ctx->pc = 0x1854bcu;
    // NOP
    // 0x1854c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1854c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1854c4: 0x0  nop
    ctx->pc = 0x1854c4u;
    // NOP
    // 0x1854c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1854C8u;
    {
        const bool branch_taken_0x1854c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1854c8) {
            ctx->pc = 0x1854E4u;
            goto label_1854e4;
        }
    }
    ctx->pc = 0x1854D0u;
    // 0x1854d0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1854d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1854d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1854d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1854d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1854d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1854dc: 0x0  nop
    ctx->pc = 0x1854dcu;
    // NOP
    // 0x1854e0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1854e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1854e4:
    // 0x1854e4: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1854e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1854e8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1854ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1854ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1854f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1854f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1854f4: 0x0  nop
    ctx->pc = 0x1854f4u;
    // NOP
    // 0x1854f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1854f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1854fc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1854fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x185500: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x185500u;
    {
        const bool branch_taken_0x185500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185500) {
            ctx->pc = 0x1855C8u;
            goto label_1855c8;
        }
    }
    ctx->pc = 0x185508u;
label_185508:
    // 0x185508: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18550c: 0x90220347  lbu         $v0, 0x347($at)
    ctx->pc = 0x18550cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x480347u));
    // 0x185510: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x185510u;
    {
        const bool branch_taken_0x185510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185510) {
            ctx->pc = 0x185574u;
            goto label_185574;
        }
    }
    ctx->pc = 0x185518u;
    // 0x185518: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18551c: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x18551cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x185520: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185528: 0x0  nop
    ctx->pc = 0x185528u;
    // NOP
    // 0x18552c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18552cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185530: 0x0  nop
    ctx->pc = 0x185530u;
    // NOP
    // 0x185534: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185534u;
    {
        const bool branch_taken_0x185534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185534) {
            ctx->pc = 0x185550u;
            goto label_185550;
        }
    }
    ctx->pc = 0x18553Cu;
    // 0x18553c: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x18553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
    // 0x185540: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185548: 0x0  nop
    ctx->pc = 0x185548u;
    // NOP
    // 0x18554c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18554cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_185550:
    // 0x185550: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185554: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x185554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x185558: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x185558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x18555c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18555cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185560: 0x0  nop
    ctx->pc = 0x185560u;
    // NOP
    // 0x185564: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x185564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x185568: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x185568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x18556c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18556Cu;
    {
        const bool branch_taken_0x18556c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18556c) {
            ctx->pc = 0x1855C8u;
            goto label_1855c8;
        }
    }
    ctx->pc = 0x185574u;
label_185574:
    // 0x185574: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x185574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185578: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x185578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x18557c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x185580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185584: 0x0  nop
    ctx->pc = 0x185584u;
    // NOP
    // 0x185588: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185588u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18558c: 0x0  nop
    ctx->pc = 0x18558cu;
    // NOP
    // 0x185590: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x185590u;
    {
        const bool branch_taken_0x185590 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185590) {
            ctx->pc = 0x1855ACu;
            goto label_1855ac;
        }
    }
    ctx->pc = 0x185598u;
    // 0x185598: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x185598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x18559c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1855a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1855a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1855a4: 0x0  nop
    ctx->pc = 0x1855a4u;
    // NOP
    // 0x1855a8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1855a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1855ac:
    // 0x1855ac: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1855acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1855b0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1855b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1855b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1855b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1855b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1855bc: 0x0  nop
    ctx->pc = 0x1855bcu;
    // NOP
    // 0x1855c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1855c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1855c4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1855c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1855c8:
    // 0x1855c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1855c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1855cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1855ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1855d0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1855d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1855d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1855d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1855d8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1855d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1855dc: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1855dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1855e0: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1855e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1855e4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1855e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1855e8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1855E8u;
    SET_GPR_U32(ctx, 31, 0x1855F0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1855E8u, 0x1855F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1855F0u;
label_1855f0:
    // 0x1855f0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1855f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1855f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1855f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1855f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1855f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1855fc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1855fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x185600: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x185600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185604: 0xc058f50  jal         func_163D40
    ctx->pc = 0x185604u;
    SET_GPR_U32(ctx, 31, 0x18560Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x185604u, 0x18560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18560Cu;
label_18560c:
    // 0x18560c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x18560cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x185610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185614: 0x0  nop
    ctx->pc = 0x185614u;
    // NOP
    // 0x185618: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x185618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x18561c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18561cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185620: 0x0  nop
    ctx->pc = 0x185620u;
    // NOP
    // 0x185624: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x185624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x185628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x185628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18562c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18562cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185630: 0x0  nop
    ctx->pc = 0x185630u;
    // NOP
    // 0x185634: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x185634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x185638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x185638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18563c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18563cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185640: 0x0  nop
    ctx->pc = 0x185640u;
    // NOP
    // 0x185644: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x185644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x185648: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x185648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18564c: 0xc7ac0094  lwc1        $f12, 0x94($sp)
    ctx->pc = 0x18564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185650: 0xc067844  jal         func_19E110
    ctx->pc = 0x185650u;
    SET_GPR_U32(ctx, 31, 0x185658u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x185650u, 0x185658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185658u;
label_185658:
    // 0x185658: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x18565c: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x18565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x185660: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x185660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x185664: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x185664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x185668: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x185668u;
    SET_GPR_U32(ctx, 31, 0x185670u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x185670u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185670u) { return; }
    ctx->pc = 0x185670u;
label_185670:
    // 0x185670: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x185670u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x185678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18567c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x18567cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x185680: 0x3e00008  jr          $ra
    ctx->pc = 0x185680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185688u;
}
