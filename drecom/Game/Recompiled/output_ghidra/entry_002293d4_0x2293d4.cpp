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

// Function: entry_002293d4
// Address: 0x2293d4 - 0x229424
void entry_002293d4_0x2293d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002293d4_0x2293d4");
#endif

    switch (ctx->pc) {
        case 0x229400u: goto label_229400;
        default: break;
    }

    ctx->pc = 0x2293d4u;

    // 0x2293d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2293d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2293d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2293d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2293dc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2293dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2293e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2293e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2293e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2293e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2293e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2293e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2293ec: 0x2406781e  addiu       $a2, $zero, 0x781E
    ctx->pc = 0x2293ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30750));
    // 0x2293f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2293f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2293f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2293f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2293f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2293F8u;
    SET_GPR_U32(ctx, 31, 0x229400u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2293F8u, 0x229400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229400u;
label_229400:
    // 0x229400: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229404: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x229404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x229408: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x229408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x22940c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x22940cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229410: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x229410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x229414: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x229414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x229418: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x229418u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22941c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x22941Cu;
    SET_GPR_U32(ctx, 31, 0x229424u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x22941Cu, 0x229424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229424u;
}
