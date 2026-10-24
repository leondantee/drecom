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

// Function: entry_0021735c
// Address: 0x21735c - 0x217364
void entry_0021735c_0x21735c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021735c_0x21735c");
#endif

    ctx->pc = 0x21735cu;

    // 0x21735c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x21735cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x217360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x217364u;
}
