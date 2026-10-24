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

// Function: caseD_2
// Address: 0x123d80 - 0x123d98
void caseD_2_0x123d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x123d80");
#endif

    ctx->pc = 0x123d80u;

    // 0x123d80: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123d84: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123d84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x123d88: 0x34442000  ori         $a0, $v0, 0x2000
    ctx->pc = 0x123d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x123d8c: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x123d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x123d90: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x123D90u;
    {
        const bool branch_taken_0x123d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d90) {
            ctx->pc = 0x123E68u;
            return;
        }
    }
    ctx->pc = 0x123D98u;
}
