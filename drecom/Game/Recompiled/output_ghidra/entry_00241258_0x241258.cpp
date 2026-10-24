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

// Function: entry_00241258
// Address: 0x241258 - 0x241290
void entry_00241258_0x241258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241258_0x241258");
#endif

    switch (ctx->pc) {
        case 0x241280u: goto label_241280;
        default: break;
    }

    ctx->pc = 0x241258u;

    // 0x241258: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x241258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x24125c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x24125cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x241260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x241260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x241264: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x241264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241268: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x241268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24126c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x24126cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x241270: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x241270u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x241274: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x241274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x241278: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x241278u;
    SET_GPR_U32(ctx, 31, 0x241280u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x241278u, 0x241280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241280u;
label_241280:
    // 0x241280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x241280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241284: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x241284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x241288: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x241288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24128c: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x24128cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x241290u;
}
