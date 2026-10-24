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

// Function: entry_0011fb74
// Address: 0x11fb74 - 0x11fb88
void entry_0011fb74_0x11fb74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fb74_0x11fb74");
#endif

    ctx->pc = 0x11fb74u;

    // 0x11fb74: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FB74u;
    {
        const bool branch_taken_0x11fb74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fb74) {
            ctx->pc = 0x11FB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB74u;
            // 0x11fb78: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FB88u;
            return;
        }
    }
    ctx->pc = 0x11FB7Cu;
    // 0x11fb7c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x11fb7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x11fb80: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x11fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x11fb84: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x11fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x11fb88u;
}
