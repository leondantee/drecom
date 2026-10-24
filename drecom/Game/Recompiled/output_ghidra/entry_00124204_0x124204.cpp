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

// Function: entry_00124204
// Address: 0x124204 - 0x124240
void entry_00124204_0x124204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124204_0x124204");
#endif

    switch (ctx->pc) {
        case 0x124228u: goto label_124228;
        default: break;
    }

    ctx->pc = 0x124204u;

    // 0x124204: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x124204u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124208: 0x9655000e  lhu         $s5, 0xE($s2)
    ctx->pc = 0x124208u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x12420c: 0x36a20020  ori         $v0, $s5, 0x20
    ctx->pc = 0x12420cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
    // 0x124210: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x124210u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x124214: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124218: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x124218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12421c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x12421cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x124220: 0xc048148  jal         func_120520
    ctx->pc = 0x124220u;
    SET_GPR_U32(ctx, 31, 0x124228u);
    ctx->pc = 0x120520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120520u, 0x124220u, 0x124228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124228u;
label_124228:
    // 0x124228: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x124228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12422c: 0x84c210a6  lh          $v0, 0x10A6($a2)
    ctx->pc = 0x12422cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4262)));
    // 0x124230: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x124230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x124234: 0xa4c210a6  sh          $v0, 0x10A6($a2)
    ctx->pc = 0x124234u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x124238: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x124238u;
    {
        const bool branch_taken_0x124238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124238) {
            ctx->pc = 0x124260u;
            return;
        }
    }
    ctx->pc = 0x124240u;
}
