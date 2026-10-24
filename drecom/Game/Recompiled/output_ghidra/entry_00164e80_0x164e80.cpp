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

// Function: entry_00164e80
// Address: 0x164e80 - 0x164e84
void entry_00164e80_0x164e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164e80_0x164e80");
#endif

    ctx->pc = 0x164e80u;

    // 0x164e80: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x164e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    ctx->pc = 0x164e84u;
}
