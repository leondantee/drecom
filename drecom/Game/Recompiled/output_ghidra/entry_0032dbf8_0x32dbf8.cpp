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

// Function: entry_0032dbf8
// Address: 0x32dbf8 - 0x32dc24
void entry_0032dbf8_0x32dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032dbf8_0x32dbf8");
#endif

    ctx->pc = 0x32dbf8u;

    // 0x32dbf8: 0xc6815e00  lwc1        $f1, 0x5E00($s4)
    ctx->pc = 0x32dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32dbfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32dbfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dc00: 0x0  nop
    ctx->pc = 0x32dc00u;
    // NOP
    // 0x32dc04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32dc04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32dc08: 0x0  nop
    ctx->pc = 0x32dc08u;
    // NOP
    // 0x32dc0c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x32DC0Cu;
    {
        const bool branch_taken_0x32dc0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x32dc0c) {
            ctx->pc = 0x32DC24u;
            return;
        }
    }
    ctx->pc = 0x32DC14u;
    // 0x32dc14: 0xc6805e00  lwc1        $f0, 0x5E00($s4)
    ctx->pc = 0x32dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32dc18: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x32dc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x32dc1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32DC1Cu;
    {
        const bool branch_taken_0x32dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dc1c) {
            ctx->pc = 0x32DC30u;
            return;
        }
    }
    ctx->pc = 0x32DC24u;
}
