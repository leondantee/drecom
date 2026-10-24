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

// Function: entry_00172ac4
// Address: 0x172ac4 - 0x172aec
void entry_00172ac4_0x172ac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172ac4_0x172ac4");
#endif

    ctx->pc = 0x172ac4u;

    // 0x172ac4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x172ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172ac8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x172ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172acc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172accu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172ad0: 0x0  nop
    ctx->pc = 0x172ad0u;
    // NOP
    // 0x172ad4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172AD4u;
    {
        const bool branch_taken_0x172ad4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172ad4) {
            ctx->pc = 0x172AECu;
            return;
        }
    }
    ctx->pc = 0x172ADCu;
    // 0x172adc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x172adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172ae0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x172ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x172ae4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x172AE4u;
    {
        const bool branch_taken_0x172ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ae4) {
            ctx->pc = 0x172B2Cu;
            return;
        }
    }
    ctx->pc = 0x172AECu;
}
