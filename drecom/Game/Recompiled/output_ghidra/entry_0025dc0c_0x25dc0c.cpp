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

// Function: entry_0025dc0c
// Address: 0x25dc0c - 0x25dc64
void entry_0025dc0c_0x25dc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025dc0c_0x25dc0c");
#endif

    switch (ctx->pc) {
        case 0x25dc5cu: goto label_25dc5c;
        default: break;
    }

    ctx->pc = 0x25dc0cu;

    // 0x25dc0c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dc10: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dc14: 0x8c440370  lw          $a0, 0x370($v0)
    ctx->pc = 0x25dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25dc18: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25DC18u;
    {
        const bool branch_taken_0x25dc18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc18) {
            ctx->pc = 0x25DC64u;
            return;
        }
    }
    ctx->pc = 0x25DC20u;
    // 0x25dc20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25dc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dc24: 0xa7a500da  sh          $a1, 0xDA($sp)
    ctx->pc = 0x25dc24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 5));
    // 0x25dc28: 0x123080  sll         $a2, $s2, 2
    ctx->pc = 0x25dc28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25dc2c: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x25dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x25dc30: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x25dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25dc34: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x25dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x25dc38: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x25dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25dc3c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x25dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x25dc40: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25dc44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25dc48: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x25dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25dc4c: 0x26250104  addiu       $a1, $s1, 0x104
    ctx->pc = 0x25dc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    // 0x25dc50: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x25dc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
    // 0x25dc54: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25DC54u;
    SET_GPR_U32(ctx, 31, 0x25DC5Cu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25DC54u, 0x25DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC5Cu;
label_25dc5c:
    // 0x25dc5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25DC5Cu;
    {
        const bool branch_taken_0x25dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dc5c) {
            ctx->pc = 0x25DC80u;
            return;
        }
    }
    ctx->pc = 0x25DC64u;
}
