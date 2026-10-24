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

// Function: entry_001722c8
// Address: 0x1722c8 - 0x1722fc
void entry_001722c8_0x1722c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001722c8_0x1722c8");
#endif

    ctx->pc = 0x1722c8u;

    // 0x1722c8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1722c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1722cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1722ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1722d0: 0x0  nop
    ctx->pc = 0x1722d0u;
    // NOP
    // 0x1722d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1722d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1722d8: 0x0  nop
    ctx->pc = 0x1722d8u;
    // NOP
    // 0x1722dc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1722DCu;
    {
        const bool branch_taken_0x1722dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1722dc) {
            ctx->pc = 0x1722FCu;
            return;
        }
    }
    ctx->pc = 0x1722E4u;
    // 0x1722e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1722e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1722e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1722e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1722ec: 0x0  nop
    ctx->pc = 0x1722ecu;
    // NOP
    // 0x1722f0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1722f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1722f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1722F4u;
    {
        const bool branch_taken_0x1722f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1722f4) {
            ctx->pc = 0x17230Cu;
            return;
        }
    }
    ctx->pc = 0x1722FCu;
}
