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

// Function: entry_0037b460
// Address: 0x37b460 - 0x37b46c
void entry_0037b460_0x37b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037b460_0x37b460");
#endif

    ctx->pc = 0x37b460u;

    // 0x37b460: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37b460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37b464: 0xae235dcc  sw          $v1, 0x5DCC($s1)
    ctx->pc = 0x37b464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 3));
    // 0x37b468: 0xae205dd0  sw          $zero, 0x5DD0($s1)
    ctx->pc = 0x37b468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24016), GPR_U32(ctx, 0));
    ctx->pc = 0x37b46cu;
}
