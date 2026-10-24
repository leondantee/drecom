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

// Function: $L5
// Address: 0x118a18 - 0x118a4c
void ps2__L5_0x118a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L5_0x118a18");
#endif

    ctx->pc = 0x118a18u;

label_118a18:
    // 0x118a18: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x118a18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118a1c: 0x2cc70020  sltiu       $a3, $a2, 0x20
    ctx->pc = 0x118a1cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x118a20: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x118a20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118a24: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x118a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x118a28: 0x704344c9  pxor        $t0, $v0, $v1
    ctx->pc = 0x118a28u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x118a2c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x118a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x118a30: 0x710753a9  pcpyud      $t2, $t0, $a3
    ctx->pc = 0x118a30u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x118a34: 0x1484825  or          $t1, $t2, $t0
    ctx->pc = 0x118a34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x118a38: 0x49280a  movz        $a1, $v0, $t1
    ctx->pc = 0x118a38u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x118a3c: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x118A3Cu;
    {
        const bool branch_taken_0x118a3c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x118a3c) {
            ctx->pc = 0x118A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118A3Cu;
            // 0x118a40: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118A4Cu;
            return;
        }
    }
    ctx->pc = 0x118A44u;
    // 0x118a44: 0x10e0fff4  beqz        $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x118A44u;
    {
        const bool branch_taken_0x118a44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x118A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A44u;
        // 0x118a48: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118a44) {
            ctx->pc = 0x118A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118a18;
        }
    }
    ctx->pc = 0x118A4Cu;
}
