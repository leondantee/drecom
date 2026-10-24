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

// Function: entry_00169334
// Address: 0x169334 - 0x1694c4
void entry_00169334_0x169334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169334_0x169334");
#endif

    switch (ctx->pc) {
        case 0x1693ccu: goto label_1693cc;
        case 0x1693dcu: goto label_1693dc;
        case 0x1693ecu: goto label_1693ec;
        case 0x169450u: goto label_169450;
        case 0x169478u: goto label_169478;
        case 0x169488u: goto label_169488;
        case 0x16949cu: goto label_16949c;
        case 0x1694b4u: goto label_1694b4;
        default: break;
    }

    ctx->pc = 0x169334u;

    // 0x169334: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169338: 0x8c35bb30  lw          $s5, -0x44D0($at)
    ctx->pc = 0x169338u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x47BB30u));
    // 0x16933c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16933cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169340: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x169340u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x169344: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x169344u;
    {
        const bool branch_taken_0x169344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169344) {
            ctx->pc = 0x1694C4u;
            return;
        }
    }
    ctx->pc = 0x16934Cu;
    // 0x16934c: 0x3c025015  lui         $v0, 0x5015
    ctx->pc = 0x16934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20501 << 16));
    // 0x169350: 0x344202f9  ori         $v0, $v0, 0x2F9
    ctx->pc = 0x169350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)761);
    // 0x169354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169358: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16935c: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x16935cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x169360: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x169360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169364: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x169364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169368: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16936c: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x16936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x169370: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x169370u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x169374: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x169374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169378: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x169378u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16937c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16937cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169380: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x169380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x169384: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x169384u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x169388: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16938c: 0xc421aad4  lwc1        $f1, -0x552C($at)
    ctx->pc = 0x16938cu;
    { uint32_t bits = FAST_READ32(0x47AAD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169390: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x169390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x169394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169398: 0x0  nop
    ctx->pc = 0x169398u;
    // NOP
    // 0x16939c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16939cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1693a0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1693a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1693a4: 0xe420aad4  swc1        $f0, -0x552C($at)
    ctx->pc = 0x1693a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAD4u, _value); } while (0); }
    // 0x1693a8: 0xc60111e4  lwc1        $f1, 0x11E4($s0)
    ctx->pc = 0x1693a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1693ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1693acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1693b0: 0xc420aae4  lwc1        $f0, -0x551C($at)
    ctx->pc = 0x1693b0u;
    { uint32_t bits = FAST_READ32(0x47AAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1693b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1693b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1693b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1693b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1693bc: 0xe420aae4  swc1        $f0, -0x551C($at)
    ctx->pc = 0x1693bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAE4u, _value); } while (0); }
    // 0x1693c0: 0xc60c11e0  lwc1        $f12, 0x11E0($s0)
    ctx->pc = 0x1693c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1693c4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x1693C4u;
    SET_GPR_U32(ctx, 31, 0x1693CCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x1693C4u, 0x1693CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693CCu;
label_1693cc:
    // 0x1693cc: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1693ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x1693d0: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1693d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x1693d4: 0xc05a76c  jal         func_169DB0
    ctx->pc = 0x1693D4u;
    SET_GPR_U32(ctx, 31, 0x1693DCu);
    ctx->pc = 0x169DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DB0u, 0x1693D4u, 0x1693DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693DCu;
label_1693dc:
    // 0x1693dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1693dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1693e0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1693e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1693e4: 0xc05b068  jal         func_16C1A0
    ctx->pc = 0x1693E4u;
    SET_GPR_U32(ctx, 31, 0x1693ECu);
    ctx->pc = 0x16C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C1A0u, 0x1693E4u, 0x1693ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1693ECu;
label_1693ec:
    // 0x1693ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1693ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1693f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1693f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1693f4: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x1693f4u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1693f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1693f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1693fc: 0x0  nop
    ctx->pc = 0x1693fcu;
    // NOP
    // 0x169400: 0x45010030  bc1t        . + 4 + (0x30 << 2)
    ctx->pc = 0x169400u;
    {
        const bool branch_taken_0x169400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169400) {
            ctx->pc = 0x1694C4u;
            return;
        }
    }
    ctx->pc = 0x169408u;
    // 0x169408: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16940c: 0xc422ab00  lwc1        $f2, -0x5500($at)
    ctx->pc = 0x16940cu;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169410: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169414: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x169414u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169418: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16941c: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x16941cu;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169420: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169424: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x169424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169428: 0x0  nop
    ctx->pc = 0x169428u;
    // NOP
    // 0x16942c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x16942Cu;
    {
        const bool branch_taken_0x16942c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16942c) {
            ctx->pc = 0x1694C4u;
            return;
        }
    }
    ctx->pc = 0x169434u;
    // 0x169434: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x169434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x169438: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16943c: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x16943cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x169440: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169444: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x169444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x169448: 0xc040c80  jal         func_103200
    ctx->pc = 0x169448u;
    SET_GPR_U32(ctx, 31, 0x169450u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x169450u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169450u) { return; }
    ctx->pc = 0x169450u;
label_169450:
    // 0x169450: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169454: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x169454u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169458: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16945c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16945cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169460: 0x0  nop
    ctx->pc = 0x169460u;
    // NOP
    // 0x169464: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x169464u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x169468: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x169468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16946c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16946cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x169470: 0xc040c8c  jal         func_103230
    ctx->pc = 0x169470u;
    SET_GPR_U32(ctx, 31, 0x169478u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x169478u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169478u) { return; }
    ctx->pc = 0x169478u;
label_169478:
    // 0x169478: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16947c: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x16947cu;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169480: 0xc045630  jal         func_1158C0
    ctx->pc = 0x169480u;
    SET_GPR_U32(ctx, 31, 0x169488u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x169480u, 0x169488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169488u;
label_169488:
    // 0x169488: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x169488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16948c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x16948cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x169490: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x169490u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x169494: 0xc040c60  jal         func_103180
    ctx->pc = 0x169494u;
    SET_GPR_U32(ctx, 31, 0x16949Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x16949Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16949Cu) { return; }
    ctx->pc = 0x16949Cu;
label_16949c:
    // 0x16949c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1694a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1694a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1694a4: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x1694a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x1694a8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1694a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1694ac: 0xc040c80  jal         func_103200
    ctx->pc = 0x1694ACu;
    SET_GPR_U32(ctx, 31, 0x1694B4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1694B4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1694B4u) { return; }
    ctx->pc = 0x1694B4u;
label_1694b4:
    // 0x1694b4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1694b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1694b8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1694b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1694bc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1694bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1694c0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x1694c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    ctx->pc = 0x1694c4u;
}
