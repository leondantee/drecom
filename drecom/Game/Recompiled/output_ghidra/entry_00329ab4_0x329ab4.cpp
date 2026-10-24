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

// Function: entry_00329ab4
// Address: 0x329ab4 - 0x329ad0
void entry_00329ab4_0x329ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00329ab4_0x329ab4");
#endif

    ctx->pc = 0x329ab4u;

    // 0x329ab4: 0x8e032828  lw          $v1, 0x2828($s0)
    ctx->pc = 0x329ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10280)));
    // 0x329ab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329abc: 0xae032828  sw          $v1, 0x2828($s0)
    ctx->pc = 0x329abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10280), GPR_U32(ctx, 3));
    // 0x329ac0: 0x28630062  slti        $v1, $v1, 0x62
    ctx->pc = 0x329ac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
    // 0x329ac4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x329AC4u;
    {
        const bool branch_taken_0x329ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329ac4) {
            ctx->pc = 0x329AD0u;
            return;
        }
    }
    ctx->pc = 0x329ACCu;
    // 0x329acc: 0xae002828  sw          $zero, 0x2828($s0)
    ctx->pc = 0x329accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10280), GPR_U32(ctx, 0));
    ctx->pc = 0x329ad0u;
}
