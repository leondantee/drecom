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

// Function: entry_0010a8c8
// Address: 0x10a8c8 - 0x10a8d8
void entry_0010a8c8_0x10a8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a8c8_0x10a8c8");
#endif

    ctx->pc = 0x10a8c8u;

    // 0x10a8c8: 0x8c433dac  lw          $v1, 0x3DAC($v0)
    ctx->pc = 0x10a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15788)));
    // 0x10a8cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a8d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A8D0u;
    {
        const bool branch_taken_0x10a8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8D0u;
        // 0x10a8d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8d0) {
            ctx->pc = 0x10A8E8u;
            return;
        }
    }
    ctx->pc = 0x10A8D8u;
}
