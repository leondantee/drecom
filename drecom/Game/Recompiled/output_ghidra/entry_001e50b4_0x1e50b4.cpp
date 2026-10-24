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

// Function: entry_001e50b4
// Address: 0x1e50b4 - 0x1e513c
void entry_001e50b4_0x1e50b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e50b4_0x1e50b4");
#endif

    ctx->pc = 0x1e50b4u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1E513Cu;
}
