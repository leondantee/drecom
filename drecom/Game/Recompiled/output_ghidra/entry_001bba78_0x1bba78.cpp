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

// Function: entry_001bba78
// Address: 0x1bba78 - 0x1bbad0
void entry_001bba78_0x1bba78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bba78_0x1bba78");
#endif

    switch (ctx->pc) {
        case 0x1bba88u: goto label_1bba88;
        case 0x1bbab4u: goto label_1bbab4;
        default: break;
    }

    ctx->pc = 0x1bba78u;

    // 0x1bba78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba7c: 0x246412c0  addiu       $a0, $v1, 0x12C0
    ctx->pc = 0x1bba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1bba80: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1BBA80u;
    SET_GPR_U32(ctx, 31, 0x1BBA88u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1BBA80u, 0x1BBA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBA88u;
label_1bba88:
    // 0x1bba88: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bba88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bba8c: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1BBA8Cu;
    {
        const bool branch_taken_0x1bba8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba8c) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BBA94u;
    // 0x1bba94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bba98: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1bba98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1bba9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bbaa0: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x1bbaa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bbaa4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BBAA4u;
    {
        const bool branch_taken_0x1bbaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbaa4) {
            ctx->pc = 0x1BBAD0u;
            return;
        }
    }
    ctx->pc = 0x1BBAACu;
    // 0x1bbaac: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1BBAACu;
    SET_GPR_U32(ctx, 31, 0x1BBAB4u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BBAACu, 0x1BBAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBAB4u;
label_1bbab4:
    // 0x1bbab4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bbab4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bbab8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBAB8u;
    {
        const bool branch_taken_0x1bbab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbab8) {
            ctx->pc = 0x1BBAD0u;
            return;
        }
    }
    ctx->pc = 0x1BBAC0u;
    // 0x1bbac0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bbac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbac4: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1bbac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bbac8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BBAC8u;
    {
        const bool branch_taken_0x1bbac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbac8) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BBAD0u;
}
