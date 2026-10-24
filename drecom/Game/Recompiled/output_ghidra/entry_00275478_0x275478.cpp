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

// Function: entry_00275478
// Address: 0x275478 - 0x275480
void entry_00275478_0x275478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275478_0x275478");
#endif

    ctx->pc = 0x275478u;

    // 0x275478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27547c: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x27547cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    ctx->pc = 0x275480u;
}
