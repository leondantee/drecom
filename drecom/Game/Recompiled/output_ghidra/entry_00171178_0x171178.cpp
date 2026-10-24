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

// Function: entry_00171178
// Address: 0x171178 - 0x1711a8
void entry_00171178_0x171178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171178_0x171178");
#endif

    ctx->pc = 0x171178u;

    // 0x171178: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x171178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17117c: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x17117cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
    // 0x171180: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x171180u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171184: 0x0  nop
    ctx->pc = 0x171184u;
    // NOP
    // 0x171188: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x171188u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17118c: 0x0  nop
    ctx->pc = 0x17118cu;
    // NOP
    // 0x171190: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x171190u;
    {
        const bool branch_taken_0x171190 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x171190) {
            ctx->pc = 0x1711A8u;
            return;
        }
    }
    ctx->pc = 0x171198u;
    // 0x171198: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x171198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x17119c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17119cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1711a0: 0x0  nop
    ctx->pc = 0x1711a0u;
    // NOP
    // 0x1711a4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1711a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->pc = 0x1711a8u;
}
