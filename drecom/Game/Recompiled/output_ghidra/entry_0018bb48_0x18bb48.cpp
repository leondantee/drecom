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

// Function: entry_0018bb48
// Address: 0x18bb48 - 0x18bb50
void entry_0018bb48_0x18bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bb48_0x18bb48");
#endif

    ctx->pc = 0x18bb48u;

    // 0x18bb48: 0x8e3100e8  lw          $s1, 0xE8($s1)
    ctx->pc = 0x18bb48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x18bb4c: 0x0  nop
    ctx->pc = 0x18bb4cu;
    // NOP
    ctx->pc = 0x18bb50u;
}
