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

// Function: entry_0018c234
// Address: 0x18c234 - 0x18c258
void entry_0018c234_0x18c234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c234_0x18c234");
#endif

    ctx->pc = 0x18c234u;

    // 0x18c234: 0x92020142  lbu         $v0, 0x142($s0)
    ctx->pc = 0x18c234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 322)));
    // 0x18c238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c23c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18C23Cu;
    {
        const bool branch_taken_0x18c23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c23c) {
            ctx->pc = 0x18C260u;
            return;
        }
    }
    ctx->pc = 0x18C244u;
    // 0x18c244: 0x96020118  lhu         $v0, 0x118($s0)
    ctx->pc = 0x18c244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x18c248: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x18c248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x18c24c: 0xa6020118  sh          $v0, 0x118($s0)
    ctx->pc = 0x18c24cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C250u;
    {
        const bool branch_taken_0x18c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c250) {
            ctx->pc = 0x18C260u;
            return;
        }
    }
    ctx->pc = 0x18C258u;
}
