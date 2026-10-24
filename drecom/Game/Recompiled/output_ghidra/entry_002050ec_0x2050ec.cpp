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

// Function: entry_002050ec
// Address: 0x2050ec - 0x205154
void entry_002050ec_0x2050ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002050ec_0x2050ec");
#endif

    switch (ctx->pc) {
        case 0x20511cu: goto label_20511c;
        case 0x205150u: goto label_205150;
        default: break;
    }

    ctx->pc = 0x2050ecu;

    // 0x2050ec: 0x3c073d4c  lui         $a3, 0x3D4C
    ctx->pc = 0x2050ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15692 << 16));
    // 0x2050f0: 0x34e6cccd  ori         $a2, $a3, 0xCCCD
    ctx->pc = 0x2050f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)52429);
    // 0x2050f4: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x2050f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2050f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2050f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2050fc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2050fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x205100: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x205100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x205104: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x205104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x205108: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x205108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20510c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20510cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205110: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x205110u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205114: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205114u;
    SET_GPR_U32(ctx, 31, 0x20511Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205114u, 0x20511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20511Cu;
label_20511c:
    // 0x20511c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x20511cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x205120: 0x3c063d4c  lui         $a2, 0x3D4C
    ctx->pc = 0x205120u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15692 << 16));
    // 0x205124: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x205124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x205128: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x205128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20512c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x20512cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x205130: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x205130u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x205134: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x205134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x205138: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x205138u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20513c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20513cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205140: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x205140u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205144: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x205144u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x205148: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x205148u;
    SET_GPR_U32(ctx, 31, 0x205150u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x205148u, 0x205150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205150u;
label_205150:
    // 0x205150: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x205150u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x205154u;
}
