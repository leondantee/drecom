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

// Function: entry_002155bc
// Address: 0x2155bc - 0x2155c8
void entry_002155bc_0x2155bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002155bc_0x2155bc");
#endif

    ctx->pc = 0x2155bcu;

    // 0x2155bc: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2155bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2155c0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2155C0u;
    {
        const bool branch_taken_0x2155c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2155C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155C0u;
        // 0x2155c4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2155c0) {
            ctx->pc = 0x215570u;
            return;
        }
    }
    ctx->pc = 0x2155C8u;
}
