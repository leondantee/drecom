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

// Function: entry_0010d494
// Address: 0x10d494 - 0x10d49c
void entry_0010d494_0x10d494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d494_0x10d494");
#endif

    ctx->pc = 0x10d494u;

    // 0x10d494: 0xac4045c4  sw          $zero, 0x45C4($v0)
    ctx->pc = 0x10d494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17860), GPR_U32(ctx, 0));
    // 0x10d498: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10d498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->pc = 0x10d49cu;
}
