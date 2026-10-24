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

// Function: entry_00326008
// Address: 0x326008 - 0x326084
void entry_00326008_0x326008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326008_0x326008");
#endif

    switch (ctx->pc) {
        case 0x32607cu: goto label_32607c;
        default: break;
    }

    ctx->pc = 0x326008u;

    // 0x326008: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x326008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32600c: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x32600cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x326010: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x326010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x326014: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x326014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x326018: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x326018u;
    {
        const bool branch_taken_0x326018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326018) {
            ctx->pc = 0x3260A4u;
            return;
        }
    }
    ctx->pc = 0x326020u;
    // 0x326020: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x326020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326024: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x326024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x326028: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x326028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32602c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x326030: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x326030u;
    {
        const bool branch_taken_0x326030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326030) {
            ctx->pc = 0x3260A4u;
            return;
        }
    }
    ctx->pc = 0x326038u;
    // 0x326038: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x326038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32603c: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x32603cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x326040: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x326040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326044: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x326044u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x326048: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x326048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32604c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x32604cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x326050: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x326050u;
    {
        const bool branch_taken_0x326050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326050) {
            ctx->pc = 0x326084u;
            return;
        }
    }
    ctx->pc = 0x326058u;
    // 0x326058: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x326058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32605c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x32605cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326060: 0x8c430114  lw          $v1, 0x114($v0)
    ctx->pc = 0x326060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x326064: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x326064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x326068: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x326068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x32606c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x32606cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x326070: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x326070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x326074: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x326074u;
    SET_GPR_U32(ctx, 31, 0x32607Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x326074u, 0x32607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32607Cu;
label_32607c:
    // 0x32607c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32607Cu;
    {
        const bool branch_taken_0x32607c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32607c) {
            ctx->pc = 0x3260A4u;
            return;
        }
    }
    ctx->pc = 0x326084u;
}
