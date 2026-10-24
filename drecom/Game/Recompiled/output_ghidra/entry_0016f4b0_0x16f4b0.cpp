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

// Function: entry_0016f4b0
// Address: 0x16f4b0 - 0x16f4e8
void entry_0016f4b0_0x16f4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f4b0_0x16f4b0");
#endif

    ctx->pc = 0x16f4b0u;

    // 0x16f4b0: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f4b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f4b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f4b8: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x16f4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x16f4bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16F4BCu;
    {
        const bool branch_taken_0x16f4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f4bc) {
            ctx->pc = 0x16F4E8u;
            return;
        }
    }
    ctx->pc = 0x16F4C4u;
    // 0x16f4c4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x16f4c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x16f4c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x16f4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16f4cc: 0x2841000f  slti        $at, $v0, 0xF
    ctx->pc = 0x16f4ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x16f4d0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F4D0u;
    {
        const bool branch_taken_0x16f4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f4d0) {
            ctx->pc = 0x16F4E8u;
            return;
        }
    }
    ctx->pc = 0x16F4D8u;
    // 0x16f4d8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x16f4d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16f4dc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x16f4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x16f4e0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x16f4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x16f4e4: 0x0  nop
    ctx->pc = 0x16f4e4u;
    // NOP
    ctx->pc = 0x16f4e8u;
}
