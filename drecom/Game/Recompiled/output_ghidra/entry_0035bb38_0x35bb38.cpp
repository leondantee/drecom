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

// Function: entry_0035bb38
// Address: 0x35bb38 - 0x35bb5c
void entry_0035bb38_0x35bb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bb38_0x35bb38");
#endif

    ctx->pc = 0x35bb38u;

    // 0x35bb38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bb3c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35bb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35bb40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35bb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35bb44: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x35bb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x35bb48: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x35BB48u;
    {
        const bool branch_taken_0x35bb48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bb48) {
            ctx->pc = 0x35BC30u;
            return;
        }
    }
    ctx->pc = 0x35BB50u;
    // 0x35bb50: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x35bb50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35bb54: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x35BB54u;
    {
        const bool branch_taken_0x35bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bb54) {
            ctx->pc = 0x35BC20u;
            return;
        }
    }
    ctx->pc = 0x35BB5Cu;
}
