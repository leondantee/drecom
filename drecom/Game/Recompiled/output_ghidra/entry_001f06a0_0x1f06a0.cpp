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

// Function: entry_001f06a0
// Address: 0x1f06a0 - 0x1f06e0
void entry_001f06a0_0x1f06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f06a0_0x1f06a0");
#endif

    ctx->pc = 0x1f06a0u;

    // 0x1f06a0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f06a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f06a4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1f06a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f06a8: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x1f06a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
    // 0x1f06ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f06acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f06b0: 0x0  nop
    ctx->pc = 0x1f06b0u;
    // NOP
    // 0x1f06b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f06b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f06b8: 0x0  nop
    ctx->pc = 0x1f06b8u;
    // NOP
    // 0x1f06bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F06BCu;
    {
        const bool branch_taken_0x1f06bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f06bc) {
            ctx->pc = 0x1F06E0u;
            return;
        }
    }
    ctx->pc = 0x1F06C4u;
    // 0x1f06c4: 0x3c05c100  lui         $a1, 0xC100
    ctx->pc = 0x1f06c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49408 << 16));
    // 0x1f06c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1f06c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f06cc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f06ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f06d0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1f06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1f06d4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f06d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f06d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F06D8u;
    {
        const bool branch_taken_0x1f06d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f06d8) {
            ctx->pc = 0x1F06F0u;
            return;
        }
    }
    ctx->pc = 0x1F06E0u;
}
