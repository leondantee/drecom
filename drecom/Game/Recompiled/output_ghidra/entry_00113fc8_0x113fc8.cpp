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

// Function: entry_00113fc8
// Address: 0x113fc8 - 0x113fcc
void entry_00113fc8_0x113fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113fc8_0x113fc8");
#endif

    ctx->pc = 0x113fc8u;

    // 0x113fc8: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x113fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    ctx->pc = 0x113fccu;
}
