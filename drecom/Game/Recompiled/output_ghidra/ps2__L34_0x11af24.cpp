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

// Function: $L34
// Address: 0x11af24 - 0x11af80
void ps2__L34_0x11af24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L34_0x11af24");
#endif

    ctx->pc = 0x11af24u;

label_11af24:
    // 0x11af24: 0x10c0ffde  beqz        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x11AF24u;
    {
        const bool branch_taken_0x11af24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11af24) {
            ctx->pc = 0x11AEA0u;
            return;
        }
    }
    ctx->pc = 0x11AF2Cu;
    // 0x11af2c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x11af2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11af30: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x11af30u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x11af34: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x11af34u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x11af38: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x11af38u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x11af3c: 0x70491c89  pand        $v1, $v0, $t1
    ctx->pc = 0x11af3cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x11af40: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x11af40u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x11af44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11af48: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x11AF48u;
    {
        const bool branch_taken_0x11af48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF48u;
        // 0x11af4c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af48) {
            ctx->pc = 0x11AEA0u;
            return;
        }
    }
    ctx->pc = 0x11AF50u;
    // 0x11af50: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x11af50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x11af54: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x11af54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11af58: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x11AF58u;
    {
        const bool branch_taken_0x11af58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF58u;
        // 0x11af5c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af58) {
            ctx->pc = 0x11AFF8u;
            return;
        }
    }
    ctx->pc = 0x11AF60u;
    // 0x11af60: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x11af60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11af64: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x11af64u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11af68: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x11af68u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x11af6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11af6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11af70: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11AF70u;
    {
        const bool branch_taken_0x11af70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11af70) {
            ctx->pc = 0x11AF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11AF70u;
            // 0x11af74: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11AF24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af24;
        }
    }
    ctx->pc = 0x11AF78u;
    // 0x11af78: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11AF78u;
    {
        const bool branch_taken_0x11af78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF78u;
        // 0x11af7c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af78) {
            ctx->pc = 0x11AFFCu;
            return;
        }
    }
    ctx->pc = 0x11AF80u;
}
