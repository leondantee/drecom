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

// Function: entry_001a9034
// Address: 0x1a9034 - 0x1a9088
void entry_001a9034_0x1a9034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9034_0x1a9034");
#endif

    switch (ctx->pc) {
        case 0x1a9080u: goto label_1a9080;
        default: break;
    }

    ctx->pc = 0x1a9034u;

    // 0x1a9034: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1a9034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a9038: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a9038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a903c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1a903cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1a9040: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1a9040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x1a9044: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x1a9044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x1a9048: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a9048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a904c: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1a904cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
    // 0x1a9050: 0x34423100  ori         $v0, $v0, 0x3100
    ctx->pc = 0x1a9050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12544);
    // 0x1a9054: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a9054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a9058: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1a9058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a905c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a905cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a9060: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1a9060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1a9064: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1a9064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1a9068: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a9068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a906c: 0x331c3  sra         $a2, $v1, 7
    ctx->pc = 0x1a906cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 7));
    // 0x1a9070: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1a9070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1a9074: 0x2445f148  addiu       $a1, $v0, -0xEB8
    ctx->pc = 0x1a9074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963528));
    // 0x1a9078: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1A9078u;
    SET_GPR_U32(ctx, 31, 0x1A9080u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1A9078u, 0x1A9080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9080u;
label_1a9080:
    // 0x1a9080: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9080u;
    {
        const bool branch_taken_0x1a9080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9080) {
            ctx->pc = 0x1A90D0u;
            return;
        }
    }
    ctx->pc = 0x1A9088u;
}
