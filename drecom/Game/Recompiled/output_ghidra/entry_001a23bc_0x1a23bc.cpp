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

// Function: entry_001a23bc
// Address: 0x1a23bc - 0x1a23f4
void entry_001a23bc_0x1a23bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a23bc_0x1a23bc");
#endif

    switch (ctx->pc) {
        case 0x1a23c8u: goto label_1a23c8;
        default: break;
    }

    ctx->pc = 0x1a23bcu;

    // 0x1a23bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a23bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a23c0: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1A23C0u;
    SET_GPR_U32(ctx, 31, 0x1A23C8u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1A23C0u, 0x1A23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A23C8u;
label_1a23c8:
    // 0x1a23c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a23c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a23cc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1A23CCu;
    {
        const bool branch_taken_0x1a23cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a23cc) {
            ctx->pc = 0x1A2460u;
            return;
        }
    }
    ctx->pc = 0x1A23D4u;
    // 0x1a23d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23d8: 0x90420007  lbu         $v0, 0x7($v0)
    ctx->pc = 0x1a23d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1a23dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a23dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a23e0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1a23e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a23e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A23E4u;
    {
        const bool branch_taken_0x1a23e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a23e4) {
            ctx->pc = 0x1A23F4u;
            return;
        }
    }
    ctx->pc = 0x1A23ECu;
    // 0x1a23ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a23f0: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x1a23f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a23f4u;
}
