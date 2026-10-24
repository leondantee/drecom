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

// Function: entry_001125cc
// Address: 0x1125cc - 0x1125e8
void entry_001125cc_0x1125cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001125cc_0x1125cc");
#endif

    ctx->pc = 0x1125ccu;

    // 0x1125cc: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x1125ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x1125d0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1125d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1125d4: 0x6410041  bgez        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x1125D4u;
    {
        const bool branch_taken_0x1125d4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1125D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125D4u;
        // 0x1125d8: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125d4) {
            ctx->pc = 0x1126DCu;
            return;
        }
    }
    ctx->pc = 0x1125DCu;
    // 0x1125dc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1125dcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1125e0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1125E0u;
    {
        const bool branch_taken_0x1125e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125E0u;
        // 0x1125e4: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125e0) {
            ctx->pc = 0x1126CCu;
            return;
        }
    }
    ctx->pc = 0x1125E8u;
}
