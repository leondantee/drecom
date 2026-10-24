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

// Function: $L10
// Address: 0x118980 - 0x1189c0
void ps2__L10_0x118980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L10_0x118980");
#endif

    ctx->pc = 0x118980u;

label_118980:
    // 0x118980: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x118980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x118984: 0x704914c9  pxor        $v0, $v0, $t1
    ctx->pc = 0x118984u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x118988: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x118988u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x11898c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x11898cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x118990: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x118990u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x118994: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x118994u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x118998: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x118998u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x11899c: 0x70491ba9  pcpyud      $v1, $v0, $t1
    ctx->pc = 0x11899cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x1189a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1189a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1189a4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1189A4u;
    {
        const bool branch_taken_0x1189a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1189a4) {
            ctx->pc = 0x1189A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1189A4u;
            // 0x1189a8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1189C0u;
            return;
        }
    }
    ctx->pc = 0x1189ACu;
    // 0x1189ac: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1189acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1189b0: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x1189b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1189b4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1189B4u;
    {
        const bool branch_taken_0x1189b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1189B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1189B4u;
        // 0x1189b8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1189b4) {
            ctx->pc = 0x118980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118980;
        }
    }
    ctx->pc = 0x1189BCu;
    // 0x1189bc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1189bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1189c0u;
}
