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

// Function: entry_002c3f60
// Address: 0x2c3f60 - 0x2c3fdc
void entry_002c3f60_0x2c3f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c3f60_0x2c3f60");
#endif

    switch (ctx->pc) {
        case 0x2c3f98u: goto label_2c3f98;
        default: break;
    }

    ctx->pc = 0x2c3f60u;

    // 0x2c3f60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c3f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3f64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3f68: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c3f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3f70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3f74: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2c3f74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3f78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3f7c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c3f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3f80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3f84: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c3f84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3f88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3f8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c3f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c3f90: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C3F90u;
    SET_GPR_U32(ctx, 31, 0x2C3F98u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C3F90u, 0x2C3F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3F98u;
label_2c3f98:
    // 0x2c3f98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c3f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3f9c: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x2c3f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2c3fa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3fa4: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C3FA4u;
    {
        const bool branch_taken_0x2c3fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c3fa4) {
            ctx->pc = 0x2C3FDCu;
            return;
        }
    }
    ctx->pc = 0x2C3FACu;
    // 0x2c3fac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c3facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c3fb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3fb4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c3fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3fb8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c3fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c3fbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3fc0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2c3fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3fc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3fc8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c3fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3fcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3fd0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c3fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3fd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c3fd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c3fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c3fdcu;
}
