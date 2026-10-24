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

// Function: caseD_3
// Address: 0x123d98 - 0x123db0
void caseD_3_0x123d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x123d98");
#endif

    ctx->pc = 0x123d98u;

    // 0x123d98: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123d9c: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x123d9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x123da0: 0x34443000  ori         $a0, $v0, 0x3000
    ctx->pc = 0x123da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x123da4: 0xa4a4000e  sh          $a0, 0xE($a1)
    ctx->pc = 0x123da4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x123da8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x123DA8u;
    {
        const bool branch_taken_0x123da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123da8) {
            ctx->pc = 0x123E68u;
            return;
        }
    }
    ctx->pc = 0x123DB0u;
}
