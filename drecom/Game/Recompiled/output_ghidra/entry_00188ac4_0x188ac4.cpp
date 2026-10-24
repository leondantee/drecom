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

// Function: entry_00188ac4
// Address: 0x188ac4 - 0x188ae4
void entry_00188ac4_0x188ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188ac4_0x188ac4");
#endif

    ctx->pc = 0x188ac4u;

    // 0x188ac4: 0xc6010180  lwc1        $f1, 0x180($s0)
    ctx->pc = 0x188ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188ac8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x188ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188acc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x188accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188ad0: 0x0  nop
    ctx->pc = 0x188ad0u;
    // NOP
    // 0x188ad4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x188AD4u;
    {
        const bool branch_taken_0x188ad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188ad4) {
            ctx->pc = 0x188AE4u;
            return;
        }
    }
    ctx->pc = 0x188ADCu;
    // 0x188adc: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x188adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ae0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x188ae4u;
}
