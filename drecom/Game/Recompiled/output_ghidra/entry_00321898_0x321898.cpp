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

// Function: entry_00321898
// Address: 0x321898 - 0x3218ac
void entry_00321898_0x321898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321898_0x321898");
#endif

    ctx->pc = 0x321898u;

    // 0x321898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x321898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32189c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32189cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3218a0: 0xac640280  sw          $a0, 0x280($v1)
    ctx->pc = 0x3218a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 4));
    // 0x3218a4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3218A4u;
    {
        const bool branch_taken_0x3218a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3218a4) {
            ctx->pc = 0x321A6Cu;
            return;
        }
    }
    ctx->pc = 0x3218ACu;
}
