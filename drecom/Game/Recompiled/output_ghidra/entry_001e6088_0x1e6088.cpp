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

// Function: entry_001e6088
// Address: 0x1e6088 - 0x1e60b8
void entry_001e6088_0x1e6088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6088_0x1e6088");
#endif

    ctx->pc = 0x1e6088u;

    // 0x1e6088: 0x9624000a  lhu         $a0, 0xA($s1)
    ctx->pc = 0x1e6088u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e608c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1e608cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1e6090: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1e6090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e6094: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E6094u;
    {
        const bool branch_taken_0x1e6094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1e6094) {
            ctx->pc = 0x1E60B8u;
            return;
        }
    }
    ctx->pc = 0x1E609Cu;
    // 0x1e609c: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x1e609cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x1e60a0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e60a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e60a4: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x1e60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1e60a8: 0x90a301b0  lbu         $v1, 0x1B0($a1)
    ctx->pc = 0x1e60a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x1e60ac: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E60ACu;
    {
        const bool branch_taken_0x1e60ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e60ac) {
            ctx->pc = 0x1E61A8u;
            return;
        }
    }
    ctx->pc = 0x1E60B4u;
    // 0x1e60b4: 0x0  nop
    ctx->pc = 0x1e60b4u;
    // NOP
    ctx->pc = 0x1e60b8u;
}
