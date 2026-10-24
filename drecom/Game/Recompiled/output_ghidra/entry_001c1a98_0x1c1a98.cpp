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

// Function: entry_001c1a98
// Address: 0x1c1a98 - 0x1c1ae4
void entry_001c1a98_0x1c1a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a98_0x1c1a98");
#endif

    ctx->pc = 0x1c1a98u;

    // 0x1c1a98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c1a9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1aa0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1c1aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c1aa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1aa8: 0xa050156c  sb          $s0, 0x156C($v0)
    ctx->pc = 0x1c1aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c1aac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1ab0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1c1ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1ab4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1ab8: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
    // 0x1c1abc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C1ABCu;
    {
        const bool branch_taken_0x1c1abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1abc) {
            ctx->pc = 0x1C1AE4u;
            return;
        }
    }
    ctx->pc = 0x1C1AC4u;
    // 0x1c1ac4: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1c1ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1c1ac8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c1ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c1acc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1ACCu;
    {
        const bool branch_taken_0x1c1acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1acc) {
            ctx->pc = 0x1C1AE4u;
            return;
        }
    }
    ctx->pc = 0x1C1AD4u;
    // 0x1c1ad4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c1ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c1ad8: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1c1ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1adc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1ADCu;
    {
        const bool branch_taken_0x1c1adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1adc) {
            ctx->pc = 0x1C1AF0u;
            return;
        }
    }
    ctx->pc = 0x1C1AE4u;
}
