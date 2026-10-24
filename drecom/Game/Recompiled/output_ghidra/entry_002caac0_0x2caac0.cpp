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

// Function: entry_002caac0
// Address: 0x2caac0 - 0x2caae8
void entry_002caac0_0x2caac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002caac0_0x2caac0");
#endif

    switch (ctx->pc) {
        case 0x2caac8u: goto label_2caac8;
        default: break;
    }

    ctx->pc = 0x2caac0u;

    // 0x2caac0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CAAC0u;
    SET_GPR_U32(ctx, 31, 0x2CAAC8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CAAC0u, 0x2CAAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAAC8u;
label_2caac8:
    // 0x2caac8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2caac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2caacc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2caaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2caad0: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2caad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2caad4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2caad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2caad8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2caad8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2caadc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2caadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caae0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2caae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2caae4: 0xa4640058  sh          $a0, 0x58($v1)
    ctx->pc = 0x2caae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2caae8u;
}
