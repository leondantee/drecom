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

// Function: entry_0010fc58
// Address: 0x10fc58 - 0x10fc60
void entry_0010fc58_0x10fc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc58_0x10fc58");
#endif

    ctx->pc = 0x10fc58u;

    // 0x10fc58: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10fc5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x10fc60u;
}
