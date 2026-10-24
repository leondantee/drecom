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

// Function: entry_0020aa10
// Address: 0x20aa10 - 0x20aa4c
void entry_0020aa10_0x20aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020aa10_0x20aa10");
#endif

    ctx->pc = 0x20aa10u;

    // 0x20aa10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20aa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aa14: 0xc4219490  lwc1        $f1, -0x6B70($at)
    ctx->pc = 0x20aa14u;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20aa18: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20aa1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20aa1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aa20: 0x0  nop
    ctx->pc = 0x20aa20u;
    // NOP
    // 0x20aa24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20aa24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20aa28: 0x0  nop
    ctx->pc = 0x20aa28u;
    // NOP
    // 0x20aa2c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20AA2Cu;
    {
        const bool branch_taken_0x20aa2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20aa2c) {
            ctx->pc = 0x20AA4Cu;
            return;
        }
    }
    ctx->pc = 0x20AA34u;
    // 0x20aa34: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x20aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x20aa38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20aa38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20aa3c: 0x0  nop
    ctx->pc = 0x20aa3cu;
    // NOP
    // 0x20aa40: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x20aa40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x20aa44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20AA44u;
    {
        const bool branch_taken_0x20aa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aa44) {
            ctx->pc = 0x20AA58u;
            return;
        }
    }
    ctx->pc = 0x20AA4Cu;
}
