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

// Function: entry_0019f5c0
// Address: 0x19f5c0 - 0x19f640
void entry_0019f5c0_0x19f5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f5c0_0x19f5c0");
#endif

    switch (ctx->pc) {
        case 0x19f5dcu: goto label_19f5dc;
        default: break;
    }

    ctx->pc = 0x19f5c0u;

    // 0x19f5c0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x19f5c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f5c4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x19F5C4u;
    {
        const bool branch_taken_0x19f5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f5c4) {
            ctx->pc = 0x19F550u;
            return;
        }
    }
    ctx->pc = 0x19F5CCu;
    // 0x19f5cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19f5d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f5d4: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19F5D4u;
    SET_GPR_U32(ctx, 31, 0x19F5DCu);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19F5D4u, 0x19F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5DCu;
label_19f5dc:
    // 0x19f5dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19F5DCu;
    {
        const bool branch_taken_0x19f5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f5dc) {
            ctx->pc = 0x19F640u;
            return;
        }
    }
    ctx->pc = 0x19F5E4u;
    // 0x19f5e4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f5e8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f5ec: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19f5f0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19f5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19f5f4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x19f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x19f5f8: 0x3c02b60b  lui         $v0, 0xB60B
    ctx->pc = 0x19f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46603 << 16));
    // 0x19f5fc: 0x344260b7  ori         $v0, $v0, 0x60B7
    ctx->pc = 0x19f5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24759);
    // 0x19f600: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19f600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19f604: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x19f604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19f608: 0x0  nop
    ctx->pc = 0x19f608u;
    // NOP
    // 0x19f60c: 0x1010  mfhi        $v0
    ctx->pc = 0x19f60cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19f610: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19f614: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x19f614u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x19f618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f61c: 0x21823  negu        $v1, $v0
    ctx->pc = 0x19f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19f620: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f624: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f628: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x19f628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x19f62c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f630: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19f630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19f634: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x19f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x19f638: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19f638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19f63c: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x19f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    ctx->pc = 0x19f640u;
}
