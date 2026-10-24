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

// Function: entry_00191c08
// Address: 0x191c08 - 0x191c14
void entry_00191c08_0x191c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191c08_0x191c08");
#endif

    ctx->pc = 0x191c08u;

    // 0x191c08: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x191c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x191c0c: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x191c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x191c10: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x191c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    ctx->pc = 0x191c14u;
}
