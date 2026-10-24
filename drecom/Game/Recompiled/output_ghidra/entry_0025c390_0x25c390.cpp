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

// Function: entry_0025c390
// Address: 0x25c390 - 0x25c3c8
void entry_0025c390_0x25c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c390_0x25c390");
#endif

    switch (ctx->pc) {
        case 0x25c3c4u: goto label_25c3c4;
        default: break;
    }

    ctx->pc = 0x25c390u;

    // 0x25c390: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c394: 0x94630050  lhu         $v1, 0x50($v1)
    ctx->pc = 0x25c394u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x25c398: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25c39c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x25c39cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x25c3a0: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x25C3A0u;
    {
        const bool branch_taken_0x25c3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c3a0) {
            ctx->pc = 0x25C2D4u;
            return;
        }
    }
    ctx->pc = 0x25C3A8u;
    // 0x25c3a8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c3ac: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x25c3acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x25c3b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25C3B0u;
    {
        const bool branch_taken_0x25c3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c3b0) {
            ctx->pc = 0x25C3C8u;
            return;
        }
    }
    ctx->pc = 0x25C3B8u;
    // 0x25c3b8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25c3bc: 0xc098970  jal         func_2625C0
    ctx->pc = 0x25C3BCu;
    SET_GPR_U32(ctx, 31, 0x25C3C4u);
    ctx->pc = 0x2625C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625C0u, 0x25C3BCu, 0x25C3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C3C4u;
label_25c3c4:
    // 0x25c3c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25c3c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x25c3c8u;
}
