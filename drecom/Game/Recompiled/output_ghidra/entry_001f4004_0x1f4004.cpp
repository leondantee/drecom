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

// Function: entry_001f4004
// Address: 0x1f4004 - 0x1f400c
void entry_001f4004_0x1f4004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4004_0x1f4004");
#endif

    ctx->pc = 0x1f4004u;

    // 0x1f4004: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4008: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f4008u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1f400cu;
}
