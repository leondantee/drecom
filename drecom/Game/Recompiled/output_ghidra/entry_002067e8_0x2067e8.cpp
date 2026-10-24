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

// Function: entry_002067e8
// Address: 0x2067e8 - 0x2069c0
void entry_002067e8_0x2067e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002067e8_0x2067e8");
#endif

    switch (ctx->pc) {
        case 0x206864u: goto label_206864;
        case 0x206898u: goto label_206898;
        case 0x2068ecu: goto label_2068ec;
        case 0x206908u: goto label_206908;
        case 0x206934u: goto label_206934;
        case 0x206940u: goto label_206940;
        default: break;
    }

    ctx->pc = 0x2067e8u;

    // 0x2067e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2067e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2067ec: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2067ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2067f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2067f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2067f4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2067f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2067f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2067f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2067fc: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x2067fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x206800: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x206800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206804: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x206804u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x206808: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20680c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x20680cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x206810: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x206810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x206814: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x206814u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x206818: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x206818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20681c: 0x14620068  bne         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x20681Cu;
    {
        const bool branch_taken_0x20681c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20681c) {
            ctx->pc = 0x2069C0u;
            return;
        }
    }
    ctx->pc = 0x206824u;
    // 0x206824: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206828: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x206828u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x20682c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x20682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206830: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x206830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x206834: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x206834u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206838: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20683c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x20683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x206840: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x206840u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x206844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206848: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20684c: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x20684cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192C4u, _value); } while (0); }
    // 0x206850: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206854: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x206854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206858: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x206858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x20685c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x20685Cu;
    SET_GPR_U32(ctx, 31, 0x206864u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x20685Cu, 0x206864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206864u;
label_206864:
    // 0x206864: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x206864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x206868: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x206868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x20686c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20686cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206870: 0x0  nop
    ctx->pc = 0x206870u;
    // NOP
    // 0x206874: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x206874u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x206878: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x206878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20687c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20687cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206880: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x206880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x206884: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x206888: 0x24449280  addiu       $a0, $v0, -0x6D80
    ctx->pc = 0x206888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x20688c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x20688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x206890: 0xc067844  jal         func_19E110
    ctx->pc = 0x206890u;
    SET_GPR_U32(ctx, 31, 0x206898u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x206890u, 0x206898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206898u;
label_206898:
    // 0x206898: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206898u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20689c: 0x0  nop
    ctx->pc = 0x20689cu;
    // NOP
    // 0x2068a0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2068a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2068a4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2068a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2068a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2068a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2068ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2068acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2068b0: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2068b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2068b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2068b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2068b8: 0x0  nop
    ctx->pc = 0x2068b8u;
    // NOP
    // 0x2068bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2068bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2068c0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2068c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2068c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2068c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2068c8: 0x0  nop
    ctx->pc = 0x2068c8u;
    // NOP
    // 0x2068cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2068ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2068d0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2068d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2068d4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2068d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2068d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2068d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2068dc: 0x24459280  addiu       $a1, $v0, -0x6D80
    ctx->pc = 0x2068dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x2068e0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2068e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2068e4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2068E4u;
    SET_GPR_U32(ctx, 31, 0x2068ECu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2068ECu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2068ECu) { return; }
    ctx->pc = 0x2068ECu;
label_2068ec:
    // 0x2068ec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2068ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2068f0: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x2068f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2068f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2068f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2068f8: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x2068f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2068fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2068fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x206900: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x206900u;
    SET_GPR_U32(ctx, 31, 0x206908u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x206908u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x206908u) { return; }
    ctx->pc = 0x206908u;
label_206908:
    // 0x206908: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x206908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20690c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20690cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206910: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x206910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192C4u, _value); } while (0); }
    // 0x206914: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206918: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x206918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20691c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20691cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x206920: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x206924: 0x244692c0  addiu       $a2, $v0, -0x6D40
    ctx->pc = 0x206924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x206928: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x206928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x20692c: 0xc0bb3e8  jal         func_2ECFA0
    ctx->pc = 0x20692Cu;
    SET_GPR_U32(ctx, 31, 0x206934u);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x20692Cu, 0x206934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206934u;
label_206934:
    // 0x206934: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x206934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x206938: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x206938u;
    SET_GPR_U32(ctx, 31, 0x206940u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x206940u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x206940u) { return; }
    ctx->pc = 0x206940u;
label_206940:
    // 0x206940: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x206940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x206944: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206948: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x206948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x20694c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x206950: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x206950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x206954: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x206954u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6192C0u));
    // 0x206958: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x206958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20695c: 0x244292f0  addiu       $v0, $v0, -0x6D10
    ctx->pc = 0x20695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
    // 0x206960: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x206960u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192F0u, _value); } while (0);
    // 0x206964: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206968: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x206968u;
    { uint32_t bits = FAST_READ32(0x6192F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20696c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x20696cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x206970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206974: 0x0  nop
    ctx->pc = 0x206974u;
    // NOP
    // 0x206978: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x206978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20697c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20697cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206980: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x206980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x206984: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x206984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x206988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x206988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20698c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20698cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206990: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x206990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x206994: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x206994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x206998: 0xa4209304  sh          $zero, -0x6CFC($at)
    ctx->pc = 0x206998u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x20699c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20699cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2069a0: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x2069a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x2069a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2069a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2069a8: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x2069a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x2069ac: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2069acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2069b0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2069b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2069b4: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x2069b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x2069b8: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x2069B8u;
    SET_GPR_U32(ctx, 31, 0x2069C0u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x2069B8u, 0x2069C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069C0u;
}
