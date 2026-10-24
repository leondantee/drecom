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

// Function: entry_001698b8
// Address: 0x1698b8 - 0x169a28
void entry_001698b8_0x1698b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001698b8_0x1698b8");
#endif

    switch (ctx->pc) {
        case 0x169928u: goto label_169928;
        case 0x169938u: goto label_169938;
        case 0x169948u: goto label_169948;
        case 0x1699acu: goto label_1699ac;
        case 0x1699d4u: goto label_1699d4;
        case 0x1699e4u: goto label_1699e4;
        case 0x1699f8u: goto label_1699f8;
        case 0x169a10u: goto label_169a10;
        default: break;
    }

    ctx->pc = 0x1698b8u;

    // 0x1698b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1698b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1698bc: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x1698bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x1698c0: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1698C0u;
    {
        const bool branch_taken_0x1698c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1698c0) {
            ctx->pc = 0x169A48u;
            return;
        }
    }
    ctx->pc = 0x1698C8u;
    // 0x1698c8: 0x3c025015  lui         $v0, 0x5015
    ctx->pc = 0x1698c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20501 << 16));
    // 0x1698cc: 0x344202f9  ori         $v0, $v0, 0x2F9
    ctx->pc = 0x1698ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)761);
    // 0x1698d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1698d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1698d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1698d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1698d8: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x1698d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x1698dc: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x1698dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1698e0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1698e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1698e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1698e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1698e8: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x1698e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x1698ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1698ecu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x1698f0: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x1698f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1698f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1698f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1698f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1698f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1698fc: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x1698fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x169900: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x169900u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x169904: 0xc60111e4  lwc1        $f1, 0x11E4($s0)
    ctx->pc = 0x169904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169908: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16990c: 0xc420aae4  lwc1        $f0, -0x551C($at)
    ctx->pc = 0x16990cu;
    { uint32_t bits = FAST_READ32(0x47AAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169910: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x169910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x169914: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169918: 0xe420aae4  swc1        $f0, -0x551C($at)
    ctx->pc = 0x169918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAE4u, _value); } while (0); }
    // 0x16991c: 0xc60c11e0  lwc1        $f12, 0x11E0($s0)
    ctx->pc = 0x16991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169920: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x169920u;
    SET_GPR_U32(ctx, 31, 0x169928u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x169920u, 0x169928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169928u;
label_169928:
    // 0x169928: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x169928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x16992c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x16992cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x169930: 0xc05a76c  jal         func_169DB0
    ctx->pc = 0x169930u;
    SET_GPR_U32(ctx, 31, 0x169938u);
    ctx->pc = 0x169DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DB0u, 0x169930u, 0x169938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169938u;
label_169938:
    // 0x169938: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x169938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16993c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x169940: 0xc05b068  jal         func_16C1A0
    ctx->pc = 0x169940u;
    SET_GPR_U32(ctx, 31, 0x169948u);
    ctx->pc = 0x16C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C1A0u, 0x169940u, 0x169948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169948u;
label_169948:
    // 0x169948: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x169948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16994c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169950: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x169950u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169954: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x169954u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169958: 0x0  nop
    ctx->pc = 0x169958u;
    // NOP
    // 0x16995c: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x16995Cu;
    {
        const bool branch_taken_0x16995c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16995c) {
            ctx->pc = 0x169A28u;
            return;
        }
    }
    ctx->pc = 0x169964u;
    // 0x169964: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169968: 0xc422ab00  lwc1        $f2, -0x5500($at)
    ctx->pc = 0x169968u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16996c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169970: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x169970u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169974: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169978: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x169978u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16997c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16997cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169980: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x169980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169984: 0x0  nop
    ctx->pc = 0x169984u;
    // NOP
    // 0x169988: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x169988u;
    {
        const bool branch_taken_0x169988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169988) {
            ctx->pc = 0x169A28u;
            return;
        }
    }
    ctx->pc = 0x169990u;
    // 0x169990: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x169990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x169994: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169998: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x169998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16999c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1699a0: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x1699a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x1699a4: 0xc040c80  jal         func_103200
    ctx->pc = 0x1699A4u;
    SET_GPR_U32(ctx, 31, 0x1699ACu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1699ACu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1699ACu) { return; }
    ctx->pc = 0x1699ACu;
label_1699ac:
    // 0x1699ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1699acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1699b0: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x1699b0u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1699b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1699b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1699b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1699b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1699bc: 0x0  nop
    ctx->pc = 0x1699bcu;
    // NOP
    // 0x1699c0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1699c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1699c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1699c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1699c8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1699c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1699cc: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1699CCu;
    SET_GPR_U32(ctx, 31, 0x1699D4u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1699D4u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1699D4u) { return; }
    ctx->pc = 0x1699D4u;
label_1699d4:
    // 0x1699d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1699d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1699d8: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x1699d8u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1699dc: 0xc045630  jal         func_1158C0
    ctx->pc = 0x1699DCu;
    SET_GPR_U32(ctx, 31, 0x1699E4u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x1699DCu, 0x1699E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699E4u;
label_1699e4:
    // 0x1699e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1699e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1699e8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1699e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1699ec: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1699ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1699f0: 0xc040c60  jal         func_103180
    ctx->pc = 0x1699F0u;
    SET_GPR_U32(ctx, 31, 0x1699F8u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1699F8u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1699F8u) { return; }
    ctx->pc = 0x1699F8u;
label_1699f8:
    // 0x1699f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1699f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1699fc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1699fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169a00: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x169a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x169a04: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x169a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x169a08: 0xc040c80  jal         func_103200
    ctx->pc = 0x169A08u;
    SET_GPR_U32(ctx, 31, 0x169A10u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x169A10u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169A10u) { return; }
    ctx->pc = 0x169A10u;
label_169a10:
    // 0x169a10: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x169a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a14: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x169a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x169a18: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x169a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a1c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x169a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x169a20: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x169A20u;
    {
        const bool branch_taken_0x169a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a20) {
            ctx->pc = 0x169A68u;
            return;
        }
    }
    ctx->pc = 0x169A28u;
}
