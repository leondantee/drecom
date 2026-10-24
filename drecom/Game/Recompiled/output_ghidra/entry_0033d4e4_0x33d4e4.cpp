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

// Function: entry_0033d4e4
// Address: 0x33d4e4 - 0x33d534
void entry_0033d4e4_0x33d4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d4e4_0x33d4e4");
#endif

    ctx->pc = 0x33d4e4u;

    // 0x33d4e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d4e8: 0xc44101a4  lwc1        $f1, 0x1A4($v0)
    ctx->pc = 0x33d4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d4ec: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x33d4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d4f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x33d4f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d4f4: 0x0  nop
    ctx->pc = 0x33d4f4u;
    // NOP
    // 0x33d4f8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x33D4F8u;
    {
        const bool branch_taken_0x33d4f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d4f8) {
            ctx->pc = 0x33D534u;
            return;
        }
    }
    ctx->pc = 0x33D500u;
    // 0x33d500: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d504: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d508: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d50c: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x33d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d510: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d514: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x33d514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x33d518: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x33d518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d51c: 0xc44112cc  lwc1        $f1, 0x12CC($v0)
    ctx->pc = 0x33d51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d520: 0xc64001a4  lwc1        $f0, 0x1A4($s2)
    ctx->pc = 0x33d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d524: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33d524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33d528: 0xe64001a4  swc1        $f0, 0x1A4($s2)
    ctx->pc = 0x33d528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 420), bits); }
    // 0x33d52c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33D52Cu;
    {
        const bool branch_taken_0x33d52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d52c) {
            ctx->pc = 0x33D548u;
            return;
        }
    }
    ctx->pc = 0x33D534u;
}
