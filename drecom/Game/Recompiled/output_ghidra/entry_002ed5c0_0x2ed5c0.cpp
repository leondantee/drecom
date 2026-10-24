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

// Function: entry_002ed5c0
// Address: 0x2ed5c0 - 0x2ed5e4
void entry_002ed5c0_0x2ed5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed5c0_0x2ed5c0");
#endif

    ctx->pc = 0x2ed5c0u;

    // 0x2ed5c0: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x2ed5c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2ed5c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed5c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED5C8u;
    {
        const bool branch_taken_0x2ed5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed5c8) {
            ctx->pc = 0x2ED5E4u;
            return;
        }
    }
    ctx->pc = 0x2ED5D0u;
    // 0x2ed5d0: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x2ed5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2ed5d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ed5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ed5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed5dc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED5DCu;
    {
        const bool branch_taken_0x2ed5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ed5dc) {
            ctx->pc = 0x2ED5F0u;
            return;
        }
    }
    ctx->pc = 0x2ED5E4u;
}
