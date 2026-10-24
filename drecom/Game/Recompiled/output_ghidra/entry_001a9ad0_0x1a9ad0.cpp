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

// Function: entry_001a9ad0
// Address: 0x1a9ad0 - 0x1a9b04
void entry_001a9ad0_0x1a9ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9ad0_0x1a9ad0");
#endif

    switch (ctx->pc) {
        case 0x1a9ae4u: goto label_1a9ae4;
        default: break;
    }

    ctx->pc = 0x1a9ad0u;

    // 0x1a9ad0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9ad4: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1a9ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9ad8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1a9ad8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a9adc: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1A9ADCu;
    SET_GPR_U32(ctx, 31, 0x1A9AE4u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1A9ADCu, 0x1A9AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9AE4u;
label_1a9ae4:
    // 0x1a9ae4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a9ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9ae8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a9aec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a9aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a9af0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1a9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a9af4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9af8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a9af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a9afc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a9afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a9b00: 0x34640064  ori         $a0, $v1, 0x64
    ctx->pc = 0x1a9b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    ctx->pc = 0x1a9b04u;
}
