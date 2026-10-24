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

// Function: entry_00172f58
// Address: 0x172f58 - 0x172f8c
void entry_00172f58_0x172f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172f58_0x172f58");
#endif

    ctx->pc = 0x172f58u;

    // 0x172f58: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172f5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f60: 0x0  nop
    ctx->pc = 0x172f60u;
    // NOP
    // 0x172f64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172f64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172f68: 0x0  nop
    ctx->pc = 0x172f68u;
    // NOP
    // 0x172f6c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x172F6Cu;
    {
        const bool branch_taken_0x172f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172f6c) {
            ctx->pc = 0x172F8Cu;
            return;
        }
    }
    ctx->pc = 0x172F74u;
    // 0x172f74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x172f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f7c: 0x0  nop
    ctx->pc = 0x172f7cu;
    // NOP
    // 0x172f80: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x172f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x172f84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x172F84u;
    {
        const bool branch_taken_0x172f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172f84) {
            ctx->pc = 0x172F9Cu;
            return;
        }
    }
    ctx->pc = 0x172F8Cu;
}
