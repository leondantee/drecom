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

// Function: entry_001faa08
// Address: 0x1faa08 - 0x1faa34
void entry_001faa08_0x1faa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faa08_0x1faa08");
#endif

    ctx->pc = 0x1faa08u;

    // 0x1faa08: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1faa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1faa0c: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x1faa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF60u));
    // 0x1faa10: 0x2c420384  sltiu       $v0, $v0, 0x384
    ctx->pc = 0x1faa10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)900) ? 1 : 0);
    // 0x1faa14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAA14u;
    {
        const bool branch_taken_0x1faa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faa14) {
            ctx->pc = 0x1FAA34u;
            return;
        }
    }
    ctx->pc = 0x1FAA1Cu;
    // 0x1faa1c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1faa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1faa20: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1faa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faa24: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x1faa24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x1faa28: 0x24031f40  addiu       $v1, $zero, 0x1F40
    ctx->pc = 0x1faa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x1faa2c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1faa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faa30: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1faa30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1faa34u;
}
