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

// Function: entry_0025e4f0
// Address: 0x25e4f0 - 0x25e518
void entry_0025e4f0_0x25e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e4f0_0x25e4f0");
#endif

    ctx->pc = 0x25e4f0u;

    // 0x25e4f0: 0xc60015e4  lwc1        $f0, 0x15E4($s0)
    ctx->pc = 0x25e4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e4f4: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x25e4f8: 0xc60115e8  lwc1        $f1, 0x15E8($s0)
    ctx->pc = 0x25e4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e4fc: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e500: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25e500u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e504: 0x0  nop
    ctx->pc = 0x25e504u;
    // NOP
    // 0x25e508: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x25E508u;
    {
        const bool branch_taken_0x25e508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e508) {
            ctx->pc = 0x25E518u;
            return;
        }
    }
    ctx->pc = 0x25E510u;
    // 0x25e510: 0xc60015e8  lwc1        $f0, 0x15E8($s0)
    ctx->pc = 0x25e510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e514: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    ctx->pc = 0x25e518u;
}
