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

// Function: entry_0016f600
// Address: 0x16f600 - 0x16f634
void entry_0016f600_0x16f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f600_0x16f600");
#endif

    switch (ctx->pc) {
        case 0x16f62cu: goto label_16f62c;
        default: break;
    }

    ctx->pc = 0x16f600u;

    // 0x16f600: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x16f600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16f604: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16F604u;
    {
        const bool branch_taken_0x16f604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f604) {
            ctx->pc = 0x16F648u;
            return;
        }
    }
    ctx->pc = 0x16F60Cu;
    // 0x16f60c: 0x92050012  lbu         $a1, 0x12($s0)
    ctx->pc = 0x16f60cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f610: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x16f610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16f614: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x16f614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x16f618: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16F618u;
    {
        const bool branch_taken_0x16f618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f618) {
            ctx->pc = 0x16F634u;
            return;
        }
    }
    ctx->pc = 0x16F620u;
    // 0x16f620: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16f620u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16f624: 0xc06bde0  jal         func_1AF780
    ctx->pc = 0x16F624u;
    SET_GPR_U32(ctx, 31, 0x16F62Cu);
    ctx->pc = 0x1AF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF780u, 0x16F624u, 0x16F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F62Cu;
label_16f62c:
    // 0x16f62c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16F62Cu;
    {
        const bool branch_taken_0x16f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f62c) {
            ctx->pc = 0x16F648u;
            return;
        }
    }
    ctx->pc = 0x16F634u;
}
