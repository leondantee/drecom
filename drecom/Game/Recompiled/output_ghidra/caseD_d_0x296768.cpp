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

// Function: caseD_d
// Address: 0x296768 - 0x29677c
void caseD_d_0x296768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x296768");
#endif

    ctx->pc = 0x296768u;

    // 0x296768: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x296768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29676c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29676cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296770: 0xa06469c9  sb          $a0, 0x69C9($v1)
    ctx->pc = 0x296770u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 4));
    // 0x296774: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x296774u;
    {
        const bool branch_taken_0x296774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296774) {
            ctx->pc = 0x296A6Cu;
            return;
        }
    }
    ctx->pc = 0x29677Cu;
}
