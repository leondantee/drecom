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

// Function: entry_002981f0
// Address: 0x2981f0 - 0x298220
void entry_002981f0_0x2981f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002981f0_0x2981f0");
#endif

    ctx->pc = 0x2981f0u;

    // 0x2981f0: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2981f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2981f4: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x2981f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x2981f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2981f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2981fc: 0x0  nop
    ctx->pc = 0x2981fcu;
    // NOP
    // 0x298200: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x298200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298204: 0x0  nop
    ctx->pc = 0x298204u;
    // NOP
    // 0x298208: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x298208u;
    {
        const bool branch_taken_0x298208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x298208) {
            ctx->pc = 0x298220u;
            return;
        }
    }
    ctx->pc = 0x298210u;
    // 0x298210: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x298210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x298214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x298214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x298218: 0x0  nop
    ctx->pc = 0x298218u;
    // NOP
    // 0x29821c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x29821cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    ctx->pc = 0x298220u;
}
