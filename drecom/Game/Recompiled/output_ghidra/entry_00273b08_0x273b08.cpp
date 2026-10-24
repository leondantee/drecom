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

// Function: entry_00273b08
// Address: 0x273b08 - 0x273b20
void entry_00273b08_0x273b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273b08_0x273b08");
#endif

    ctx->pc = 0x273b08u;

    // 0x273b08: 0x216182a  slt         $v1, $s0, $s6
    ctx->pc = 0x273b08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x273b0c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x273B0Cu;
    {
        const bool branch_taken_0x273b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b0c) {
            ctx->pc = 0x273AC8u;
            return;
        }
    }
    ctx->pc = 0x273B14u;
    // 0x273b14: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x273b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x273b18: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x273b18u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x273b1c: 0x0  nop
    ctx->pc = 0x273b1cu;
    // NOP
    ctx->pc = 0x273b20u;
}
