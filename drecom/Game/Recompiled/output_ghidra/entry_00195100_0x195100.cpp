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

// Function: entry_00195100
// Address: 0x195100 - 0x19513c
void entry_00195100_0x195100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195100_0x195100");
#endif

    ctx->pc = 0x195100u;

    // 0x195100: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x195100u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x195104: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x195104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x195108: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x195108u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x19510c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x19510cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x195110: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x195110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195114: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x195114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x195118: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x195118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19511c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x19511cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x195120: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x195120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195124: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195124u;
    {
        const bool branch_taken_0x195124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x195124) {
            ctx->pc = 0x19513Cu;
            return;
        }
    }
    ctx->pc = 0x19512Cu;
    // 0x19512c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19512cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x195130: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x195130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x195134: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x195134u;
    {
        const bool branch_taken_0x195134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195134) {
            ctx->pc = 0x195140u;
            return;
        }
    }
    ctx->pc = 0x19513Cu;
}
