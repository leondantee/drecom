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

// Function: entry_0018da64
// Address: 0x18da64 - 0x18da88
void entry_0018da64_0x18da64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018da64_0x18da64");
#endif

    ctx->pc = 0x18da64u;

    // 0x18da64: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x18da64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18da68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18da68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18da6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18da6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18da70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18DA70u;
    {
        const bool branch_taken_0x18da70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da70) {
            ctx->pc = 0x18DA88u;
            return;
        }
    }
    ctx->pc = 0x18DA78u;
    // 0x18da78: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18da7c: 0xfe020a90  sd          $v0, 0xA90($s0)
    ctx->pc = 0x18da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2704), GPR_U64(ctx, 2));
    // 0x18da80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18DA80u;
    {
        const bool branch_taken_0x18da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da80) {
            ctx->pc = 0x18DA90u;
            return;
        }
    }
    ctx->pc = 0x18DA88u;
}
