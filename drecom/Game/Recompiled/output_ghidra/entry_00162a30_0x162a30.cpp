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

// Function: entry_00162a30
// Address: 0x162a30 - 0x162a54
void entry_00162a30_0x162a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162a30_0x162a30");
#endif

    ctx->pc = 0x162a30u;

    // 0x162a30: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162a34: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x162a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162a38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162a3c: 0x0  nop
    ctx->pc = 0x162a3cu;
    // NOP
    // 0x162a40: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x162A40u;
    {
        const bool branch_taken_0x162a40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162a40) {
            ctx->pc = 0x162A54u;
            return;
        }
    }
    ctx->pc = 0x162A48u;
    // 0x162a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x162a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162a4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x162A4Cu;
    {
        const bool branch_taken_0x162a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a4c) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x162A54u;
}
