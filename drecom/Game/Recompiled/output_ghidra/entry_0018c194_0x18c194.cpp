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

// Function: entry_0018c194
// Address: 0x18c194 - 0x18c1b0
void entry_0018c194_0x18c194(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c194_0x18c194");
#endif

    ctx->pc = 0x18c194u;

    // 0x18c194: 0x9202013e  lbu         $v0, 0x13E($s0)
    ctx->pc = 0x18c194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 318)));
    // 0x18c198: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c19c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C19Cu;
    {
        const bool branch_taken_0x18c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c19c) {
            ctx->pc = 0x18C1B0u;
            return;
        }
    }
    ctx->pc = 0x18C1A4u;
    // 0x18c1a4: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c1a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c1a8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18c1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18c1ac: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c1acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18c1b0u;
}
