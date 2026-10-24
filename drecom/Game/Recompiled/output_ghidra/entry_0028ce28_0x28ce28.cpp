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

// Function: entry_0028ce28
// Address: 0x28ce28 - 0x28ce70
void entry_0028ce28_0x28ce28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ce28_0x28ce28");
#endif

    switch (ctx->pc) {
        case 0x28ce40u: goto label_28ce40;
        default: break;
    }

    ctx->pc = 0x28ce28u;

    // 0x28ce28: 0x8e06685c  lw          $a2, 0x685C($s0)
    ctx->pc = 0x28ce28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ce2c: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x28ce2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x28ce30: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28CE30u;
    {
        const bool branch_taken_0x28ce30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ce30) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CE38u;
    // 0x28ce38: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x28CE38u;
    SET_GPR_U32(ctx, 31, 0x28CE40u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x28CE38u, 0x28CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CE40u;
label_28ce40:
    // 0x28ce40: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28ce40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28ce44: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x28CE44u;
    {
        const bool branch_taken_0x28ce44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ce44) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CE4Cu;
    // 0x28ce4c: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28ce50: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x28ce50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28ce54: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x28ce54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x28ce58: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x28ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x28ce5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce60: 0x8c2320f8  lw          $v1, 0x20F8($at)
    ctx->pc = 0x28ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28ce64: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x28ce64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ce68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ce68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ce6c: 0xac3220f8  sw          $s2, 0x20F8($at)
    ctx->pc = 0x28ce6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    ctx->pc = 0x28ce70u;
}
