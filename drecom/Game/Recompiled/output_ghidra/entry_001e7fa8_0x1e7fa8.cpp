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

// Function: entry_001e7fa8
// Address: 0x1e7fa8 - 0x1e7fd8
void entry_001e7fa8_0x1e7fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7fa8_0x1e7fa8");
#endif

    ctx->pc = 0x1e7fa8u;

    // 0x1e7fa8: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1e7fa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e7fac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e7facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7fb0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1e7fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e7fb4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7FB4u;
    {
        const bool branch_taken_0x1e7fb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e7fb4) {
            ctx->pc = 0x1E7FD8u;
            return;
        }
    }
    ctx->pc = 0x1E7FBCu;
    // 0x1e7fbc: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1e7fbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e7fc0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e7fc4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e7fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e7fc8: 0x90630220  lbu         $v1, 0x220($v1)
    ctx->pc = 0x1e7fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x1e7fcc: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1E7FCCu;
    {
        const bool branch_taken_0x1e7fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fcc) {
            ctx->pc = 0x1E80E8u;
            return;
        }
    }
    ctx->pc = 0x1E7FD4u;
    // 0x1e7fd4: 0x0  nop
    ctx->pc = 0x1e7fd4u;
    // NOP
    ctx->pc = 0x1e7fd8u;
}
