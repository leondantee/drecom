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

// Function: entry_001e5050
// Address: 0x1e5050 - 0x1e50b4
void entry_001e5050_0x1e5050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5050_0x1e5050");
#endif

    ctx->pc = 0x1e5050u;

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
            return;
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
    ctx->pc = 0x1e50b4u;
}
