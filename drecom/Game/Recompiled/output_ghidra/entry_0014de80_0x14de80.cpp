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

// Function: entry_0014de80
// Address: 0x14de80 - 0x14de98
void entry_0014de80_0x14de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014de80_0x14de80");
#endif

    ctx->pc = 0x14de80u;

    // 0x14de80: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14de80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14de84: 0xa602122c  sh          $v0, 0x122C($s0)
    ctx->pc = 0x14de84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4652), (uint16_t)GPR_U32(ctx, 2));
    // 0x14de88: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14de88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14de8c: 0xa602122e  sh          $v0, 0x122E($s0)
    ctx->pc = 0x14de8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4654), (uint16_t)GPR_U32(ctx, 2));
    // 0x14de90: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x14DE90u;
    {
        const bool branch_taken_0x14de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de90) {
            ctx->pc = 0x14DF80u;
            return;
        }
    }
    ctx->pc = 0x14DE98u;
}
