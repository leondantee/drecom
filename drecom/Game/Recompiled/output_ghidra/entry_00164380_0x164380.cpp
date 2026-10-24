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

// Function: entry_00164380
// Address: 0x164380 - 0x164384
void entry_00164380_0x164380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164380_0x164380");
#endif

    ctx->pc = 0x164380u;

    // 0x164380: 0x24451770  addiu       $a1, $v0, 0x1770
    ctx->pc = 0x164380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    ctx->pc = 0x164384u;
}
