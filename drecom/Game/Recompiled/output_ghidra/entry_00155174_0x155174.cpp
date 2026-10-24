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

// Function: entry_00155174
// Address: 0x155174 - 0x1551bc
void entry_00155174_0x155174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155174_0x155174");
#endif

    ctx->pc = 0x155174u;

    // 0x155174: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x155174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155178: 0x84831250  lh          $v1, 0x1250($a0)
    ctx->pc = 0x155178u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4688)));
    // 0x15517c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x155180: 0xa4831250  sh          $v1, 0x1250($a0)
    ctx->pc = 0x155180u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4688), (uint16_t)GPR_U32(ctx, 3));
    // 0x155184: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155188: 0x84631250  lh          $v1, 0x1250($v1)
    ctx->pc = 0x155188u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x15518c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x15518Cu;
    {
        const bool branch_taken_0x15518c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15518c) {
            ctx->pc = 0x155204u;
            return;
        }
    }
    ctx->pc = 0x155194u;
    // 0x155194: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x155194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x155198: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x155198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15519c: 0xa4641250  sh          $a0, 0x1250($v1)
    ctx->pc = 0x15519cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4688), (uint16_t)GPR_U32(ctx, 4));
    // 0x1551a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1551a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1551a4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1551a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1551a8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1551a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1551ac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1551acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1551b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1551b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1551b4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1551B4u;
    {
        const bool branch_taken_0x1551b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1551b4) {
            ctx->pc = 0x155204u;
            return;
        }
    }
    ctx->pc = 0x1551BCu;
}
