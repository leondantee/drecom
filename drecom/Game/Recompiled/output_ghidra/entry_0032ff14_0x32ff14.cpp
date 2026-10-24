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

// Function: entry_0032ff14
// Address: 0x32ff14 - 0x330080
void entry_0032ff14_0x32ff14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ff14_0x32ff14");
#endif

    ctx->pc = 0x32ff14u;

    // 0x32ff14: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32ff18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32ff18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32ff1c: 0x0  nop
    ctx->pc = 0x32ff1cu;
    // NOP
    // 0x32ff20: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x32ff20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x32ff24: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ff24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ff28: 0xe42c26f4  swc1        $f12, 0x26F4($at)
    ctx->pc = 0x32ff28u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8926F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8926F4u, _value); } while (0); }
    // 0x32ff2c: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x32ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
    // 0x32ff30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32ff30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32ff34: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x32ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x32ff38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32ff38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32ff3c: 0x0  nop
    ctx->pc = 0x32ff3cu;
    // NOP
    // 0x32ff40: 0x46806020  cvt.s.w     $f0, $f12
    ctx->pc = 0x32ff40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32ff44: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32ff44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32ff48: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x32ff48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x32ff4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32ff4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ff50: 0x0  nop
    ctx->pc = 0x32ff50u;
    // NOP
    // 0x32ff54: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x32ff54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32ff58: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ff58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ff5c: 0xc42026f0  lwc1        $f0, 0x26F0($at)
    ctx->pc = 0x32ff5cu;
    { uint32_t bits = FAST_READ32(0x8926F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ff60: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x32ff60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x32ff64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ff64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ff68: 0xe42026f8  swc1        $f0, 0x26F8($at)
    ctx->pc = 0x32ff68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8926F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8926F8u, _value); } while (0); }
    // 0x32ff6c: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x32ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
    // 0x32ff70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32ff70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32ff74: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x32ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x32ff78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x32ff78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32ff7c: 0x0  nop
    ctx->pc = 0x32ff7cu;
    // NOP
    // 0x32ff80: 0x46806020  cvt.s.w     $f0, $f12
    ctx->pc = 0x32ff80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32ff84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32ff84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32ff88: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x32ff88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x32ff8c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x32ff8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32ff90: 0x0  nop
    ctx->pc = 0x32ff90u;
    // NOP
    // 0x32ff94: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x32ff94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32ff98: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ff98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ff9c: 0xc42026f4  lwc1        $f0, 0x26F4($at)
    ctx->pc = 0x32ff9cu;
    { uint32_t bits = FAST_READ32(0x8926F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ffa0: 0x460c0040  add.s       $f1, $f0, $f12
    ctx->pc = 0x32ffa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x32ffa4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ffa8: 0xe42126fc  swc1        $f1, 0x26FC($at)
    ctx->pc = 0x32ffa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8926FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8926FCu, _value); } while (0); }
    // 0x32ffac: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ffb0: 0xc42026f8  lwc1        $f0, 0x26F8($at)
    ctx->pc = 0x32ffb0u;
    { uint32_t bits = FAST_READ32(0x8926F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ffb4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ffb8: 0xe42026f0  swc1        $f0, 0x26F0($at)
    ctx->pc = 0x32ffb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8926F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8926F0u, _value); } while (0); }
    // 0x32ffbc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ffc0: 0xc42c26fc  lwc1        $f12, 0x26FC($at)
    ctx->pc = 0x32ffc0u;
    { uint32_t bits = FAST_READ32(0x8926FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32ffc4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ffc8: 0xe42c26f4  swc1        $f12, 0x26F4($at)
    ctx->pc = 0x32ffc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x8926F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8926F4u, _value); } while (0); }
    // 0x32ffcc: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x32ffccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x32ffd0: 0xc4c00120  lwc1        $f0, 0x120($a2)
    ctx->pc = 0x32ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32ffd4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x32ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x32ffd8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x32ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32ffdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x32ffdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x32ffe0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32ffe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x32ffe4: 0xe4202700  swc1        $f0, 0x2700($at)
    ctx->pc = 0x32ffe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x892700u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892700u, _value); } while (0); }
    // 0x32ffe8: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x32ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x32ffec: 0xc46c0128  lwc1        $f12, 0x128($v1)
    ctx->pc = 0x32ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32fff0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x32fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x32fff4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x32fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32fff8: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x32fff8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x32fffc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x32fffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x330000: 0xe4212708  swc1        $f1, 0x2708($at)
    ctx->pc = 0x330000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x892708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892708u, _value); } while (0); }
    // 0x330004: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x330004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x330008: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x330008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33000c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x33000cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x330010: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x330010u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x330014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330018: 0x0  nop
    ctx->pc = 0x330018u;
    // NOP
    // 0x33001c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x33001cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x330020: 0x3c0a42fa  lui         $t2, 0x42FA
    ctx->pc = 0x330020u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17146 << 16));
    // 0x330024: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x330024u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330028: 0x0  nop
    ctx->pc = 0x330028u;
    // NOP
    // 0x33002c: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x33002cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x330030: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x330030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x330034: 0xc4202700  lwc1        $f0, 0x2700($at)
    ctx->pc = 0x330034u;
    { uint32_t bits = FAST_READ32(0x892700u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330038: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x330038u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x33003c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33003cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x330040: 0xe42c2700  swc1        $f12, 0x2700($at)
    ctx->pc = 0x330040u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x892700u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892700u, _value); } while (0); }
    // 0x330044: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x330044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x330048: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x330048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33004c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x33004cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x330050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330054: 0x0  nop
    ctx->pc = 0x330054u;
    // NOP
    // 0x330058: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x330058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33005c: 0x3c0342fa  lui         $v1, 0x42FA
    ctx->pc = 0x33005cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17146 << 16));
    // 0x330060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330064: 0x0  nop
    ctx->pc = 0x330064u;
    // NOP
    // 0x330068: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x330068u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33006c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33006cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x330070: 0xc4202708  lwc1        $f0, 0x2708($at)
    ctx->pc = 0x330070u;
    { uint32_t bits = FAST_READ32(0x892708u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330074: 0x460c0040  add.s       $f1, $f0, $f12
    ctx->pc = 0x330074u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x330078: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x330078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33007c: 0xe4212708  swc1        $f1, 0x2708($at)
    ctx->pc = 0x33007cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x892708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892708u, _value); } while (0); }
    ctx->pc = 0x330080u;
}
