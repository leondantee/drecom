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

// Function: entry_00358ff4
// Address: 0x358ff4 - 0x35900c
void entry_00358ff4_0x358ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358ff4_0x358ff4");
#endif

    ctx->pc = 0x358ff4u;

    // 0x358ff4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x358ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x358ff8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358ffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x359000: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x359000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x359004: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x359004u;
    {
        const bool branch_taken_0x359004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359004) {
            ctx->pc = 0x359020u;
            return;
        }
    }
    ctx->pc = 0x35900Cu;
}
