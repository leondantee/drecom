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

// Function: entry_0033e680
// Address: 0x33e680 - 0x33e6c0
void entry_0033e680_0x33e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e680_0x33e680");
#endif

    ctx->pc = 0x33e680u;

    // 0x33e680: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x33e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33e684: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x33e684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x33e688: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x33e688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x33e68c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x33e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x33e690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e694: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x33e694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x33e698: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e69c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x33e69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e6a0: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x33e6a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x33e6a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33E6A4u;
    {
        const bool branch_taken_0x33e6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e6a4) {
            ctx->pc = 0x33E6C0u;
            return;
        }
    }
    ctx->pc = 0x33E6ACu;
    // 0x33e6ac: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x33e6acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x33e6b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33e6b4: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x33e6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x33e6b8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x33E6B8u;
    {
        const bool branch_taken_0x33e6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e6b8) {
            ctx->pc = 0x33E750u;
            return;
        }
    }
    ctx->pc = 0x33E6C0u;
}
