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

// Function: entry_0014ddc8
// Address: 0x14ddc8 - 0x14ddf0
void entry_0014ddc8_0x14ddc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014ddc8_0x14ddc8");
#endif

    ctx->pc = 0x14ddc8u;

    // 0x14ddc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14ddc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14ddcc: 0x9022ef66  lbu         $v0, -0x109A($at)
    ctx->pc = 0x14ddccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEF66u));
    // 0x14ddd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14ddd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14ddd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ddd8: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14DDD8u;
    {
        const bool branch_taken_0x14ddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14ddd8) {
            ctx->pc = 0x14DE38u;
            return;
        }
    }
    ctx->pc = 0x14DDE0u;
    // 0x14dde0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DDE0u;
    {
        const bool branch_taken_0x14dde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dde0) {
            ctx->pc = 0x14DDF0u;
            return;
        }
    }
    ctx->pc = 0x14DDE8u;
    // 0x14dde8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14DDE8u;
    {
        const bool branch_taken_0x14dde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14dde8) {
            ctx->pc = 0x14DE80u;
            return;
        }
    }
    ctx->pc = 0x14DDF0u;
}
