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

// Function: entry_001138e0
// Address: 0x1138e0 - 0x113918
void entry_001138e0_0x1138e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001138e0_0x1138e0");
#endif

    ctx->pc = 0x1138e0u;

    // 0x1138e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1138e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1138e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1138e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1138e8: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x1138e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x1138ec: 0x460d60c2  mul.s       $f3, $f12, $f13
    ctx->pc = 0x1138ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
    // 0x1138f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1138f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1138f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1138f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1138f8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x1138f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1138fc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1138fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x113900: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x113900u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x113904: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x113904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x113908: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x113908u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x11390c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x11390cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x113910: 0x3e00008  jr          $ra
    ctx->pc = 0x113910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113910u;
        // 0x113914: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113918u;
}
