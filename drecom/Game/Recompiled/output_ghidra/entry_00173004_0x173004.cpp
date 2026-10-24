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

// Function: entry_00173004
// Address: 0x173004 - 0x173030
void entry_00173004_0x173004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173004_0x173004");
#endif

    ctx->pc = 0x173004u;

    // 0x173004: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x173004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173008: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x173008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17300c: 0x0  nop
    ctx->pc = 0x17300cu;
    // NOP
    // 0x173010: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x173010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x173014: 0x0  nop
    ctx->pc = 0x173014u;
    // NOP
    // 0x173018: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x173018u;
    {
        const bool branch_taken_0x173018 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x173018) {
            ctx->pc = 0x173030u;
            return;
        }
    }
    ctx->pc = 0x173020u;
    // 0x173020: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x173020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173024: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x173024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x173028: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173028u;
    {
        const bool branch_taken_0x173028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173028) {
            ctx->pc = 0x17303Cu;
            return;
        }
    }
    ctx->pc = 0x173030u;
}
