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

// Function: entry_003035ec
// Address: 0x3035ec - 0x303624
void entry_003035ec_0x3035ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003035ec_0x3035ec");
#endif

    ctx->pc = 0x3035ecu;

    // 0x3035ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3035ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3035f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3035f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3035f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3035f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3035f8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3035f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3035fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3035fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303600: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x303600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x303604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303608: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x303608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30360c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303610: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x303610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x303614: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x303614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x303618: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x303618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30361c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30361Cu;
    {
        const bool branch_taken_0x30361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30361c) {
            ctx->pc = 0x303654u;
            return;
        }
    }
    ctx->pc = 0x303624u;
}
