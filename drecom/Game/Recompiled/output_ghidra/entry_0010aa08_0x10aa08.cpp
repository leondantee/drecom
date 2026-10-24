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

// Function: entry_0010aa08
// Address: 0x10aa08 - 0x10aa44
void entry_0010aa08_0x10aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aa08_0x10aa08");
#endif

    switch (ctx->pc) {
        case 0x10aa10u: goto label_10aa10;
        default: break;
    }

    ctx->pc = 0x10aa08u;

    // 0x10aa08: 0xc041fb0  jal         func_107EC0
    ctx->pc = 0x10AA08u;
    SET_GPR_U32(ctx, 31, 0x10AA10u);
    ctx->pc = 0x10AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA08u;
    // 0x10aa0c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107EC0u, 0x10AA08u, 0x10AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA10u;
label_10aa10:
    // 0x10aa10: 0x8e823d04  lw          $v0, 0x3D04($s4)
    ctx->pc = 0x10aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15620)));
    // 0x10aa14: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x10aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x10aa18: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x10aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10aa1c: 0xaea03d1c  sw          $zero, 0x3D1C($s5)
    ctx->pc = 0x10aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 15644), GPR_U32(ctx, 0));
    // 0x10aa20: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x10aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10aa24: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x10aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x10aa28: 0xae843d04  sw          $a0, 0x3D04($s4)
    ctx->pc = 0x10aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 15620), GPR_U32(ctx, 4));
    // 0x10aa2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10aa30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10aa34: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x10AA34u;
    {
        const bool branch_taken_0x10aa34 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA34u;
        // 0x10aa38: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa34) {
            ctx->pc = 0x10AA44u;
            return;
        }
    }
    ctx->pc = 0x10AA3Cu;
    // 0x10aa3c: 0xc042928  jal         func_10A4A0
    ctx->pc = 0x10AA3Cu;
    SET_GPR_U32(ctx, 31, 0x10AA44u);
    ctx->pc = 0x10AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AA3Cu;
    // 0x10aa40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A4A0u, 0x10AA3Cu, 0x10AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AA44u;
}
