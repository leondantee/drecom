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

// Function: entry_00222128
// Address: 0x222128 - 0x22216c
void entry_00222128_0x222128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00222128_0x222128");
#endif

    switch (ctx->pc) {
        case 0x22213cu: goto label_22213c;
        default: break;
    }

    ctx->pc = 0x222128u;

    // 0x222128: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x222128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22212c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x22212cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x222130: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222134: 0xc05d25c  jal         func_174970
    ctx->pc = 0x222134u;
    SET_GPR_U32(ctx, 31, 0x22213Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x222134u, 0x22213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22213Cu;
label_22213c:
    // 0x22213c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22213Cu;
    {
        const bool branch_taken_0x22213c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22213c) {
            ctx->pc = 0x22216Cu;
            return;
        }
    }
    ctx->pc = 0x222144u;
    // 0x222144: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x222144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222148: 0x24c21330  addiu       $v0, $a2, 0x1330
    ctx->pc = 0x222148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x22214c: 0x84440094  lh          $a0, 0x94($v0)
    ctx->pc = 0x22214cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x222150: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x222150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x222154: 0xa4430094  sh          $v1, 0x94($v0)
    ctx->pc = 0x222154u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x222158: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x222158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x22215c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22215cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x222160: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x222160u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x222164: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x222164u;
    {
        const bool branch_taken_0x222164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222164) {
            ctx->pc = 0x22218Cu;
            return;
        }
    }
    ctx->pc = 0x22216Cu;
}
