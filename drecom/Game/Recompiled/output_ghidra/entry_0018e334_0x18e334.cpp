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

// Function: entry_0018e334
// Address: 0x18e334 - 0x18e364
void entry_0018e334_0x18e334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e334_0x18e334");
#endif

    switch (ctx->pc) {
        case 0x18e358u: goto label_18e358;
        default: break;
    }

    ctx->pc = 0x18e334u;

    // 0x18e334: 0x8e03023c  lw          $v1, 0x23C($s0)
    ctx->pc = 0x18e334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 572)));
    // 0x18e338: 0x92020240  lbu         $v0, 0x240($s0)
    ctx->pc = 0x18e338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 576)));
    // 0x18e33c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18e33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18e340: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x18e340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18e344: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x18E344u;
    {
        const bool branch_taken_0x18e344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e344) {
            ctx->pc = 0x18E364u;
            return;
        }
    }
    ctx->pc = 0x18E34Cu;
    // 0x18e34c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18e34cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18e350: 0xc063b4c  jal         func_18ED30
    ctx->pc = 0x18E350u;
    SET_GPR_U32(ctx, 31, 0x18E358u);
    ctx->pc = 0x18ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED30u, 0x18E350u, 0x18E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E358u;
label_18e358:
    // 0x18e358: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18e358u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18e35c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x18E35Cu;
    {
        const bool branch_taken_0x18e35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e35c) {
            ctx->pc = 0x18E420u;
            return;
        }
    }
    ctx->pc = 0x18E364u;
}
