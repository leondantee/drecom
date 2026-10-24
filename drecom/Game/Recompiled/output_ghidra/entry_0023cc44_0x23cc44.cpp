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

// Function: entry_0023cc44
// Address: 0x23cc44 - 0x23cc6c
void entry_0023cc44_0x23cc44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023cc44_0x23cc44");
#endif

    ctx->pc = 0x23cc44u;

    // 0x23cc44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc48: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x23cc48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x23cc4c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23cc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23cc50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23cc50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23cc54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CC54u;
    {
        const bool branch_taken_0x23cc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc54) {
            ctx->pc = 0x23CC6Cu;
            return;
        }
    }
    ctx->pc = 0x23CC5Cu;
    // 0x23cc5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc60: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x23cc60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x23cc64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23cc68: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x23cc68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x23cc6cu;
}
