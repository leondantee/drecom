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

// Function: entry_00172d88
// Address: 0x172d88 - 0x172dbc
void entry_00172d88_0x172d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172d88_0x172d88");
#endif

    ctx->pc = 0x172d88u;

    // 0x172d88: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172d8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172d90: 0x0  nop
    ctx->pc = 0x172d90u;
    // NOP
    // 0x172d94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172d98: 0x0  nop
    ctx->pc = 0x172d98u;
    // NOP
    // 0x172d9c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x172D9Cu;
    {
        const bool branch_taken_0x172d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172d9c) {
            ctx->pc = 0x172DBCu;
            return;
        }
    }
    ctx->pc = 0x172DA4u;
    // 0x172da4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x172da8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172dac: 0x0  nop
    ctx->pc = 0x172dacu;
    // NOP
    // 0x172db0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x172db4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x172DB4u;
    {
        const bool branch_taken_0x172db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172db4) {
            ctx->pc = 0x172DCCu;
            return;
        }
    }
    ctx->pc = 0x172DBCu;
}
