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

// Function: entry_0018c218
// Address: 0x18c218 - 0x18c234
void entry_0018c218_0x18c218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c218_0x18c218");
#endif

    ctx->pc = 0x18c218u;

    // 0x18c218: 0x92020141  lbu         $v0, 0x141($s0)
    ctx->pc = 0x18c218u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 321)));
    // 0x18c21c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c220: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C220u;
    {
        const bool branch_taken_0x18c220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c220) {
            ctx->pc = 0x18C234u;
            return;
        }
    }
    ctx->pc = 0x18C228u;
    // 0x18c228: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c22c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x18c22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x18c230: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c230u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18c234u;
}
