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

// Function: entry_001854ac
// Address: 0x1854ac - 0x1854e4
void entry_001854ac_0x1854ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001854ac_0x1854ac");
#endif

    ctx->pc = 0x1854acu;

    // 0x1854ac: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1854acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1854b0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1854b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1854b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1854b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1854b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1854b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1854bc: 0x0  nop
    ctx->pc = 0x1854bcu;
    // NOP
    // 0x1854c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1854c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1854c4: 0x0  nop
    ctx->pc = 0x1854c4u;
    // NOP
    // 0x1854c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1854C8u;
    {
        const bool branch_taken_0x1854c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1854c8) {
            ctx->pc = 0x1854E4u;
            return;
        }
    }
    ctx->pc = 0x1854D0u;
    // 0x1854d0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1854d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1854d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1854d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1854d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1854d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1854dc: 0x0  nop
    ctx->pc = 0x1854dcu;
    // NOP
    // 0x1854e0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1854e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x1854e4u;
}
