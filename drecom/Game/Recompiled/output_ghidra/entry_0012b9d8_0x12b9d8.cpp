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

// Function: entry_0012b9d8
// Address: 0x12b9d8 - 0x12b9f4
void entry_0012b9d8_0x12b9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b9d8_0x12b9d8");
#endif

    switch (ctx->pc) {
        case 0x12b9ecu: goto label_12b9ec;
        default: break;
    }

    ctx->pc = 0x12b9d8u;

    // 0x12b9d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x12b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9e0: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x12b9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12b9e4: 0xc05cd58  jal         func_173560
    ctx->pc = 0x12B9E4u;
    SET_GPR_U32(ctx, 31, 0x12B9ECu);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x12B9E4u, 0x12B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B9ECu;
label_12b9ec:
    // 0x12b9ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x12b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b9f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12b9f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x12b9f4u;
}
