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

// Function: entry_0018cd9c
// Address: 0x18cd9c - 0x18cdcc
void entry_0018cd9c_0x18cd9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd9c_0x18cd9c");
#endif

    ctx->pc = 0x18cd9cu;

    // 0x18cd9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cda0: 0x94420340  lhu         $v0, 0x340($v0)
    ctx->pc = 0x18cda0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 832)));
    // 0x18cda4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18cda8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x18cda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x18cdac: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18CDACu;
    {
        const bool branch_taken_0x18cdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cdac) {
            ctx->pc = 0x18CE38u;
            return;
        }
    }
    ctx->pc = 0x18CDB4u;
    // 0x18cdb4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x18cdb4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18cdb8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x18cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x18cdbc: 0x8c420330  lw          $v0, 0x330($v0)
    ctx->pc = 0x18cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x18cdc0: 0x8c501214  lw          $s0, 0x1214($v0)
    ctx->pc = 0x18cdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4628)));
    // 0x18cdc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18CDC4u;
    {
        const bool branch_taken_0x18cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cdc4) {
            ctx->pc = 0x18CDE8u;
            return;
        }
    }
    ctx->pc = 0x18CDCCu;
}
