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

// Function: entry_0014d27c
// Address: 0x14d27c - 0x14d2cc
void entry_0014d27c_0x14d27c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d27c_0x14d27c");
#endif

    ctx->pc = 0x14d27cu;

    // 0x14d27c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d280: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14d280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14d284: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14D284u;
    {
        const bool branch_taken_0x14d284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d284) {
            ctx->pc = 0x14D2CCu;
            return;
        }
    }
    ctx->pc = 0x14D28Cu;
    // 0x14d28c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14d28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d290: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d294: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x14d294u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x14d298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d29c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x14d29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d2a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d2a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x14d2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d2a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d2ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x14d2acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d2b0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14d2b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d2b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14d2bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d2c0: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14d2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d2c4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x14D2C4u;
    {
        const bool branch_taken_0x14d2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d2c4) {
            ctx->pc = 0x14D2CCu;
            return;
        }
    }
    ctx->pc = 0x14D2CCu;
}
