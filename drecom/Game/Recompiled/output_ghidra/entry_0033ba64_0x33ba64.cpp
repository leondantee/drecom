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

// Function: entry_0033ba64
// Address: 0x33ba64 - 0x33ba78
void entry_0033ba64_0x33ba64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033ba64_0x33ba64");
#endif

    ctx->pc = 0x33ba64u;

    // 0x33ba64: 0x8603000c  lh          $v1, 0xC($s0)
    ctx->pc = 0x33ba64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33ba68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33ba6c: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x33ba6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x33ba70: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x33BA70u;
    {
        const bool branch_taken_0x33ba70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ba70) {
            ctx->pc = 0x33BB5Cu;
            return;
        }
    }
    ctx->pc = 0x33BA78u;
}
