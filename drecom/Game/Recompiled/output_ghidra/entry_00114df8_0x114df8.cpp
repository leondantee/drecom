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

// Function: entry_00114df8
// Address: 0x114df8 - 0x114e1c
void entry_00114df8_0x114df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114df8_0x114df8");
#endif

    ctx->pc = 0x114df8u;

    // 0x114df8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x114e00: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x114e00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x114e04: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x114e04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x114e08: 0x0  nop
    ctx->pc = 0x114e08u;
    // NOP
    // 0x114e0c: 0x0  nop
    ctx->pc = 0x114e0cu;
    // NOP
    // 0x114e10: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x114e10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x114e14: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x114E14u;
    {
        const bool branch_taken_0x114e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E14u;
        // 0x114e18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e14) {
            ctx->pc = 0x114E74u;
            return;
        }
    }
    ctx->pc = 0x114E1Cu;
}
