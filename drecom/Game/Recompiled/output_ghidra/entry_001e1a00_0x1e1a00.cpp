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

// Function: entry_001e1a00
// Address: 0x1e1a00 - 0x1e1a3c
void entry_001e1a00_0x1e1a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1a00_0x1e1a00");
#endif

    ctx->pc = 0x1e1a00u;

    // 0x1e1a00: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x1e1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1e1a04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e1a08: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x1e1a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
    // 0x1e1a0c: 0x1460fe4e  bnez        $v1, . + 4 + (-0x1B2 << 2)
    ctx->pc = 0x1E1A0Cu;
    {
        const bool branch_taken_0x1e1a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1a0c) {
            ctx->pc = 0x1E1348u;
            return;
        }
    }
    ctx->pc = 0x1E1A14u;
    // 0x1e1a14: 0x8fa40194  lw          $a0, 0x194($sp)
    ctx->pc = 0x1e1a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1e1a18: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1e1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e1a1c: 0x8c63006c  lw          $v1, 0x6C($v1)
    ctx->pc = 0x1e1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e1a20: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1A20u;
    {
        const bool branch_taken_0x1e1a20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1a20) {
            ctx->pc = 0x1E1A3Cu;
            return;
        }
    }
    ctx->pc = 0x1E1A28u;
    // 0x1e1a28: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x1e1a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1e1a2c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1e1a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1e1a30: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1e1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1e1a34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1e1a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1e1a38: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x1e1a3cu;
}
