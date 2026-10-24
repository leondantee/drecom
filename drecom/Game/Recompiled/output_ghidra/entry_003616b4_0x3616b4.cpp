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

// Function: entry_003616b4
// Address: 0x3616b4 - 0x3616e8
void entry_003616b4_0x3616b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003616b4_0x3616b4");
#endif

    switch (ctx->pc) {
        case 0x3616d0u: goto label_3616d0;
        default: break;
    }

    ctx->pc = 0x3616b4u;

    // 0x3616b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3616b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3616b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3616b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3616bc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x3616bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3616c0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3616c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3616c4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3616c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3616c8: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x3616C8u;
    SET_GPR_U32(ctx, 31, 0x3616D0u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x3616C8u, 0x3616D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3616D0u;
label_3616d0:
    // 0x3616d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3616d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3616d4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3616d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3616d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3616d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3616dc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x3616dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x3616e0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x3616e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3616e4: 0x906511ec  lbu         $a1, 0x11EC($v1)
    ctx->pc = 0x3616e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    ctx->pc = 0x3616e8u;
}
