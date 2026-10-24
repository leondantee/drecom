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

// Function: entry_0011269c
// Address: 0x11269c - 0x1126cc
void entry_0011269c_0x11269c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011269c_0x11269c");
#endif

    switch (ctx->pc) {
        case 0x1126b4u: goto label_1126b4;
        default: break;
    }

    ctx->pc = 0x11269cu;

    // 0x11269c: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x11269cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x1126a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1126a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126a4: 0x2529d2d8  addiu       $t1, $t1, -0x2D28
    ctx->pc = 0x1126a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955736));
    // 0x1126a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1126a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126ac: 0xc044e46  jal         func_113918
    ctx->pc = 0x1126ACu;
    SET_GPR_U32(ctx, 31, 0x1126B4u);
    ctx->pc = 0x1126B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1126ACu;
    // 0x1126b0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113918u, 0x1126ACu, 0x1126B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1126B4u;
label_1126b4:
    // 0x1126b4: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1126B4u;
    {
        const bool branch_taken_0x1126b4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1126B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126B4u;
        // 0x1126b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126b4) {
            ctx->pc = 0x1126DCu;
            return;
        }
    }
    ctx->pc = 0x1126BCu;
    // 0x1126bc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1126bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1126c0: 0x51023  negu        $v0, $a1
    ctx->pc = 0x1126c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1126c4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1126c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1126c8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1126c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    ctx->pc = 0x1126ccu;
}
