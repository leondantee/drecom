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

// Function: entry_00172488
// Address: 0x172488 - 0x1724bc
void entry_00172488_0x172488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172488_0x172488");
#endif

    ctx->pc = 0x172488u;

    // 0x172488: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x172488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17248c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17248cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172490: 0x0  nop
    ctx->pc = 0x172490u;
    // NOP
    // 0x172494: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172494u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172498: 0x0  nop
    ctx->pc = 0x172498u;
    // NOP
    // 0x17249c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x17249Cu;
    {
        const bool branch_taken_0x17249c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17249c) {
            ctx->pc = 0x1724BCu;
            return;
        }
    }
    ctx->pc = 0x1724A4u;
    // 0x1724a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1724a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1724a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1724a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1724ac: 0x0  nop
    ctx->pc = 0x1724acu;
    // NOP
    // 0x1724b0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1724b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1724b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1724B4u;
    {
        const bool branch_taken_0x1724b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1724b4) {
            ctx->pc = 0x1724CCu;
            return;
        }
    }
    ctx->pc = 0x1724BCu;
}
