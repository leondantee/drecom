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

// Function: entry_0020aa58
// Address: 0x20aa58 - 0x20aab8
void entry_0020aa58_0x20aa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020aa58_0x20aa58");
#endif

    switch (ctx->pc) {
        case 0x20aaa8u: goto label_20aaa8;
        default: break;
    }

    ctx->pc = 0x20aa58u;

    // 0x20aa58: 0x240b000f  addiu       $t3, $zero, 0xF
    ctx->pc = 0x20aa58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20aa5c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x20aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x20aa60: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x20aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aa64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20aa64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20aa68: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x20aa68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20aa6c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x20aa6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x20aa70: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x20aa70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20aa74: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20aa74u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20aa78: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20aa78u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20aa7c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20aa80: 0x244992c0  addiu       $t1, $v0, -0x6D40
    ctx->pc = 0x20aa80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x20aa84: 0xc7ac020c  lwc1        $f12, 0x20C($sp)
    ctx->pc = 0x20aa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20aa88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20aa88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20aa8c: 0xc42d9490  lwc1        $f13, -0x6B70($at)
    ctx->pc = 0x20aa8cu;
    { uint32_t bits = FAST_READ32(0x619490u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20aa90: 0xc7ae0208  lwc1        $f14, 0x208($sp)
    ctx->pc = 0x20aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20aa94: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x20aa94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x20aa98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20aa9c: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x20aa9cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x20aaa0: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x20AAA0u;
    SET_GPR_U32(ctx, 31, 0x20AAA8u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x20AAA0u, 0x20AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAA8u;
label_20aaa8:
    // 0x20aaa8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x20aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20aaac: 0x8c621374  lw          $v0, 0x1374($v1)
    ctx->pc = 0x20aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4980)));
    // 0x20aab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20aab4: 0xac621374  sw          $v0, 0x1374($v1)
    ctx->pc = 0x20aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4980), GPR_U32(ctx, 2));
    ctx->pc = 0x20aab8u;
}
