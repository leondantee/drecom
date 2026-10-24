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

// Function: entry_0032b968
// Address: 0x32b968 - 0x32b978
void entry_0032b968_0x32b968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b968_0x32b968");
#endif

    ctx->pc = 0x32b968u;

    // 0x32b968: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32b96c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32b970: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32B970u;
    {
        const bool branch_taken_0x32b970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b970) {
            ctx->pc = 0x32B980u;
            return;
        }
    }
    ctx->pc = 0x32B978u;
}
