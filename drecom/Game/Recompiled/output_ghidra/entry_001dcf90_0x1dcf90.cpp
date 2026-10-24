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

// Function: entry_001dcf90
// Address: 0x1dcf90 - 0x1dcf94
void entry_001dcf90_0x1dcf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcf90_0x1dcf90");
#endif

    ctx->pc = 0x1dcf90u;

    // 0x1dcf90: 0xafb20164  sw          $s2, 0x164($sp)
    ctx->pc = 0x1dcf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 18));
    ctx->pc = 0x1dcf94u;
}
