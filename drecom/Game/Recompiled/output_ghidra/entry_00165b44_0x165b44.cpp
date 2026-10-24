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

// Function: entry_00165b44
// Address: 0x165b44 - 0x165b4c
void entry_00165b44_0x165b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165b44_0x165b44");
#endif

    ctx->pc = 0x165b44u;

    // 0x165b44: 0x8c235890  lw          $v1, 0x5890($at)
    ctx->pc = 0x165b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22672)));
    // 0x165b48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x165b4cu;
}
