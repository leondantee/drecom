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

// Function: entry_00119358
// Address: 0x119358 - 0x1193ac
void entry_00119358_0x119358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119358_0x119358");
#endif

    ctx->pc = 0x119358u;

label_119358:
    // 0x119358: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x119358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x11935c: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x11935cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x119360: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x119360u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x119364: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x119364u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x119368: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x119368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x11936c: 0x131282b  sltu        $a1, $t1, $s1
    ctx->pc = 0x11936cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x119370: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x119370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x119374: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x119374u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x119378: 0x708a2018  mult1       $a0, $a0, $t2
    ctx->pc = 0x119378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11937c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119380: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x119380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x119384: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x119384u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x119388: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x119388u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x11938c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x11938cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x119390: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x119390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x119394: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x119394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x119398: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x119398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11939c: 0x8b3821  addu        $a3, $a0, $t3
    ctx->pc = 0x11939cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1193a0: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1193A0u;
    {
        const bool branch_taken_0x1193a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1193A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193A0u;
        // 0x1193a4: 0x75c02  srl         $t3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193a0) {
            ctx->pc = 0x119358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119358;
        }
    }
    ctx->pc = 0x1193A8u;
    // 0x1193a8: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1193a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x1193acu;
}
