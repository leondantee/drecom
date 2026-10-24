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

// Function: entry_00331400
// Address: 0x331400 - 0x331428
void entry_00331400_0x331400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331400_0x331400");
#endif

    ctx->pc = 0x331400u;

    // 0x331400: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x331400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x331404: 0xafa50220  sw          $a1, 0x220($sp)
    ctx->pc = 0x331404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 5));
    // 0x331408: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x331408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x33140c: 0xafa60224  sw          $a2, 0x224($sp)
    ctx->pc = 0x33140cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 6));
    // 0x331410: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x331410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x331414: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x331414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x331418: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x331418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33141c: 0xafa4022c  sw          $a0, 0x22C($sp)
    ctx->pc = 0x33141cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 4));
    // 0x331420: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x331420u;
    {
        const bool branch_taken_0x331420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331420) {
            ctx->pc = 0x3314B0u;
            return;
        }
    }
    ctx->pc = 0x331428u;
}
