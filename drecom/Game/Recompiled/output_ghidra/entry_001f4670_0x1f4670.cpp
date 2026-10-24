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

// Function: entry_001f4670
// Address: 0x1f4670 - 0x1f46bc
void entry_001f4670_0x1f4670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4670_0x1f4670");
#endif

    ctx->pc = 0x1f4670u;

    // 0x1f4670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4674: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f4674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f4678: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f467c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f467cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f4680: 0x284100dd  slti        $at, $v0, 0xDD
    ctx->pc = 0x1f4680u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)221) ? 1 : 0);
    // 0x1f4684: 0x1420007d  bnez        $at, . + 4 + (0x7D << 2)
    ctx->pc = 0x1F4684u;
    {
        const bool branch_taken_0x1f4684 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4684) {
            ctx->pc = 0x1F487Cu;
            return;
        }
    }
    ctx->pc = 0x1F468Cu;
    // 0x1f468c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f468cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4690: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1f4690u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1f4694: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1f4694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f4698: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f4698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f469c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F469Cu;
    {
        const bool branch_taken_0x1f469c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f469c) {
            ctx->pc = 0x1F476Cu;
            return;
        }
    }
    ctx->pc = 0x1F46A4u;
    // 0x1f46a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f46a8: 0x94420052  lhu         $v0, 0x52($v0)
    ctx->pc = 0x1f46a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f46ac: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x1f46acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f46b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f46b4: 0x8c500058  lw          $s0, 0x58($v0)
    ctx->pc = 0x1f46b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f46b8: 0x0  nop
    ctx->pc = 0x1f46b8u;
    // NOP
    ctx->pc = 0x1f46bcu;
}
