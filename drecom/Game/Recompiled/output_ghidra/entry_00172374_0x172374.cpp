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

// Function: entry_00172374
// Address: 0x172374 - 0x1723a0
void entry_00172374_0x172374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172374_0x172374");
#endif

    ctx->pc = 0x172374u;

    // 0x172374: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x172374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17237c: 0x0  nop
    ctx->pc = 0x17237cu;
    // NOP
    // 0x172380: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172384: 0x0  nop
    ctx->pc = 0x172384u;
    // NOP
    // 0x172388: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172388u;
    {
        const bool branch_taken_0x172388 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172388) {
            ctx->pc = 0x1723A0u;
            return;
        }
    }
    ctx->pc = 0x172390u;
    // 0x172390: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x172390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172394: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x172394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x172398: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172398u;
    {
        const bool branch_taken_0x172398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172398) {
            ctx->pc = 0x1723ACu;
            return;
        }
    }
    ctx->pc = 0x1723A0u;
}
