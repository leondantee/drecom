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

// Function: entry_0021f894
// Address: 0x21f894 - 0x21f8c8
void entry_0021f894_0x21f894(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021f894_0x21f894");
#endif

    ctx->pc = 0x21f894u;

    // 0x21f894: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21f894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f898: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x21f898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f89c: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21f8a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f8a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f8a4: 0x0  nop
    ctx->pc = 0x21f8a4u;
    // NOP
    // 0x21f8a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21f8a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f8ac: 0x0  nop
    ctx->pc = 0x21f8acu;
    // NOP
    // 0x21f8b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x21F8B0u;
    {
        const bool branch_taken_0x21f8b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f8b0) {
            ctx->pc = 0x21F8C8u;
            return;
        }
    }
    ctx->pc = 0x21F8B8u;
    // 0x21f8b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21f8bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21f8bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21f8c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x21f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21f8c4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x21f8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    ctx->pc = 0x21f8c8u;
}
