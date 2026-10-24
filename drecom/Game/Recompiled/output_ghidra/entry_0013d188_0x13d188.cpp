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

// Function: entry_0013d188
// Address: 0x13d188 - 0x13d1a4
void entry_0013d188_0x13d188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d188_0x13d188");
#endif

    ctx->pc = 0x13d188u;

    // 0x13d188: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d18c: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x13d18cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x13d190: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x13d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x13d194: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D194u;
    {
        const bool branch_taken_0x13d194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d194) {
            ctx->pc = 0x13D1A4u;
            return;
        }
    }
    ctx->pc = 0x13D19Cu;
    // 0x13d19c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13d1a0: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x13d1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13d1a4u;
}
