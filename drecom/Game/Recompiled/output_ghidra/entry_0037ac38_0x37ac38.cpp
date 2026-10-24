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

// Function: entry_0037ac38
// Address: 0x37ac38 - 0x37ac60
void entry_0037ac38_0x37ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ac38_0x37ac38");
#endif

    ctx->pc = 0x37ac38u;

    // 0x37ac38: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37ac38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37ac3c: 0x8c280580  lw          $t0, 0x580($at)
    ctx->pc = 0x37ac3cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37ac40: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x37ac40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x37ac44: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x37ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x37ac48: 0x2462b858  addiu       $v0, $v1, -0x47A8
    ctx->pc = 0x37ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948952));
    // 0x37ac4c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x37ac4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x37ac50: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x37ac50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37ac54: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x37ac54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x37ac58: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x37AC58u;
    {
        const bool branch_taken_0x37ac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ac58) {
            ctx->pc = 0x37A8C0u;
            return;
        }
    }
    ctx->pc = 0x37AC60u;
}
