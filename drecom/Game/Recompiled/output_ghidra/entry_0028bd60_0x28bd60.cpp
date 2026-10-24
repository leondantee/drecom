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

// Function: entry_0028bd60
// Address: 0x28bd60 - 0x28bd9c
void entry_0028bd60_0x28bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bd60_0x28bd60");
#endif

    ctx->pc = 0x28bd60u;

    // 0x28bd60: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28bd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28bd64: 0xc4202050  lwc1        $f0, 0x2050($at)
    ctx->pc = 0x28bd64u;
    { uint32_t bits = FAST_READ32(0x622050u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28bd68: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28bd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x28bd6c: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x28bd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28bd70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28bd74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bd74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bd78: 0x0  nop
    ctx->pc = 0x28bd78u;
    // NOP
    // 0x28bd7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28bd7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28bd80: 0x0  nop
    ctx->pc = 0x28bd80u;
    // NOP
    // 0x28bd84: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28BD84u;
    {
        const bool branch_taken_0x28bd84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bd84) {
            ctx->pc = 0x28BD9Cu;
            return;
        }
    }
    ctx->pc = 0x28BD8Cu;
    // 0x28bd8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28bd90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28bd90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28bd94: 0x0  nop
    ctx->pc = 0x28bd94u;
    // NOP
    // 0x28bd98: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x28bd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    ctx->pc = 0x28bd9cu;
}
