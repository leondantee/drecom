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

// Function: entry_001fa1c4
// Address: 0x1fa1c4 - 0x1fa1ec
void entry_001fa1c4_0x1fa1c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa1c4_0x1fa1c4");
#endif

    ctx->pc = 0x1fa1c4u;

    // 0x1fa1c4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa1c8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1fa1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa1cc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1fa1d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa1d4: 0x0  nop
    ctx->pc = 0x1fa1d4u;
    // NOP
    // 0x1fa1d8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA1D8u;
    {
        const bool branch_taken_0x1fa1d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fa1d8) {
            ctx->pc = 0x1FA1ECu;
            return;
        }
    }
    ctx->pc = 0x1FA1E0u;
    // 0x1fa1e0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa1e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1fa1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa1e8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x1fa1ecu;
}
