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

// Function: entry_0018900c
// Address: 0x18900c - 0x189040
void entry_0018900c_0x18900c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018900c_0x18900c");
#endif

    ctx->pc = 0x18900cu;

    // 0x18900c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18900cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x189010: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x189010u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x189014: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x189014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x189018: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18901c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18901Cu;
    {
        const bool branch_taken_0x18901c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18901c) {
            ctx->pc = 0x189040u;
            return;
        }
    }
    ctx->pc = 0x189024u;
    // 0x189024: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x189024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189028: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x189028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x18902c: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x18902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189030: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x189030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x189034: 0xe4206da0  swc1        $f0, 0x6DA0($at)
    ctx->pc = 0x189034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x386DA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x386DA0u, _value); } while (0); }
    // 0x189038: 0xa38080b0  sb          $zero, -0x7F50($gp)
    ctx->pc = 0x189038u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934704), (uint8_t)GPR_U32(ctx, 0));
    // 0x18903c: 0xa38080b4  sb          $zero, -0x7F4C($gp)
    ctx->pc = 0x18903cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934708), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x189040u;
}
