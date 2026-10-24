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

// Function: entry_00371708
// Address: 0x371708 - 0x37173c
void entry_00371708_0x371708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371708_0x371708");
#endif

    ctx->pc = 0x371708u;

    // 0x371708: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x371708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37170c: 0x1623000b  bne         $s1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x37170Cu;
    {
        const bool branch_taken_0x37170c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x37170c) {
            ctx->pc = 0x37173Cu;
            return;
        }
    }
    ctx->pc = 0x371714u;
    // 0x371714: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x371714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371718: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x371718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37171c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x37171cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x371720: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371724: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x371724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x371728: 0x24060a02  addiu       $a2, $zero, 0xA02
    ctx->pc = 0x371728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2562));
    // 0x37172c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x37172cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371730: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x371734: 0xc0965d0  jal         func_259740
    ctx->pc = 0x371734u;
    SET_GPR_U32(ctx, 31, 0x37173Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x371734u, 0x37173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37173Cu;
}
