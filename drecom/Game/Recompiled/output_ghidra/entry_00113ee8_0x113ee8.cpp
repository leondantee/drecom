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

// Function: entry_00113ee8
// Address: 0x113ee8 - 0x113eec
void entry_00113ee8_0x113ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113ee8_0x113ee8");
#endif

    ctx->pc = 0x113ee8u;

    // 0x113ee8: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x113ee8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    ctx->pc = 0x113eecu;
}
