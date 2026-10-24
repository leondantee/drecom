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

// Function: caseD_5
// Address: 0x123dc8 - 0x123de0
void caseD_5_0x123dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x123dc8");
#endif

    ctx->pc = 0x123dc8u;

    // 0x123dc8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123dcc: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x123dd0: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x123dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x123dd4: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x123dd8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x123DD8u;
    {
        const bool branch_taken_0x123dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123dd8) {
            ctx->pc = 0x123E68u;
            return;
        }
    }
    ctx->pc = 0x123DE0u;
}
