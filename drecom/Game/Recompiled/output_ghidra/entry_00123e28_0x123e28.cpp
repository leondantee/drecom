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

// Function: entry_00123e28
// Address: 0x123e28 - 0x123e40
void entry_00123e28_0x123e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123e28_0x123e28");
#endif

    ctx->pc = 0x123e28u;

    // 0x123e28: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x123e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123e2c: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x123e2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x123e30: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x123e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x123e34: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x123e34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x123e38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x123E38u;
    {
        const bool branch_taken_0x123e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e38) {
            ctx->pc = 0x123E68u;
            return;
        }
    }
    ctx->pc = 0x123E40u;
}
