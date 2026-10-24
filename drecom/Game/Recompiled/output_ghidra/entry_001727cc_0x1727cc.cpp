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

// Function: entry_001727cc
// Address: 0x1727cc - 0x172800
void entry_001727cc_0x1727cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001727cc_0x1727cc");
#endif

    ctx->pc = 0x1727ccu;

    // 0x1727cc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1727ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1727d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1727d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1727d4: 0x0  nop
    ctx->pc = 0x1727d4u;
    // NOP
    // 0x1727d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1727d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1727dc: 0x0  nop
    ctx->pc = 0x1727dcu;
    // NOP
    // 0x1727e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1727E0u;
    {
        const bool branch_taken_0x1727e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1727e0) {
            ctx->pc = 0x172800u;
            return;
        }
    }
    ctx->pc = 0x1727E8u;
    // 0x1727e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1727e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1727ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1727ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1727f0: 0x0  nop
    ctx->pc = 0x1727f0u;
    // NOP
    // 0x1727f4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1727f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1727f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1727F8u;
    {
        const bool branch_taken_0x1727f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1727f8) {
            ctx->pc = 0x172810u;
            return;
        }
    }
    ctx->pc = 0x172800u;
}
