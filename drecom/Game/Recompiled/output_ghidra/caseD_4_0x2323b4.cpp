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

// Function: caseD_4
// Address: 0x2323b4 - 0x2324e8
void caseD_4_0x2323b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x2323b4");
#endif

    switch (ctx->pc) {
        case 0x2323c0u: goto label_2323c0;
        case 0x2323e8u: goto label_2323e8;
        case 0x23240cu: goto label_23240c;
        case 0x232424u: goto label_232424;
        case 0x2324a8u: goto label_2324a8;
        case 0x2324bcu: goto label_2324bc;
        default: break;
    }

    ctx->pc = 0x2323b4u;

    // 0x2323b4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2323b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2323b8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2323B8u;
    SET_GPR_U32(ctx, 31, 0x2323C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2323C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2323C0u) { return; }
    ctx->pc = 0x2323C0u;
label_2323c0:
    // 0x2323c0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2323c0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2323c4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2323c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2323c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2323c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2323cc: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x2323ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
    // 0x2323d0: 0x34640a92  ori         $a0, $v1, 0xA92
    ctx->pc = 0x2323d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x2323d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2323d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2323d8: 0x0  nop
    ctx->pc = 0x2323d8u;
    // NOP
    // 0x2323dc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2323dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2323e0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2323E0u;
    SET_GPR_U32(ctx, 31, 0x2323E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2323E0u, 0x2323E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2323E8u;
label_2323e8:
    // 0x2323e8: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x2323e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2323ec: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2323ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2323f0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2323f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2323f4: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2323f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2323f8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2323f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2323fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2323fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x232400: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x232400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x232404: 0xc040ce4  jal         func_103390
    ctx->pc = 0x232404u;
    SET_GPR_U32(ctx, 31, 0x23240Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x23240Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x23240Cu) { return; }
    ctx->pc = 0x23240Cu;
label_23240c:
    // 0x23240c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x23240cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x232410: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x232410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x232414: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x232414u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x232418: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x232418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23241c: 0xc040c00  jal         func_103000
    ctx->pc = 0x23241Cu;
    SET_GPR_U32(ctx, 31, 0x232424u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x232424u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x232424u) { return; }
    ctx->pc = 0x232424u;
label_232424:
    // 0x232424: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232424u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x232428: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23242c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232430: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x232430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232434: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x232434u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232438: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x232438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x23243c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x23243cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232440: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x232440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232444: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x232444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x232448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23244c: 0x0  nop
    ctx->pc = 0x23244cu;
    // NOP
    // 0x232450: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x232450u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x232454: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x232454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x232458: 0x3c03c3c8  lui         $v1, 0xC3C8
    ctx->pc = 0x232458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50120 << 16));
    // 0x23245c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23245cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232460: 0x0  nop
    ctx->pc = 0x232460u;
    // NOP
    // 0x232464: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x232464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x232468: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x23246c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23246cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232470: 0x0  nop
    ctx->pc = 0x232470u;
    // NOP
    // 0x232474: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x232474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x232478: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23247c: 0x0  nop
    ctx->pc = 0x23247cu;
    // NOP
    // 0x232480: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x232480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x232484: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x232484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x232488: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x232488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23248c: 0x0  nop
    ctx->pc = 0x23248cu;
    // NOP
    // 0x232490: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x232490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x232494: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x232494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x232498: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x232498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x23249c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x23249cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2324a0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2324A0u;
    SET_GPR_U32(ctx, 31, 0x2324A8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2324A8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2324A8u) { return; }
    ctx->pc = 0x2324A8u;
label_2324a8:
    // 0x2324a8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2324a8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2324ac: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x2324acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2324b0: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2324b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2324b4: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x2324B4u;
    SET_GPR_U32(ctx, 31, 0x2324BCu);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x2324B4u, 0x2324BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2324BCu;
label_2324bc:
    // 0x2324bc: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2324bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2324c0: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x2324c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x2324c4: 0x34675000  ori         $a3, $v1, 0x5000
    ctx->pc = 0x2324c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x2324c8: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2324c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2324cc: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2324ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2324d0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2324d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2324d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2324d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2324d8: 0x70802e28  paddub      $a1, $a0, $zero
    ctx->pc = 0x2324d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2324dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2324DCu;
    {
        const bool branch_taken_0x2324dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2324dc) {
            ctx->pc = 0x2324E8u;
            return;
        }
    }
    ctx->pc = 0x2324E4u;
    // 0x2324e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2324e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2324e8u;
}
