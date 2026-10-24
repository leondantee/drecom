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

// Function: entry_00117fdc
// Address: 0x117fdc - 0x11800c
void entry_00117fdc_0x117fdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117fdc_0x117fdc");
#endif

    ctx->pc = 0x117fdcu;

    // 0x117fdc: 0x3c1e0038  lui         $fp, 0x38
    ctx->pc = 0x117fdcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)56 << 16));
    // 0x117fe0: 0x8fc24d58  lw          $v0, 0x4D58($fp)
    ctx->pc = 0x117fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x384D58u));
    // 0x117fe4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x117fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x117fe8: 0x16350008  bne         $s1, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x117FE8u;
    {
        const bool branch_taken_0x117fe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x117FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FE8u;
        // 0x117fec: 0xafc34d58  sw          $v1, 0x4D58($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 19800), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fe8) {
            ctx->pc = 0x11800Cu;
            return;
        }
    }
    ctx->pc = 0x117FF0u;
    // 0x117ff0: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x117ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x117ff4: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x117ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x117ff8: 0x24a54928  addiu       $a1, $a1, 0x4928
    ctx->pc = 0x117ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18728));
    // 0x117ffc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x117ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x118000: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x118000u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x384930u));
    // 0x118004: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x118004u;
    {
        const bool branch_taken_0x118004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118004u;
        // 0x118008: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118004) {
            ctx->pc = 0x118104u;
            return;
        }
    }
    ctx->pc = 0x11800Cu;
}
