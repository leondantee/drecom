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

// Function: entry_00181b74
// Address: 0x181b74 - 0x181b9c
void entry_00181b74_0x181b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181b74_0x181b74");
#endif

    ctx->pc = 0x181b74u;

    // 0x181b74: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x181b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181b78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x181b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x181b7c: 0x0  nop
    ctx->pc = 0x181b7cu;
    // NOP
    // 0x181b80: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x181B80u;
    {
        const bool branch_taken_0x181b80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x181b80) {
            ctx->pc = 0x181B9Cu;
            return;
        }
    }
    ctx->pc = 0x181B88u;
    // 0x181b88: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181b8c: 0x8c23f218  lw          $v1, -0xDE8($at)
    ctx->pc = 0x181b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F218u));
    // 0x181b90: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x181b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x181b94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x181b98: 0xac26f218  sw          $a2, -0xDE8($at)
    ctx->pc = 0x181b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x47F218u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F218u, _value); } while (0);
    ctx->pc = 0x181b9cu;
}
