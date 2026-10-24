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

// Function: entry_00101e70
// Address: 0x101e70 - 0x101e78
void entry_00101e70_0x101e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101e70_0x101e70");
#endif

    ctx->pc = 0x101e70u;

    // 0x101e70: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x101e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x101e74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x101e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->pc = 0x101e78u;
}
