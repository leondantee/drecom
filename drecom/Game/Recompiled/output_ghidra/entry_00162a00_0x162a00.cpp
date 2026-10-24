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

// Function: entry_00162a00
// Address: 0x162a00 - 0x162a24
void entry_00162a00_0x162a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162a00_0x162a00");
#endif

    ctx->pc = 0x162a00u;

    // 0x162a00: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x162a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162a04: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x162a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162a08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x162a08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162a0c: 0x0  nop
    ctx->pc = 0x162a0cu;
    // NOP
    // 0x162a10: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x162A10u;
    {
        const bool branch_taken_0x162a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162a10) {
            ctx->pc = 0x162A24u;
            return;
        }
    }
    ctx->pc = 0x162A18u;
    // 0x162a18: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x162a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x162a1c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x162A1Cu;
    {
        const bool branch_taken_0x162a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162a1c) {
            ctx->pc = 0x162A7Cu;
            return;
        }
    }
    ctx->pc = 0x162A24u;
}
