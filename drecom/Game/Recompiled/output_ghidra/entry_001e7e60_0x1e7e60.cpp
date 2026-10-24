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

// Function: entry_001e7e60
// Address: 0x1e7e60 - 0x1e7e90
void entry_001e7e60_0x1e7e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7e60_0x1e7e60");
#endif

    ctx->pc = 0x1e7e60u;

    // 0x1e7e60: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1e7e60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e7e64: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e7e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7e68: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e7e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e7e6c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7E6Cu;
    {
        const bool branch_taken_0x1e7e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e7e6c) {
            ctx->pc = 0x1E7E90u;
            return;
        }
    }
    ctx->pc = 0x1E7E74u;
    // 0x1e7e74: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1e7e74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e7e78: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x1e7e78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7e7c: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x1e7e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1e7e80: 0x90850220  lbu         $a1, 0x220($a0)
    ctx->pc = 0x1e7e80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1e7e84: 0x14a00048  bnez        $a1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1E7E84u;
    {
        const bool branch_taken_0x1e7e84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7e84) {
            ctx->pc = 0x1E7FA8u;
            return;
        }
    }
    ctx->pc = 0x1E7E8Cu;
    // 0x1e7e8c: 0x0  nop
    ctx->pc = 0x1e7e8cu;
    // NOP
    ctx->pc = 0x1e7e90u;
}
