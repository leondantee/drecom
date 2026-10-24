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

// Function: entry_001116fc
// Address: 0x1116fc - 0x111718
void entry_001116fc_0x1116fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001116fc_0x1116fc");
#endif

    ctx->pc = 0x1116fcu;

    // 0x1116fc: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x1116fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x111700: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x111700u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x111704: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x111704u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x111708: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x111708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11170c: 0x1520fff4  bnez        $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11170Cu;
    {
        const bool branch_taken_0x11170c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x111710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11170Cu;
        // 0x111710: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11170c) {
            ctx->pc = 0x1116E0u;
            return;
        }
    }
    ctx->pc = 0x111714u;
    // 0x111714: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x111714u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x111718u;
}
