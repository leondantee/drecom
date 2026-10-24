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

// Function: entry_0025c840
// Address: 0x25c840 - 0x25c8c4
void entry_0025c840_0x25c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c840_0x25c840");
#endif

    switch (ctx->pc) {
        case 0x25c8bcu: goto label_25c8bc;
        default: break;
    }

    ctx->pc = 0x25c840u;

    // 0x25c840: 0x32e300c0  andi        $v1, $s7, 0xC0
    ctx->pc = 0x25c840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)192);
    // 0x25c844: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x25C844u;
    {
        const bool branch_taken_0x25c844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c844) {
            ctx->pc = 0x25C8E4u;
            return;
        }
    }
    ctx->pc = 0x25C84Cu;
    // 0x25c84c: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x25c84cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25c850: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25c850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25c854: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x25c854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x25c858: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x25C858u;
    {
        const bool branch_taken_0x25c858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c858) {
            ctx->pc = 0x25C978u;
            return;
        }
    }
    ctx->pc = 0x25C860u;
    // 0x25c860: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x25c860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25c864: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c868: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25c86c: 0x8c630370  lw          $v1, 0x370($v1)
    ctx->pc = 0x25c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x25c870: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25C870u;
    {
        const bool branch_taken_0x25c870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c870) {
            ctx->pc = 0x25C8C4u;
            return;
        }
    }
    ctx->pc = 0x25C878u;
    // 0x25c878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c87c: 0xa7a200fa  sh          $v0, 0xFA($sp)
    ctx->pc = 0x25c87cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c880: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x25c880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25c884: 0x8fb60168  lw          $s6, 0x168($sp)
    ctx->pc = 0x25c884u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c888: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x25c888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x25c88c: 0x8c420370  lw          $v0, 0x370($v0)
    ctx->pc = 0x25c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 880)));
    // 0x25c890: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x25c890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x25c894: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x25c894u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x25c898: 0x2343021  addu        $a2, $s1, $s4
    ctx->pc = 0x25c898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x25c89c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x25c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x25c8a0: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c8a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c8a8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x25c8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x25c8ac: 0x26050104  addiu       $a1, $s0, 0x104
    ctx->pc = 0x25c8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x25c8b0: 0x24460608  addiu       $a2, $v0, 0x608
    ctx->pc = 0x25c8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1544));
    // 0x25c8b4: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25C8B4u;
    SET_GPR_U32(ctx, 31, 0x25C8BCu);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25C8B4u, 0x25C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8BCu;
label_25c8bc:
    // 0x25c8bc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x25C8BCu;
    {
        const bool branch_taken_0x25c8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c8bc) {
            ctx->pc = 0x25C978u;
            return;
        }
    }
    ctx->pc = 0x25C8C4u;
}
