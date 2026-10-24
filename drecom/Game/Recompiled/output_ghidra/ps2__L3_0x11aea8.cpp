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

// Function: $L3
// Address: 0x11aea8 - 0x11af24
void ps2__L3_0x11aea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L3_0x11aea8");
#endif

    ctx->pc = 0x11aea8u;

    // 0x11aea8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x11aea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x11aeac: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x11AEACu;
    {
        const bool branch_taken_0x11aeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEACu;
        // 0x11aeb0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aeac) {
            ctx->pc = 0x11B004u;
            return;
        }
    }
    ctx->pc = 0x11AEB4u;
    // 0x11aeb4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x11aeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x11aeb8: 0x2cc70010  sltiu       $a3, $a2, 0x10
    ctx->pc = 0x11aeb8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x11aebc: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x11aebcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x11aec0: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x11aec0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x11aec4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x11aec4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x11aec8: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x11aec8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x11aecc: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x11aeccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x11aed0: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x11aed0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x11aed4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x11aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x11aed8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11AED8u;
    {
        const bool branch_taken_0x11aed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AED8u;
        // 0x11aedc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aed8) {
            ctx->pc = 0x11AF80u;
            return;
        }
    }
    ctx->pc = 0x11AEE0u;
    // 0x11aee0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x11aee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11aee4: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x11aee4u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x11aee8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x11aee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11aeec: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x11aeecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x11aef0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x11aef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x11aef4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x11aef4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x11aef8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x11aef8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x11aefc: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x11aefcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x11af00: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x11af00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x11af04: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x11af04u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11af08: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x11af08u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x11af0c: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x11af0cu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x11af10: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x11af10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11af14: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x11af14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11af18: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x11AF18u;
    {
        const bool branch_taken_0x11af18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF18u;
        // 0x11af1c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af18) {
            ctx->pc = 0x11B004u;
            return;
        }
    }
    ctx->pc = 0x11AF20u;
    // 0x11af20: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x11af20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    ctx->pc = 0x11af24u;
}
