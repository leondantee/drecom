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

// Function: entry_0010be34
// Address: 0x10be34 - 0x10be38
void entry_0010be34_0x10be34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010be34_0x10be34");
#endif

    ctx->pc = 0x10be34u;

    // 0x10be34: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x10be34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    ctx->pc = 0x10be38u;
}
