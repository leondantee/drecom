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

// Function: entry_002411b8
// Address: 0x2411b8 - 0x2411f0
void entry_002411b8_0x2411b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002411b8_0x2411b8");
#endif

    switch (ctx->pc) {
        case 0x2411e0u: goto label_2411e0;
        default: break;
    }

    ctx->pc = 0x2411b8u;

    // 0x2411b8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2411b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x2411bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2411bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2411c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2411c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2411c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2411c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2411c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2411c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2411cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2411ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2411d0: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x2411d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2411d4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2411d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2411d8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2411D8u;
    SET_GPR_U32(ctx, 31, 0x2411E0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2411D8u, 0x2411E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2411E0u;
label_2411e0:
    // 0x2411e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2411e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2411e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2411e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2411e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2411e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2411ec: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x2411ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2411f0u;
}
