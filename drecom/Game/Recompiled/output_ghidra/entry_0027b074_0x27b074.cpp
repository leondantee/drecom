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

// Function: entry_0027b074
// Address: 0x27b074 - 0x27b094
void entry_0027b074_0x27b074(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b074_0x27b074");
#endif

    ctx->pc = 0x27b074u;

    // 0x27b074: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x27b074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27b078: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27b07c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b080: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B080u;
    {
        const bool branch_taken_0x27b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b080) {
            ctx->pc = 0x27B094u;
            return;
        }
    }
    ctx->pc = 0x27B088u;
    // 0x27b088: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x27b088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27b08c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27b090: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x27b090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x27b094u;
}
