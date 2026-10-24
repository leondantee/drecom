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

// Function: caseD_6
// Address: 0x123de0 - 0x123df8
void caseD_6_0x123de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x123de0");
#endif

    ctx->pc = 0x123de0u;

    // 0x123de0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123de4: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x123de4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x123de8: 0x34836000  ori         $v1, $a0, 0x6000
    ctx->pc = 0x123de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24576);
    // 0x123dec: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x123decu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x123df0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x123DF0u;
    {
        const bool branch_taken_0x123df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123df0) {
            ctx->pc = 0x123E68u;
            return;
        }
    }
    ctx->pc = 0x123DF8u;
}
