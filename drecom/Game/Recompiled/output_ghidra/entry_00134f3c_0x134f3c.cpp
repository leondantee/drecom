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

// Function: entry_00134f3c
// Address: 0x134f3c - 0x134f60
void entry_00134f3c_0x134f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134f3c_0x134f3c");
#endif

    ctx->pc = 0x134f3cu;

    // 0x134f3c: 0x9203009d  lbu         $v1, 0x9D($s0)
    ctx->pc = 0x134f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 157)));
    // 0x134f40: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x134f40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x134f44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134f48: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x134F48u;
    {
        const bool branch_taken_0x134f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134f48) {
            ctx->pc = 0x134F7Cu;
            return;
        }
    }
    ctx->pc = 0x134F50u;
    // 0x134f50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134F50u;
    {
        const bool branch_taken_0x134f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134f50) {
            ctx->pc = 0x134F60u;
            return;
        }
    }
    ctx->pc = 0x134F58u;
    // 0x134f58: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x134F58u;
    {
        const bool branch_taken_0x134f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134f58) {
            ctx->pc = 0x135038u;
            return;
        }
    }
    ctx->pc = 0x134F60u;
}
