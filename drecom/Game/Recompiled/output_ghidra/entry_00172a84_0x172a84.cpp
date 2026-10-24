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

// Function: entry_00172a84
// Address: 0x172a84 - 0x172ab8
void entry_00172a84_0x172a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172a84_0x172a84");
#endif

    ctx->pc = 0x172a84u;

    // 0x172a84: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x172a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172a88: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x172a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x172a8c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172a90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172a94: 0x0  nop
    ctx->pc = 0x172a94u;
    // NOP
    // 0x172a98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172a98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172a9c: 0x0  nop
    ctx->pc = 0x172a9cu;
    // NOP
    // 0x172aa0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172AA0u;
    {
        const bool branch_taken_0x172aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172aa0) {
            ctx->pc = 0x172AB8u;
            return;
        }
    }
    ctx->pc = 0x172AA8u;
    // 0x172aa8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172aac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x172aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x172ab0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172AB0u;
    {
        const bool branch_taken_0x172ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ab0) {
            ctx->pc = 0x172AC4u;
            return;
        }
    }
    ctx->pc = 0x172AB8u;
}
