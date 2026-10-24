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

// Function: Em0a_R0_init
// Address: 0x363630 - 0x363974
void Em0a_R0_init_0x363630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R0_init_0x363630");
#endif

    switch (ctx->pc) {
        case 0x3636a8u: goto label_3636a8;
        case 0x363788u: goto label_363788;
        case 0x36381cu: goto label_36381c;
        case 0x36382cu: goto label_36382c;
        case 0x363838u: goto label_363838;
        default: break;
    }

    ctx->pc = 0x363630u;

    // 0x363630: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x363630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x363634: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x363634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x363638: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x363638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36363c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36363cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x363640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x363640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x363644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x363644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x363648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x363648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36364c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x36364cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x363650: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363654: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x363654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x363658: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36365c: 0x247110b0  addiu       $s1, $v1, 0x10B0
    ctx->pc = 0x36365cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x363660: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363664: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x363664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x363668: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x363668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36366c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x36366cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x363670: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x363670u;
    {
        const bool branch_taken_0x363670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x363670) {
            ctx->pc = 0x363840u;
            goto label_363840;
        }
    }
    ctx->pc = 0x363678u;
    // 0x363678: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x363678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x36367c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36367cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363680: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x363680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363684: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x363684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x363688: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x363688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x36368c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36368cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363690: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x363690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363694: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x363694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x363698: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x363698u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36369c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36369cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3636a0: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x3636A0u;
    SET_GPR_U32(ctx, 31, 0x3636A8u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x3636A0u, 0x3636A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3636A8u;
label_3636a8:
    // 0x3636a8: 0x3c024409  lui         $v0, 0x4409
    ctx->pc = 0x3636a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17417 << 16));
    // 0x3636ac: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3636acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3636b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3636b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3636b4: 0x0  nop
    ctx->pc = 0x3636b4u;
    // NOP
    // 0x3636b8: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x3636b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x3636bc: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x3636bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x3636c0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3636c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x3636c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3636c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3636c8: 0x0  nop
    ctx->pc = 0x3636c8u;
    // NOP
    // 0x3636cc: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x3636ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    // 0x3636d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3636d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3636d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3636d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3636d8: 0x0  nop
    ctx->pc = 0x3636d8u;
    // NOP
    // 0x3636dc: 0xe62000e4  swc1        $f0, 0xE4($s1)
    ctx->pc = 0x3636dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
    // 0x3636e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3636e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3636e4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x3636e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3636e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3636e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3636ec: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3636ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3636f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3636f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3636f4: 0x0  nop
    ctx->pc = 0x3636f4u;
    // NOP
    // 0x3636f8: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x3636f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x3636fc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x3636fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x363700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x363700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363704: 0x0  nop
    ctx->pc = 0x363704u;
    // NOP
    // 0x363708: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x363708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x36370c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36370cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363710: 0x0  nop
    ctx->pc = 0x363710u;
    // NOP
    // 0x363714: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x363714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x363718: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x363718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36371c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36371cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363720: 0x0  nop
    ctx->pc = 0x363720u;
    // NOP
    // 0x363724: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x363724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x363728: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x363728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36372c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x36372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x363730: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x363730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x363734: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x363734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x363738: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x363738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x36373c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36373cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x363740: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x363740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x363744: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x363744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x363748: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x363748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x36374c: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x36374cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x363750: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x363750u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x363754: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x363754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x363758: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x363758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36375c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36375cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x363760: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x363760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x363764: 0x8c340ae8  lw          $s4, 0xAE8($at)
    ctx->pc = 0x363764u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x363768: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x363768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36376c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x363770: 0x245203f0  addiu       $s2, $v0, 0x3F0
    ctx->pc = 0x363770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x363774: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x363774u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x363778: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x363778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x36377c: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x36377cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x363780: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x363780u;
    SET_GPR_U32(ctx, 31, 0x363788u);
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x363780u, 0x363788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363788u;
label_363788:
    // 0x363788: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x363788u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36378c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x36378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x363790: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x363790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x363794: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x363794u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x363798: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x363798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x36379c: 0x24430ae8  addiu       $v1, $v0, 0xAE8
    ctx->pc = 0x36379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x3637a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3637a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x3637a4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3637a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3637a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3637a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x3637ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3637acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3637b0: 0x24440ae8  addiu       $a0, $v0, 0xAE8
    ctx->pc = 0x3637b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
    // 0x3637b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3637b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x3637b8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3637b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3637bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3637bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3637c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3637c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3637c4: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x3637c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x3637c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3637c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3637cc: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x3637ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x3637d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3637d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3637d4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3637d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3637d8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3637d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3637dc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3637dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3637e0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x3637e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3637e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3637e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3637e8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3637e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3637ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3637ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3637f0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x3637f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3637f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3637f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3637f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3637f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3637fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3637fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363800: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x363800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363804: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x363804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x363808: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x363808u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36380c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36380cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363810: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x363810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x363814: 0xc0965d0  jal         func_259740
    ctx->pc = 0x363814u;
    SET_GPR_U32(ctx, 31, 0x36381Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x363814u, 0x36381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36381Cu;
label_36381c:
    // 0x36381c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36381cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363820: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x363820u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x363824: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x363824u;
    SET_GPR_U32(ctx, 31, 0x36382Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x363824u, 0x36382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36382Cu;
label_36382c:
    // 0x36382c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x36382cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363830: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x363830u;
    SET_GPR_U32(ctx, 31, 0x363838u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x363830u, 0x363838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363838u;
label_363838:
    // 0x363838: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x363838u;
    {
        const bool branch_taken_0x363838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363838) {
            ctx->pc = 0x36387Cu;
            goto label_36387c;
        }
    }
    ctx->pc = 0x363840u;
label_363840:
    // 0x363840: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363844: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x363844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x363848: 0x247203f0  addiu       $s2, $v1, 0x3F0
    ctx->pc = 0x363848u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x36384c: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x36384cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x363850: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x363850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x363854: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363858: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36385c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36385cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363860: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x363860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x363864: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363868: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363868u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36386c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363870: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363874: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363878: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36387c:
    // 0x36387c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36387cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x363880: 0x2464ad50  addiu       $a0, $v1, -0x52B0
    ctx->pc = 0x363880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946128));
    // 0x363884: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363888: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x363888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x36388c: 0x3c0407f8  lui         $a0, 0x7F8
    ctx->pc = 0x36388cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2040 << 16));
    // 0x363890: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363894: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x363894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x363898: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x363898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36389c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36389cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3638a0: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x3638a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x3638a4: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x3638a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3638a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3638ac: 0xa203002b  sb          $v1, 0x2B($s0)
    ctx->pc = 0x3638acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3638b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3638b4: 0xa2030043  sb          $v1, 0x43($s0)
    ctx->pc = 0x3638b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3638b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3638bc: 0xa203005b  sb          $v1, 0x5B($s0)
    ctx->pc = 0x3638bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638c0: 0xa2000011  sb          $zero, 0x11($s0)
    ctx->pc = 0x3638c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638c4: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x3638c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3638c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3638cc: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x3638ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638d0: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x3638d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3638d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3638d8: 0xa2030041  sb          $v1, 0x41($s0)
    ctx->pc = 0x3638d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638dc: 0xa2000042  sb          $zero, 0x42($s0)
    ctx->pc = 0x3638dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3638e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3638e4: 0xa2030059  sb          $v1, 0x59($s0)
    ctx->pc = 0x3638e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638e8: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x3638e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3638ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3638f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3638f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3638f4: 0x247203f0  addiu       $s2, $v1, 0x3F0
    ctx->pc = 0x3638f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x3638f8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x3638f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638fc: 0xa200006e  sb          $zero, 0x6E($s0)
    ctx->pc = 0x3638fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x363900: 0xa200006f  sb          $zero, 0x6F($s0)
    ctx->pc = 0x363900u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x363904: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x363904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363908: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x363908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36390c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x36390cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x363910: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x363910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x363914: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x363914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x363918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36391c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363920: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x363920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x363924: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x363924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x363928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36392c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363930: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x363930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x363934: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x363934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x363938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36393c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36393cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363940: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x363940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x363944: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x363944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x363948: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x363948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x36394c: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x36394cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x363950: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x363950u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x363954: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x363954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363958: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x363958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36395c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36395cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x363960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363968: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x363968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36396c: 0x3e00008  jr          $ra
    ctx->pc = 0x36396Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36396Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363974u;
}
