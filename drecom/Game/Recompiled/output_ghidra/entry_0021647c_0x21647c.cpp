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

// Function: entry_0021647c
// Address: 0x21647c - 0x216484
void entry_0021647c_0x21647c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021647c_0x21647c");
#endif

    ctx->pc = 0x21647cu;

    // 0x21647c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x21647cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x216480: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x216480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    ctx->pc = 0x216484u;
}
