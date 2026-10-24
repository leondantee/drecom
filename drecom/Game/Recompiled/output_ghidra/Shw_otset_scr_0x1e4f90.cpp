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

// Function: Shw_otset_scr
// Address: 0x1e4f90 - 0x1e52c0
void Shw_otset_scr_0x1e4f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Shw_otset_scr_0x1e4f90");
#endif

    switch (ctx->pc) {
        case 0x1e5214u: goto label_1e5214;
        case 0x1e5258u: goto label_1e5258;
        case 0x1e52a8u: goto label_1e52a8;
        default: break;
    }

    ctx->pc = 0x1e4f90u;

    // 0x1e4f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e4f94: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1e4f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e4f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e4f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4fa0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1e4fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x1e4fa4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e4fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e4fa8: 0x24639c10  addiu       $v1, $v1, -0x63F0
    ctx->pc = 0x1e4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941712));
    // 0x1e4fac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e4facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e4fb0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e4fb0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x389C10u));
    // 0x1e4fb4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1e4fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1e4fb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1e4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e4fbc: 0x8c6301ec  lw          $v1, 0x1EC($v1)
    ctx->pc = 0x1e4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
    // 0x1e4fc0: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1E4FC0u;
    {
        const bool branch_taken_0x1e4fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4fc0) {
            ctx->pc = 0x1E52A8u;
            goto label_1e52a8;
        }
    }
    ctx->pc = 0x1E4FC8u;
    // 0x1e4fc8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4fcc: 0xc42105f8  lwc1        $f1, 0x5F8($at)
    ctx->pc = 0x1e4fccu;
    { uint32_t bits = FAST_READ32(0x6005F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4fd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e4fd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4fd4: 0x0  nop
    ctx->pc = 0x1e4fd4u;
    // NOP
    // 0x1e4fd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e4fd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4fdc: 0x0  nop
    ctx->pc = 0x1e4fdcu;
    // NOP
    // 0x1e4fe0: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1E4FE0u;
    {
        const bool branch_taken_0x1e4fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4fe0) {
            ctx->pc = 0x1E5050u;
            goto label_1e5050;
        }
    }
    ctx->pc = 0x1E4FE8u;
    // 0x1e4fe8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e4fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e4fec: 0xc42105f0  lwc1        $f1, 0x5F0($at)
    ctx->pc = 0x1e4fecu;
    { uint32_t bits = FAST_READ32(0x6005F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4ff0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1e4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1e4ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4ff8: 0x0  nop
    ctx->pc = 0x1e4ff8u;
    // NOP
    // 0x1e4ffc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e4ffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e5000: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e5004: 0xe42005f0  swc1        $f0, 0x5F0($at)
    ctx->pc = 0x1e5004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6005F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6005F0u, _value); } while (0); }
    // 0x1e5008: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e500c: 0xc42105f0  lwc1        $f1, 0x5F0($at)
    ctx->pc = 0x1e500cu;
    { uint32_t bits = FAST_READ32(0x6005F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5010: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x1e5010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x1e5014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5018: 0x0  nop
    ctx->pc = 0x1e5018u;
    // NOP
    // 0x1e501c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e501cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5020: 0x0  nop
    ctx->pc = 0x1e5020u;
    // NOP
    // 0x1e5024: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x1E5024u;
    {
        const bool branch_taken_0x1e5024 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5024) {
            ctx->pc = 0x1E50B4u;
            goto label_1e50b4;
        }
    }
    ctx->pc = 0x1E502Cu;
    // 0x1e502c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x1e502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x1e5030: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5034: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e5038: 0xe42005f0  swc1        $f0, 0x5F0($at)
    ctx->pc = 0x1e5038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6005F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6005F0u, _value); } while (0); }
    // 0x1e503c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e503cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5040: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e5044: 0xe42005f8  swc1        $f0, 0x5F8($at)
    ctx->pc = 0x1e5044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6005F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6005F8u, _value); } while (0); }
    // 0x1e5048: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E5048u;
    {
        const bool branch_taken_0x1e5048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5048) {
            ctx->pc = 0x1E50B4u;
            goto label_1e50b4;
        }
    }
    ctx->pc = 0x1E5050u;
label_1e5050:
    // 0x1e5050: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e5054: 0xc42105f0  lwc1        $f1, 0x5F0($at)
    ctx->pc = 0x1e5054u;
    { uint32_t bits = FAST_READ32(0x6005F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5058: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1e5058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1e505c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5060: 0x0  nop
    ctx->pc = 0x1e5060u;
    // NOP
    // 0x1e5064: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5068: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e506c: 0xe42005f0  swc1        $f0, 0x5F0($at)
    ctx->pc = 0x1e506cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6005F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6005F0u, _value); } while (0); }
    // 0x1e5070: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e5074: 0xc42105f0  lwc1        $f1, 0x5F0($at)
    ctx->pc = 0x1e5074u;
    { uint32_t bits = FAST_READ32(0x6005F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5078: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x1e5078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x1e507c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e507cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5080: 0x0  nop
    ctx->pc = 0x1e5080u;
    // NOP
    // 0x1e5084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e5084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5088: 0x0  nop
    ctx->pc = 0x1e5088u;
    // NOP
    // 0x1e508c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E508Cu;
    {
        const bool branch_taken_0x1e508c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e508c) {
            ctx->pc = 0x1E50B4u;
            goto label_1e50b4;
        }
    }
    ctx->pc = 0x1E5094u;
    // 0x1e5094: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x1e5094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x1e5098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e509c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e509cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e50a0: 0xe42005f0  swc1        $f0, 0x5F0($at)
    ctx->pc = 0x1e50a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6005F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6005F0u, _value); } while (0); }
    // 0x1e50a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e50a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e50a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e50ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e50acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e50b0: 0xe42005f8  swc1        $f0, 0x5F8($at)
    ctx->pc = 0x1e50b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6005F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6005F8u, _value); } while (0); }
label_1e50b4:
    // 0x1e50b4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e50b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e50b8: 0xc4210608  lwc1        $f1, 0x608($at)
    ctx->pc = 0x1e50b8u;
    { uint32_t bits = FAST_READ32(0x600608u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e50bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e50bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e50c0: 0x0  nop
    ctx->pc = 0x1e50c0u;
    // NOP
    // 0x1e50c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1e50c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e50c8: 0x0  nop
    ctx->pc = 0x1e50c8u;
    // NOP
    // 0x1e50cc: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1E50CCu;
    {
        const bool branch_taken_0x1e50cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e50cc) {
            ctx->pc = 0x1E513Cu;
            goto label_1e513c;
        }
    }
    ctx->pc = 0x1E50D4u;
    // 0x1e50d4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e50d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e50d8: 0xc4210600  lwc1        $f1, 0x600($at)
    ctx->pc = 0x1e50d8u;
    { uint32_t bits = FAST_READ32(0x600600u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e50dc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1e50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1e50e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e50e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e50e4: 0x0  nop
    ctx->pc = 0x1e50e4u;
    // NOP
    // 0x1e50e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e50e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e50ec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e50ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e50f0: 0xe4200600  swc1        $f0, 0x600($at)
    ctx->pc = 0x1e50f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x600600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600600u, _value); } while (0); }
    // 0x1e50f4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e50f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e50f8: 0xc4210600  lwc1        $f1, 0x600($at)
    ctx->pc = 0x1e50f8u;
    { uint32_t bits = FAST_READ32(0x600600u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e50fc: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x1e50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x1e5100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5104: 0x0  nop
    ctx->pc = 0x1e5104u;
    // NOP
    // 0x1e5108: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e5108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e510c: 0x0  nop
    ctx->pc = 0x1e510cu;
    // NOP
    // 0x1e5110: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x1E5110u;
    {
        const bool branch_taken_0x1e5110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5110) {
            ctx->pc = 0x1E51A0u;
            goto label_1e51a0;
        }
    }
    ctx->pc = 0x1E5118u;
    // 0x1e5118: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x1e5118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x1e511c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e511cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5120: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e5124: 0xe4200600  swc1        $f0, 0x600($at)
    ctx->pc = 0x1e5124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x600600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600600u, _value); } while (0); }
    // 0x1e5128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e512c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e512cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e5130: 0xe4200608  swc1        $f0, 0x608($at)
    ctx->pc = 0x1e5130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x600608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600608u, _value); } while (0); }
    // 0x1e5134: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E5134u;
    {
        const bool branch_taken_0x1e5134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5134) {
            ctx->pc = 0x1E51A0u;
            goto label_1e51a0;
        }
    }
    ctx->pc = 0x1E513Cu;
label_1e513c:
    // 0x1e513c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e513cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e5140: 0xc4210600  lwc1        $f1, 0x600($at)
    ctx->pc = 0x1e5140u;
    { uint32_t bits = FAST_READ32(0x600600u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5144: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1e5144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1e5148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e514c: 0x0  nop
    ctx->pc = 0x1e514cu;
    // NOP
    // 0x1e5150: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e5150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e5154: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e5158: 0xe4200600  swc1        $f0, 0x600($at)
    ctx->pc = 0x1e5158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x600600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600600u, _value); } while (0); }
    // 0x1e515c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e515cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e5160: 0xc4210600  lwc1        $f1, 0x600($at)
    ctx->pc = 0x1e5160u;
    { uint32_t bits = FAST_READ32(0x600600u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e5164: 0x3c02c57a  lui         $v0, 0xC57A
    ctx->pc = 0x1e5164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50554 << 16));
    // 0x1e5168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e516c: 0x0  nop
    ctx->pc = 0x1e516cu;
    // NOP
    // 0x1e5170: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e5170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5174: 0x0  nop
    ctx->pc = 0x1e5174u;
    // NOP
    // 0x1e5178: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5178u;
    {
        const bool branch_taken_0x1e5178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5178) {
            ctx->pc = 0x1E51A0u;
            goto label_1e51a0;
        }
    }
    ctx->pc = 0x1E5180u;
    // 0x1e5180: 0x3c02c57a  lui         $v0, 0xC57A
    ctx->pc = 0x1e5180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50554 << 16));
    // 0x1e5184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5188: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e518c: 0xe4200600  swc1        $f0, 0x600($at)
    ctx->pc = 0x1e518cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x600600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600600u, _value); } while (0); }
    // 0x1e5190: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5198: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e5198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e519c: 0xe4200608  swc1        $f0, 0x608($at)
    ctx->pc = 0x1e519cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x600608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600608u, _value); } while (0); }
label_1e51a0:
    // 0x1e51a0: 0x3c024507  lui         $v0, 0x4507
    ctx->pc = 0x1e51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17671 << 16));
    // 0x1e51a4: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x1e51a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x1e51a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e51a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e51ac: 0x0  nop
    ctx->pc = 0x1e51acu;
    // NOP
    // 0x1e51b0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1e51b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e51b4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1e51b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e51b8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e51b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e51bc: 0xc42005f0  lwc1        $f0, 0x5F0($at)
    ctx->pc = 0x1e51bcu;
    { uint32_t bits = FAST_READ32(0x6005F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e51c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e51c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e51c4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1e51c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1e51c8: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1e51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x1e51cc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1e51ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1e51d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e51d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e51d4: 0x0  nop
    ctx->pc = 0x1e51d4u;
    // NOP
    // 0x1e51d8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1e51d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e51dc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1e51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e51e0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1e51e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1e51e4: 0xc4200600  lwc1        $f0, 0x600($at)
    ctx->pc = 0x1e51e4u;
    { uint32_t bits = FAST_READ32(0x600600u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e51e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e51e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e51ec: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1e51ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1e51f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e51f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e51f4: 0x8c5101ec  lw          $s1, 0x1EC($v0)
    ctx->pc = 0x1e51f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 492)));
    // 0x1e51f8: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1e51f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e51fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1e5200: 0x2446c5f0  addiu       $a2, $v0, -0x3A10
    ctx->pc = 0x1e5200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952432));
    // 0x1e5204: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1e5204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e5208: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e5208u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e520c: 0xc079500  jal         func_1E5400
    ctx->pc = 0x1E520Cu;
    SET_GPR_U32(ctx, 31, 0x1E5214u);
    ctx->pc = 0x1E5400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5400u, 0x1E520Cu, 0x1E5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5214u;
label_1e5214:
    // 0x1e5214: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e5214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1e5218: 0x2446c5f0  addiu       $a2, $v0, -0x3A10
    ctx->pc = 0x1e5218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952432));
    // 0x1e521c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e521cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e5220: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1e5220u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e5224: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e5224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5228: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e5228u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e522c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e5230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5234: 0x8c4701f0  lw          $a3, 0x1F0($v0)
    ctx->pc = 0x1e5234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1e5238: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1e5238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1e523c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e5240: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5244: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1e5244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e5248: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e5248u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e524c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x1e524cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e5250: 0xc0798ec  jal         func_1E63B0
    ctx->pc = 0x1E5250u;
    SET_GPR_U32(ctx, 31, 0x1E5258u);
    ctx->pc = 0x1E63B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E63B0u, 0x1E5250u, 0x1E5258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5258u;
label_1e5258:
    // 0x1e5258: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e5258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e525c: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1e525cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e5260: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1e5260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e5264: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1e5264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e5268: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1e5268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e526c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5270: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x1e5270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x1e5274: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x1e5274u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5278: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e527c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E527Cu;
    {
        const bool branch_taken_0x1e527c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e527c) {
            ctx->pc = 0x1E52A8u;
            goto label_1e52a8;
        }
    }
    ctx->pc = 0x1E5284u;
    // 0x1e5284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e5284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e5288: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1e5288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e528c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e5290: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e5290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5294: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e5294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e5298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e529c: 0x8c4401f0  lw          $a0, 0x1F0($v0)
    ctx->pc = 0x1e529cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1e52a0: 0xc0792dc  jal         func_1E4B70
    ctx->pc = 0x1E52A0u;
    SET_GPR_U32(ctx, 31, 0x1E52A8u);
    ctx->pc = 0x1E4B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4B70u, 0x1E52A0u, 0x1E52A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E52A8u;
label_1e52a8:
    // 0x1e52a8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1e52a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e52ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e52acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e52b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e52b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e52b4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e52b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e52b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E52B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E52B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E52C0u;
}
