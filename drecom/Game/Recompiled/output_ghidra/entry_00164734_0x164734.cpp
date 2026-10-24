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

// Function: entry_00164734
// Address: 0x164734 - 0x164750
void entry_00164734_0x164734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164734_0x164734");
#endif

    ctx->pc = 0x164734u;

    // 0x164734: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x164734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x164738: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x164738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x16473c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x16473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x164740: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x164740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164744: 0xfe030038  sd          $v1, 0x38($s0)
    ctx->pc = 0x164744u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 3));
    // 0x164748: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x164748u;
    {
        const bool branch_taken_0x164748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164748) {
            ctx->pc = 0x164764u;
            return;
        }
    }
    ctx->pc = 0x164750u;
}
