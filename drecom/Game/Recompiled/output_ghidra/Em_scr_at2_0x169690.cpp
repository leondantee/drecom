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

// Function: Em_scr_at2
// Address: 0x169690 - 0x169b7c
void Em_scr_at2_0x169690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_scr_at2_0x169690");
#endif

    switch (ctx->pc) {
        case 0x169758u: goto label_169758;
        case 0x169764u: goto label_169764;
        case 0x169778u: goto label_169778;
        case 0x1697a8u: goto label_1697a8;
        case 0x1697b8u: goto label_1697b8;
        case 0x16981cu: goto label_16981c;
        case 0x169844u: goto label_169844;
        case 0x169854u: goto label_169854;
        case 0x169868u: goto label_169868;
        case 0x169880u: goto label_169880;
        case 0x169928u: goto label_169928;
        case 0x169938u: goto label_169938;
        case 0x169948u: goto label_169948;
        case 0x1699acu: goto label_1699ac;
        case 0x1699d4u: goto label_1699d4;
        case 0x1699e4u: goto label_1699e4;
        case 0x1699f8u: goto label_1699f8;
        case 0x169a10u: goto label_169a10;
        case 0x169ad8u: goto label_169ad8;
        case 0x169ae8u: goto label_169ae8;
        case 0x169af8u: goto label_169af8;
        default: break;
    }

    ctx->pc = 0x169690u;

    // 0x169690: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x169690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x169694: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x169694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x169698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x169698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16969c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1696a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1696a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1696a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1696a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1696a8: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1696a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1696ac: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x1696acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
    // 0x1696b0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1696b0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1696b4: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x1696b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1696b8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1696b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1696bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1696bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1696c0: 0xac22ab28  sw          $v0, -0x54D8($at)
    ctx->pc = 0x1696c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47AB28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB28u, _value); } while (0);
    // 0x1696c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1696c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1696c8: 0xac20ab20  sw          $zero, -0x54E0($at)
    ctx->pc = 0x1696c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x1696cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1696ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1696d0: 0x8c32fdf8  lw          $s2, -0x208($at)
    ctx->pc = 0x1696d0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x1696d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1696d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1696d8: 0x8c22fdf8  lw          $v0, -0x208($at)
    ctx->pc = 0x1696d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x1696dc: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x1696dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1696e0: 0xc60011e0  lwc1        $f0, 0x11E0($s0)
    ctx->pc = 0x1696e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1696e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1696e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1696e8: 0xe420ab08  swc1        $f0, -0x54F8($at)
    ctx->pc = 0x1696e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB08u, _value); } while (0); }
    // 0x1696ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1696ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1696f0: 0xac20bb30  sw          $zero, -0x44D0($at)
    ctx->pc = 0x1696f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB30u, _value); } while (0);
    // 0x1696f4: 0x3c025015  lui         $v0, 0x5015
    ctx->pc = 0x1696f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20501 << 16));
    // 0x1696f8: 0x344202f9  ori         $v0, $v0, 0x2F9
    ctx->pc = 0x1696f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)761);
    // 0x1696fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1696fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169700: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169704: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x169704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x169708: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x169708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x16970c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x16970cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169710: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169714: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x169714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x169718: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x169718u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x16971c: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x16971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169720: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x169720u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169724: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169728: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x169728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16972c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x16972cu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x169730: 0xc60111e4  lwc1        $f1, 0x11E4($s0)
    ctx->pc = 0x169730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169734: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169738: 0xc420aae4  lwc1        $f0, -0x551C($at)
    ctx->pc = 0x169738u;
    { uint32_t bits = FAST_READ32(0x47AAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16973c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16973cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x169740: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169744: 0xe420aae4  swc1        $f0, -0x551C($at)
    ctx->pc = 0x169744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAE4u, _value); } while (0); }
    // 0x169748: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x169748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16974c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x16974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169750: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x169750u;
    SET_GPR_U32(ctx, 31, 0x169758u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x169758u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169758u) { return; }
    ctx->pc = 0x169758u;
label_169758:
    // 0x169758: 0xc60c11e0  lwc1        $f12, 0x11E0($s0)
    ctx->pc = 0x169758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16975c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x16975Cu;
    SET_GPR_U32(ctx, 31, 0x169764u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x16975Cu, 0x169764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169764u;
label_169764:
    // 0x169764: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x169764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x169768: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x169768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x16976c: 0xc60c11e4  lwc1        $f12, 0x11E4($s0)
    ctx->pc = 0x16976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169770: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x169770u;
    SET_GPR_U32(ctx, 31, 0x169778u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x169770u, 0x169778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169778u;
label_169778:
    // 0x169778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16977c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16977cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x169780: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x169780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x169784: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x169784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x169788: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x169788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x16978c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169790: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x169790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x169794: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x169794u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x169798: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x169798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16979c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x16979cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1697a0: 0xc05a6e0  jal         func_169B80
    ctx->pc = 0x1697A0u;
    SET_GPR_U32(ctx, 31, 0x1697A8u);
    ctx->pc = 0x169B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B80u, 0x1697A0u, 0x1697A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697A8u;
label_1697a8:
    // 0x1697a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1697a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1697ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1697acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1697b0: 0xc05b068  jal         func_16C1A0
    ctx->pc = 0x1697B0u;
    SET_GPR_U32(ctx, 31, 0x1697B8u);
    ctx->pc = 0x16C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C1A0u, 0x1697B0u, 0x1697B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1697B8u;
label_1697b8:
    // 0x1697b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1697b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1697bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1697bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1697c0: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x1697c0u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1697c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1697c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1697c8: 0x0  nop
    ctx->pc = 0x1697c8u;
    // NOP
    // 0x1697cc: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x1697CCu;
    {
        const bool branch_taken_0x1697cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1697cc) {
            ctx->pc = 0x169898u;
            goto label_169898;
        }
    }
    ctx->pc = 0x1697D4u;
    // 0x1697d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1697d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1697d8: 0xc422ab00  lwc1        $f2, -0x5500($at)
    ctx->pc = 0x1697d8u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1697dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1697dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1697e0: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x1697e0u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1697e4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1697e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1697e8: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x1697e8u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1697ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1697ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1697f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1697f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1697f4: 0x0  nop
    ctx->pc = 0x1697f4u;
    // NOP
    // 0x1697f8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x1697F8u;
    {
        const bool branch_taken_0x1697f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1697f8) {
            ctx->pc = 0x169898u;
            goto label_169898;
        }
    }
    ctx->pc = 0x169800u;
    // 0x169800: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x169800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x169804: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169808: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x169808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16980c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16980cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169810: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x169810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x169814: 0xc040c80  jal         func_103200
    ctx->pc = 0x169814u;
    SET_GPR_U32(ctx, 31, 0x16981Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x16981Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16981Cu) { return; }
    ctx->pc = 0x16981Cu;
label_16981c:
    // 0x16981c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16981cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169820: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x169820u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169824: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16982c: 0x0  nop
    ctx->pc = 0x16982cu;
    // NOP
    // 0x169830: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x169830u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x169834: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x169834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x169838: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x169838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16983c: 0xc040c8c  jal         func_103230
    ctx->pc = 0x16983Cu;
    SET_GPR_U32(ctx, 31, 0x169844u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x169844u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169844u) { return; }
    ctx->pc = 0x169844u;
label_169844:
    // 0x169844: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169848: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x169848u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16984c: 0xc045630  jal         func_1158C0
    ctx->pc = 0x16984Cu;
    SET_GPR_U32(ctx, 31, 0x169854u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x16984Cu, 0x169854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169854u;
label_169854:
    // 0x169854: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x169854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x169858: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x169858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16985c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x16985cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x169860: 0xc040c60  jal         func_103180
    ctx->pc = 0x169860u;
    SET_GPR_U32(ctx, 31, 0x169868u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x169868u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169868u) { return; }
    ctx->pc = 0x169868u;
label_169868:
    // 0x169868: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x169868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16986c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16986cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169870: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x169870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x169874: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x169874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x169878: 0xc040c80  jal         func_103200
    ctx->pc = 0x169878u;
    SET_GPR_U32(ctx, 31, 0x169880u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x169880u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169880u) { return; }
    ctx->pc = 0x169880u;
label_169880:
    // 0x169880: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x169880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169884: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x169884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x169888: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x169888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16988c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x16988cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x169890: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x169890u;
    {
        const bool branch_taken_0x169890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169890) {
            ctx->pc = 0x1698B8u;
            goto label_1698b8;
        }
    }
    ctx->pc = 0x169898u;
label_169898:
    // 0x169898: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x169898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16989c: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x16989cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x1698a0: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x1698a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1698a4: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x1698a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    // 0x1698a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1698a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1698ac: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x1698acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x1698b0: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x1698B0u;
    {
        const bool branch_taken_0x1698b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1698b0) {
            ctx->pc = 0x169B5Cu;
            goto label_169b5c;
        }
    }
    ctx->pc = 0x1698B8u;
label_1698b8:
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
            goto label_169a48;
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
            goto label_169a28;
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
            goto label_169a28;
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
            goto label_169a68;
        }
    }
    ctx->pc = 0x169A28u;
label_169a28:
    // 0x169a28: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x169a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a2c: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x169a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x169a30: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x169a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a34: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x169a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    // 0x169a38: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169a3c: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x169a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x169a40: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x169A40u;
    {
        const bool branch_taken_0x169a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a40) {
            ctx->pc = 0x169B5Cu;
            goto label_169b5c;
        }
    }
    ctx->pc = 0x169A48u;
label_169a48:
    // 0x169a48: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x169a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a4c: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x169a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x169a50: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x169a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a54: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x169a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    // 0x169a58: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169a5c: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x169a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x169a60: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x169A60u;
    {
        const bool branch_taken_0x169a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a60) {
            ctx->pc = 0x169B5Cu;
            goto label_169b5c;
        }
    }
    ctx->pc = 0x169A68u;
label_169a68:
    // 0x169a68: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169a6c: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x169a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x169a70: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x169A70u;
    {
        const bool branch_taken_0x169a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169a70) {
            ctx->pc = 0x169B50u;
            goto label_169b50;
        }
    }
    ctx->pc = 0x169A78u;
    // 0x169a78: 0x3c025015  lui         $v0, 0x5015
    ctx->pc = 0x169a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20501 << 16));
    // 0x169a7c: 0x344202f9  ori         $v0, $v0, 0x2F9
    ctx->pc = 0x169a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)761);
    // 0x169a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169a84: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169a88: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x169a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x169a8c: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x169a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169a90: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x169a90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169a94: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169a98: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x169a9c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x169a9cu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x169aa0: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x169aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169aa4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x169aa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169aa8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169aac: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x169aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x169ab0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x169ab0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x169ab4: 0xc60111e4  lwc1        $f1, 0x11E4($s0)
    ctx->pc = 0x169ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169ab8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169abc: 0xc420aae4  lwc1        $f0, -0x551C($at)
    ctx->pc = 0x169abcu;
    { uint32_t bits = FAST_READ32(0x47AAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169ac0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x169ac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x169ac4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169ac8: 0xe420aae4  swc1        $f0, -0x551C($at)
    ctx->pc = 0x169ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAE4u, _value); } while (0); }
    // 0x169acc: 0xc60c11e0  lwc1        $f12, 0x11E0($s0)
    ctx->pc = 0x169accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169ad0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x169AD0u;
    SET_GPR_U32(ctx, 31, 0x169AD8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x169AD0u, 0x169AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AD8u;
label_169ad8:
    // 0x169ad8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x169ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x169adc: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x169adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x169ae0: 0xc05a76c  jal         func_169DB0
    ctx->pc = 0x169AE0u;
    SET_GPR_U32(ctx, 31, 0x169AE8u);
    ctx->pc = 0x169DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169DB0u, 0x169AE0u, 0x169AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AE8u;
label_169ae8:
    // 0x169ae8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x169ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x169aec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x169aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x169af0: 0xc05b068  jal         func_16C1A0
    ctx->pc = 0x169AF0u;
    SET_GPR_U32(ctx, 31, 0x169AF8u);
    ctx->pc = 0x16C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C1A0u, 0x169AF0u, 0x169AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169AF8u;
label_169af8:
    // 0x169af8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x169af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169afc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169b00: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x169b00u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169b04: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x169b04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169b08: 0x0  nop
    ctx->pc = 0x169b08u;
    // NOP
    // 0x169b0c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x169B0Cu;
    {
        const bool branch_taken_0x169b0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169b0c) {
            ctx->pc = 0x169B50u;
            goto label_169b50;
        }
    }
    ctx->pc = 0x169B14u;
    // 0x169b14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169b18: 0xc422ab00  lwc1        $f2, -0x5500($at)
    ctx->pc = 0x169b18u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169b1c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169b20: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x169b20u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169b24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169b28: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x169b28u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169b2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169b30: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x169b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169b34: 0x0  nop
    ctx->pc = 0x169b34u;
    // NOP
    // 0x169b38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x169B38u;
    {
        const bool branch_taken_0x169b38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169b38) {
            ctx->pc = 0x169B50u;
            goto label_169b50;
        }
    }
    ctx->pc = 0x169B40u;
    // 0x169b40: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x169b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169b44: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x169b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x169b48: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x169b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169b4c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x169b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_169b50:
    // 0x169b50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169b54: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x169b54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x169b58: 0x0  nop
    ctx->pc = 0x169b58u;
    // NOP
label_169b5c:
    // 0x169b5c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x169b5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169b60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x169b60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169b64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169b68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169b6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169b70: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x169b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x169b74: 0x3e00008  jr          $ra
    ctx->pc = 0x169B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169B7Cu;
}
