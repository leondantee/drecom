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

// Function: entry_002ee294
// Address: 0x2ee294 - 0x2ee2a4
void entry_002ee294_0x2ee294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee294_0x2ee294");
#endif

    ctx->pc = 0x2ee294u;

    // 0x2ee294: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ee294u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee298: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2ee298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee29c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EE29Cu;
    {
        const bool branch_taken_0x2ee29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee29c) {
            ctx->pc = 0x2EE2C8u;
            return;
        }
    }
    ctx->pc = 0x2EE2A4u;
}
