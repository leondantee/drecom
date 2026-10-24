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

// Function: entry_0025c8e4
// Address: 0x25c8e4 - 0x25c960
void entry_0025c8e4_0x25c8e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025c8e4_0x25c8e4");
#endif

    switch (ctx->pc) {
        case 0x25c958u: goto label_25c958;
        default: break;
    }

    ctx->pc = 0x25c8e4u;

    // 0x25c8e4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x25c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x25c8e8: 0x12e30023  beq         $s7, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x25C8E8u;
    {
        const bool branch_taken_0x25c8e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x25c8e8) {
            ctx->pc = 0x25C978u;
            return;
        }
    }
    ctx->pc = 0x25C8F0u;
    // 0x25c8f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25c8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25c8f4: 0x12e30020  beq         $s7, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x25C8F4u;
    {
        const bool branch_taken_0x25c8f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x25c8f4) {
            ctx->pc = 0x25C978u;
            return;
        }
    }
    ctx->pc = 0x25C8FCu;
    // 0x25c8fc: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x25c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25c900: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x25c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c904: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25c904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25c908: 0x8c6304b0  lw          $v1, 0x4B0($v1)
    ctx->pc = 0x25c908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x25c90c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25C90Cu;
    {
        const bool branch_taken_0x25c90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c90c) {
            ctx->pc = 0x25C960u;
            return;
        }
    }
    ctx->pc = 0x25C914u;
    // 0x25c914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25c918: 0xa7a200fa  sh          $v0, 0xFA($sp)
    ctx->pc = 0x25c918u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 250), (uint16_t)GPR_U32(ctx, 2));
    // 0x25c91c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x25c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x25c920: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c928: 0x8c5104b0  lw          $s1, 0x4B0($v0)
    ctx->pc = 0x25c928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25c92c: 0xafb100fc  sw          $s1, 0xFC($sp)
    ctx->pc = 0x25c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 17));
    // 0x25c930: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x25c930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x25c934: 0xb41021  addu        $v0, $a1, $s4
    ctx->pc = 0x25c934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x25c938: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x25c938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25c93c: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x25c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x25c940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25c940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25c944: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x25c944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x25c948: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x25c948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x25c94c: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25c94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x25c950: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25C950u;
    SET_GPR_U32(ctx, 31, 0x25C958u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25C950u, 0x25C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C958u;
label_25c958:
    // 0x25c958: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25C958u;
    {
        const bool branch_taken_0x25c958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c958) {
            ctx->pc = 0x25C978u;
            return;
        }
    }
    ctx->pc = 0x25C960u;
}
