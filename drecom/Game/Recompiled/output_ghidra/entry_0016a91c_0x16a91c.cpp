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

// Function: entry_0016a91c
// Address: 0x16a91c - 0x16a940
void entry_0016a91c_0x16a91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a91c_0x16a91c");
#endif

    ctx->pc = 0x16a91cu;

    // 0x16a91c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x16a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a920: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x16a920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a924: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16a924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a928: 0x0  nop
    ctx->pc = 0x16a928u;
    // NOP
    // 0x16a92c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16A92Cu;
    {
        const bool branch_taken_0x16a92c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16a92c) {
            ctx->pc = 0x16A940u;
            return;
        }
    }
    ctx->pc = 0x16A934u;
    // 0x16a934: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16a934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A938u;
    {
        const bool branch_taken_0x16a938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a938) {
            ctx->pc = 0x16A944u;
            return;
        }
    }
    ctx->pc = 0x16A940u;
}
