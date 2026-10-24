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

// Function: entry_0010ffb4
// Address: 0x10ffb4 - 0x10ffbc
void entry_0010ffb4_0x10ffb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ffb4_0x10ffb4");
#endif

    ctx->pc = 0x10ffb4u;

    // 0x10ffb4: 0x24634618  addiu       $v1, $v1, 0x4618
    ctx->pc = 0x10ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17944));
    // 0x10ffb8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10ffbcu;
}
