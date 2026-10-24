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

// Function: entry_001a5d50
// Address: 0x1a5d50 - 0x1a5d98
void entry_001a5d50_0x1a5d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5d50_0x1a5d50");
#endif

    switch (ctx->pc) {
        case 0x1a5d6cu: goto label_1a5d6c;
        default: break;
    }

    ctx->pc = 0x1a5d50u;

    // 0x1a5d50: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a5d54: 0xae2202c4  sw          $v0, 0x2C4($s1)
    ctx->pc = 0x1a5d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 708), GPR_U32(ctx, 2));
    // 0x1a5d58: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5d5c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5d60: 0x262502bc  addiu       $a1, $s1, 0x2BC
    ctx->pc = 0x1a5d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
    // 0x1a5d64: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5D64u;
    SET_GPR_U32(ctx, 31, 0x1A5D6Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5D64u, 0x1A5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D6Cu;
label_1a5d6c:
    // 0x1a5d6c: 0x92030315  lbu         $v1, 0x315($s0)
    ctx->pc = 0x1a5d6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 789)));
    // 0x1a5d70: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5D70u;
    {
        const bool branch_taken_0x1a5d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d70) {
            ctx->pc = 0x1A5D98u;
            return;
        }
    }
    ctx->pc = 0x1A5D78u;
    // 0x1a5d78: 0x92020317  lbu         $v0, 0x317($s0)
    ctx->pc = 0x1a5d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a5d7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5D7Cu;
    {
        const bool branch_taken_0x1a5d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d7c) {
            ctx->pc = 0x1A5D98u;
            return;
        }
    }
    ctx->pc = 0x1A5D84u;
    // 0x1a5d84: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a5d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a5d88: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a5d8c: 0x26050280  addiu       $a1, $s0, 0x280
    ctx->pc = 0x1a5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x1a5d90: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A5D90u;
    SET_GPR_U32(ctx, 31, 0x1A5D98u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A5D90u, 0x1A5D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5D98u;
}
