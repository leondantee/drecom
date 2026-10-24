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

// Function: entry_00135148
// Address: 0x135148 - 0x135150
void entry_00135148_0x135148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135148_0x135148");
#endif

    ctx->pc = 0x135148u;

    // 0x135148: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x135148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13514c: 0xa2000096  sb          $zero, 0x96($s0)
    ctx->pc = 0x13514cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x135150u;
}
