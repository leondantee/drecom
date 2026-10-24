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

// Function: entry_00273a58
// Address: 0x273a58 - 0x273a60
void entry_00273a58_0x273a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273a58_0x273a58");
#endif

    ctx->pc = 0x273a58u;

    // 0x273a58: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x273a58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x273a5c: 0x0  nop
    ctx->pc = 0x273a5cu;
    // NOP
    ctx->pc = 0x273a60u;
}
