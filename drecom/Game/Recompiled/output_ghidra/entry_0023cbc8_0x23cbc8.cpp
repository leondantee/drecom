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

// Function: entry_0023cbc8
// Address: 0x23cbc8 - 0x23cbe0
void entry_0023cbc8_0x23cbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cbc8_0x23cbc8");
#endif

    ctx->pc = 0x23cbc8u;

    // 0x23cbc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cbcc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x23cbccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x23cbd0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x23cbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x23cbd4: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x23cbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23cbd8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x23CBD8u;
    {
        const bool branch_taken_0x23cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cbd8) {
            ctx->pc = 0x23CC44u;
            return;
        }
    }
    ctx->pc = 0x23CBE0u;
}
