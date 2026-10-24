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

// Function: entry_00217988
// Address: 0x217988 - 0x21799c
void entry_00217988_0x217988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217988_0x217988");
#endif

    ctx->pc = 0x217988u;

    // 0x217988: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217988u;
    {
        const bool branch_taken_0x217988 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x21798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217988u;
        // 0x21798c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217988) {
            ctx->pc = 0x21799Cu;
            return;
        }
    }
    ctx->pc = 0x217990u;
    // 0x217990: 0x9622ccc0  lhu         $v0, -0x3340($s1)
    ctx->pc = 0x217990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294954176)));
    // 0x217994: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x217994u;
    {
        const bool branch_taken_0x217994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217994u;
        // 0x217998: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217994) {
            ctx->pc = 0x2179B4u;
            return;
        }
    }
    ctx->pc = 0x21799Cu;
}
