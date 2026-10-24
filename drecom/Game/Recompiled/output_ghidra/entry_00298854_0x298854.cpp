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

// Function: entry_00298854
// Address: 0x298854 - 0x298888
void entry_00298854_0x298854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298854_0x298854");
#endif

    ctx->pc = 0x298854u;

    // 0x298854: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298858: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x298858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29885c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x29885cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x298860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298864: 0x0  nop
    ctx->pc = 0x298864u;
    // NOP
    // 0x298868: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x298868u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29886c: 0x0  nop
    ctx->pc = 0x29886cu;
    // NOP
    // 0x298870: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x298870u;
    {
        const bool branch_taken_0x298870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x298870) {
            ctx->pc = 0x298888u;
            return;
        }
    }
    ctx->pc = 0x298878u;
    // 0x298878: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x298878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x29887c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29887cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298880: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x298880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298884: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x298884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x298888u;
}
