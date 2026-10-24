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

// Function: entry_001c5420
// Address: 0x1c5420 - 0x1c5474
void entry_001c5420_0x1c5420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5420_0x1c5420");
#endif

    switch (ctx->pc) {
        case 0x1c5440u: goto label_1c5440;
        case 0x1c5458u: goto label_1c5458;
        default: break;
    }

    ctx->pc = 0x1c5420u;

    // 0x1c5420: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c5420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5424: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5428: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c542c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1c542cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c5430: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c5430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5434: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5438: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5438u;
    SET_GPR_U32(ctx, 31, 0x1C5440u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5438u, 0x1C5440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5440u;
label_1c5440:
    // 0x1c5440: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5444: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c5444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5448: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c5448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c544c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1c544cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c5450: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C5450u;
    SET_GPR_U32(ctx, 31, 0x1C5458u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C5450u, 0x1C5458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5458u;
label_1c5458:
    // 0x1c5458: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c5458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c545c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5460: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c5460u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c5464: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c5464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5468: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c546c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5470: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c5474u;
}
