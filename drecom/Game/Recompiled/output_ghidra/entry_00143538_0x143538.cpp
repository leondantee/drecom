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

// Function: entry_00143538
// Address: 0x143538 - 0x14353c
void entry_00143538_0x143538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143538_0x143538");
#endif

    ctx->pc = 0x143538u;

    // 0x143538: 0xa20013a6  sb          $zero, 0x13A6($s0)
    ctx->pc = 0x143538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5030), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x14353cu;
}
