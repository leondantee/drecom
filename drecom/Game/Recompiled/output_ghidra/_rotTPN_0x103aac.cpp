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

// Function: _rotTPN
// Address: 0x103aac - 0x103ac8
void _rotTPN_0x103aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_rotTPN_0x103aac");
#endif

    ctx->pc = 0x103aacu;

    // 0x103aac: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x103aacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x103ab0: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x103ab0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x103ab4: 0x20c60010  addi        $a2, $a2, 0x10
    ctx->pc = 0x103ab4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x103ab8: 0x1407fff1  bne         $zero, $a3, . + 4 + (-0xF << 2)
    ctx->pc = 0x103AB8u;
    {
        const bool branch_taken_0x103ab8 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 7));
        ctx->pc = 0x103ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103AB8u;
        // 0x103abc: 0x20840010  addi        $a0, $a0, 0x10 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 4), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ab8) {
            ctx->pc = 0x103A80u;
            return;
        }
    }
    ctx->pc = 0x103AC0u;
    // 0x103ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x103AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103AC8u;
}
