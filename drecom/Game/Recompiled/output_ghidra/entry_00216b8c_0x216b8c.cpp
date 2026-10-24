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

// Function: entry_00216b8c
// Address: 0x216b8c - 0x216b94
void entry_00216b8c_0x216b8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216b8c_0x216b8c");
#endif

    ctx->pc = 0x216b8cu;

    // 0x216b8c: 0x3c160062  lui         $s6, 0x62
    ctx->pc = 0x216b8cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
    // 0x216b90: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x216b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    ctx->pc = 0x216b94u;
}
