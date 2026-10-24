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

// Function: entry_001b0048
// Address: 0x1b0048 - 0x1b0070
void entry_001b0048_0x1b0048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0048_0x1b0048");
#endif

    ctx->pc = 0x1b0048u;

    // 0x1b0048: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1b0048u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1b004c: 0x8fa304b0  lw          $v1, 0x4B0($sp)
    ctx->pc = 0x1b004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1b0050: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b0050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0054: 0xafa404b0  sw          $a0, 0x4B0($sp)
    ctx->pc = 0x1b0054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1200), GPR_U32(ctx, 4));
    // 0x1b0058: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1b0058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1b005c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1b005cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1b0060: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0064: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b0064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0068: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1B0068u;
    {
        const bool branch_taken_0x1b0068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0068) {
            ctx->pc = 0x1B0000u;
            return;
        }
    }
    ctx->pc = 0x1B0070u;
}
