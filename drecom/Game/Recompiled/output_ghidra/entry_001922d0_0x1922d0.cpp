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

// Function: entry_001922d0
// Address: 0x1922d0 - 0x192318
void entry_001922d0_0x1922d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001922d0_0x1922d0");
#endif

    ctx->pc = 0x1922d0u;

    // 0x1922d0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1922d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1922d4: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x1922d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x1922d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1922d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1922dc: 0x0  nop
    ctx->pc = 0x1922dcu;
    // NOP
    // 0x1922e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1922e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1922e4: 0x0  nop
    ctx->pc = 0x1922e4u;
    // NOP
    // 0x1922e8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1922E8u;
    {
        const bool branch_taken_0x1922e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1922e8) {
            ctx->pc = 0x192318u;
            return;
        }
    }
    ctx->pc = 0x1922F0u;
    // 0x1922f0: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1922f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1922f4: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1922f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1922f8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1922f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1922fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1922fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192300: 0x0  nop
    ctx->pc = 0x192300u;
    // NOP
    // 0x192304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192308: 0x0  nop
    ctx->pc = 0x192308u;
    // NOP
    // 0x19230c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x19230Cu;
    {
        const bool branch_taken_0x19230c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19230c) {
            ctx->pc = 0x192320u;
            return;
        }
    }
    ctx->pc = 0x192314u;
    // 0x192314: 0x0  nop
    ctx->pc = 0x192314u;
    // NOP
    ctx->pc = 0x192318u;
}
