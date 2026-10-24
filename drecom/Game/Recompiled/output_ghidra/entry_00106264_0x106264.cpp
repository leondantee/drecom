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

// Function: entry_00106264
// Address: 0x106264 - 0x106270
void entry_00106264_0x106264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106264_0x106264");
#endif

    ctx->pc = 0x106264u;

    // 0x106264: 0xae403d08  sw          $zero, 0x3D08($s2)
    ctx->pc = 0x106264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15624), GPR_U32(ctx, 0));
    // 0x106268: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x106268u;
    {
        const bool branch_taken_0x106268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106268u;
        // 0x10626c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106268) {
            ctx->pc = 0x106384u;
            return;
        }
    }
    ctx->pc = 0x106270u;
}
