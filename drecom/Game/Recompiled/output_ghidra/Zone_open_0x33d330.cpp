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

// Function: Zone_open
// Address: 0x33d330 - 0x33d8f0
void Zone_open_0x33d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Zone_open_0x33d330");
#endif

    switch (ctx->pc) {
        case 0x33d3a0u: goto label_33d3a0;
        case 0x33d3b4u: goto label_33d3b4;
        case 0x33d684u: goto label_33d684;
        case 0x33d7dcu: goto label_33d7dc;
        case 0x33d7fcu: goto label_33d7fc;
        case 0x33d88cu: goto label_33d88c;
        case 0x33d8acu: goto label_33d8ac;
        default: break;
    }

    ctx->pc = 0x33d330u;

    // 0x33d330: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33d330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x33d334: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x33d334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x33d338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33d338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33d33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33d33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33d340: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33d344: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x33d344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x33d348: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33d348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33d34c: 0x24505450  addiu       $s0, $v0, 0x5450
    ctx->pc = 0x33d34cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33d350: 0x8e120134  lw          $s2, 0x134($s0)
    ctx->pc = 0x33d350u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x895584u));
    // 0x33d354: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x33d354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x895452u));
    // 0x33d358: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33d358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d35c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33d360: 0x106200b5  beq         $v1, $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x33D360u;
    {
        const bool branch_taken_0x33d360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33d360) {
            ctx->pc = 0x33D638u;
            goto label_33d638;
        }
    }
    ctx->pc = 0x33D368u;
    // 0x33d368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d36c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x33D36Cu;
    {
        const bool branch_taken_0x33d36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33d36c) {
            ctx->pc = 0x33D440u;
            goto label_33d440;
        }
    }
    ctx->pc = 0x33D374u;
    // 0x33d374: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D374u;
    {
        const bool branch_taken_0x33d374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d374) {
            ctx->pc = 0x33D384u;
            goto label_33d384;
        }
    }
    ctx->pc = 0x33D37Cu;
    // 0x33d37c: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x33D37Cu;
    {
        const bool branch_taken_0x33d37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d37c) {
            ctx->pc = 0x33D8D0u;
            goto label_33d8d0;
        }
    }
    ctx->pc = 0x33D384u;
label_33d384:
    // 0x33d384: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d388: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x33d388u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d38c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33d38cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33d390: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33d390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d394: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x33d394u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33d398: 0xc077a14  jal         func_1DE850
    ctx->pc = 0x33D398u;
    SET_GPR_U32(ctx, 31, 0x33D3A0u);
    ctx->pc = 0x1DE850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE850u, 0x33D398u, 0x33D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D3A0u;
label_33d3a0:
    // 0x33d3a0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x33d3a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x33d3a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d3a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33d3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d3ac: 0xc077a14  jal         func_1DE850
    ctx->pc = 0x33D3ACu;
    SET_GPR_U32(ctx, 31, 0x33D3B4u);
    ctx->pc = 0x1DE850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE850u, 0x33D3ACu, 0x33D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D3B4u;
label_33d3b4:
    // 0x33d3b4: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x33d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x33d3b8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33d3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d3bc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d3c0: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x33d3c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x33d3c4: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x33d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x33d3c8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d3cc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d3d0: 0x245101b0  addiu       $s1, $v0, 0x1B0
    ctx->pc = 0x33d3d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x33d3d4: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x33d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x33d3d8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d3dc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d3e0: 0x24510240  addiu       $s1, $v0, 0x240
    ctx->pc = 0x33d3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x33d3e4: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x33d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x33d3e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d3ec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d3f0: 0x245102d0  addiu       $s1, $v0, 0x2D0
    ctx->pc = 0x33d3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x33d3f4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x33d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33d3f8: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x33d3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x33d3fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d400: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d404: 0x24510090  addiu       $s1, $v0, 0x90
    ctx->pc = 0x33d404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33d408: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x33d408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33d40c: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x33d40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x33d410: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x33d410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33d414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d418: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x33d418u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x33d41c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x33d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x33d420: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x33d420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x33d424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d428: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d42c: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x33d42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x33d430: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d434: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x33d434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x33d438: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d43c: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x33d43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
label_33d440:
    // 0x33d440: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d444: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x33d444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d448: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d44c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d450: 0x0  nop
    ctx->pc = 0x33d450u;
    // NOP
    // 0x33d454: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x33D454u;
    {
        const bool branch_taken_0x33d454 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d454) {
            ctx->pc = 0x33D4BCu;
            goto label_33d4bc;
        }
    }
    ctx->pc = 0x33D45Cu;
    // 0x33d45c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d460: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d464: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d468: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x33d468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d46c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d46cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d470: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x33d470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x33d474: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d478: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d47c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d480: 0xc44001a8  lwc1        $f0, 0x1A8($v0)
    ctx->pc = 0x33d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d484: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d484u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d488: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x33d488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x33d48c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d490: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d494: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x33d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d498: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d49c: 0xe64001a0  swc1        $f0, 0x1A0($s2)
    ctx->pc = 0x33d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x33d4a0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d4a4: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d4a8: 0xc64001a8  lwc1        $f0, 0x1A8($s2)
    ctx->pc = 0x33d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d4acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d4b0: 0xe64001a8  swc1        $f0, 0x1A8($s2)
    ctx->pc = 0x33d4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
    // 0x33d4b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33D4B4u;
    {
        const bool branch_taken_0x33d4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d4b4) {
            ctx->pc = 0x33D4E4u;
            goto label_33d4e4;
        }
    }
    ctx->pc = 0x33D4BCu;
label_33d4bc:
    // 0x33d4bc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d4c4: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x33d4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x33d4c8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d4d0: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x33d4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x33d4d4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4d8: 0xe64001a0  swc1        $f0, 0x1A0($s2)
    ctx->pc = 0x33d4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x33d4dc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4e0: 0xe64001a8  swc1        $f0, 0x1A8($s2)
    ctx->pc = 0x33d4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
label_33d4e4:
    // 0x33d4e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d4e8: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x33d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d4ec: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d4f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d4f4: 0x0  nop
    ctx->pc = 0x33d4f4u;
    // NOP
    // 0x33d4f8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x33D4F8u;
    {
        const bool branch_taken_0x33d4f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d4f8) {
            ctx->pc = 0x33D534u;
            goto label_33d534;
        }
    }
    ctx->pc = 0x33D500u;
    // 0x33d500: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d504: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d508: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d50c: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x33d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d510: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d514: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x33d514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x33d518: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d51c: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d520: 0xc64001a4  lwc1        $f0, 0x1A4($s2)
    ctx->pc = 0x33d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d524: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d528: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x33d528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    // 0x33d52c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33D52Cu;
    {
        const bool branch_taken_0x33d52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d52c) {
            ctx->pc = 0x33D548u;
            goto label_33d548;
        }
    }
    ctx->pc = 0x33D534u;
label_33d534:
    // 0x33d534: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d538: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d53c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x33d53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x33d540: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d544: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x33d544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
label_33d548:
    // 0x33d548: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d54c: 0xc46112cc  lwc1        $f1, 0x12CC($v1)
    ctx->pc = 0x33d54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d550: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x33d550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x33d554: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x33d554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x33d558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d55c: 0x0  nop
    ctx->pc = 0x33d55cu;
    // NOP
    // 0x33d560: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33d560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33d564: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x33d564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x33d568: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33d568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d56c: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x33d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x33d570: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d574: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x33d574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x33d578: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x33d578u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x33d57c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x33D57Cu;
    {
        const bool branch_taken_0x33d57c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d57c) {
            ctx->pc = 0x33D5A8u;
            goto label_33d5a8;
        }
    }
    ctx->pc = 0x33D584u;
    // 0x33d584: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d588: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x33d588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d58c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d590: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33d590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d594: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x33d594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x33d598: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33d598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d59c: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x33d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x33d5a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d5a4: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x33d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
label_33d5a8:
    // 0x33d5a8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d5ac: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x33d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d5b0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d5b8: 0x0  nop
    ctx->pc = 0x33d5b8u;
    // NOP
    // 0x33d5bc: 0x450100c4  bc1t        . + 4 + (0xC4 << 2)
    ctx->pc = 0x33D5BCu;
    {
        const bool branch_taken_0x33d5bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d5bc) {
            ctx->pc = 0x33D8D0u;
            goto label_33d8d0;
        }
    }
    ctx->pc = 0x33D5C4u;
    // 0x33d5c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d5c8: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x33d5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d5cc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d5d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d5d4: 0x0  nop
    ctx->pc = 0x33d5d4u;
    // NOP
    // 0x33d5d8: 0x450100bd  bc1t        . + 4 + (0xBD << 2)
    ctx->pc = 0x33D5D8u;
    {
        const bool branch_taken_0x33d5d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d5d8) {
            ctx->pc = 0x33D8D0u;
            goto label_33d8d0;
        }
    }
    ctx->pc = 0x33D5E0u;
    // 0x33d5e0: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d5e8: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x33d5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x33d5ec: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d5f4: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x33d5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x33d5f8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d5fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d600: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x33d600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x33d604: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d608: 0xe64001a0  swc1        $f0, 0x1A0($s2)
    ctx->pc = 0x33d608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
    // 0x33d60c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d610: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x33d610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    // 0x33d614: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x33d614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d618: 0xe64001a8  swc1        $f0, 0x1A8($s2)
    ctx->pc = 0x33d618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 424), bits); }
    // 0x33d61c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x33d61cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x33d620: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33d624: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x33d624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x33d628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d62c: 0xa20200b8  sb          $v0, 0xB8($s0)
    ctx->pc = 0x33d62cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x33d630: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x33D630u;
    {
        const bool branch_taken_0x33d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d630) {
            ctx->pc = 0x33D8D0u;
            goto label_33d8d0;
        }
    }
    ctx->pc = 0x33D638u;
label_33d638:
    // 0x33d638: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d63c: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d640: 0x2c410081  sltiu       $at, $v0, 0x81
    ctx->pc = 0x33d640u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x33d644: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x33D644u;
    {
        const bool branch_taken_0x33d644 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d644) {
            ctx->pc = 0x33D668u;
            goto label_33d668;
        }
    }
    ctx->pc = 0x33D64Cu;
    // 0x33d64c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x33d64cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33d650: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d654: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x33d654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d658: 0x245102d0  addiu       $s1, $v0, 0x2D0
    ctx->pc = 0x33d658u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x33d65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d660: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x33D660u;
    {
        const bool branch_taken_0x33d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d660) {
            ctx->pc = 0x33D8D4u;
            goto label_33d8d4;
        }
    }
    ctx->pc = 0x33D668u;
label_33d668:
    // 0x33d668: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d66c: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d670: 0x2c410041  sltiu       $at, $v0, 0x41
    ctx->pc = 0x33d670u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x33d674: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D674u;
    {
        const bool branch_taken_0x33d674 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d674) {
            ctx->pc = 0x33D684u;
            goto label_33d684;
        }
    }
    ctx->pc = 0x33D67Cu;
    // 0x33d67c: 0xc0cf63c  jal         func_33D8F0
    ctx->pc = 0x33D67Cu;
    SET_GPR_U32(ctx, 31, 0x33D684u);
    ctx->pc = 0x33D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D8F0u, 0x33D67Cu, 0x33D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D684u;
label_33d684:
    // 0x33d684: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d688: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d68c: 0x2c410031  sltiu       $at, $v0, 0x31
    ctx->pc = 0x33d68cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x33d690: 0x1420007e  bnez        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x33D690u;
    {
        const bool branch_taken_0x33d690 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d690) {
            ctx->pc = 0x33D88Cu;
            goto label_33d88c;
        }
    }
    ctx->pc = 0x33D698u;
    // 0x33d698: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d69c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33d6a0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d6a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d6a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d6ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33d6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d6b0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33d6b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d6b8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33d6bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d6c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d6c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d6c8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33d6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33d6cc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33d6d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d6d4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d6d8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33d6d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33d6dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33d6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d6e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33D6E0u;
    {
        const bool branch_taken_0x33d6e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x33d6e0) {
            ctx->pc = 0x33D6FCu;
            goto label_33d6fc;
        }
    }
    ctx->pc = 0x33D6E8u;
    // 0x33d6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d6ec: 0x0  nop
    ctx->pc = 0x33d6ecu;
    // NOP
    // 0x33d6f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33d6f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d6f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D6F4u;
    {
        const bool branch_taken_0x33d6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d6f4) {
            ctx->pc = 0x33D718u;
            goto label_33d718;
        }
    }
    ctx->pc = 0x33D6FCu;
label_33d6fc:
    // 0x33d6fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x33d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x33d700: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33d704: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33d704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33d708: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33d708u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d70c: 0x0  nop
    ctx->pc = 0x33d70cu;
    // NOP
    // 0x33d710: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33d710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d714: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33d714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_33d718:
    // 0x33d718: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x33d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x33d71c: 0x34420e56  ori         $v0, $v0, 0xE56
    ctx->pc = 0x33d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3670);
    // 0x33d720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d724: 0x0  nop
    ctx->pc = 0x33d724u;
    // NOP
    // 0x33d728: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x33d728u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x33d72c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x33d72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x33d730: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d734: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33d734u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33d738: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d73c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33d744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d748: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33d748u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33d74c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d750: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33d750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33d754: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33d754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33d758: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33d758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33d75c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d760: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33d764: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33d764u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33d768: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d76c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33d76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33d770: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33d770u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33d774: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d778: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33D778u;
    {
        const bool branch_taken_0x33d778 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x33d778) {
            ctx->pc = 0x33D794u;
            goto label_33d794;
        }
    }
    ctx->pc = 0x33D780u;
    // 0x33d780: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d784: 0x0  nop
    ctx->pc = 0x33d784u;
    // NOP
    // 0x33d788: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33d788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d78c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D78Cu;
    {
        const bool branch_taken_0x33d78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d78c) {
            ctx->pc = 0x33D7B0u;
            goto label_33d7b0;
        }
    }
    ctx->pc = 0x33D794u;
label_33d794:
    // 0x33d794: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x33d794u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x33d798: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33d798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x33d79c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33d79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33d7a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33d7a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d7a4: 0x0  nop
    ctx->pc = 0x33d7a4u;
    // NOP
    // 0x33d7a8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x33d7a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33d7ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33d7acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_33d7b0:
    // 0x33d7b0: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x33d7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d7b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33d7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33d7b8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x33d7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x33d7bc: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x33d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d7c0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x33d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x33d7c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33d7c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33d7c8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x33d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33d7cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33d7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33d7d0: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x33d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33d7d4: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x33D7D4u;
    SET_GPR_U32(ctx, 31, 0x33D7DCu);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x33D7D4u, 0x33D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D7DCu;
label_33d7dc:
    // 0x33d7dc: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x33d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x33d7e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d7e4: 0x0  nop
    ctx->pc = 0x33d7e4u;
    // NOP
    // 0x33d7e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33d7e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33d7ec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x33d7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33d7f0: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x33d7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33d7f4: 0xc0454c4  jal         func_115310
    ctx->pc = 0x33D7F4u;
    SET_GPR_U32(ctx, 31, 0x33D7FCu);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x33D7F4u, 0x33D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D7FCu;
label_33d7fc:
    // 0x33d7fc: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x33d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x33d800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33d800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d804: 0x0  nop
    ctx->pc = 0x33d804u;
    // NOP
    // 0x33d808: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33d808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33d80c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x33d80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33d810: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x33d810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33d814: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33d814u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33d818: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x33d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33d81c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33d81cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33d820: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x33d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d824: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x33d824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x33d828: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x33d828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x33d82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d830: 0x0  nop
    ctx->pc = 0x33d830u;
    // NOP
    // 0x33d834: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x33d834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33d838: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x33d838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33d83c: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x33d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x33d840: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x33d840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x33d844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33d844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d848: 0x0  nop
    ctx->pc = 0x33d848u;
    // NOP
    // 0x33d84c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x33d84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x33d850: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x33d850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x33d854: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x33d854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x33d858: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x33d858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33d85c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x33d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x33d860: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33d860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33d864: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x33d864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x33d868: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33d868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33d86c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x33d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x33d870: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x33d870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x33d874: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x33d874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33d878: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x33d878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33d87c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x33d87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33d880: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x33d880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x33d884: 0xc0866ac  jal         func_219AB0
    ctx->pc = 0x33D884u;
    SET_GPR_U32(ctx, 31, 0x33D88Cu);
    ctx->pc = 0x219AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219AB0u, 0x33D884u, 0x33D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D88Cu;
label_33d88c:
    // 0x33d88c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d890: 0x8c43128c  lw          $v1, 0x128C($v0)
    ctx->pc = 0x33d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d894: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33d898: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x33d898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x33d89c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D89Cu;
    {
        const bool branch_taken_0x33d89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d89c) {
            ctx->pc = 0x33D8ACu;
            goto label_33d8ac;
        }
    }
    ctx->pc = 0x33D8A4u;
    // 0x33d8a4: 0xc0cf69c  jal         func_33DA70
    ctx->pc = 0x33D8A4u;
    SET_GPR_U32(ctx, 31, 0x33D8ACu);
    ctx->pc = 0x33DA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DA70u, 0x33D8A4u, 0x33D8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D8ACu;
label_33d8ac:
    // 0x33d8ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d8b0: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x33d8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33d8b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d8b8: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x33d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x33d8bc: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x33d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x33d8c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x33d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d8c4: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x33d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x33d8c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x33d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x33d8cc: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x33d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
label_33d8d0:
    // 0x33d8d0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33d8d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33d8d4:
    // 0x33d8d4: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x33d8d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33d8d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33d8d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33d8dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33d8dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d8e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d8e4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x33d8e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33d8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x33D8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D8F0u;
}
