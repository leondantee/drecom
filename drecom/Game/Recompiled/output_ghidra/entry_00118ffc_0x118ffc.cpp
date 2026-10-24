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

// Function: entry_00118ffc
// Address: 0x118ffc - 0x119008
void entry_00118ffc_0x118ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118ffc_0x118ffc");
#endif

    ctx->pc = 0x118ffcu;

    // 0x118ffc: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x118ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x119000: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x119000u;
    {
        const bool branch_taken_0x119000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119000u;
        // 0x119004: 0x2b18823  subu        $s1, $s5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119000) {
            ctx->pc = 0x11902Cu;
            return;
        }
    }
    ctx->pc = 0x119008u;
}
