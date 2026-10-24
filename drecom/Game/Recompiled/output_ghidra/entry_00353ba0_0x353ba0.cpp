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

// Function: entry_00353ba0
// Address: 0x353ba0 - 0x353bb8
void entry_00353ba0_0x353ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00353ba0_0x353ba0");
#endif

    ctx->pc = 0x353ba0u;

    // 0x353ba0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x353ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353ba4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x353ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353ba8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x353ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x353bac: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x353bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x353bb0: 0x14600001  bnez        $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x353BB0u;
    {
        const bool branch_taken_0x353bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353bb0) {
            ctx->pc = 0x353BB8u;
            return;
        }
    }
    ctx->pc = 0x353BB8u;
}
