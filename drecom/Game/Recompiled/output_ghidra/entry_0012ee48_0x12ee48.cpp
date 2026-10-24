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

// Function: entry_0012ee48
// Address: 0x12ee48 - 0x12ee58
void entry_0012ee48_0x12ee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ee48_0x12ee48");
#endif

    ctx->pc = 0x12ee48u;

    // 0x12ee48: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x12ee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x12ee4c: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x12ee4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x12ee50: 0x1460ff1f  bnez        $v1, . + 4 + (-0xE1 << 2)
    ctx->pc = 0x12EE50u;
    {
        const bool branch_taken_0x12ee50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ee50) {
            ctx->pc = 0x12EAD0u;
            return;
        }
    }
    ctx->pc = 0x12EE58u;
}
