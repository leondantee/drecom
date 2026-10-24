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

// Function: entry_001f400c
// Address: 0x1f400c - 0x1f4068
void entry_001f400c_0x1f400c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f400c_0x1f400c");
#endif

    ctx->pc = 0x1f400cu;

    // 0x1f400c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f400cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4010: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x1f4010u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1f4014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4018: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x1f4018u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f401c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4020: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f4020u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f4024: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f4024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f4028: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f4028u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f402c: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1f402cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1f4030: 0x14200055  bnez        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x1F4030u;
    {
        const bool branch_taken_0x1f4030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4030) {
            ctx->pc = 0x1F4188u;
            return;
        }
    }
    ctx->pc = 0x1F4038u;
    // 0x1f4038: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f403c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f403cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f4040: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f4040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4044: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f4044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f4048: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F4048u;
    {
        const bool branch_taken_0x1f4048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4048) {
            ctx->pc = 0x1F4118u;
            return;
        }
    }
    ctx->pc = 0x1F4050u;
    // 0x1f4050: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4054: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f4054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f4058: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f4058u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f405c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f405cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4060: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f4060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f4064: 0x0  nop
    ctx->pc = 0x1f4064u;
    // NOP
    ctx->pc = 0x1f4068u;
}
