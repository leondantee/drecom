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

// Function: entry_00193df0
// Address: 0x193df0 - 0x193df8
void entry_00193df0_0x193df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193df0_0x193df0");
#endif

    ctx->pc = 0x193df0u;

    // 0x193df0: 0x118982  srl         $s1, $s1, 6
    ctx->pc = 0x193df0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x193df4: 0x0  nop
    ctx->pc = 0x193df4u;
    // NOP
    ctx->pc = 0x193df8u;
}
