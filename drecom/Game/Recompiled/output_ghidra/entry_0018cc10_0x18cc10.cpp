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

// Function: entry_0018cc10
// Address: 0x18cc10 - 0x18cc2c
void entry_0018cc10_0x18cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cc10_0x18cc10");
#endif

    ctx->pc = 0x18cc10u;

    // 0x18cc10: 0x9202036f  lbu         $v0, 0x36F($s0)
    ctx->pc = 0x18cc10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 879)));
    // 0x18cc14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cc18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CC18u;
    {
        const bool branch_taken_0x18cc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc18) {
            ctx->pc = 0x18CC2Cu;
            return;
        }
    }
    ctx->pc = 0x18CC20u;
    // 0x18cc20: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cc20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18cc24: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x18cc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x18cc28: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cc28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18cc2cu;
}
