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

// Function: entry_0022b5c4
// Address: 0x22b5c4 - 0x22b5f4
void entry_0022b5c4_0x22b5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b5c4_0x22b5c4");
#endif

    ctx->pc = 0x22b5c4u;

    // 0x22b5c4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x22b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b5c8: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x22b5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x22b5cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22b5ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b5d0: 0x0  nop
    ctx->pc = 0x22b5d0u;
    // NOP
    // 0x22b5d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22b5d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b5d8: 0x0  nop
    ctx->pc = 0x22b5d8u;
    // NOP
    // 0x22b5dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22B5DCu;
    {
        const bool branch_taken_0x22b5dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b5dc) {
            ctx->pc = 0x22B5F4u;
            return;
        }
    }
    ctx->pc = 0x22B5E4u;
    // 0x22b5e4: 0x3c053fc0  lui         $a1, 0x3FC0
    ctx->pc = 0x22b5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16320 << 16));
    // 0x22b5e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22b5e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b5ec: 0x0  nop
    ctx->pc = 0x22b5ecu;
    // NOP
    // 0x22b5f0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->pc = 0x22b5f4u;
}
