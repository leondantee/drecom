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

// Function: entry_0023b070
// Address: 0x23b070 - 0x23b0b0
void entry_0023b070_0x23b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b070_0x23b070");
#endif

    ctx->pc = 0x23b070u;

    // 0x23b070: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b074: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x23b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23b078: 0x3c044461  lui         $a0, 0x4461
    ctx->pc = 0x23b078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17505 << 16));
    // 0x23b07c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x23b07cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b080: 0x0  nop
    ctx->pc = 0x23b080u;
    // NOP
    // 0x23b084: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23b084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23b088: 0x0  nop
    ctx->pc = 0x23b088u;
    // NOP
    // 0x23b08c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x23B08Cu;
    {
        const bool branch_taken_0x23b08c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23b08c) {
            ctx->pc = 0x23B0B0u;
            return;
        }
    }
    ctx->pc = 0x23B094u;
    // 0x23b094: 0x3c05c1a0  lui         $a1, 0xC1A0
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49568 << 16));
    // 0x23b098: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x23b098u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b09c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b0a0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23b0a4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23b0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23b0a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23B0A8u;
    {
        const bool branch_taken_0x23b0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b0a8) {
            ctx->pc = 0x23B0C0u;
            return;
        }
    }
    ctx->pc = 0x23B0B0u;
}
