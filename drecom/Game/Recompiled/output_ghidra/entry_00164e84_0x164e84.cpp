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

// Function: entry_00164e84
// Address: 0x164e84 - 0x164e88
void entry_00164e84_0x164e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164e84_0x164e84");
#endif

    ctx->pc = 0x164e84u;

    // 0x164e84: 0x24452da0  addiu       $a1, $v0, 0x2DA0
    ctx->pc = 0x164e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
    ctx->pc = 0x164e88u;
}
