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

// Function: entry_00201e48
// Address: 0x201e48 - 0x201eb0
void entry_00201e48_0x201e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00201e48_0x201e48");
#endif

    switch (ctx->pc) {
        case 0x201ea8u: goto label_201ea8;
        default: break;
    }

    ctx->pc = 0x201e48u;

    // 0x201e48: 0x601ffd4  bgez        $s0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x201E48u;
    {
        const bool branch_taken_0x201e48 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x201e48) {
            ctx->pc = 0x201D9Cu;
            return;
        }
    }
    ctx->pc = 0x201E50u;
    // 0x201e50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x201e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x201e54: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x201e58: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x201E58u;
    {
        const bool branch_taken_0x201e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201e58) {
            ctx->pc = 0x201EB0u;
            return;
        }
    }
    ctx->pc = 0x201E60u;
    // 0x201e60: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201e64: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x201e64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB0u));
    // 0x201e68: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x201e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x201e6c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x201e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201e70: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x201e70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x201e74: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x201e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x201e78: 0x34420808  ori         $v0, $v0, 0x808
    ctx->pc = 0x201e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2056);
    // 0x201e7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x201e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x201e80: 0x3c021d07  lui         $v0, 0x1D07
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7431 << 16));
    // 0x201e84: 0x34420a00  ori         $v0, $v0, 0xA00
    ctx->pc = 0x201e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2560);
    // 0x201e88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x201e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x201e8c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x201e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x201e90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x201e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x201e94: 0x24450d70  addiu       $a1, $v0, 0xD70
    ctx->pc = 0x201e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3440));
    // 0x201e98: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x201e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x201e9c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x201e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x201ea0: 0xc059b14  jal         func_166C50
    ctx->pc = 0x201EA0u;
    SET_GPR_U32(ctx, 31, 0x201EA8u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x201EA0u, 0x201EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201EA8u;
label_201ea8:
    // 0x201ea8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x201EA8u;
    {
        const bool branch_taken_0x201ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201ea8) {
            ctx->pc = 0x201EF8u;
            return;
        }
    }
    ctx->pc = 0x201EB0u;
}
