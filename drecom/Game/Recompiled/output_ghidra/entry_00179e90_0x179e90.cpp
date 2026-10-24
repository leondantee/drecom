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

// Function: entry_00179e90
// Address: 0x179e90 - 0x179ea4
void entry_00179e90_0x179e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179e90_0x179e90");
#endif

    ctx->pc = 0x179e90u;

    // 0x179e90: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179E90u;
    {
        const bool branch_taken_0x179e90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x179e90) {
            ctx->pc = 0x179EA4u;
            return;
        }
    }
    ctx->pc = 0x179E98u;
    // 0x179e98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x179e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179e9c: 0xc084d5c  jal         func_213570
    ctx->pc = 0x179E9Cu;
    SET_GPR_U32(ctx, 31, 0x179EA4u);
    ctx->pc = 0x213570u;
    {
        ctx->pc = 0x179EA4u;
        ps2_syscalls::DisableDmac(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x179EA4u) { return; }
    ctx->pc = 0x179EA4u;
}
