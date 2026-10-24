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

// Function: entry_00187c48
// Address: 0x187c48 - 0x187c88
void entry_00187c48_0x187c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187c48_0x187c48");
#endif

    switch (ctx->pc) {
        case 0x187c6cu: goto label_187c6c;
        default: break;
    }

    ctx->pc = 0x187c48u;

    // 0x187c48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x187c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x187c4c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x187c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x187c50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x187c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x187c54: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187c58: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187c5c: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187c60: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187c64: 0xc0568c4  jal         func_15A310
    ctx->pc = 0x187C64u;
    SET_GPR_U32(ctx, 31, 0x187C6Cu);
    ctx->pc = 0x15A310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A310u, 0x187C64u, 0x187C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C6Cu;
label_187c6c:
    // 0x187c6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x187C6Cu;
    {
        const bool branch_taken_0x187c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c6c) {
            ctx->pc = 0x187C88u;
            return;
        }
    }
    ctx->pc = 0x187C74u;
    // 0x187c74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x187c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x187c78: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x187c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x187c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187c80: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x187C80u;
    {
        const bool branch_taken_0x187c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187c80) {
            ctx->pc = 0x187CB4u;
            return;
        }
    }
    ctx->pc = 0x187C88u;
}
