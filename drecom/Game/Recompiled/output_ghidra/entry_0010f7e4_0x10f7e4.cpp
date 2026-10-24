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

// Function: entry_0010f7e4
// Address: 0x10f7e4 - 0x10f814
void entry_0010f7e4_0x10f7e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f7e4_0x10f7e4");
#endif

    switch (ctx->pc) {
        case 0x10f800u: goto label_10f800;
        default: break;
    }

    ctx->pc = 0x10f7e4u;

    // 0x10f7e4: 0x26705110  addiu       $s0, $s3, 0x5110
    ctx->pc = 0x10f7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 20752));
    // 0x10f7e8: 0xa67e5110  sh          $fp, 0x5110($s3)
    ctx->pc = 0x10f7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20752), (uint16_t)GPR_U32(ctx, 30));
    // 0x10f7ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10f7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f7f0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x10f7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f7f4: 0xa6150002  sh          $s5, 0x2($s0)
    ctx->pc = 0x10f7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 21));
    // 0x10f7f8: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x10F7F8u;
    SET_GPR_U32(ctx, 31, 0x10F800u);
    ctx->pc = 0x10F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F7F8u;
    // 0x10f7fc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x10F800u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F800u) { return; }
    ctx->pc = 0x10F800u;
label_10f800:
    // 0x10f800: 0x8e4345a8  lw          $v1, 0x45A8($s2)
    ctx->pc = 0x10f800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17832)));
    // 0x10f804: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F804u;
    {
        const bool branch_taken_0x10f804 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F804u;
        // 0x10f808: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f804) {
            ctx->pc = 0x10F814u;
            return;
        }
    }
    ctx->pc = 0x10F80Cu;
    // 0x10f80c: 0xc046760  jal         func_119D80
    ctx->pc = 0x10F80Cu;
    SET_GPR_U32(ctx, 31, 0x10F814u);
    ctx->pc = 0x10F810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F80Cu;
    // 0x10f810: 0x2484ced0  addiu       $a0, $a0, -0x3130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10F814u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F814u) { return; }
    ctx->pc = 0x10F814u;
}
