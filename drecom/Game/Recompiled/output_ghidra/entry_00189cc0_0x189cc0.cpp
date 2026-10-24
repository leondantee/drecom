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

// Function: entry_00189cc0
// Address: 0x189cc0 - 0x189cf0
void entry_00189cc0_0x189cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189cc0_0x189cc0");
#endif

    ctx->pc = 0x189cc0u;

    // 0x189cc0: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x189cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189cc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x189cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x189cc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189cc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189ccc: 0x0  nop
    ctx->pc = 0x189cccu;
    // NOP
    // 0x189cd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x189cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189cd4: 0x0  nop
    ctx->pc = 0x189cd4u;
    // NOP
    // 0x189cd8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x189CD8u;
    {
        const bool branch_taken_0x189cd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189cd8) {
            ctx->pc = 0x189CF0u;
            return;
        }
    }
    ctx->pc = 0x189CE0u;
    // 0x189ce0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x189ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x189ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x189ce8: 0x0  nop
    ctx->pc = 0x189ce8u;
    // NOP
    // 0x189cec: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x189cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    ctx->pc = 0x189cf0u;
}
