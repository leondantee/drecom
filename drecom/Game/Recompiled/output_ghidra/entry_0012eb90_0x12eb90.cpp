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

// Function: entry_0012eb90
// Address: 0x12eb90 - 0x12ebac
void entry_0012eb90_0x12eb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eb90_0x12eb90");
#endif

    ctx->pc = 0x12eb90u;

    // 0x12eb90: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x12eb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x12eb94: 0x84228db0  lh          $v0, -0x7250($at)
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x388DB0u));
    // 0x12eb98: 0xa60211f2  sh          $v0, 0x11F2($s0)
    ctx->pc = 0x12eb98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4594), (uint16_t)GPR_U32(ctx, 2));
    // 0x12eb9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12eba0: 0xa60211f6  sh          $v0, 0x11F6($s0)
    ctx->pc = 0x12eba0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x12eba4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12EBA4u;
    {
        const bool branch_taken_0x12eba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eba4) {
            ctx->pc = 0x12EBE0u;
            return;
        }
    }
    ctx->pc = 0x12EBACu;
}
