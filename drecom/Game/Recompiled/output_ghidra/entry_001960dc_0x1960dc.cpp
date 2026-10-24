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

// Function: entry_001960dc
// Address: 0x1960dc - 0x196104
void entry_001960dc_0x1960dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001960dc_0x1960dc");
#endif

    ctx->pc = 0x1960dcu;

    // 0x1960dc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1960dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1960e0: 0x8c831250  lw          $v1, 0x1250($a0)
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4688)));
    // 0x1960e4: 0x78730000  lq          $s3, 0x0($v1)
    ctx->pc = 0x1960e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1960e8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1960e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1960ec: 0x24631240  addiu       $v1, $v1, 0x1240
    ctx->pc = 0x1960ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x1960f0: 0x7c730000  sq          $s3, 0x0($v1)
    ctx->pc = 0x1960f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 19));
    // 0x1960f4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1960f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1960f8: 0xac601274  sw          $zero, 0x1274($v1)
    ctx->pc = 0x1960f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4724), GPR_U32(ctx, 0));
    // 0x1960fc: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x1960FCu;
    {
        const bool branch_taken_0x1960fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960fc) {
            ctx->pc = 0x196760u;
            return;
        }
    }
    ctx->pc = 0x196104u;
}
