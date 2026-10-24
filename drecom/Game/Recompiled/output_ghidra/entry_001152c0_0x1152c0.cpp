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

// Function: entry_001152c0
// Address: 0x1152c0 - 0x1152d4
void entry_001152c0_0x1152c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001152c0_0x1152c0");
#endif

    switch (ctx->pc) {
        case 0x1152ccu: goto label_1152cc;
        default: break;
    }

    ctx->pc = 0x1152c0u;

    // 0x1152c0: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1152c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1152c4: 0xc0453da  jal         func_114F68
    ctx->pc = 0x1152C4u;
    SET_GPR_U32(ctx, 31, 0x1152CCu);
    ctx->pc = 0x1152C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1152C4u;
    // 0x1152c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x114F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F68u, 0x1152C4u, 0x1152CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1152CCu;
label_1152cc:
    // 0x1152cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1152CCu;
    {
        const bool branch_taken_0x1152cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152CCu;
        // 0x1152d0: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152cc) {
            ctx->pc = 0x115300u;
            return;
        }
    }
    ctx->pc = 0x1152D4u;
}
