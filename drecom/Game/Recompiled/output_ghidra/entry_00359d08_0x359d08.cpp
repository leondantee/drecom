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

// Function: entry_00359d08
// Address: 0x359d08 - 0x359d10
void entry_00359d08_0x359d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359d08_0x359d08");
#endif

    ctx->pc = 0x359d08u;

    // 0x359d08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x359d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x359d0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x359d10u;
}
