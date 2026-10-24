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

// Function: entry_001a1ab8
// Address: 0x1a1ab8 - 0x1a1aec
void entry_001a1ab8_0x1a1ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ab8_0x1a1ab8");
#endif

    ctx->pc = 0x1a1ab8u;

    // 0x1a1ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a1abc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1a1abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1a1ac0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1a1ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a1ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a1ac8: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1A1AC8u;
    {
        const bool branch_taken_0x1a1ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1ac8) {
            ctx->pc = 0x1A1C88u;
            return;
        }
    }
    ctx->pc = 0x1A1AD0u;
    // 0x1a1ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1ad4: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1A1AD4u;
    {
        const bool branch_taken_0x1a1ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a1ad4) {
            ctx->pc = 0x1A1C00u;
            return;
        }
    }
    ctx->pc = 0x1A1ADCu;
    // 0x1a1adc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1ADCu;
    {
        const bool branch_taken_0x1a1adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1adc) {
            ctx->pc = 0x1A1AECu;
            return;
        }
    }
    ctx->pc = 0x1A1AE4u;
    // 0x1a1ae4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1A1AE4u;
    {
        const bool branch_taken_0x1a1ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ae4) {
            ctx->pc = 0x1A1CA0u;
            return;
        }
    }
    ctx->pc = 0x1A1AECu;
}
