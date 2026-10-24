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

// Function: entry_0018885c
// Address: 0x18885c - 0x1888b0
void entry_0018885c_0x18885c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018885c_0x18885c");
#endif

    ctx->pc = 0x18885cu;

    // 0x18885c: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x18885cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188860: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x188860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x188864: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x188864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x188868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18886c: 0x0  nop
    ctx->pc = 0x18886cu;
    // NOP
    // 0x188870: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188874: 0x0  nop
    ctx->pc = 0x188874u;
    // NOP
    // 0x188878: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x188878u;
    {
        const bool branch_taken_0x188878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188878) {
            ctx->pc = 0x18890Cu;
            return;
        }
    }
    ctx->pc = 0x188880u;
    // 0x188880: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x188880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188884: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x188884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x188888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18888c: 0x0  nop
    ctx->pc = 0x18888cu;
    // NOP
    // 0x188890: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x188894: 0x0  nop
    ctx->pc = 0x188894u;
    // NOP
    // 0x188898: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x188898u;
    {
        const bool branch_taken_0x188898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188898) {
            ctx->pc = 0x1888B0u;
            return;
        }
    }
    ctx->pc = 0x1888A0u;
    // 0x1888a0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1888a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1888a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1888a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1888a8: 0x0  nop
    ctx->pc = 0x1888a8u;
    // NOP
    // 0x1888ac: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1888acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->pc = 0x1888b0u;
}
