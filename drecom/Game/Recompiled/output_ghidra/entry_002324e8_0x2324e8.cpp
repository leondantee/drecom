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

// Function: entry_002324e8
// Address: 0x2324e8 - 0x232510
void entry_002324e8_0x2324e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002324e8_0x2324e8");
#endif

    ctx->pc = 0x2324e8u;

    // 0x2324e8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2324e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2324ec: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2324ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2324f0: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2324f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2324f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2324f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2324f8: 0x0  nop
    ctx->pc = 0x2324f8u;
    // NOP
    // 0x2324fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2324FCu;
    {
        const bool branch_taken_0x2324fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2324fc) {
            ctx->pc = 0x232510u;
            return;
        }
    }
    ctx->pc = 0x232504u;
    // 0x232504: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x232504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232508: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23250c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23250cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x232510u;
}
