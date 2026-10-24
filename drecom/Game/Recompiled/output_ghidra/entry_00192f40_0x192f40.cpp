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

// Function: entry_00192f40
// Address: 0x192f40 - 0x192f7c
void entry_00192f40_0x192f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192f40_0x192f40");
#endif

    ctx->pc = 0x192f40u;

    // 0x192f40: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x192f40u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192f44: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x192f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x192f48: 0xfea60000  sd          $a2, 0x0($s5)
    ctx->pc = 0x192f48u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 6));
    // 0x192f4c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x192f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x192f50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192f54: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x192f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x192f58: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x192f58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x192f5c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x192f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x192f60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x192f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x192f64: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x192F64u;
    {
        const bool branch_taken_0x192f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f64) {
            ctx->pc = 0x192F7Cu;
            return;
        }
    }
    ctx->pc = 0x192F6Cu;
    // 0x192f6c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x192f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192f70: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x192f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x192f74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x192F74u;
    {
        const bool branch_taken_0x192f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192f74) {
            ctx->pc = 0x192F80u;
            return;
        }
    }
    ctx->pc = 0x192F7Cu;
}
