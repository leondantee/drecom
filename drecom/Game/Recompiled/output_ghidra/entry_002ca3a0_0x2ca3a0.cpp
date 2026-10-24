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

// Function: entry_002ca3a0
// Address: 0x2ca3a0 - 0x2ca3c8
void entry_002ca3a0_0x2ca3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ca3a0_0x2ca3a0");
#endif

    switch (ctx->pc) {
        case 0x2ca3a8u: goto label_2ca3a8;
        default: break;
    }

    ctx->pc = 0x2ca3a0u;

    // 0x2ca3a0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2CA3A0u;
    SET_GPR_U32(ctx, 31, 0x2CA3A8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2CA3A0u, 0x2CA3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA3A8u;
label_2ca3a8:
    // 0x2ca3a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ca3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ca3ac: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x2ca3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x2ca3b0: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2ca3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2ca3b4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2ca3b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2ca3b8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2ca3b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2ca3bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ca3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ca3c0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ca3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ca3c4: 0xa4640058  sh          $a0, 0x58($v1)
    ctx->pc = 0x2ca3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 88), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x2ca3c8u;
}
