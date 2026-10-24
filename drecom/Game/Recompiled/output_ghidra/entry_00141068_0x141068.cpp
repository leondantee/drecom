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

// Function: entry_00141068
// Address: 0x141068 - 0x141078
void entry_00141068_0x141068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141068_0x141068");
#endif

    ctx->pc = 0x141068u;

    // 0x141068: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x141068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x14106c: 0x2442ec80  addiu       $v0, $v0, -0x1380
    ctx->pc = 0x14106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x141070: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x141070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x141074: 0x0  nop
    ctx->pc = 0x141074u;
    // NOP
    ctx->pc = 0x141078u;
}
