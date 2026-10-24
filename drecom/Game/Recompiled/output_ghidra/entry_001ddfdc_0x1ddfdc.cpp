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

// Function: entry_001ddfdc
// Address: 0x1ddfdc - 0x1ddfe0
void entry_001ddfdc_0x1ddfdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddfdc_0x1ddfdc");
#endif

    ctx->pc = 0x1ddfdcu;

    // 0x1ddfdc: 0xa7b300f6  sh          $s3, 0xF6($sp)
    ctx->pc = 0x1ddfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 246), (uint16_t)GPR_U32(ctx, 19));
    ctx->pc = 0x1ddfe0u;
}
