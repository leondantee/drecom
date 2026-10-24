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

// Function: entry_00122cc0
// Address: 0x122cc0 - 0x122d30
void entry_00122cc0_0x122cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122cc0_0x122cc0");
#endif

    switch (ctx->pc) {
        case 0x122cd0u: goto label_122cd0;
        case 0x122cfcu: goto label_122cfc;
        default: break;
    }

    ctx->pc = 0x122cc0u;

    // 0x122cc0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122cc4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x122cc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x122cc8: 0xc048090  jal         func_120240
    ctx->pc = 0x122CC8u;
    SET_GPR_U32(ctx, 31, 0x122CD0u);
    ctx->pc = 0x120240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120240u, 0x122CC8u, 0x122CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CD0u;
label_122cd0:
    // 0x122cd0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x122cd0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x122cd4: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x122cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x122cd8: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x122cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x122cdc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x122cdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x122ce0: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122ce4: 0x8cc30130  lw          $v1, 0x130($a2)
    ctx->pc = 0x122ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
    // 0x122ce8: 0x24040524  addiu       $a0, $zero, 0x524
    ctx->pc = 0x122ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1316));
    // 0x122cec: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x122cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x122cf0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x122cf0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x122cf4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x122CF4u;
    SET_GPR_U32(ctx, 31, 0x122CFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x122CF4u, 0x122CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122CFCu;
label_122cfc:
    // 0x122cfc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x122cfcu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x122d00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122d04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122d08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122d08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122d0c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x122d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x122d10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122d14: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x122d14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x122d18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122d1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122d20: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122d24: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x122d24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122d28: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122d2c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x122d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x122d30u;
}
