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

// Function: entry_001b32e0
// Address: 0x1b32e0 - 0x1b331c
void entry_001b32e0_0x1b32e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b32e0_0x1b32e0");
#endif

    ctx->pc = 0x1b32e0u;

    // 0x1b32e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b32e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b32e4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b32e8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b32e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b32ec: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B32ECu;
    {
        const bool branch_taken_0x1b32ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b32ec) {
            ctx->pc = 0x1B3338u;
            return;
        }
    }
    ctx->pc = 0x1B32F4u;
    // 0x1b32f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1b32f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1b32f8: 0x9022ef66  lbu         $v0, -0x109A($at)
    ctx->pc = 0x1b32f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEF66u));
    // 0x1b32fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b32fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b3300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3304: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3304u;
    {
        const bool branch_taken_0x1b3304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3304) {
            ctx->pc = 0x1B332Cu;
            return;
        }
    }
    ctx->pc = 0x1B330Cu;
    // 0x1b330c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B330Cu;
    {
        const bool branch_taken_0x1b330c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b330c) {
            ctx->pc = 0x1B331Cu;
            return;
        }
    }
    ctx->pc = 0x1B3314u;
    // 0x1b3314: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3314u;
    {
        const bool branch_taken_0x1b3314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3314) {
            ctx->pc = 0x1B3338u;
            return;
        }
    }
    ctx->pc = 0x1B331Cu;
}
