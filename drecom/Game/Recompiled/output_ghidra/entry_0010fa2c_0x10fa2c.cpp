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

// Function: entry_0010fa2c
// Address: 0x10fa2c - 0x10fa34
void entry_0010fa2c_0x10fa2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fa2c_0x10fa2c");
#endif

    ctx->pc = 0x10fa2cu;

    // 0x10fa2c: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x10fa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x10fa30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x10fa34u;
}
