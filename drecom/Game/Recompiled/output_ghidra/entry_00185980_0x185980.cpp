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

// Function: entry_00185980
// Address: 0x185980 - 0x1859b0
void entry_00185980_0x185980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185980_0x185980");
#endif

    ctx->pc = 0x185980u;

    // 0x185980: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x185980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x185984: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x185984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185988: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x185988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18598c: 0x0  nop
    ctx->pc = 0x18598cu;
    // NOP
    // 0x185990: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x185990u;
    {
        const bool branch_taken_0x185990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185990) {
            ctx->pc = 0x1859B0u;
            return;
        }
    }
    ctx->pc = 0x185998u;
    // 0x185998: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18599c: 0xc4210284  lwc1        $f1, 0x284($at)
    ctx->pc = 0x18599cu;
    { uint32_t bits = FAST_READ32(0x480284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1859a0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1859a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1859a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1859a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1859a8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1859a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1859ac: 0xe42002d4  swc1        $f0, 0x2D4($at)
    ctx->pc = 0x1859acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802D4u, _value); } while (0); }
    ctx->pc = 0x1859b0u;
}
