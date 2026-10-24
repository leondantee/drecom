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

// Function: entry_00170280
// Address: 0x170280 - 0x1702b0
void entry_00170280_0x170280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170280_0x170280");
#endif

    ctx->pc = 0x170280u;

    // 0x170280: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x170280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x170284: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x170284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
    // 0x170288: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x170288u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17028c: 0x0  nop
    ctx->pc = 0x17028cu;
    // NOP
    // 0x170290: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x170290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x170294: 0x0  nop
    ctx->pc = 0x170294u;
    // NOP
    // 0x170298: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x170298u;
    {
        const bool branch_taken_0x170298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x170298) {
            ctx->pc = 0x1702B0u;
            return;
        }
    }
    ctx->pc = 0x1702A0u;
    // 0x1702a0: 0x3c10437f  lui         $s0, 0x437F
    ctx->pc = 0x1702a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)17279 << 16));
    // 0x1702a4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1702a4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1702a8: 0x0  nop
    ctx->pc = 0x1702a8u;
    // NOP
    // 0x1702ac: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1702acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->pc = 0x1702b0u;
}
