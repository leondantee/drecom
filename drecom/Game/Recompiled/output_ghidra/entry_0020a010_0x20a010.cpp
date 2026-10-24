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

// Function: entry_0020a010
// Address: 0x20a010 - 0x20a118
void entry_0020a010_0x20a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a010_0x20a010");
#endif

    switch (ctx->pc) {
        case 0x20a04cu: goto label_20a04c;
        case 0x20a064u: goto label_20a064;
        case 0x20a08cu: goto label_20a08c;
        case 0x20a098u: goto label_20a098;
        default: break;
    }

    ctx->pc = 0x20a010u;

    // 0x20a010: 0x3c04437a  lui         $a0, 0x437A
    ctx->pc = 0x20a010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17274 << 16));
    // 0x20a014: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20a014u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a018: 0x0  nop
    ctx->pc = 0x20a018u;
    // NOP
    // 0x20a01c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x20a01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a020: 0x3c03455a  lui         $v1, 0x455A
    ctx->pc = 0x20a020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17754 << 16));
    // 0x20a024: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x20a024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x20a028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a02c: 0x0  nop
    ctx->pc = 0x20a02cu;
    // NOP
    // 0x20a030: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20a030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a034: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x20a034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x20a038: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x20a038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20a03c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x20a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20a040: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x20a040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20a044: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x20A044u;
    SET_GPR_U32(ctx, 31, 0x20A04Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20A04Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A04Cu) { return; }
    ctx->pc = 0x20A04Cu;
label_20a04c:
    // 0x20a04c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x20a04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20a050: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x20a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20a054: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x20a054u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x20a058: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x20a058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x20a05c: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x20A05Cu;
    SET_GPR_U32(ctx, 31, 0x20A064u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x20A064u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A064u) { return; }
    ctx->pc = 0x20A064u;
label_20a064:
    // 0x20a064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a068: 0x0  nop
    ctx->pc = 0x20a068u;
    // NOP
    // 0x20a06c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x20a06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x20a070: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a074: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20a074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a078: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20a078u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20a07c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x20a07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20a080: 0x244700d0  addiu       $a3, $v0, 0xD0
    ctx->pc = 0x20a080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x20a084: 0xc0bb3e8  jal         func_2ECFA0
    ctx->pc = 0x20A084u;
    SET_GPR_U32(ctx, 31, 0x20A08Cu);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x20A084u, 0x20A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A08Cu;
label_20a08c:
    // 0x20a08c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x20a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x20a090: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x20A090u;
    SET_GPR_U32(ctx, 31, 0x20A098u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x20A098u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20A098u) { return; }
    ctx->pc = 0x20A098u;
label_20a098:
    // 0x20a098: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x20a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x20a09c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0a0: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x20a0a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x20a0a4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x20a0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x20a0a8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x20a0a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a0ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a0b0: 0x244692f0  addiu       $a2, $v0, -0x6D10
    ctx->pc = 0x20a0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
    // 0x20a0b4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x20a0b4u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192F0u, _value); } while (0);
    // 0x20a0b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0bc: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x20a0bcu;
    { uint32_t bits = FAST_READ32(0x6192F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a0c0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x20a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x20a0c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a0c8: 0x0  nop
    ctx->pc = 0x20a0c8u;
    // NOP
    // 0x20a0cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20a0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20a0d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0d4: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x20a0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x20a0d8: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x20a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x20a0dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a0dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a0e0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0e4: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x20a0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x20a0e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0ec: 0xa4209304  sh          $zero, -0x6CFC($at)
    ctx->pc = 0x20a0ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x20a0f0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0f4: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x20a0f4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x20a0f8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a0fc: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x20a0fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x20a100: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20a104: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20a104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20a108: 0x244992e0  addiu       $t1, $v0, -0x6D20
    ctx->pc = 0x20a108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x20a10c: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x20a10cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x20a110: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x20A110u;
    SET_GPR_U32(ctx, 31, 0x20A118u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x20A110u, 0x20A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A118u;
}
