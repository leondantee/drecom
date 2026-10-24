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

// Function: entry_00266fe0
// Address: 0x266fe0 - 0x266ff8
void entry_00266fe0_0x266fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00266fe0_0x266fe0");
#endif

    ctx->pc = 0x266fe0u;

    // 0x266fe0: 0x8e021240  lw          $v0, 0x1240($s0)
    ctx->pc = 0x266fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x266fe4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266FE4u;
    {
        const bool branch_taken_0x266fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266fe4) {
            ctx->pc = 0x266FF8u;
            return;
        }
    }
    ctx->pc = 0x266FECu;
    // 0x266fec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x266fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x266ff0: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x266ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x266ff4: 0x0  nop
    ctx->pc = 0x266ff4u;
    // NOP
    ctx->pc = 0x266ff8u;
}
