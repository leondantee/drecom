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

// Function: entry_00118ff8
// Address: 0x118ff8 - 0x118ffc
void entry_00118ff8_0x118ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118ff8_0x118ff8");
#endif

    ctx->pc = 0x118ff8u;

    // 0x118ff8: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x118ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    ctx->pc = 0x118ffcu;
}
