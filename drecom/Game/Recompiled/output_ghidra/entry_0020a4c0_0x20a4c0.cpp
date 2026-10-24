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

// Function: entry_0020a4c0
// Address: 0x20a4c0 - 0x20a514
void entry_0020a4c0_0x20a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a4c0_0x20a4c0");
#endif

    ctx->pc = 0x20a4c0u;

    // 0x20a4c0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a4c4: 0xc4209488  lwc1        $f0, -0x6B78($at)
    ctx->pc = 0x20a4c4u;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4c8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a4cc: 0x8c229310  lw          $v0, -0x6CF0($at)
    ctx->pc = 0x20a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x619310u));
    // 0x20a4d0: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x20a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x20a4d4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a4d8: 0xc4219490  lwc1        $f1, -0x6B70($at)
    ctx->pc = 0x20a4d8u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a4dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a4dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a4e0: 0x0  nop
    ctx->pc = 0x20a4e0u;
    // NOP
    // 0x20a4e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20a4e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a4e8: 0x0  nop
    ctx->pc = 0x20a4e8u;
    // NOP
    // 0x20a4ec: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x20A4ECu;
    {
        const bool branch_taken_0x20a4ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a4ec) {
            ctx->pc = 0x20A514u;
            return;
        }
    }
    ctx->pc = 0x20A4F4u;
    // 0x20a4f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a4f8: 0xc4219490  lwc1        $f1, -0x6B70($at)
    ctx->pc = 0x20a4f8u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a4fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x20a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x20a500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a504: 0x0  nop
    ctx->pc = 0x20a504u;
    // NOP
    // 0x20a508: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20a508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20a50c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a510: 0xe4209490  swc1        $f0, -0x6B70($at)
    ctx->pc = 0x20a510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619490u, _value); } while (0); }
    ctx->pc = 0x20a514u;
}
