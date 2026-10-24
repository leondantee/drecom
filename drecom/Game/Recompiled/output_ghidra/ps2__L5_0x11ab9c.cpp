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

// Function: $L5
// Address: 0x11ab9c - 0x11abc4
void ps2__L5_0x11ab9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L5_0x11ab9c");
#endif

    ctx->pc = 0x11ab9cu;

    // 0x11ab9c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x11ab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x11aba0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x11aba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11aba4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x11aba4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11aba8: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x11aba8u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11abac: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x11abacu;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x11abb0: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x11abb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x11abb4: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11ABB4u;
    {
        const bool branch_taken_0x11abb4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x11abb4) {
            ctx->pc = 0x11ABB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11ABB4u;
            // 0x11abb8: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AB78u;
            return;
        }
    }
    ctx->pc = 0x11ABBCu;
    // 0x11abbc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11ABBCu;
    {
        const bool branch_taken_0x11abbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABBCu;
        // 0x11abc0: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11abbc) {
            ctx->pc = 0x11AC30u;
            return;
        }
    }
    ctx->pc = 0x11ABC4u;
}
