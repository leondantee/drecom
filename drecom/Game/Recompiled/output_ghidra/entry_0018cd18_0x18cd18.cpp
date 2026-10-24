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

// Function: entry_0018cd18
// Address: 0x18cd18 - 0x18cd48
void entry_0018cd18_0x18cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd18_0x18cd18");
#endif

    ctx->pc = 0x18cd18u;

    // 0x18cd18: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x18cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cd1c: 0x8c740350  lw          $s4, 0x350($v1)
    ctx->pc = 0x18cd1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 848)));
    // 0x18cd20: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cd24: 0x8c420350  lw          $v0, 0x350($v0)
    ctx->pc = 0x18cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 848)));
    // 0x18cd28: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x18cd28u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18cd2c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x18cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18cd30: 0x16830005  bne         $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CD30u;
    {
        const bool branch_taken_0x18cd30 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x18cd30) {
            ctx->pc = 0x18CD48u;
            return;
        }
    }
    ctx->pc = 0x18CD38u;
    // 0x18cd38: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18cd3c: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18cd40: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x18CD40u;
    {
        const bool branch_taken_0x18cd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd40) {
            ctx->pc = 0x18D2F0u;
            return;
        }
    }
    ctx->pc = 0x18CD48u;
}
