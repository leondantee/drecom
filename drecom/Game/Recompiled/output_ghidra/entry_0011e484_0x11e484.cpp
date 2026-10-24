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

// Function: entry_0011e484
// Address: 0x11e484 - 0x11e49c
void entry_0011e484_0x11e484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e484_0x11e484");
#endif

    ctx->pc = 0x11e484u;

    // 0x11e484: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x11E484u;
    {
        const bool branch_taken_0x11e484 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E484u;
        // 0x11e488: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e484) {
            ctx->pc = 0x11E6E4u;
            return;
        }
    }
    ctx->pc = 0x11E48Cu;
    // 0x11e48c: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x11e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11e490: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e494: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x11E494u;
    {
        const bool branch_taken_0x11e494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E494u;
        // 0x11e498: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e494) {
            ctx->pc = 0x11E6E0u;
            return;
        }
    }
    ctx->pc = 0x11E49Cu;
}
