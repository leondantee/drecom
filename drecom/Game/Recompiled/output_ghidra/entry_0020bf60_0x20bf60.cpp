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

// Function: entry_0020bf60
// Address: 0x20bf60 - 0x20bf90
void entry_0020bf60_0x20bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020bf60_0x20bf60");
#endif

    ctx->pc = 0x20bf60u;

    // 0x20bf60: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x20bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x20bf64: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x20bf64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x20bf68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20bf6c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x20bf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bf70: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20bf70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bf74: 0x0  nop
    ctx->pc = 0x20bf74u;
    // NOP
    // 0x20bf78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x20BF78u;
    {
        const bool branch_taken_0x20bf78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bf78) {
            ctx->pc = 0x20BF90u;
            return;
        }
    }
    ctx->pc = 0x20BF80u;
    // 0x20bf80: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x20bf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bf84: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x20bf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x20bf88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20BF88u;
    {
        const bool branch_taken_0x20bf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf88) {
            ctx->pc = 0x20BF9Cu;
            return;
        }
    }
    ctx->pc = 0x20BF90u;
}
