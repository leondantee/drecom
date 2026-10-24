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

// Function: entry_0016e4d8
// Address: 0x16e4d8 - 0x16e4fc
void entry_0016e4d8_0x16e4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e4d8_0x16e4d8");
#endif

    ctx->pc = 0x16e4d8u;

    // 0x16e4d8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x16e4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e4dc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x16e4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e4e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16e4e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e4e4: 0x0  nop
    ctx->pc = 0x16e4e4u;
    // NOP
    // 0x16e4e8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x16E4E8u;
    {
        const bool branch_taken_0x16e4e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e4e8) {
            ctx->pc = 0x16E4FCu;
            return;
        }
    }
    ctx->pc = 0x16E4F0u;
    // 0x16e4f0: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16e4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e4f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E4F4u;
    {
        const bool branch_taken_0x16e4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e4f4) {
            ctx->pc = 0x16E500u;
            return;
        }
    }
    ctx->pc = 0x16E4FCu;
}
