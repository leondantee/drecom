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

// Function: entry_001822b8
// Address: 0x1822b8 - 0x1822e0
void entry_001822b8_0x1822b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001822b8_0x1822b8");
#endif

    ctx->pc = 0x1822b8u;

    // 0x1822b8: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x1822b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1822bc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1822bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1822c0: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x1822c0u;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1822c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1822c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1822c8: 0x0  nop
    ctx->pc = 0x1822c8u;
    // NOP
    // 0x1822cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1822CCu;
    {
        const bool branch_taken_0x1822cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1822cc) {
            ctx->pc = 0x1822E0u;
            return;
        }
    }
    ctx->pc = 0x1822D4u;
    // 0x1822d4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1822d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1822d8: 0xc420f200  lwc1        $f0, -0xE00($at)
    ctx->pc = 0x1822d8u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1822dc: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1822dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    ctx->pc = 0x1822e0u;
}
