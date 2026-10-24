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

// Function: caseD_1
// Address: 0x123d68 - 0x123d80
void caseD_1_0x123d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x123d68");
#endif

    ctx->pc = 0x123d68u;

    // 0x123d68: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123d6c: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x123d70: 0x34441000  ori         $a0, $v0, 0x1000
    ctx->pc = 0x123d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x123d74: 0xa464000e  sh          $a0, 0xE($v1)
    ctx->pc = 0x123d74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x123d78: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x123D78u;
    {
        const bool branch_taken_0x123d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d78) {
            ctx->pc = 0x123E68u;
            return;
        }
    }
    ctx->pc = 0x123D80u;
}
