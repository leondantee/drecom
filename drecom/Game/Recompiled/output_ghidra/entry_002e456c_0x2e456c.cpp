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

// Function: entry_002e456c
// Address: 0x2e456c - 0x2e45bc
void entry_002e456c_0x2e456c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e456c_0x2e456c");
#endif

    switch (ctx->pc) {
        case 0x2e4574u: goto label_2e4574;
        case 0x2e4594u: goto label_2e4594;
        default: break;
    }

    ctx->pc = 0x2e456cu;

    // 0x2e456c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E456Cu;
    SET_GPR_U32(ctx, 31, 0x2E4574u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E456Cu, 0x2E4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4574u;
label_2e4574:
    // 0x2e4574: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4578: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e4578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e457c: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x2e457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x2e4580: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e4580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e4584: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e4584u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e4588: 0xa6220070  sh          $v0, 0x70($s1)
    ctx->pc = 0x2e4588u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e458c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E458Cu;
    SET_GPR_U32(ctx, 31, 0x2E4594u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E458Cu, 0x2E4594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4594u;
label_2e4594:
    // 0x2e4594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e4594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e4598: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2e4598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e459c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e459cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e45a0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e45a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e45a4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2e45a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e45a8: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2e45a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e45ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E45ACu;
    {
        const bool branch_taken_0x2e45ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e45ac) {
            ctx->pc = 0x2E45BCu;
            return;
        }
    }
    ctx->pc = 0x2E45B4u;
    // 0x2e45b4: 0x2602fffa  addiu       $v0, $s0, -0x6
    ctx->pc = 0x2e45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x2e45b8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e45b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x2e45bcu;
}
