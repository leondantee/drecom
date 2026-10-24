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

// Function: entry_00124088
// Address: 0x124088 - 0x12409c
void entry_00124088_0x124088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124088_0x124088");
#endif

    ctx->pc = 0x124088u;

    // 0x124088: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x124088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x12408c: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x12408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x124090: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x124090u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x124094: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x124094u;
    {
        const bool branch_taken_0x124094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124094) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x12409Cu;
}
