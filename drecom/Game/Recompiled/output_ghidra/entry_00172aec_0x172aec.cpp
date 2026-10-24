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

// Function: entry_00172aec
// Address: 0x172aec - 0x172b18
void entry_00172aec_0x172aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172aec_0x172aec");
#endif

    ctx->pc = 0x172aecu;

    // 0x172aec: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172af0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x172af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172af4: 0x0  nop
    ctx->pc = 0x172af4u;
    // NOP
    // 0x172af8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x172af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172afc: 0x0  nop
    ctx->pc = 0x172afcu;
    // NOP
    // 0x172b00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172B00u;
    {
        const bool branch_taken_0x172b00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172b00) {
            ctx->pc = 0x172B18u;
            return;
        }
    }
    ctx->pc = 0x172B08u;
    // 0x172b08: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b0c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x172b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x172b10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x172B10u;
    {
        const bool branch_taken_0x172b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b10) {
            ctx->pc = 0x172B24u;
            return;
        }
    }
    ctx->pc = 0x172B18u;
}
