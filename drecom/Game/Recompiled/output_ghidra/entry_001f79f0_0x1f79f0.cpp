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

// Function: entry_001f79f0
// Address: 0x1f79f0 - 0x1f7a5c
void entry_001f79f0_0x1f79f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f79f0_0x1f79f0");
#endif

    ctx->pc = 0x1f79f0u;

label_1f79f0:
    // 0x1f79f0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1f79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1f79f4: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x1f79f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1f79f8: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x1f79f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x1f79fc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f7a00: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1f7a00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x1f7a04: 0xaec40004  sw          $a0, 0x4($s6)
    ctx->pc = 0x1f7a04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 4));
    // 0x1f7a08: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1f7a08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1f7a0c: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F7A0Cu;
    {
        const bool branch_taken_0x1f7a0c = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1f7a0c) {
            ctx->pc = 0x1F79F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f79f0;
        }
    }
    ctx->pc = 0x1F7A14u;
    // 0x1f7a14: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1f7a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f7a18: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x1f7a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1f7a1c: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1f7a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1f7a20: 0x26940190  addiu       $s4, $s4, 0x190
    ctx->pc = 0x1f7a20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
    // 0x1f7a24: 0x26b50190  addiu       $s5, $s5, 0x190
    ctx->pc = 0x1f7a24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
    // 0x1f7a28: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x1f7a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f7a2c: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x1f7a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f7a30: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1f7a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x1f7a34: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1F7A34u;
    {
        const bool branch_taken_0x1f7a34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a34) {
            ctx->pc = 0x1F79E0u;
            return;
        }
    }
    ctx->pc = 0x1F7A3Cu;
    // 0x1f7a3c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7a40: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x1f7a40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f7a44: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7A44u;
    {
        const bool branch_taken_0x1f7a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a44) {
            ctx->pc = 0x1F7A5Cu;
            return;
        }
    }
    ctx->pc = 0x1F7A4Cu;
    // 0x1f7a4c: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7a50: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1f7a50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1f7a54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f7a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f7a58: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1f7a58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1f7a5cu;
}
