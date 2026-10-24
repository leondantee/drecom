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

// Function: entry_00225274
// Address: 0x225274 - 0x2252b8
void entry_00225274_0x225274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225274_0x225274");
#endif

    ctx->pc = 0x225274u;

    // 0x225274: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x225274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x225278: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x225278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22527c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22527cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x225280: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x225280u;
    {
        const bool branch_taken_0x225280 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x225280) {
            ctx->pc = 0x2252B8u;
            return;
        }
    }
    ctx->pc = 0x225288u;
    // 0x225288: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x225288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22528c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225290: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x225290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x225294: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x225294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x225298: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22529c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x22529cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2252a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2252a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2252a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2252a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2252a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2252a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2252ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2252acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2252b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2252b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2252b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2252b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2252b8u;
}
