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

// Function: entry_002c8568
// Address: 0x2c8568 - 0x2c85b4
void entry_002c8568_0x2c8568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8568_0x2c8568");
#endif

    ctx->pc = 0x2c8568u;

    // 0x2c8568: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c8568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c856c: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c856cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c8570: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2c8570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2c8574: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2c8574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c8578: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2c8578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x2c857c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C857Cu;
    {
        const bool branch_taken_0x2c857c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c857c) {
            ctx->pc = 0x2C85B4u;
            return;
        }
    }
    ctx->pc = 0x2C8584u;
    // 0x2c8584: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8588: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c858c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c858cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c8590: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c8590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8594: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c8594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c8598: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c8598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c859c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c85a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c85a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c85a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c85a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c85a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c85ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2c85acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c85b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c85b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c85b4u;
}
