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

// Function: entry_0019c5a0
// Address: 0x19c5a0 - 0x19c5c8
void entry_0019c5a0_0x19c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c5a0_0x19c5a0");
#endif

    switch (ctx->pc) {
        case 0x19c5c4u: goto label_19c5c4;
        default: break;
    }

    ctx->pc = 0x19c5a0u;

    // 0x19c5a0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x19c5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19c5a4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19c5a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19c5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19c5ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C5ACu;
    {
        const bool branch_taken_0x19c5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c5ac) {
            ctx->pc = 0x19C5C8u;
            return;
        }
    }
    ctx->pc = 0x19C5B4u;
    // 0x19c5b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19c5b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19c5b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19c5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c5bc: 0xc067180  jal         func_19C600
    ctx->pc = 0x19C5BCu;
    SET_GPR_U32(ctx, 31, 0x19C5C4u);
    ctx->pc = 0x19C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C600u, 0x19C5BCu, 0x19C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C5C4u;
label_19c5c4:
    // 0x19c5c4: 0x0  nop
    ctx->pc = 0x19c5c4u;
    // NOP
    ctx->pc = 0x19c5c8u;
}
