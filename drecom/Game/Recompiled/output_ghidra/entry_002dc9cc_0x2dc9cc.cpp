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

// Function: entry_002dc9cc
// Address: 0x2dc9cc - 0x2dca04
void entry_002dc9cc_0x2dc9cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dc9cc_0x2dc9cc");
#endif

    ctx->pc = 0x2dc9ccu;

    // 0x2dc9cc: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x2dc9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc9d0: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x2dc9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
    // 0x2dc9d4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2dc9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2dc9d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc9dc: 0x0  nop
    ctx->pc = 0x2dc9dcu;
    // NOP
    // 0x2dc9e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dc9e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc9e4: 0x0  nop
    ctx->pc = 0x2dc9e4u;
    // NOP
    // 0x2dc9e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC9E8u;
    {
        const bool branch_taken_0x2dc9e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dc9e8) {
            ctx->pc = 0x2DCA04u;
            return;
        }
    }
    ctx->pc = 0x2DC9F0u;
    // 0x2dc9f0: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x2dc9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
    // 0x2dc9f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2dc9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2dc9f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dc9f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc9fc: 0x0  nop
    ctx->pc = 0x2dc9fcu;
    // NOP
    // 0x2dca00: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2dca00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    ctx->pc = 0x2dca04u;
}
