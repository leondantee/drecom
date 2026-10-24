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

// Function: entry_00172e0c
// Address: 0x172e0c - 0x172e34
void entry_00172e0c_0x172e0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172e0c_0x172e0c");
#endif

    ctx->pc = 0x172e0cu;

    // 0x172e0c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x172e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172e10: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172e14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172e18: 0x0  nop
    ctx->pc = 0x172e18u;
    // NOP
    // 0x172e1c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172E1Cu;
    {
        const bool branch_taken_0x172e1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172e1c) {
            ctx->pc = 0x172E34u;
            return;
        }
    }
    ctx->pc = 0x172E24u;
    // 0x172e24: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172e28: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x172e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x172e2c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x172E2Cu;
    {
        const bool branch_taken_0x172e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172e2c) {
            ctx->pc = 0x172E74u;
            return;
        }
    }
    ctx->pc = 0x172E34u;
}
