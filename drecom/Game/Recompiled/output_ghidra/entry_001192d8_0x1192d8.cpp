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

// Function: entry_001192d8
// Address: 0x1192d8 - 0x119334
void entry_001192d8_0x1192d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001192d8_0x1192d8");
#endif

    ctx->pc = 0x1192d8u;

label_1192d8:
    // 0x1192d8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1192d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1192dc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1192dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1192e0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1192e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1192e4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1192e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1192e8: 0x131302b  sltu        $a2, $t1, $s1
    ctx->pc = 0x1192e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1192ec: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x1192ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1192f0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1192f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1192f4: 0x706a1818  mult1       $v1, $v1, $t2
    ctx->pc = 0x1192f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1192f8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1192f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1192fc: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1192fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x119300: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x119300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x119304: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x119304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x119308: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x119308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11930c: 0x25c02  srl         $t3, $v0, 16
    ctx->pc = 0x11930cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x119310: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x119310u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x119314: 0x6b3821  addu        $a3, $v1, $t3
    ctx->pc = 0x119314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x119318: 0xa5070002  sh          $a3, 0x2($t0)
    ctx->pc = 0x119318u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x11931c: 0x75c02  srl         $t3, $a3, 16
    ctx->pc = 0x11931cu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x119320: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x119320u;
    {
        const bool branch_taken_0x119320 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x119324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119320u;
        // 0x119324: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119320) {
            ctx->pc = 0x1192D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1192d8;
        }
    }
    ctx->pc = 0x119328u;
    // 0x119328: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x119328u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x11932c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11932Cu;
    {
        const bool branch_taken_0x11932c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11932Cu;
        // 0x119330: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11932c) {
            ctx->pc = 0x11933Cu;
            return;
        }
    }
    ctx->pc = 0x119334u;
}
