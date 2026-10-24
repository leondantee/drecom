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

// Function: entry_00172a40
// Address: 0x172a40 - 0x172a74
void entry_00172a40_0x172a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172a40_0x172a40");
#endif

    ctx->pc = 0x172a40u;

    // 0x172a40: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a48: 0x0  nop
    ctx->pc = 0x172a48u;
    // NOP
    // 0x172a4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172a4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172a50: 0x0  nop
    ctx->pc = 0x172a50u;
    // NOP
    // 0x172a54: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x172A54u;
    {
        const bool branch_taken_0x172a54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172a54) {
            ctx->pc = 0x172A74u;
            return;
        }
    }
    ctx->pc = 0x172A5Cu;
    // 0x172a5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x172a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x172a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x172a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a64: 0x0  nop
    ctx->pc = 0x172a64u;
    // NOP
    // 0x172a68: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x172a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x172a6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x172A6Cu;
    {
        const bool branch_taken_0x172a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172a6c) {
            ctx->pc = 0x172A84u;
            return;
        }
    }
    ctx->pc = 0x172A74u;
}
