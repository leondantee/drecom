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

// Function: entry_00198d08
// Address: 0x198d08 - 0x198d40
void entry_00198d08_0x198d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198d08_0x198d08");
#endif

    ctx->pc = 0x198d08u;

    // 0x198d08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198d0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198d10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198d14: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x198d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x198d18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198d20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x198d28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198d30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x198d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x198d34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x198d38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x198D38u;
    {
        const bool branch_taken_0x198d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198d38) {
            ctx->pc = 0x198D9Cu;
            return;
        }
    }
    ctx->pc = 0x198D40u;
}
