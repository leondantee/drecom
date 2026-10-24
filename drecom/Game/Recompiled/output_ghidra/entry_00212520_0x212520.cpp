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

// Function: entry_00212520
// Address: 0x212520 - 0x212524
void entry_00212520_0x212520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212520_0x212520");
#endif

    ctx->pc = 0x212520u;

    // 0x212520: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x212520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x212524u;
}
