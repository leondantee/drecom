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

// Function: entry_00113eec
// Address: 0x113eec - 0x113f20
void entry_00113eec_0x113eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113eec_0x113eec");
#endif

    switch (ctx->pc) {
        case 0x113efcu: goto label_113efc;
        default: break;
    }

    ctx->pc = 0x113eecu;

    // 0x113eec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113ef0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113ef4: 0xc04546c  jal         func_1151B0
    ctx->pc = 0x113EF4u;
    SET_GPR_U32(ctx, 31, 0x113EFCu);
    ctx->pc = 0x113EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EF4u;
    // 0x113ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151B0u, 0x113EF4u, 0x113EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EFCu;
label_113efc:
    // 0x113efc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x113efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f00: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x113F00u;
    {
        const bool branch_taken_0x113f00 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x113F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F00u;
        // 0x113f04: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f00) {
            ctx->pc = 0x113F48u;
            return;
        }
    }
    ctx->pc = 0x113F08u;
    // 0x113f08: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x113f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x113f0c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x113f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x113f10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113f14: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x113f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x113f18: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x113f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x113f1c: 0x0  nop
    ctx->pc = 0x113f1cu;
    // NOP
    ctx->pc = 0x113f20u;
}
