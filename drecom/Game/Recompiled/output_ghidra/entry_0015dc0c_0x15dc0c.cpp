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

// Function: entry_0015dc0c
// Address: 0x15dc0c - 0x15dc34
void entry_0015dc0c_0x15dc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dc0c_0x15dc0c");
#endif

    ctx->pc = 0x15dc0cu;

    // 0x15dc0c: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x15dc0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15dc10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x15dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15dc14: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15dc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15dc18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DC18u;
    {
        const bool branch_taken_0x15dc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dc18) {
            ctx->pc = 0x15DC34u;
            return;
        }
    }
    ctx->pc = 0x15DC20u;
    // 0x15dc20: 0x8e031408  lw          $v1, 0x1408($s0)
    ctx->pc = 0x15dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5128)));
    // 0x15dc24: 0x8e02140c  lw          $v0, 0x140C($s0)
    ctx->pc = 0x15dc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5132)));
    // 0x15dc28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15dc2c: 0xae02140c  sw          $v0, 0x140C($s0)
    ctx->pc = 0x15dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5132), GPR_U32(ctx, 2));
    // 0x15dc30: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15dc30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15dc34u;
}
