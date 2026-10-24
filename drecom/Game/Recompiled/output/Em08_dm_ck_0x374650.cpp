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

// Function: Em08_dm_ck
// Address: 0x374650 - 0x3748c8
void Em08_dm_ck_0x374650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_dm_ck_0x374650");
#endif

    switch (ctx->pc) {
        case 0x3746b4u: goto label_3746b4;
        case 0x37470cu: goto label_37470c;
        case 0x374744u: goto label_374744;
        case 0x37478cu: goto label_37478c;
        case 0x3747a0u: goto label_3747a0;
        case 0x3747f0u: goto label_3747f0;
        default: break;
    }

    ctx->pc = 0x374650u;

    // 0x374650: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x374650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x374654: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x374654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x374658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x374658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37465c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x374660: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x374660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x374664: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x374664u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x374668: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37466c: 0x906311ee  lbu         $v1, 0x11EE($v1)
    ctx->pc = 0x37466cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4590)));
    // 0x374670: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x374670u;
    {
        const bool branch_taken_0x374670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x374670) {
            ctx->pc = 0x3748B0u;
            goto label_3748b0;
        }
    }
    ctx->pc = 0x374678u;
    // 0x374678: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37467c: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x37467cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x374680: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374684: 0x8c501210  lw          $s0, 0x1210($v0)
    ctx->pc = 0x374684u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x374688: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37468c: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x37468cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x374690: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374694: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x374694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x374698: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37469c: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x37469cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3746a0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3746a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3746a4: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x3746a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3746a8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x3746a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3746ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3746ACu;
    SET_GPR_U32(ctx, 31, 0x3746B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3746ACu, 0x3746B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746B4u;
label_3746b4:
    // 0x3746b4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x3746b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x3746b8: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x3746b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3746bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3746bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3746c0: 0x0  nop
    ctx->pc = 0x3746c0u;
    // NOP
    // 0x3746c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3746c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3746c8: 0x0  nop
    ctx->pc = 0x3746c8u;
    // NOP
    // 0x3746cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3746CCu;
    {
        const bool branch_taken_0x3746cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3746cc) {
            ctx->pc = 0x3746E8u;
            goto label_3746e8;
        }
    }
    ctx->pc = 0x3746D4u;
    // 0x3746d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3746d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3746d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3746d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3746dc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x3746dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3746e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3746e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3746e4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x3746e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_3746e8:
    // 0x3746e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3746e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3746ec: 0x0  nop
    ctx->pc = 0x3746ecu;
    // NOP
    // 0x3746f0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3746f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3746f4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3746f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3746f8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x3746f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3746fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3746fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x374700: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x374700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x374704: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x374704u;
    SET_GPR_U32(ctx, 31, 0x37470Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x374704u, 0x37470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37470Cu;
label_37470c:
    // 0x37470c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x37470cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x374710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x374710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374714: 0x0  nop
    ctx->pc = 0x374714u;
    // NOP
    // 0x374718: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x374718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x37471c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37471cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x374720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x374720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374724: 0x0  nop
    ctx->pc = 0x374724u;
    // NOP
    // 0x374728: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x374728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x37472c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374730: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x374730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374734: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x374734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x374738: 0x844611f2  lh          $a2, 0x11F2($v0)
    ctx->pc = 0x374738u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4594)));
    // 0x37473c: 0xc06d1d8  jal         func_1B4760
    ctx->pc = 0x37473Cu;
    SET_GPR_U32(ctx, 31, 0x374744u);
    ctx->pc = 0x1B4760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4760u, 0x37473Cu, 0x374744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374744u;
label_374744:
    // 0x374744: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374748: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x374748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37474c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x37474cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x374750: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374754: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x374754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374758: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x374758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x37475c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374760: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x374760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374764: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x374764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x374768: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x374768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x37476c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37476cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374770: 0x0  nop
    ctx->pc = 0x374770u;
    // NOP
    // 0x374774: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x374774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x374778: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37477c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x37477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374780: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x374780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x374784: 0xc040c44  jal         func_103110
    ctx->pc = 0x374784u;
    SET_GPR_U32(ctx, 31, 0x37478Cu);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x37478Cu;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x37478Cu) { return; }
    ctx->pc = 0x37478Cu;
label_37478c:
    // 0x37478c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x37478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x374790: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x374790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x374794: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x374794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x374798: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x374798u;
    SET_GPR_U32(ctx, 31, 0x3747A0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3747A0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3747A0u) { return; }
    ctx->pc = 0x3747A0u;
label_3747a0:
    // 0x3747a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3747a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3747a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3747a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3747a8: 0x0  nop
    ctx->pc = 0x3747a8u;
    // NOP
    // 0x3747ac: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x3747acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x3747b0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3747b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3747b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3747b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3747b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3747b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3747bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3747bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3747c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3747c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3747c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3747c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3747c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3747c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3747cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3747ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3747d0: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x3747d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x3747d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3747d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3747d8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x3747d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3747dc: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3747dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3747e0: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x3747e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3747e4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3747e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3747e8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3747E8u;
    SET_GPR_U32(ctx, 31, 0x3747F0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3747E8u, 0x3747F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3747F0u;
label_3747f0:
    // 0x3747f0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3747f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3747f4: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x3747f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x3747f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3747f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3747fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3747fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x374800: 0x460001e  bltz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x374800u;
    {
        const bool branch_taken_0x374800 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x374800) {
            ctx->pc = 0x37487Cu;
            goto label_37487c;
        }
    }
    ctx->pc = 0x374808u;
    // 0x374808: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37480c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x37480cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x374810: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x374810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x374814: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x374814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x374818: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x374818u;
    {
        const bool branch_taken_0x374818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x374818) {
            ctx->pc = 0x3748B0u;
            goto label_3748b0;
        }
    }
    ctx->pc = 0x374820u;
    // 0x374820: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x374820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374824: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374828: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x374828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x37482c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x37482cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374830: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x374830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x374834: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374838: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x374838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37483c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x37483cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374840: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x374840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x374844: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374848: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x374848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x37484c: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x37484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x374850: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x374850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x374854: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x374854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x374858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x374858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37485c: 0x0  nop
    ctx->pc = 0x37485cu;
    // NOP
    // 0x374860: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x374860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x374864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374868: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x374868u;
    {
        const bool branch_taken_0x374868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x374868) {
            ctx->pc = 0x374874u;
            goto label_374874;
        }
    }
    ctx->pc = 0x374870u;
    // 0x374870: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x374870u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_374874:
    // 0x374874: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x374874u;
    {
        const bool branch_taken_0x374874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x374874) {
            ctx->pc = 0x3748B0u;
            goto label_3748b0;
        }
    }
    ctx->pc = 0x37487Cu;
label_37487c:
    // 0x37487c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x37487cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374880: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x374880u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
    // 0x374884: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x374884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374888: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37488c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x37488cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x374890: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374894: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x374894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x374898: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x374898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37489c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x37489cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3748a0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3748a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3748a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3748a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3748a8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3748a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3748ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3748acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3748b0:
    // 0x3748b0: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3748b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3748b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3748b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3748b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3748b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3748bc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x3748bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3748c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3748C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3748C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3748C8u;
}
