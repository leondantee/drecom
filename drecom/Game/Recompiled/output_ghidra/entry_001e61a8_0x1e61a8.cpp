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

// Function: entry_001e61a8
// Address: 0x1e61a8 - 0x1e61d8
void entry_001e61a8_0x1e61a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e61a8_0x1e61a8");
#endif

    ctx->pc = 0x1e61a8u;

    // 0x1e61a8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1e61a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e61ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e61acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e61b0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e61b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e61b4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E61B4u;
    {
        const bool branch_taken_0x1e61b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e61b4) {
            ctx->pc = 0x1E61D8u;
            return;
        }
    }
    ctx->pc = 0x1E61BCu;
    // 0x1e61bc: 0x9627000c  lhu         $a3, 0xC($s1)
    ctx->pc = 0x1e61bcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e61c0: 0x30e4ffff  andi        $a0, $a3, 0xFFFF
    ctx->pc = 0x1e61c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1e61c4: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x1e61c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1e61c8: 0x906401b0  lbu         $a0, 0x1B0($v1)
    ctx->pc = 0x1e61c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1e61cc: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E61CCu;
    {
        const bool branch_taken_0x1e61cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e61cc) {
            ctx->pc = 0x1E62C8u;
            return;
        }
    }
    ctx->pc = 0x1E61D4u;
    // 0x1e61d4: 0x0  nop
    ctx->pc = 0x1e61d4u;
    // NOP
    ctx->pc = 0x1e61d8u;
}
