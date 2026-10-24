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

// Function: entry_00114334
// Address: 0x114334 - 0x11436c
void entry_00114334_0x114334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114334_0x114334");
#endif

    ctx->pc = 0x114334u;

    // 0x114334: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x114334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x114338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x114338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11433c: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x11433cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x114340: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x114340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x114344: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x114344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x114348: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x114348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11434c: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x11434cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x114350: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x114350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x114354: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x114354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x114358: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x114358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11435c: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x11435cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x114360: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x114360u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x114364: 0x3e00008  jr          $ra
    ctx->pc = 0x114364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114364u;
        // 0x114368: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11436Cu;
}
