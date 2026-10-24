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

// Function: entry_002162f4
// Address: 0x2162f4 - 0x2162f8
void entry_002162f4_0x2162f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002162f4_0x2162f4");
#endif

    ctx->pc = 0x2162f4u;

    // 0x2162f4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2162f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x2162f8u;
}
