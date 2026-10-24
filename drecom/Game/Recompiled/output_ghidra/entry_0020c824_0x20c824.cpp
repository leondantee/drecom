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

// Function: entry_0020c824
// Address: 0x20c824 - 0x20c82c
void entry_0020c824_0x20c824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c824_0x20c824");
#endif

    ctx->pc = 0x20c824u;

    // 0x20c824: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c828: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x20c828u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x20c82cu;
}
