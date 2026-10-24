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

// Function: entry_00108a68
// Address: 0x108a68 - 0x108a6c
void entry_00108a68_0x108a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108a68_0x108a68");
#endif

    ctx->pc = 0x108a68u;

    // 0x108a68: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x108a68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x108a6cu;
}
