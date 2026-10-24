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

// Function: entry_00101674
// Address: 0x101674 - 0x10168c
void entry_00101674_0x101674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101674_0x101674");
#endif

    ctx->pc = 0x101674u;

    // 0x101674: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x101674u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x101678: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x101678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10167c: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x10167cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x101680: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x101680u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x101684: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x101684u;
    {
        const bool branch_taken_0x101684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x101688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101684u;
        // 0x101688: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101684) {
            ctx->pc = 0x101638u;
            return;
        }
    }
    ctx->pc = 0x10168Cu;
}
