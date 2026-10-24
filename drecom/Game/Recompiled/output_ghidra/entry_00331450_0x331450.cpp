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

// Function: entry_00331450
// Address: 0x331450 - 0x331470
void entry_00331450_0x331450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331450_0x331450");
#endif

    ctx->pc = 0x331450u;

    // 0x331450: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x331450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x331454: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x331454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x331458: 0xafa00224  sw          $zero, 0x224($sp)
    ctx->pc = 0x331458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 0));
    // 0x33145c: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x33145cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
    // 0x331460: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x331460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x331464: 0xafa3022c  sw          $v1, 0x22C($sp)
    ctx->pc = 0x331464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
    // 0x331468: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x331468u;
    {
        const bool branch_taken_0x331468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331468) {
            ctx->pc = 0x3314B0u;
            return;
        }
    }
    ctx->pc = 0x331470u;
}
