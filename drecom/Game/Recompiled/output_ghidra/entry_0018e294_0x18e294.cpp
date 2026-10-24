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

// Function: entry_0018e294
// Address: 0x18e294 - 0x18e2a0
void entry_0018e294_0x18e294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e294_0x18e294");
#endif

    ctx->pc = 0x18e294u;

    // 0x18e294: 0x8e4301f8  lw          $v1, 0x1F8($s2)
    ctx->pc = 0x18e294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 504)));
    // 0x18e298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e29c: 0xae4301f8  sw          $v1, 0x1F8($s2)
    ctx->pc = 0x18e29cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 3));
    ctx->pc = 0x18e2a0u;
}
