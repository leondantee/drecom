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

// Function: entry_00106cfc
// Address: 0x106cfc - 0x106d04
void entry_00106cfc_0x106cfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106cfc_0x106cfc");
#endif

    ctx->pc = 0x106cfcu;

    // 0x106cfc: 0x24633a70  addiu       $v1, $v1, 0x3A70
    ctx->pc = 0x106cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14960));
    // 0x106d00: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x106d00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->pc = 0x106d04u;
}
