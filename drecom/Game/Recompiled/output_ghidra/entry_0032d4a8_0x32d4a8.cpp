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

// Function: entry_0032d4a8
// Address: 0x32d4a8 - 0x32d4d4
void entry_0032d4a8_0x32d4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032d4a8_0x32d4a8");
#endif

    ctx->pc = 0x32d4a8u;

    // 0x32d4a8: 0xc6815e00  lwc1        $f1, 0x5E00($s4)
    ctx->pc = 0x32d4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32d4ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32d4acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32d4b0: 0x0  nop
    ctx->pc = 0x32d4b0u;
    // NOP
    // 0x32d4b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32d4b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32d4b8: 0x0  nop
    ctx->pc = 0x32d4b8u;
    // NOP
    // 0x32d4bc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32D4BCu;
    {
        const bool branch_taken_0x32d4bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32d4bc) {
            ctx->pc = 0x32D4D4u;
            return;
        }
    }
    ctx->pc = 0x32D4C4u;
    // 0x32d4c4: 0xc6805e00  lwc1        $f0, 0x5E00($s4)
    ctx->pc = 0x32d4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32d4c8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x32d4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x32d4cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32D4CCu;
    {
        const bool branch_taken_0x32d4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d4cc) {
            ctx->pc = 0x32D4E0u;
            return;
        }
    }
    ctx->pc = 0x32D4D4u;
}
