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

// Function: entry_00179658
// Address: 0x179658 - 0x179678
void entry_00179658_0x179658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179658_0x179658");
#endif

    ctx->pc = 0x179658u;

    // 0x179658: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17965c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x17965cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x179660: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x179660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x179664: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x179664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x179668: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x179668u;
    {
        const bool branch_taken_0x179668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179668) {
            ctx->pc = 0x179584u;
            return;
        }
    }
    ctx->pc = 0x179670u;
    // 0x179670: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x179670u;
    {
        const bool branch_taken_0x179670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179670) {
            ctx->pc = 0x1797C8u;
            return;
        }
    }
    ctx->pc = 0x179678u;
}
