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

// Function: entry_001609e4
// Address: 0x1609e4 - 0x160a14
void entry_001609e4_0x1609e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001609e4_0x1609e4");
#endif

    ctx->pc = 0x1609e4u;

    // 0x1609e4: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x1609e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1609e8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x1609e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1609ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1609ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1609f0: 0x0  nop
    ctx->pc = 0x1609f0u;
    // NOP
    // 0x1609f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1609F4u;
    {
        const bool branch_taken_0x1609f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1609f4) {
            ctx->pc = 0x160A14u;
            return;
        }
    }
    ctx->pc = 0x1609FCu;
    // 0x1609fc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1609fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160a00: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x160a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160a04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160a04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160a08: 0x0  nop
    ctx->pc = 0x160a08u;
    // NOP
    // 0x160a0c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x160A0Cu;
    {
        const bool branch_taken_0x160a0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160a0c) {
            ctx->pc = 0x160A28u;
            return;
        }
    }
    ctx->pc = 0x160A14u;
}
