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

// Function: entry_001214b8
// Address: 0x1214b8 - 0x1214d4
void entry_001214b8_0x1214b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001214b8_0x1214b8");
#endif

    ctx->pc = 0x1214b8u;

    // 0x1214b8: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x1214b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x1214bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1214BCu;
    {
        const bool branch_taken_0x1214bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1214bc) {
            ctx->pc = 0x1214D4u;
            return;
        }
    }
    ctx->pc = 0x1214C4u;
    // 0x1214c4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1214c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1214c8: 0x848511f2  lh          $a1, 0x11F2($a0)
    ctx->pc = 0x1214c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4594)));
    // 0x1214cc: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1214ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1214d0: 0xa48311f2  sh          $v1, 0x11F2($a0)
    ctx->pc = 0x1214d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4594), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1214d4u;
}
