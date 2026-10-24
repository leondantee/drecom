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

// Function: entry_001b07a0
// Address: 0x1b07a0 - 0x1b07c4
void entry_001b07a0_0x1b07a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b07a0_0x1b07a0");
#endif

    ctx->pc = 0x1b07a0u;

    // 0x1b07a0: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1b07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b07a4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b07a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b07a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b07a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b07ac: 0x0  nop
    ctx->pc = 0x1b07acu;
    // NOP
    // 0x1b07b0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B07B0u;
    {
        const bool branch_taken_0x1b07b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b07b0) {
            ctx->pc = 0x1B07C4u;
            return;
        }
    }
    ctx->pc = 0x1B07B8u;
    // 0x1b07b8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1b07b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b07bc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1b07bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1b07c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b07c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1b07c4u;
}
