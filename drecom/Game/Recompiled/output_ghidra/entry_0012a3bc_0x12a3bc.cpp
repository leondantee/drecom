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

// Function: entry_0012a3bc
// Address: 0x12a3bc - 0x12a40c
void entry_0012a3bc_0x12a3bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a3bc_0x12a3bc");
#endif

    switch (ctx->pc) {
        case 0x12a3ccu: goto label_12a3cc;
        default: break;
    }

    ctx->pc = 0x12a3bcu;

    // 0x12a3bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a3c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a3c4: 0xc05d25c  jal         func_174970
    ctx->pc = 0x12A3C4u;
    SET_GPR_U32(ctx, 31, 0x12A3CCu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x12A3C4u, 0x12A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3CCu;
label_12a3cc:
    // 0x12a3cc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12A3CCu;
    {
        const bool branch_taken_0x12a3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a3cc) {
            ctx->pc = 0x12A40Cu;
            return;
        }
    }
    ctx->pc = 0x12A3D4u;
    // 0x12a3d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a3d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a3dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12a3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a3e0: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x12a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12a3e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a3e8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12a3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12a3ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a3f0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12a3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a3f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a3f8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12a3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a3fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a400: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12a400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12a404: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x12A404u;
    {
        const bool branch_taken_0x12a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a404) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x12A40Cu;
}
