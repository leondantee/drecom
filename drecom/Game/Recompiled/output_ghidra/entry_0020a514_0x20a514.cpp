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

// Function: entry_0020a514
// Address: 0x20a514 - 0x20a548
void entry_0020a514_0x20a514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a514_0x20a514");
#endif

    ctx->pc = 0x20a514u;

    // 0x20a514: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a518: 0xc4219490  lwc1        $f1, -0x6B70($at)
    ctx->pc = 0x20a518u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a51c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x20a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x20a520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a524: 0x0  nop
    ctx->pc = 0x20a524u;
    // NOP
    // 0x20a528: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20a528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a52c: 0x0  nop
    ctx->pc = 0x20a52cu;
    // NOP
    // 0x20a530: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20A530u;
    {
        const bool branch_taken_0x20a530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a530) {
            ctx->pc = 0x20A548u;
            return;
        }
    }
    ctx->pc = 0x20A538u;
    // 0x20a538: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20a538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20a53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20a53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a540: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20a540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20a544: 0xe4209490  swc1        $f0, -0x6B70($at)
    ctx->pc = 0x20a544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619490u, _value); } while (0); }
    ctx->pc = 0x20a548u;
}
