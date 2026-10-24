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

// Function: entry_0026f270
// Address: 0x26f270 - 0x26f2b8
void entry_0026f270_0x26f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f270_0x26f270");
#endif

    ctx->pc = 0x26f270u;

    // 0x26f270: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f274: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26f274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26f278: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26F278u;
    {
        const bool branch_taken_0x26f278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f278) {
            ctx->pc = 0x26F2B8u;
            return;
        }
    }
    ctx->pc = 0x26F280u;
    // 0x26f280: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f284: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x26f284u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f288: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26f288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26f28c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f290: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26f290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26f294: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26f294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f29c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26f29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26f2a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f2a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26f2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f2a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f2ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x26f2acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f2b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f2b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26f2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x26f2b8u;
}
