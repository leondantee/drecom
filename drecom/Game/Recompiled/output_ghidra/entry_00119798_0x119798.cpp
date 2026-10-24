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

// Function: entry_00119798
// Address: 0x119798 - 0x1197f0
void entry_00119798_0x119798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119798_0x119798");
#endif

    ctx->pc = 0x119798u;

label_119798:
    // 0x119798: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x119798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11979c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x11979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1197a0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1197a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1197a4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1197a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1197a8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1197a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1197ac: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1197acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1197b0: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x1197b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1197b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1197b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1197b8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1197b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1197bc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1197bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1197c0: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1197c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1197c4: 0x35403  sra         $t2, $v1, 16
    ctx->pc = 0x1197c4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1197c8: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x1197c8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1197cc: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1197ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1197d0: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x1197d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1197d4: 0xa4e50002  sh          $a1, 0x2($a3)
    ctx->pc = 0x1197d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x1197d8: 0x55403  sra         $t2, $a1, 16
    ctx->pc = 0x1197d8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1197dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1197DCu;
    {
        const bool branch_taken_0x1197dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1197E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197DCu;
        // 0x1197e0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197dc) {
            ctx->pc = 0x119798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119798;
        }
    }
    ctx->pc = 0x1197E4u;
    // 0x1197e4: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x1197e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1197e8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1197E8u;
    {
        const bool branch_taken_0x1197e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1197e8) {
            ctx->pc = 0x1197ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1197E8u;
            // 0x1197ec: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119828u;
            return;
        }
    }
    ctx->pc = 0x1197F0u;
}
