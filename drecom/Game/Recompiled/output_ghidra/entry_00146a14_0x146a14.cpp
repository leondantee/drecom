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

// Function: entry_00146a14
// Address: 0x146a14 - 0x146a5c
void entry_00146a14_0x146a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146a14_0x146a14");
#endif

    switch (ctx->pc) {
        case 0x146a1cu: goto label_146a1c;
        default: break;
    }

    ctx->pc = 0x146a14u;

    // 0x146a14: 0xc057a4c  jal         func_15E930
    ctx->pc = 0x146A14u;
    SET_GPR_U32(ctx, 31, 0x146A1Cu);
    ctx->pc = 0x15E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E930u, 0x146A14u, 0x146A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146A1Cu;
label_146a1c:
    // 0x146a1c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x146a1cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146a20: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x146a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x146a24: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x146A24u;
    {
        const bool branch_taken_0x146a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a24) {
            ctx->pc = 0x146A70u;
            return;
        }
    }
    ctx->pc = 0x146A2Cu;
    // 0x146a2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146a30: 0x8c641b64  lw          $a0, 0x1B64($v1)
    ctx->pc = 0x146a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
    // 0x146a34: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146a38: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x146a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146a3c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x146a3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x146a40: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x146A40u;
    {
        const bool branch_taken_0x146a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146a40) {
            ctx->pc = 0x146A5Cu;
            return;
        }
    }
    ctx->pc = 0x146A48u;
    // 0x146a48: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x146a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x146a4c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146a50: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x146a50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x146a54: 0x100002ec  b           . + 4 + (0x2EC << 2)
    ctx->pc = 0x146A54u;
    {
        const bool branch_taken_0x146a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a54) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146A5Cu;
}
