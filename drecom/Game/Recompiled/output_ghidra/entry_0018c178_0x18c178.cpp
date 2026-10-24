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

// Function: entry_0018c178
// Address: 0x18c178 - 0x18c194
void entry_0018c178_0x18c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c178_0x18c178");
#endif

    ctx->pc = 0x18c178u;

    // 0x18c178: 0x9202013d  lbu         $v0, 0x13D($s0)
    ctx->pc = 0x18c178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 317)));
    // 0x18c17c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C180u;
    {
        const bool branch_taken_0x18c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c180) {
            ctx->pc = 0x18C194u;
            return;
        }
    }
    ctx->pc = 0x18C188u;
    // 0x18c188: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c188u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c18c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x18c18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x18c190: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18c194u;
}
