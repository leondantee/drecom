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

// Function: entry_0012cf68
// Address: 0x12cf68 - 0x12cf7c
void entry_0012cf68_0x12cf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cf68_0x12cf68");
#endif

    ctx->pc = 0x12cf68u;

    // 0x12cf68: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x12cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x12cf6c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cf70: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x12cf70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12cf74: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x12CF74u;
    {
        const bool branch_taken_0x12cf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf74) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12CF7Cu;
}
