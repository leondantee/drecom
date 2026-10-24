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

// Function: entry_0030fd88
// Address: 0x30fd88 - 0x30fe10
void entry_0030fd88_0x30fd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fd88_0x30fd88");
#endif

    switch (ctx->pc) {
        case 0x30fd98u: goto label_30fd98;
        case 0x30fda4u: goto label_30fda4;
        case 0x30fdb4u: goto label_30fdb4;
        case 0x30fdc0u: goto label_30fdc0;
        default: break;
    }

    ctx->pc = 0x30fd88u;

    // 0x30fd88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30fd8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30fd90: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30FD90u;
    SET_GPR_U32(ctx, 31, 0x30FD98u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30FD90u, 0x30FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FD98u;
label_30fd98:
    // 0x30fd98: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fd9c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30FD9Cu;
    SET_GPR_U32(ctx, 31, 0x30FDA4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30FD9Cu, 0x30FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDA4u;
label_30fda4:
    // 0x30fda4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fda8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30fda8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30fdac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30FDACu;
    SET_GPR_U32(ctx, 31, 0x30FDB4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30FDACu, 0x30FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDB4u;
label_30fdb4:
    // 0x30fdb4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fdb8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30FDB8u;
    SET_GPR_U32(ctx, 31, 0x30FDC0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30FDB8u, 0x30FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FDC0u;
label_30fdc0:
    // 0x30fdc0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fdc4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x30fdc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x30fdc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30fdcc: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x30fdccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x30fdd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fdd4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30fdd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30fdd8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30FDD8u;
    {
        const bool branch_taken_0x30fdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fdd8) {
            ctx->pc = 0x30FE10u;
            return;
        }
    }
    ctx->pc = 0x30FDE0u;
    // 0x30fde0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fde4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fde8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30fde8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30fdec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fdf0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fdf4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30fdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30fdf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fdfc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30fdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fe00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fe04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30fe04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30fe08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30fe0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30fe10u;
}
