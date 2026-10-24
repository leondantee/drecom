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

// Function: Em_scr_at
// Address: 0x169000 - 0x169688
void Em_scr_at_0x169000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_scr_at_0x169000");
#endif

    switch (ctx->pc) {
        case 0x169100u: goto label_169100;
        case 0x16910cu: goto label_16910c;
        case 0x169120u: goto label_169120;
        case 0x169150u: goto label_169150;
        case 0x169160u: goto label_169160;
        case 0x1691c4u: goto label_1691c4;
        case 0x1691ecu: goto label_1691ec;
        case 0x1691fcu: goto label_1691fc;
        case 0x169210u: goto label_169210;
        case 0x169228u: goto label_169228;
        case 0x1692c0u: goto label_1692c0;
        case 0x1693ccu: goto label_1693cc;
        case 0x1693dcu: goto label_1693dc;
        case 0x1693ecu: goto label_1693ec;
        case 0x169450u: goto label_169450;
        case 0x169478u: goto label_169478;
        case 0x169488u: goto label_169488;
        case 0x16949cu: goto label_16949c;
        case 0x1694b4u: goto label_1694b4;
        case 0x169610u: goto label_169610;
        default: break;
    }

    ctx->pc = 0x169000u;

    // 0x169000: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x169000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x169004: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x169004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x169008: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x169008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16900c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16900cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x169010: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x169010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x169014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x169014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x169018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16901c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169020: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x169020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x169024: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x169024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
    // 0x169028: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x169028u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16902c: 0x8fb000d0  lw          $s0, 0xD0($sp)
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x169030: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x169030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x169034: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169038: 0xac22ab28  sw          $v0, -0x54D8($at)
    ctx->pc = 0x169038u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47AB28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB28u, _value); } while (0);
    // 0x16903c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16903cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169040: 0xac20ab20  sw          $zero, -0x54E0($at)
    ctx->pc = 0x169040u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47AB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB20u, _value); } while (0);
    // 0x169044: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x169044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x169048: 0x8c33fdf8  lw          $s3, -0x208($at)
    ctx->pc = 0x169048u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x16904c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16904cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x169050: 0x8c22fdf8  lw          $v0, -0x208($at)
    ctx->pc = 0x169050u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CFDF8u));
    // 0x169054: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x169054u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x169058: 0xc60011e0  lwc1        $f0, 0x11E0($s0)
    ctx->pc = 0x169058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16905c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16905cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169060: 0xe420ab08  swc1        $f0, -0x54F8($at)
    ctx->pc = 0x169060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB08u, _value); } while (0); }
    // 0x169064: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169068: 0xac20bb30  sw          $zero, -0x44D0($at)
    ctx->pc = 0x169068u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47BB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB30u, _value); } while (0);
    // 0x16906c: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x16906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169070: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x169070u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169074: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x169074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x169078: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x169078u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16907c: 0x3c025015  lui         $v0, 0x5015
    ctx->pc = 0x16907cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20501 << 16));
    // 0x169080: 0x344202f9  ori         $v0, $v0, 0x2F9
    ctx->pc = 0x169080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)761);
    // 0x169084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169088: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16908c: 0xe420ab00  swc1        $f0, -0x5500($at)
    ctx->pc = 0x16908cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AB00u, _value); } while (0); }
    // 0x169090: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x169090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169094: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x169094u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169098: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16909c: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x16909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x1690a0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1690a0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAD0u, _value); } while (0);
    // 0x1690a4: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x1690a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1690a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1690a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1690ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1690acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1690b0: 0x2442aae0  addiu       $v0, $v0, -0x5520
    ctx->pc = 0x1690b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x1690b4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1690b4u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x47AAE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x47AAE0u, _value); } while (0);
    // 0x1690b8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1690b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1690bc: 0xc421aad4  lwc1        $f1, -0x552C($at)
    ctx->pc = 0x1690bcu;
    { uint32_t bits = FAST_READ32(0x47AAD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1690c0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1690c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1690c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1690c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1690c8: 0x0  nop
    ctx->pc = 0x1690c8u;
    // NOP
    // 0x1690cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1690ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1690d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1690d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1690d4: 0xe420aad4  swc1        $f0, -0x552C($at)
    ctx->pc = 0x1690d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAD4u, _value); } while (0); }
    // 0x1690d8: 0xc60111e4  lwc1        $f1, 0x11E4($s0)
    ctx->pc = 0x1690d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1690dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1690dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1690e0: 0xc420aae4  lwc1        $f0, -0x551C($at)
    ctx->pc = 0x1690e0u;
    { uint32_t bits = FAST_READ32(0x47AAE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1690e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1690e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1690e8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1690e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1690ec: 0xe420aae4  swc1        $f0, -0x551C($at)
    ctx->pc = 0x1690ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47AAE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47AAE4u, _value); } while (0); }
    // 0x1690f0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1690f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1690f4: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1690f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1690f8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x1690F8u;
    SET_GPR_U32(ctx, 31, 0x169100u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x169100u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169100u) { return; }
    ctx->pc = 0x169100u;
label_169100:
    // 0x169100: 0xc60c11e0  lwc1        $f12, 0x11E0($s0)
    ctx->pc = 0x169100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169104: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x169104u;
    SET_GPR_U32(ctx, 31, 0x16910Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x169104u, 0x16910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16910Cu;
label_16910c:
    // 0x16910c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x16910cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x169110: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x169110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x169114: 0xc60c11e4  lwc1        $f12, 0x11E4($s0)
    ctx->pc = 0x169114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169118: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x169118u;
    SET_GPR_U32(ctx, 31, 0x169120u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x169118u, 0x169120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169120u;
label_169120:
    // 0x169120: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169124: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x169124u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x169128: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x169128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x16912c: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x16912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x169130: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x169130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x169134: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x169134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169138: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x169138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x16913c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x16913cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x169140: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x169140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x169144: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x169144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x169148: 0xc05a6e0  jal         func_169B80
    ctx->pc = 0x169148u;
    SET_GPR_U32(ctx, 31, 0x169150u);
    ctx->pc = 0x169B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B80u, 0x169148u, 0x169150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169150u;
label_169150:
    // 0x169150: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x169150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x169154: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x169154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x169158: 0xc05b068  jal         func_16C1A0
    ctx->pc = 0x169158u;
    SET_GPR_U32(ctx, 31, 0x169160u);
    ctx->pc = 0x16C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C1A0u, 0x169158u, 0x169160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169160u;
label_169160:
    // 0x169160: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x169160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169164: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169168: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x169168u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16916c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x16916cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169170: 0x0  nop
    ctx->pc = 0x169170u;
    // NOP
    // 0x169174: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x169174u;
    {
        const bool branch_taken_0x169174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169174) {
            ctx->pc = 0x169240u;
            goto label_169240;
        }
    }
    ctx->pc = 0x16917Cu;
    // 0x16917c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16917cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169180: 0xc422ab00  lwc1        $f2, -0x5500($at)
    ctx->pc = 0x169180u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x169184: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169188: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x169188u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16918c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169190: 0xc420ab08  lwc1        $f0, -0x54F8($at)
    ctx->pc = 0x169190u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x169194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169198: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x169198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16919c: 0x0  nop
    ctx->pc = 0x16919cu;
    // NOP
    // 0x1691a0: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x1691A0u;
    {
        const bool branch_taken_0x1691a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1691a0) {
            ctx->pc = 0x169240u;
            goto label_169240;
        }
    }
    ctx->pc = 0x1691A8u;
    // 0x1691a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1691a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1691ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1691acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1691b0: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x1691b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x1691b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1691b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1691b8: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x1691b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x1691bc: 0xc040c80  jal         func_103200
    ctx->pc = 0x1691BCu;
    SET_GPR_U32(ctx, 31, 0x1691C4u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x1691C4u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1691C4u) { return; }
    ctx->pc = 0x1691C4u;
label_1691c4:
    // 0x1691c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1691c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1691c8: 0xc421ab08  lwc1        $f1, -0x54F8($at)
    ctx->pc = 0x1691c8u;
    { uint32_t bits = FAST_READ32(0x47AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1691cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1691ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1691d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1691d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1691d4: 0x0  nop
    ctx->pc = 0x1691d4u;
    // NOP
    // 0x1691d8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1691d8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1691dc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1691dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1691e0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1691e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1691e4: 0xc040c8c  jal         func_103230
    ctx->pc = 0x1691E4u;
    SET_GPR_U32(ctx, 31, 0x1691ECu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x1691ECu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1691ECu) { return; }
    ctx->pc = 0x1691ECu;
label_1691ec:
    // 0x1691ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1691ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1691f0: 0xc42cab00  lwc1        $f12, -0x5500($at)
    ctx->pc = 0x1691f0u;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1691f4: 0xc045630  jal         func_1158C0
    ctx->pc = 0x1691F4u;
    SET_GPR_U32(ctx, 31, 0x1691FCu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x1691F4u, 0x1691FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1691FCu;
label_1691fc:
    // 0x1691fc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1691fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x169200: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x169200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x169204: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x169204u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x169208: 0xc040c60  jal         func_103180
    ctx->pc = 0x169208u;
    SET_GPR_U32(ctx, 31, 0x169210u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x169210u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169210u) { return; }
    ctx->pc = 0x169210u;
label_169210:
    // 0x169210: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x169210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x169214: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169218: 0x2445aaf0  addiu       $a1, $v0, -0x5510
    ctx->pc = 0x169218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x16921c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x16921cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x169220: 0xc040c80  jal         func_103200
    ctx->pc = 0x169220u;
    SET_GPR_U32(ctx, 31, 0x169228u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x169228u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x169228u) { return; }
    ctx->pc = 0x169228u;
label_169228:
    // 0x169228: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x169228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16922c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x16922cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x169230: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x169230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169234: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x169234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x169238: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x169238u;
    {
        const bool branch_taken_0x169238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169238) {
            ctx->pc = 0x169334u;
            goto label_169334;
        }
    }
    ctx->pc = 0x169240u;
label_169240:
    // 0x169240: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x169240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x169244: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x169244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x169248: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x169248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16924c: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x16924Cu;
    {
        const bool branch_taken_0x16924c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16924c) {
            ctx->pc = 0x169314u;
            goto label_169314;
        }
    }
    ctx->pc = 0x169254u;
    // 0x169254: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x169254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169258: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x169258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16925c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x16925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x169260: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x169260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169264: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169268: 0xc420aad4  lwc1        $f0, -0x552C($at)
    ctx->pc = 0x169268u;
    { uint32_t bits = FAST_READ32(0x47AAD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16926c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16926cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x169270: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x169270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x169274: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x169274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169278: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x169278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x16927c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169284: 0x0  nop
    ctx->pc = 0x169284u;
    // NOP
    // 0x169288: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x169288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x16928c: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x16928cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169290: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x169290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x169294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169298: 0x0  nop
    ctx->pc = 0x169298u;
    // NOP
    // 0x16929c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16929cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1692a0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1692a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x1692a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1692a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1692a8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1692a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1692ac: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1692acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1692b0: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x1692b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x1692b4: 0x344707c7  ori         $a3, $v0, 0x7C7
    ctx->pc = 0x1692b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1991);
    // 0x1692b8: 0xc059e1c  jal         func_167870
    ctx->pc = 0x1692B8u;
    SET_GPR_U32(ctx, 31, 0x1692C0u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1692B8u, 0x1692C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1692C0u;
label_1692c0:
    // 0x1692c0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1692c0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1692c4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x1692c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1692c8: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1692c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1692cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1692ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1692d0: 0x0  nop
    ctx->pc = 0x1692d0u;
    // NOP
    // 0x1692d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1692d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1692d8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1692d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x1692dc: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1692DCu;
    {
        const bool branch_taken_0x1692dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692dc) {
            ctx->pc = 0x1692FCu;
            goto label_1692fc;
        }
    }
    ctx->pc = 0x1692E4u;
    // 0x1692e4: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x1692e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1692e8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1692e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1692ec: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x1692ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1692f0: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x1692f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x1692f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1692F4u;
    {
        const bool branch_taken_0x1692f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1692f4) {
            ctx->pc = 0x169324u;
            goto label_169324;
        }
    }
    ctx->pc = 0x1692FCu;
label_1692fc:
    // 0x1692fc: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1692fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169300: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x169300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x169304: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x169304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169308: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x169308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    // 0x16930c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16930Cu;
    {
        const bool branch_taken_0x16930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16930c) {
            ctx->pc = 0x169324u;
            goto label_169324;
        }
    }
    ctx->pc = 0x169314u;
label_169314:
    // 0x169314: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x169314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169318: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x169318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x16931c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x16931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169320: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x169320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
label_169324:
    // 0x169324: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169328: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x169328u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x16932c: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x16932Cu;
    {
        const bool branch_taken_0x16932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16932c) {
            ctx->pc = 0x169660u;
            goto label_169660;
        }
    }
    ctx->pc = 0x169334u;
label_169334:
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
            goto label_1694c4;
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
            goto label_1694c4;
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
            goto label_1694c4;
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
label_1694c4:
    // 0x1694c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1694c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1694c8: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x1694c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x1694cc: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x1694ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1694d0: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1694d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1694d4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1694d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1694d8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1694d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1694dc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x1694dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1694e0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1694e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1694e4: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x1694e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x1694e8: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x1694e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1694ec: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1694ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1694f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1694f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1694f4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1694f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1694f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1694f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1694fc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1694fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x169500: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x169500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x169504: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x169504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169508: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x169508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16950c: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x16950cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x169510: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x169510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169514: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x169514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169518: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x169518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16951c: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x16951cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x169520: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x169520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169524: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x169524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169528: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x169528u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x16952c: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x16952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169530: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x169530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169534: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x169534u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x169538: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x169538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16953c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x16953cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x169540: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x169540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x169544: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x169544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169548: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169548u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16954c: 0x0  nop
    ctx->pc = 0x16954cu;
    // NOP
    // 0x169550: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x169550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169554: 0x0  nop
    ctx->pc = 0x169554u;
    // NOP
    // 0x169558: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x169558u;
    {
        const bool branch_taken_0x169558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169558) {
            ctx->pc = 0x169590u;
            goto label_169590;
        }
    }
    ctx->pc = 0x169560u;
    // 0x169560: 0xc60111e0  lwc1        $f1, 0x11E0($s0)
    ctx->pc = 0x169560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169564: 0xc60011e0  lwc1        $f0, 0x11E0($s0)
    ctx->pc = 0x169564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169568: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x169568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x16956c: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x16956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169570: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x169570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169574: 0x0  nop
    ctx->pc = 0x169574u;
    // NOP
    // 0x169578: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x169578u;
    {
        const bool branch_taken_0x169578 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169578) {
            ctx->pc = 0x169590u;
            goto label_169590;
        }
    }
    ctx->pc = 0x169580u;
    // 0x169580: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x169580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169584: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x169584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x169588: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x169588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16958c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x16958cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_169590:
    // 0x169590: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x169590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x169594: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x169594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x169598: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x169598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x16959c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x16959Cu;
    {
        const bool branch_taken_0x16959c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16959c) {
            ctx->pc = 0x169644u;
            goto label_169644;
        }
    }
    ctx->pc = 0x1695A4u;
    // 0x1695a4: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x1695a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1695a8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1695a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1695ac: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1695acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1695b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1695b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1695b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1695b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1695b8: 0xc420aad4  lwc1        $f0, -0x552C($at)
    ctx->pc = 0x1695b8u;
    { uint32_t bits = FAST_READ32(0x47AAD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1695bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1695bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1695c0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1695c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1695c4: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x1695c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1695c8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1695c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1695cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1695ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1695d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1695d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1695d4: 0x0  nop
    ctx->pc = 0x1695d4u;
    // NOP
    // 0x1695d8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1695d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1695dc: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x1695dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1695e0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1695e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1695e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1695e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1695e8: 0x0  nop
    ctx->pc = 0x1695e8u;
    // NOP
    // 0x1695ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1695ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1695f0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1695f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x1695f4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1695f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1695f8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1695f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1695fc: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1695fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x169600: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x169600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x169604: 0x344707c7  ori         $a3, $v0, 0x7C7
    ctx->pc = 0x169604u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1991);
    // 0x169608: 0xc059e1c  jal         func_167870
    ctx->pc = 0x169608u;
    SET_GPR_U32(ctx, 31, 0x169610u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x169608u, 0x169610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169610u;
label_169610:
    // 0x169610: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x169610u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x169614: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x169614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169618: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x169618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x16961c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16961cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169620: 0x0  nop
    ctx->pc = 0x169620u;
    // NOP
    // 0x169624: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x169624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x169628: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x169628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x16962c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16962Cu;
    {
        const bool branch_taken_0x16962c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16962c) {
            ctx->pc = 0x169644u;
            goto label_169644;
        }
    }
    ctx->pc = 0x169634u;
    // 0x169634: 0xc6001314  lwc1        $f0, 0x1314($s0)
    ctx->pc = 0x169634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169638: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x169638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x16963c: 0xc6001318  lwc1        $f0, 0x1318($s0)
    ctx->pc = 0x16963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169640: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x169640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_169644:
    // 0x169644: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x169644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169648: 0xe6001314  swc1        $f0, 0x1314($s0)
    ctx->pc = 0x169648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4884), bits); }
    // 0x16964c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x16964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169650: 0xe6001318  swc1        $f0, 0x1318($s0)
    ctx->pc = 0x169650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4888), bits); }
    // 0x169654: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169658: 0x8c22ab20  lw          $v0, -0x54E0($at)
    ctx->pc = 0x169658u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47AB20u));
    // 0x16965c: 0x0  nop
    ctx->pc = 0x16965cu;
    // NOP
label_169660:
    // 0x169660: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x169660u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169664: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x169664u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x169668: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x169668u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16966c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16966cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169670: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x169670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169678: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16967c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x16967cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x169680: 0x3e00008  jr          $ra
    ctx->pc = 0x169680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169688u;
}
