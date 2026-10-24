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

// Function: entry_00216538
// Address: 0x216538 - 0x21653c
void entry_00216538_0x216538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216538_0x216538");
#endif

    ctx->pc = 0x216538u;

    // 0x216538: 0x2692bc40  addiu       $s2, $s4, -0x43C0
    ctx->pc = 0x216538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949952));
    ctx->pc = 0x21653cu;
}
