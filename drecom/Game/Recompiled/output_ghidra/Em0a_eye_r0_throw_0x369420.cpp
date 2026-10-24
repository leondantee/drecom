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

// Function: Em0a_eye_r0_throw
// Address: 0x369420 - 0x36977c
void Em0a_eye_r0_throw_0x369420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_eye_r0_throw_0x369420");
#endif

    switch (ctx->pc) {
        case 0x369508u: goto label_369508;
        case 0x369518u: goto label_369518;
        case 0x369530u: goto label_369530;
        case 0x3695a4u: goto label_3695a4;
        case 0x3695bcu: goto label_3695bc;
        case 0x3695d8u: goto label_3695d8;
        case 0x369624u: goto label_369624;
        case 0x369678u: goto label_369678;
        case 0x3696e8u: goto label_3696e8;
        case 0x369704u: goto label_369704;
        default: break;
    }

    ctx->pc = 0x369420u;

    // 0x369420: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x369420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x369424: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x369424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x369428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x369428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36942c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x369430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x369430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x369434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x369434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x369438: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x369438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x36943c: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x36943cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x369440: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369444: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x369444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x369448: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x369448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36944c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x36944cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369450: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x369450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x369454: 0x2463af10  addiu       $v1, $v1, -0x50F0
    ctx->pc = 0x369454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946576));
    // 0x369458: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x369458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36945c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x36945cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x369460: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x369460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x369464: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x369464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x369468: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x369468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x36946c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x36946cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x369470: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x369470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x369474: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x369474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x369478: 0x8ca302d0  lw          $v1, 0x2D0($a1)
    ctx->pc = 0x369478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x36947c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x36947cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x369480: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369484: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x369484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x369488: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x369488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36948c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x36948cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x369490: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x369490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x369494: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x369494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
    // 0x369498: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x369498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36949c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x36949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3694a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3694a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3694a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3694a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3694a8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3694a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3694ac: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x3694acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3694b0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3694b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3694b4: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x3694b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3694b8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3694b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3694bc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x3694bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x3694c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3694c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3694c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3694c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3694c8: 0x10830067  beq         $a0, $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x3694C8u;
    {
        const bool branch_taken_0x3694c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3694c8) {
            ctx->pc = 0x369668u;
            goto label_369668;
        }
    }
    ctx->pc = 0x3694D0u;
    // 0x3694d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3694D0u;
    {
        const bool branch_taken_0x3694d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3694d0) {
            ctx->pc = 0x3694E0u;
            goto label_3694e0;
        }
    }
    ctx->pc = 0x3694D8u;
    // 0x3694d8: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x3694D8u;
    {
        const bool branch_taken_0x3694d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3694d8) {
            ctx->pc = 0x36975Cu;
            goto label_36975c;
        }
    }
    ctx->pc = 0x3694E0u;
label_3694e0:
    // 0x3694e0: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x3694e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3694e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3694e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3694e8: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x3694e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3694ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3694ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3694f0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x3694f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x3694f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3694f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3694f8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x3694f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3694fc: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x3694fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369500: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x369500u;
    SET_GPR_U32(ctx, 31, 0x369508u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x369500u, 0x369508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369508u;
label_369508:
    // 0x369508: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x369508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36950c: 0xc7ad0098  lwc1        $f13, 0x98($sp)
    ctx->pc = 0x36950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x369510: 0xc0455e6  jal         func_115798
    ctx->pc = 0x369510u;
    SET_GPR_U32(ctx, 31, 0x369518u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x369510u, 0x369518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369518u;
label_369518:
    // 0x369518: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x369518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x36951c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x36951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x369520: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x369520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369524: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x369524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x369528: 0xc058f20  jal         func_163C80
    ctx->pc = 0x369528u;
    SET_GPR_U32(ctx, 31, 0x369530u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x369528u, 0x369530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369530u;
label_369530:
    // 0x369530: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x369530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x369534: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x369534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369538: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36953c: 0x0  nop
    ctx->pc = 0x36953cu;
    // NOP
    // 0x369540: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x369540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369544: 0x0  nop
    ctx->pc = 0x369544u;
    // NOP
    // 0x369548: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x369548u;
    {
        const bool branch_taken_0x369548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369548) {
            ctx->pc = 0x369564u;
            goto label_369564;
        }
    }
    ctx->pc = 0x369550u;
    // 0x369550: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x369550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x369554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x369554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369558: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x369558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36955c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36955cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x369560: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x369560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_369564:
    // 0x369564: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x369564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369568: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x369568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x36956c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x369570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369574: 0x0  nop
    ctx->pc = 0x369574u;
    // NOP
    // 0x369578: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x369578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36957c: 0x0  nop
    ctx->pc = 0x36957cu;
    // NOP
    // 0x369580: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x369580u;
    {
        const bool branch_taken_0x369580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369580) {
            ctx->pc = 0x3695C4u;
            goto label_3695c4;
        }
    }
    ctx->pc = 0x369588u;
    // 0x369588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36958c: 0x0  nop
    ctx->pc = 0x36958cu;
    // NOP
    // 0x369590: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x369590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x369594: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369598: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x369598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36959c: 0xc040c24  jal         func_103090
    ctx->pc = 0x36959Cu;
    SET_GPR_U32(ctx, 31, 0x3695A4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x3695A4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3695A4u) { return; }
    ctx->pc = 0x3695A4u;
label_3695a4:
    // 0x3695a4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3695a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3695a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3695a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3695ac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3695acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3695b0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3695b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3695b4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x3695B4u;
    SET_GPR_U32(ctx, 31, 0x3695BCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x3695BCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3695BCu) { return; }
    ctx->pc = 0x3695BCu;
label_3695bc:
    // 0x3695bc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3695BCu;
    {
        const bool branch_taken_0x3695bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3695bc) {
            ctx->pc = 0x369624u;
            goto label_369624;
        }
    }
    ctx->pc = 0x3695C4u;
label_3695c4:
    // 0x3695c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3695c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3695c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3695c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3695cc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x3695ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3695d0: 0xc067844  jal         func_19E110
    ctx->pc = 0x3695D0u;
    SET_GPR_U32(ctx, 31, 0x3695D8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x3695D0u, 0x3695D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3695D8u;
label_3695d8:
    // 0x3695d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3695d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3695dc: 0x0  nop
    ctx->pc = 0x3695dcu;
    // NOP
    // 0x3695e0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3695e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3695e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3695e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3695e8: 0x0  nop
    ctx->pc = 0x3695e8u;
    // NOP
    // 0x3695ec: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x3695ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3695f0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3695f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3695f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3695f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3695f8: 0x0  nop
    ctx->pc = 0x3695f8u;
    // NOP
    // 0x3695fc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x3695fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x369600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x369600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x369604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369608: 0x0  nop
    ctx->pc = 0x369608u;
    // NOP
    // 0x36960c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x36960cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x369610: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x369614: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x369614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x369618: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x369618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36961c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36961Cu;
    SET_GPR_U32(ctx, 31, 0x369624u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x369624u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369624u) { return; }
    ctx->pc = 0x369624u;
label_369624:
    // 0x369624: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x369624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369628: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x369628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36962c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36962cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x369630: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x369630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x369634: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369638: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x369638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36963c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x36963cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x369640: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x369640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369644: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x369644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369648: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x369648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x36964c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x36964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x369650: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x369650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369654: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x369654u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x369658: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36965c: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x36965cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x369660: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x369660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x369664: 0xa0620012  sb          $v0, 0x12($v1)
    ctx->pc = 0x369664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
label_369668:
    // 0x369668: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x369668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36966c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36966cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369670: 0xc040c9e  jal         func_103278
    ctx->pc = 0x369670u;
    SET_GPR_U32(ctx, 31, 0x369678u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369678u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369678u) { return; }
    ctx->pc = 0x369678u;
label_369678:
    // 0x369678: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x369678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36967c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369680: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x369680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369684: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369688: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x369688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x36968c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x36968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369690: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x369690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369694: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x369694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x369698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36969c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x36969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3696a0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3696a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3696a4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3696a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3696a8: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x3696a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3696ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3696acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3696b0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3696b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3696b4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3696b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3696b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3696b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3696bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3696bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3696c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3696c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3696c4: 0x0  nop
    ctx->pc = 0x3696c4u;
    // NOP
    // 0x3696c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3696c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3696cc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3696ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3696d0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3696d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3696d4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3696d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3696d8: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x3696d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3696dc: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x3696dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x3696e0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x3696E0u;
    SET_GPR_U32(ctx, 31, 0x3696E8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x3696E0u, 0x3696E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3696E8u;
label_3696e8:
    // 0x3696e8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x3696e8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3696ec: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x3696ECu;
    {
        const bool branch_taken_0x3696ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3696ec) {
            ctx->pc = 0x369720u;
            goto label_369720;
        }
    }
    ctx->pc = 0x3696F4u;
    // 0x3696f4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3696f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3696f8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3696f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3696fc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3696FCu;
    SET_GPR_U32(ctx, 31, 0x369704u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x369704u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x369704u) { return; }
    ctx->pc = 0x369704u;
label_369704:
    // 0x369704: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x369704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x369708: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x36970c: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x36970cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x369710: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369714: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x369714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x369718: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x369718u;
    {
        const bool branch_taken_0x369718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369718) {
            ctx->pc = 0x36975Cu;
            goto label_36975c;
        }
    }
    ctx->pc = 0x369720u;
label_369720:
    // 0x369720: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369724: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x369724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x369728: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x369728u;
    {
        const bool branch_taken_0x369728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x369728) {
            ctx->pc = 0x369748u;
            goto label_369748;
        }
    }
    ctx->pc = 0x369730u;
    // 0x369730: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x369730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369734: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x369734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x369738: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x369738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36973c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x36973cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x369740: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x369740u;
    {
        const bool branch_taken_0x369740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x369740) {
            ctx->pc = 0x36975Cu;
            goto label_36975c;
        }
    }
    ctx->pc = 0x369748u;
label_369748:
    // 0x369748: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x369748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36974c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x36974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369750: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x369750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x369754: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x369754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x369758: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x369758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
label_36975c:
    // 0x36975c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x36975cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x369760: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x369760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x369764: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x369764u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369768: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x369768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36976c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36976cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369770: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x369770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x369774: 0x3e00008  jr          $ra
    ctx->pc = 0x369774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36977Cu;
}
