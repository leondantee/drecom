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

// Function: entry_0010a954
// Address: 0x10a954 - 0x10a964
void entry_0010a954_0x10a954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a954_0x10a954");
#endif

    ctx->pc = 0x10a954u;

    // 0x10a954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A954u;
    {
        const bool branch_taken_0x10a954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A954u;
        // 0x10a958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a954) {
            ctx->pc = 0x10A964u;
            return;
        }
    }
    ctx->pc = 0x10A95Cu;
    // 0x10a95c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x10a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x10a960: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x10a960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x10a964u;
}
