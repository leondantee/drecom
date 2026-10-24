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

// Function: entry_00291878
// Address: 0x291878 - 0x291890
void entry_00291878_0x291878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291878_0x291878");
#endif

    ctx->pc = 0x291878u;

    // 0x291878: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x29187c: 0x90430009  lbu         $v1, 0x9($v0)
    ctx->pc = 0x29187cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x291880: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x291880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x291884: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x291884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x291888: 0x1440ff2a  bnez        $v0, . + 4 + (-0xD6 << 2)
    ctx->pc = 0x291888u;
    {
        const bool branch_taken_0x291888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x291888) {
            ctx->pc = 0x291534u;
            return;
        }
    }
    ctx->pc = 0x291890u;
}
