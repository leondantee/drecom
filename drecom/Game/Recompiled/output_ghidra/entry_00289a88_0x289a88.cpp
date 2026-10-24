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

// Function: entry_00289a88
// Address: 0x289a88 - 0x289aa0
void entry_00289a88_0x289a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289a88_0x289a88");
#endif

    ctx->pc = 0x289a88u;

    // 0x289a88: 0x92466624  lbu         $a2, 0x6624($s2)
    ctx->pc = 0x289a88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26148)));
    // 0x289a8c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x289a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x289a90: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x289a90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289a94: 0x14d30023  bne         $a2, $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x289A94u;
    {
        const bool branch_taken_0x289a94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 19));
        if (branch_taken_0x289a94) {
            ctx->pc = 0x289B24u;
            return;
        }
    }
    ctx->pc = 0x289A9Cu;
    // 0x289a9c: 0x0  nop
    ctx->pc = 0x289a9cu;
    // NOP
    ctx->pc = 0x289aa0u;
}
