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

// Function: entry_00117b9c
// Address: 0x117b9c - 0x117ba0
void entry_00117b9c_0x117b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117b9c_0x117b9c");
#endif

    ctx->pc = 0x117b9cu;

    // 0x117b9c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x117b9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x117ba0u;
}
