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

// Function: entry_0028eae0
// Address: 0x28eae0 - 0x28eb20
void entry_0028eae0_0x28eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028eae0_0x28eae0");
#endif

    switch (ctx->pc) {
        case 0x28eafcu: goto label_28eafc;
        default: break;
    }

    ctx->pc = 0x28eae0u;

    // 0x28eae0: 0x92026854  lbu         $v0, 0x6854($s0)
    ctx->pc = 0x28eae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26708)));
    // 0x28eae4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28eae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28eae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eaec: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28EAECu;
    {
        const bool branch_taken_0x28eaec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28eaec) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28EAF4u;
    // 0x28eaf4: 0xc0a3b1c  jal         func_28EC70
    ctx->pc = 0x28EAF4u;
    SET_GPR_U32(ctx, 31, 0x28EAFCu);
    ctx->pc = 0x28EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC70u, 0x28EAF4u, 0x28EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAFCu;
label_28eafc:
    // 0x28eafc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eb00: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28EB00u;
    {
        const bool branch_taken_0x28eb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28eb00) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28EB08u;
    // 0x28eb08: 0xa2006854  sb          $zero, 0x6854($s0)
    ctx->pc = 0x28eb08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26708), (uint8_t)GPR_U32(ctx, 0));
    // 0x28eb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eb10: 0xa2026855  sb          $v0, 0x6855($s0)
    ctx->pc = 0x28eb10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26709), (uint8_t)GPR_U32(ctx, 2));
    // 0x28eb14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28eb18: 0xae025dcc  sw          $v0, 0x5DCC($s0)
    ctx->pc = 0x28eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24012), GPR_U32(ctx, 2));
    // 0x28eb1c: 0xae005dd0  sw          $zero, 0x5DD0($s0)
    ctx->pc = 0x28eb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 0));
    ctx->pc = 0x28eb20u;
}
