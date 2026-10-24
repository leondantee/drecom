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

// Function: entry_00345500
// Address: 0x345500 - 0x345524
void entry_00345500_0x345500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00345500_0x345500");
#endif

    ctx->pc = 0x345500u;

    // 0x345500: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345504: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x345504u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x345508: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x345508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34550c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x345510: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x345510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x345514: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345514u;
    {
        const bool branch_taken_0x345514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345514) {
            ctx->pc = 0x345524u;
            return;
        }
    }
    ctx->pc = 0x34551Cu;
    // 0x34551c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x345520: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x345520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    ctx->pc = 0x345524u;
}
