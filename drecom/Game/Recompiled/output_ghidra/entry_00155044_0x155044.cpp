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

// Function: entry_00155044
// Address: 0x155044 - 0x15504c
void entry_00155044_0x155044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155044_0x155044");
#endif

    ctx->pc = 0x155044u;

    // 0x155044: 0xa200157d  sb          $zero, 0x157D($s0)
    ctx->pc = 0x155044u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5501), (uint8_t)GPR_U32(ctx, 0));
    // 0x155048: 0xa200157c  sb          $zero, 0x157C($s0)
    ctx->pc = 0x155048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5500), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x15504cu;
}
