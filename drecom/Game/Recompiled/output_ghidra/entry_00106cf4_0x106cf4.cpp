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

// Function: entry_00106cf4
// Address: 0x106cf4 - 0x106cfc
void entry_00106cf4_0x106cf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106cf4_0x106cf4");
#endif

    ctx->pc = 0x106cf4u;

    // 0x106cf4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x106cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x106cf8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x106cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x106cfcu;
}
