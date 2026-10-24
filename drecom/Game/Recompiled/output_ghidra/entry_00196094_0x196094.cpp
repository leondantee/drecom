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

// Function: entry_00196094
// Address: 0x196094 - 0x1960bc
void entry_00196094_0x196094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196094_0x196094");
#endif

    ctx->pc = 0x196094u;

    // 0x196094: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x196094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x196098: 0x8c631250  lw          $v1, 0x1250($v1)
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x19609c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x19609cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1960a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1960a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1960a4: 0x24631240  addiu       $v1, $v1, 0x1240
    ctx->pc = 0x1960a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x1960a8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1960a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1960ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1960acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1960b0: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x1960b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
    // 0x1960b4: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x1960B4u;
    {
        const bool branch_taken_0x1960b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960b4) {
            ctx->pc = 0x196760u;
            return;
        }
    }
    ctx->pc = 0x1960BCu;
}
