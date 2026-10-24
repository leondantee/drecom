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

// Function: entry_00146a70
// Address: 0x146a70 - 0x146aa4
void entry_00146a70_0x146a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146a70_0x146a70");
#endif

    ctx->pc = 0x146a70u;

    // 0x146a70: 0x32030002  andi        $v1, $s0, 0x2
    ctx->pc = 0x146a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x146a74: 0x106002e4  beqz        $v1, . + 4 + (0x2E4 << 2)
    ctx->pc = 0x146A74u;
    {
        const bool branch_taken_0x146a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a74) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146A7Cu;
    // 0x146a7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146a80: 0x8c831b64  lw          $v1, 0x1B64($a0)
    ctx->pc = 0x146a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7012)));
    // 0x146a84: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x146a84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x146a88: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x146A88u;
    {
        const bool branch_taken_0x146a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a88) {
            ctx->pc = 0x146AA4u;
            return;
        }
    }
    ctx->pc = 0x146A90u;
    // 0x146a90: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x146a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x146a94: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146a98: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x146a98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x146a9c: 0x100002da  b           . + 4 + (0x2DA << 2)
    ctx->pc = 0x146A9Cu;
    {
        const bool branch_taken_0x146a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a9c) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146AA4u;
}
