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

// Function: entry_001e513c
// Address: 0x1e513c - 0x1e51a0
void entry_001e513c_0x1e513c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e513c_0x1e513c");
#endif

    ctx->pc = 0x1e513cu;

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
            return;
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
    ctx->pc = 0x1e51a0u;
}
