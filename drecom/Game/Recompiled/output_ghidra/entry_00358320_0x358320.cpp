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

// Function: entry_00358320
// Address: 0x358320 - 0x358338
void entry_00358320_0x358320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358320_0x358320");
#endif

    ctx->pc = 0x358320u;

    // 0x358320: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358324: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358328: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35832c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x35832cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x358330: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x358330u;
    {
        const bool branch_taken_0x358330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358330) {
            ctx->pc = 0x358858u;
            return;
        }
    }
    ctx->pc = 0x358338u;
}
