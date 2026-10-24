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

// Function: entry_001087c0
// Address: 0x1087c0 - 0x1087c8
void entry_001087c0_0x1087c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001087c0_0x1087c0");
#endif

    ctx->pc = 0x1087c0u;

    // 0x1087c0: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1087c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1087c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1087c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x1087c8u;
}
