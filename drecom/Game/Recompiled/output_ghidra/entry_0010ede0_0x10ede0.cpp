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

// Function: entry_0010ede0
// Address: 0x10ede0 - 0x10ede8
void entry_0010ede0_0x10ede0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ede0_0x10ede0");
#endif

    ctx->pc = 0x10ede0u;

    // 0x10ede0: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x10ede0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
    // 0x10ede4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x10ede8u;
}
