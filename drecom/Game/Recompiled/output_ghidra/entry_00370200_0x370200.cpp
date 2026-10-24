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

// Function: entry_00370200
// Address: 0x370200 - 0x370238
void entry_00370200_0x370200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370200_0x370200");
#endif

    ctx->pc = 0x370200u;

    // 0x370200: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370204: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x370204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x370208: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x370208u;
    {
        const bool branch_taken_0x370208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x370208) {
            ctx->pc = 0x37027Cu;
            return;
        }
    }
    ctx->pc = 0x370210u;
    // 0x370210: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370214: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x370214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x370218: 0x24710090  addiu       $s1, $v1, 0x90
    ctx->pc = 0x370218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x37021c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370220: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x370220u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x370224: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x370224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370228: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37022c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x37022cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x370230: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x370230u;
    {
        const bool branch_taken_0x370230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370230) {
            ctx->pc = 0x37027Cu;
            return;
        }
    }
    ctx->pc = 0x370238u;
}
