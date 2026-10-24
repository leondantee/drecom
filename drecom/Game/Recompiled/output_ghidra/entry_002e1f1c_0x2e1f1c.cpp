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

// Function: entry_002e1f1c
// Address: 0x2e1f1c - 0x2e1f40
void entry_002e1f1c_0x2e1f1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1f1c_0x2e1f1c");
#endif

    ctx->pc = 0x2e1f1cu;

    // 0x2e1f1c: 0x920300d3  lbu         $v1, 0xD3($s0)
    ctx->pc = 0x2e1f1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 211)));
    // 0x2e1f20: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e1f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1f24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1f28: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x2E1F28u;
    {
        const bool branch_taken_0x2e1f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e1f28) {
            ctx->pc = 0x2E2094u;
            return;
        }
    }
    ctx->pc = 0x2E1F30u;
    // 0x2e1f30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1F30u;
    {
        const bool branch_taken_0x2e1f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f30) {
            ctx->pc = 0x2E1F40u;
            return;
        }
    }
    ctx->pc = 0x2E1F38u;
    // 0x2e1f38: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x2E1F38u;
    {
        const bool branch_taken_0x2e1f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f38) {
            ctx->pc = 0x2E242Cu;
            return;
        }
    }
    ctx->pc = 0x2E1F40u;
}
