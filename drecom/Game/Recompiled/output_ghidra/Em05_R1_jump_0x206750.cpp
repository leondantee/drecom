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

// Function: Em05_R1_jump
// Address: 0x206750 - 0x206bdc
void Em05_R1_jump_0x206750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_jump_0x206750");
#endif

    switch (ctx->pc) {
        case 0x2067a4u: goto label_2067a4;
        case 0x206864u: goto label_206864;
        case 0x206898u: goto label_206898;
        case 0x2068ecu: goto label_2068ec;
        case 0x206908u: goto label_206908;
        case 0x206934u: goto label_206934;
        case 0x206940u: goto label_206940;
        case 0x2069c0u: goto label_2069c0;
        case 0x206a68u: goto label_206a68;
        case 0x206a74u: goto label_206a74;
        case 0x206a84u: goto label_206a84;
        case 0x206a90u: goto label_206a90;
        case 0x206b90u: goto label_206b90;
        case 0x206ba4u: goto label_206ba4;
        default: break;
    }

    ctx->pc = 0x206750u;

    // 0x206750: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x206750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x206754: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x206754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x206758: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x206758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x20675c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206760: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x206760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x206764: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x206764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x206768: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20676c: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x20676Cu;
    {
        const bool branch_taken_0x20676c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20676c) {
            ctx->pc = 0x2067E8u;
            goto label_2067e8;
        }
    }
    ctx->pc = 0x206774u;
    // 0x206774: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206774u;
    {
        const bool branch_taken_0x206774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x206774) {
            ctx->pc = 0x206784u;
            goto label_206784;
        }
    }
    ctx->pc = 0x20677Cu;
    // 0x20677c: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x20677Cu;
    {
        const bool branch_taken_0x20677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20677c) {
            ctx->pc = 0x206BCCu;
            goto label_206bcc;
        }
    }
    ctx->pc = 0x206784u;
label_206784:
    // 0x206784: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206788: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20678c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20678cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x206790: 0x24063c0e  addiu       $a2, $zero, 0x3C0E
    ctx->pc = 0x206790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15374));
    // 0x206794: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x206794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206798: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x206798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20679c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20679Cu;
    SET_GPR_U32(ctx, 31, 0x2067A4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20679Cu, 0x2067A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067A4u;
label_2067a4:
    // 0x2067a4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2067a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2067a8: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2067a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2067ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2067acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2067b0: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2067b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2067b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2067b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2067b8: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x2067b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2067bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2067bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2067c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2067c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2067c4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2067c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2067c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2067c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2067cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2067ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2067d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2067d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2067d4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x2067d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x2067d8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2067d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2067dc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2067dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2067e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2067e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2067e4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2067e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2067e8:
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
            goto label_2069c0;
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
label_2069c0:
    // 0x2069c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2069c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2069c4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2069c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2069c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2069c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2069cc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2069ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2069d0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2069D0u;
    {
        const bool branch_taken_0x2069d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069d0) {
            ctx->pc = 0x206A58u;
            goto label_206a58;
        }
    }
    ctx->pc = 0x2069D8u;
    // 0x2069d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2069d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2069dc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2069dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2069e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2069e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2069e4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2069e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2069e8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2069E8u;
    {
        const bool branch_taken_0x2069e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069e8) {
            ctx->pc = 0x206A28u;
            goto label_206a28;
        }
    }
    ctx->pc = 0x2069F0u;
    // 0x2069f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2069f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2069f4: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2069f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2069f8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2069f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2069fc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2069fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206a00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206a00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206a04: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x206a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x206a08: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a0c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x206a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206a10: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a14: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x206a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206a18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x206a18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x206a1c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x206a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x206a20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206A20u;
    {
        const bool branch_taken_0x206a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a20) {
            ctx->pc = 0x206A58u;
            goto label_206a58;
        }
    }
    ctx->pc = 0x206A28u;
label_206a28:
    // 0x206a28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a2c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x206a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206a30: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a34: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x206a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206a38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206a38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206a3c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x206a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x206a40: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a44: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x206a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206a48: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x206a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a4c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x206a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x206a50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x206a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x206a54: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x206a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_206a58:
    // 0x206a58: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x206a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206a60: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x206A60u;
    SET_GPR_U32(ctx, 31, 0x206A68u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x206A60u, 0x206A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A68u;
label_206a68:
    // 0x206a68: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a6c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x206A6Cu;
    SET_GPR_U32(ctx, 31, 0x206A74u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x206A6Cu, 0x206A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A74u;
label_206a74:
    // 0x206a74: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x206a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x206a7c: 0xc080f60  jal         func_203D80
    ctx->pc = 0x206A7Cu;
    SET_GPR_U32(ctx, 31, 0x206A84u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x206A7Cu, 0x206A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A84u;
label_206a84:
    // 0x206a84: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a88: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x206A88u;
    SET_GPR_U32(ctx, 31, 0x206A90u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x206A88u, 0x206A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A90u;
label_206a90:
    // 0x206a90: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206a94: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x206a94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x206a98: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x206A98u;
    {
        const bool branch_taken_0x206a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a98) {
            ctx->pc = 0x206B6Cu;
            goto label_206b6c;
        }
    }
    ctx->pc = 0x206AA0u;
    // 0x206aa0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x206aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x206aa4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x206aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x206aa8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x206aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x206aac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x206aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x206ab0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x206ab4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x206ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x206ab8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x206ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x206abc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x206abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x206ac0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x206ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x206ac4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x206ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x206ac8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x206ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x206acc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x206accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x206ad0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x206ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x206ad4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x206ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x206ad8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x206ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x206adc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x206adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x206ae0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x206ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x206ae4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x206ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x206ae8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x206ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x206aec: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x206AECu;
    {
        const bool branch_taken_0x206aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206aec) {
            ctx->pc = 0x206B2Cu;
            goto label_206b2c;
        }
    }
    ctx->pc = 0x206AF4u;
    // 0x206af4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206af8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206afc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x206afcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x206b00: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x206b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x206b04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b08: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x206b0c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b10: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206b10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x206b14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b18: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206b18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x206b1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b20: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206b20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x206b24: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x206B24u;
    {
        const bool branch_taken_0x206b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206b24) {
            ctx->pc = 0x206B6Cu;
            goto label_206b6c;
        }
    }
    ctx->pc = 0x206B2Cu;
label_206b2c:
    // 0x206b2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206b30: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x206b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x206b38: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x206b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x206b3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b40: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x206b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x206b44: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b48: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x206b48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x206b4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b50: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x206b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x206b54: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x206b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x206b5c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b60: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x206b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x206b64: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x206b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x206b68: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x206b68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
label_206b6c:
    // 0x206b6c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b70: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x206b70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x206b74: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x206b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x206b78: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x206b78u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x206b7c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x206b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x206b80: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x206B80u;
    {
        const bool branch_taken_0x206b80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x206b80) {
            ctx->pc = 0x206BBCu;
            goto label_206bbc;
        }
    }
    ctx->pc = 0x206B88u;
    // 0x206b88: 0xc067694  jal         func_19DA50
    ctx->pc = 0x206B88u;
    SET_GPR_U32(ctx, 31, 0x206B90u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x206B88u, 0x206B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B90u;
label_206b90:
    // 0x206b90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x206b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x206b94: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x206b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x206b98: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206b9c: 0xc0baaf4  jal         func_2EABD0
    ctx->pc = 0x206B9Cu;
    SET_GPR_U32(ctx, 31, 0x206BA4u);
    ctx->pc = 0x2EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EABD0u, 0x206B9Cu, 0x206BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BA4u;
label_206ba4:
    // 0x206ba4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x206ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206ba8: 0xa460127c  sh          $zero, 0x127C($v1)
    ctx->pc = 0x206ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x206bac: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206bb0: 0x8c831340  lw          $v1, 0x1340($a0)
    ctx->pc = 0x206bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4928)));
    // 0x206bb4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x206bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x206bb8: 0xac831340  sw          $v1, 0x1340($a0)
    ctx->pc = 0x206bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4928), GPR_U32(ctx, 3));
label_206bbc:
    // 0x206bbc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x206bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x206bc0: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x206bc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x206bc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x206bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206bc8: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x206bc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
label_206bcc:
    // 0x206bcc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x206bccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206bd0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x206bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x206bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x206BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206BDCu;
}
