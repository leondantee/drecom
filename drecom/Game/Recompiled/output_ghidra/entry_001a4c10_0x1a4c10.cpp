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

// Function: entry_001a4c10
// Address: 0x1a4c10 - 0x1a4c38
void entry_001a4c10_0x1a4c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4c10_0x1a4c10");
#endif

    ctx->pc = 0x1a4c10u;

    // 0x1a4c10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a4c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a4c14: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a4c14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a4c18: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a4c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a4c1c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1a4c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1a4c20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4C20u;
    {
        const bool branch_taken_0x1a4c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c20) {
            ctx->pc = 0x1A4C38u;
            return;
        }
    }
    ctx->pc = 0x1A4C28u;
    // 0x1a4c28: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1a4c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a4c2c: 0x80830305  lb          $v1, 0x305($a0)
    ctx->pc = 0x1a4c2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 773)));
    // 0x1a4c30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4c34: 0xa0830305  sb          $v1, 0x305($a0)
    ctx->pc = 0x1a4c34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 773), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a4c38u;
}
