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

// Function: entry_002e4648
// Address: 0x2e4648 - 0x2e4698
void entry_002e4648_0x2e4648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e4648_0x2e4648");
#endif

    switch (ctx->pc) {
        case 0x2e4650u: goto label_2e4650;
        case 0x2e4670u: goto label_2e4670;
        default: break;
    }

    ctx->pc = 0x2e4648u;

    // 0x2e4648: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E4648u;
    SET_GPR_U32(ctx, 31, 0x2E4650u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E4648u, 0x2E4650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4650u;
label_2e4650:
    // 0x2e4650: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4654: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e4654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e4658: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x2e4658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x2e465c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e4660: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e4660u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e4664: 0xa622006e  sh          $v0, 0x6E($s1)
    ctx->pc = 0x2e4664u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 110), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4668: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E4668u;
    SET_GPR_U32(ctx, 31, 0x2E4670u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E4668u, 0x2E4670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4670u;
label_2e4670:
    // 0x2e4670: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4674: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e4674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e4678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e467c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e467cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4680: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e4680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e4684: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2e4684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e4688: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4688u;
    {
        const bool branch_taken_0x2e4688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4688) {
            ctx->pc = 0x2E4698u;
            return;
        }
    }
    ctx->pc = 0x2E4690u;
    // 0x2e4690: 0x2602fffa  addiu       $v0, $s0, -0x6
    ctx->pc = 0x2e4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x2e4694: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e4694u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x2e4698u;
}
