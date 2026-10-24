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

// Function: entry_0019d090
// Address: 0x19d090 - 0x19d098
void entry_0019d090_0x19d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d090_0x19d090");
#endif

    ctx->pc = 0x19d090u;

    // 0x19d090: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x19d090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x19d094: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19d094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x19d098u;
}
