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

// Function: entry_00280018
// Address: 0x280018 - 0x280020
void entry_00280018_0x280018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00280018_0x280018");
#endif

    ctx->pc = 0x280018u;

    // 0x280018: 0x0  nop
    ctx->pc = 0x280018u;
    // NOP
    // 0x28001c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x28001cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x280020u;
}
