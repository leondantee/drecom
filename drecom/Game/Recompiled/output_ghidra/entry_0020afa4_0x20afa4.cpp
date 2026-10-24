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

// Function: entry_0020afa4
// Address: 0x20afa4 - 0x20b16c
void entry_0020afa4_0x20afa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020afa4_0x20afa4");
#endif

    switch (ctx->pc) {
        case 0x20b028u: goto label_20b028;
        case 0x20b03cu: goto label_20b03c;
        case 0x20b074u: goto label_20b074;
        case 0x20b0d4u: goto label_20b0d4;
        case 0x20b0f4u: goto label_20b0f4;
        default: break;
    }

    ctx->pc = 0x20afa4u;

    // 0x20afa4: 0x8fb10188  lw          $s1, 0x188($sp)
    ctx->pc = 0x20afa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20afa8: 0x8622127e  lh          $v0, 0x127E($s1)
    ctx->pc = 0x20afa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4734)));
    // 0x20afac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20afb0: 0xa622127e  sh          $v0, 0x127E($s1)
    ctx->pc = 0x20afb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4734), (uint16_t)GPR_U32(ctx, 2));
    // 0x20afb4: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x20afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20afb8: 0x8485127a  lh          $a1, 0x127A($a0)
    ctx->pc = 0x20afb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x20afbc: 0x14a000c7  bnez        $a1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x20AFBCu;
    {
        const bool branch_taken_0x20afbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20afbc) {
            ctx->pc = 0x20B2DCu;
            return;
        }
    }
    ctx->pc = 0x20AFC4u;
    // 0x20afc4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20afc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20afc8: 0xc42194b8  lwc1        $f1, -0x6B48($at)
    ctx->pc = 0x20afc8u;
    { uint32_t bits = FAST_READ32(0x6194B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20afcc: 0x3c0640c0  lui         $a2, 0x40C0
    ctx->pc = 0x20afccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16576 << 16));
    // 0x20afd0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20afd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20afd4: 0x0  nop
    ctx->pc = 0x20afd4u;
    // NOP
    // 0x20afd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20afd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20afdc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20afdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20afe0: 0xe42094b8  swc1        $f0, -0x6B48($at)
    ctx->pc = 0x20afe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194B8u, _value); } while (0); }
    // 0x20afe4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20afe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20afe8: 0xc42094b8  lwc1        $f0, -0x6B48($at)
    ctx->pc = 0x20afe8u;
    { uint32_t bits = FAST_READ32(0x6194B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20afec: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20afecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aff0: 0x8c229310  lw          $v0, -0x6CF0($at)
    ctx->pc = 0x20aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x619310u));
    // 0x20aff4: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x20aff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x20aff8: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x20aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20affc: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b000: 0x3c043c83  lui         $a0, 0x3C83
    ctx->pc = 0x20b000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15491 << 16));
    // 0x20b004: 0x3482126f  ori         $v0, $a0, 0x126F
    ctx->pc = 0x20b004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4719);
    // 0x20b008: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20b008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20b00c: 0x24a60120  addiu       $a2, $a1, 0x120
    ctx->pc = 0x20b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x20b010: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x20b010u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20b014: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x20b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b018: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x20b018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x20b01c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x20b01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x20b020: 0xc05c848  jal         func_172120
    ctx->pc = 0x20B020u;
    SET_GPR_U32(ctx, 31, 0x20B028u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x20B020u, 0x20B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B028u;
label_20b028:
    // 0x20b028: 0x8fb00188  lw          $s0, 0x188($sp)
    ctx->pc = 0x20b028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b02c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x20b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b030: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20b030u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20b034: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x20B034u;
    SET_GPR_U32(ctx, 31, 0x20B03Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x20B034u, 0x20B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B03Cu;
label_20b03c:
    // 0x20b03c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b040: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20b040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20b044: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b048: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x20b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20b04c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20b04cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b050: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b054: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x20b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20b058: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20b058u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x20b05c: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x20b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b060: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b064: 0x24449280  addiu       $a0, $v0, -0x6D80
    ctx->pc = 0x20b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x20b068: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x20b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b06c: 0xc067844  jal         func_19E110
    ctx->pc = 0x20B06Cu;
    SET_GPR_U32(ctx, 31, 0x20B074u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x20B06Cu, 0x20B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B074u;
label_20b074:
    // 0x20b074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20b074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b078: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b07c: 0xe42094dc  swc1        $f0, -0x6B24($at)
    ctx->pc = 0x20b07cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194DCu, _value); } while (0); }
    // 0x20b080: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b084: 0xe42094d0  swc1        $f0, -0x6B30($at)
    ctx->pc = 0x20b084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194D0u, _value); } while (0); }
    // 0x20b088: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b08c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x20b08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b090: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20b090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20b094: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x20b094u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b098: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20b098u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20b09c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b0a0: 0xe42094d4  swc1        $f0, -0x6B2C($at)
    ctx->pc = 0x20b0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194D4u, _value); } while (0); }
    // 0x20b0a4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b0a8: 0xc440128c  lwc1        $f0, 0x128C($v0)
    ctx->pc = 0x20b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b0ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20b0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20b0b0: 0xe42094d8  swc1        $f0, -0x6B28($at)
    ctx->pc = 0x20b0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6194D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6194D8u, _value); } while (0); }
    // 0x20b0b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b0b8: 0x244494d0  addiu       $a0, $v0, -0x6B30
    ctx->pc = 0x20b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x20b0bc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x20b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x20b0c0: 0x24659280  addiu       $a1, $v1, -0x6D80
    ctx->pc = 0x20b0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939264));
    // 0x20b0c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b0c8: 0x244694d0  addiu       $a2, $v0, -0x6B30
    ctx->pc = 0x20b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x20b0cc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20B0CCu;
    SET_GPR_U32(ctx, 31, 0x20B0D4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20B0D4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20B0D4u) { return; }
    ctx->pc = 0x20B0D4u;
label_20b0d4:
    // 0x20b0d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b0d8: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x20b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20b0dc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b0e0: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x20b0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20b0e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20b0e8: 0x244694d0  addiu       $a2, $v0, -0x6B30
    ctx->pc = 0x20b0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939856));
    // 0x20b0ec: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x20B0ECu;
    SET_GPR_U32(ctx, 31, 0x20B0F4u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x20B0F4u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20B0F4u) { return; }
    ctx->pc = 0x20B0F4u;
label_20b0f4:
    // 0x20b0f4: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b0f8: 0x8442127e  lh          $v0, 0x127E($v0)
    ctx->pc = 0x20b0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4734)));
    // 0x20b0fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x20b0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20b100: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20b100u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20b104: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x20b104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x20b108: 0x14400187  bnez        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x20B108u;
    {
        const bool branch_taken_0x20b108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b108) {
            ctx->pc = 0x20B728u;
            return;
        }
    }
    ctx->pc = 0x20B110u;
    // 0x20b110: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20b110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20b114: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x20b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x20b118: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x20b118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20b11c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x20b11cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x38A240u));
    // 0x20b120: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x20b120u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x20b124: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x20b124u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x20b128: 0x24c2a250  addiu       $v0, $a2, -0x5DB0
    ctx->pc = 0x20b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943312));
    // 0x20b12c: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x20b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x20b130: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20b130u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A250u));
    // 0x20b134: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20b134u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20b138: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x20b138u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x20b13c: 0x24a2a260  addiu       $v0, $a1, -0x5DA0
    ctx->pc = 0x20b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943328));
    // 0x20b140: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x20b140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x20b144: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20b144u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x38A260u));
    // 0x20b148: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x20b148u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x20b14c: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x20b150: 0x8c421374  lw          $v0, 0x1374($v0)
    ctx->pc = 0x20b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4980)));
    // 0x20b154: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x20b154u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20b158: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B158u;
    {
        const bool branch_taken_0x20b158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b158) {
            ctx->pc = 0x20B16Cu;
            return;
        }
    }
    ctx->pc = 0x20B160u;
    // 0x20b160: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x20b160u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20B164u;
    {
        const bool branch_taken_0x20b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b164) {
            ctx->pc = 0x20B170u;
            return;
        }
    }
    ctx->pc = 0x20B16Cu;
}
