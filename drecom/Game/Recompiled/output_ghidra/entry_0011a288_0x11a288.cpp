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

// Function: entry_0011a288
// Address: 0x11a288 - 0x11a2a0
void entry_0011a288_0x11a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a288_0x11a288");
#endif

    ctx->pc = 0x11a288u;

    // 0x11a288: 0x2534021  addu        $t0, $s2, $s3
    ctx->pc = 0x11a288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x11a28c: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x11a28cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11a290: 0x2333823  subu        $a3, $s1, $s3
    ctx->pc = 0x11a290u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x11a294: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x11a294u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x11a298: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11A298u;
    {
        const bool branch_taken_0x11a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A298u;
        // 0x11a29c: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a298) {
            ctx->pc = 0x11A320u;
            return;
        }
    }
    ctx->pc = 0x11A2A0u;
}
