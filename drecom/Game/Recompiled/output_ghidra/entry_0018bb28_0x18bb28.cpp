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

// Function: entry_0018bb28
// Address: 0x18bb28 - 0x18bb48
void entry_0018bb28_0x18bb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bb28_0x18bb28");
#endif

    ctx->pc = 0x18bb28u;

    // 0x18bb28: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bb2c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x18bb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18bb30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BB30u;
    {
        const bool branch_taken_0x18bb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb30) {
            ctx->pc = 0x18BB48u;
            return;
        }
    }
    ctx->pc = 0x18BB38u;
    // 0x18bb38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18bb3c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x18bb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x18bb40: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x18bb40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x18bb44: 0x0  nop
    ctx->pc = 0x18bb44u;
    // NOP
    ctx->pc = 0x18bb48u;
}
