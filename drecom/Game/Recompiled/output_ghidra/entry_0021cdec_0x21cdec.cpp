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

// Function: entry_0021cdec
// Address: 0x21cdec - 0x21cdf4
void entry_0021cdec_0x21cdec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021cdec_0x21cdec");
#endif

    ctx->pc = 0x21cdecu;

    // 0x21cdec: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x21cdecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x21cdf0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x21cdf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21cdf4u;
}
