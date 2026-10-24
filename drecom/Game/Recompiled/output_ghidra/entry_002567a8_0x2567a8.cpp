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

// Function: entry_002567a8
// Address: 0x2567a8 - 0x2567d0
void entry_002567a8_0x2567a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002567a8_0x2567a8");
#endif

    ctx->pc = 0x2567a8u;

    // 0x2567a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2567a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2567ac: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2567acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2567b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2567b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2567b4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2567b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2567b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2567B8u;
    {
        const bool branch_taken_0x2567b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2567b8) {
            ctx->pc = 0x2567D0u;
            return;
        }
    }
    ctx->pc = 0x2567C0u;
    // 0x2567c0: 0x2402027c  addiu       $v0, $zero, 0x27C
    ctx->pc = 0x2567c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x2567c4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2567c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2567c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2567C8u;
    {
        const bool branch_taken_0x2567c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2567c8) {
            ctx->pc = 0x2567D8u;
            return;
        }
    }
    ctx->pc = 0x2567D0u;
}
