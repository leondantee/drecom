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

// Function: entry_001126e0
// Address: 0x1126e0 - 0x1126ec
void entry_001126e0_0x1126e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001126e0_0x1126e0");
#endif

    ctx->pc = 0x1126e0u;

    // 0x1126e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1126e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1126e4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1126e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1126e8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1126e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1126ecu;
}
