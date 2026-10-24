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

// Function: entry_00112e40
// Address: 0x112e40 - 0x112e44
void entry_00112e40_0x112e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112e40_0x112e40");
#endif

    ctx->pc = 0x112e40u;

    // 0x112e40: 0x911023  subu        $v0, $a0, $s1
    ctx->pc = 0x112e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->pc = 0x112e44u;
}
