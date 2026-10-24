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

// Function: entry_00296c94
// Address: 0x296c94 - 0x296d0c
void entry_00296c94_0x296c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296c94_0x296c94");
#endif

    ctx->pc = 0x296c94u;

    // 0x296c94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c98: 0x8c6469bc  lw          $a0, 0x69BC($v1)
    ctx->pc = 0x296c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27068)));
    // 0x296c9c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296ca0: 0xac6469c0  sw          $a0, 0x69C0($v1)
    ctx->pc = 0x296ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27072), GPR_U32(ctx, 4));
    // 0x296ca4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296ca8: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296cac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296cb0: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296cb4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296cb8: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x296cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296cbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296cc0: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    // 0x296cc4: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x296cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x296cc8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296ccc: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296cd0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296cd4: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296cd8: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296cdc: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x296cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x296ce0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x296ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296ce4: 0x8ca469c0  lw          $a0, 0x69C0($a1)
    ctx->pc = 0x296ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27072)));
    // 0x296ce8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x296ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x296cec: 0xaca369c0  sw          $v1, 0x69C0($a1)
    ctx->pc = 0x296cecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 27072), GPR_U32(ctx, 3));
    // 0x296cf0: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x296cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x296cf4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296cf8: 0xa06069c9  sb          $zero, 0x69C9($v1)
    ctx->pc = 0x296cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 27081), (uint8_t)GPR_U32(ctx, 0));
    // 0x296cfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d00: 0xac606998  sw          $zero, 0x6998($v1)
    ctx->pc = 0x296d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 27032), GPR_U32(ctx, 0));
    // 0x296d04: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x296D04u;
    {
        const bool branch_taken_0x296d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d04) {
            ctx->pc = 0x296D70u;
            return;
        }
    }
    ctx->pc = 0x296D0Cu;
}
