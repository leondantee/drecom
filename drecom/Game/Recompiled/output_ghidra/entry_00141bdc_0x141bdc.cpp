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

// Function: entry_00141bdc
// Address: 0x141bdc - 0x141ca8
void entry_00141bdc_0x141bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141bdc_0x141bdc");
#endif

    switch (ctx->pc) {
        case 0x141c2cu: goto label_141c2c;
        case 0x141c40u: goto label_141c40;
        case 0x141c78u: goto label_141c78;
        default: break;
    }

    ctx->pc = 0x141bdcu;

    // 0x141bdc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x141bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x141be0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x141BE0u;
    {
        const bool branch_taken_0x141be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141be0) {
            ctx->pc = 0x141CA8u;
            return;
        }
    }
    ctx->pc = 0x141BE8u;
    // 0x141be8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x141be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141bec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141bf0: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x141bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x141bf4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x141bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x141bf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x141bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141bfc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x141bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141c00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x141c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x141c04: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x141c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141c08: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x141c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x141c0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x141c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141c10: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x141c10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x141c14: 0x24071400  addiu       $a3, $zero, 0x1400
    ctx->pc = 0x141c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x141c18: 0x27a80058  addiu       $t0, $sp, 0x58
    ctx->pc = 0x141c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x141c1c: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x141c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x141c20: 0x70005628  paddub      $t2, $zero, $zero
    ctx->pc = 0x141c20u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141c24: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x141C24u;
    SET_GPR_U32(ctx, 31, 0x141C2Cu);
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x141C24u, 0x141C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C2Cu;
label_141c2c:
    // 0x141c2c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x141c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x141c30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x141c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x141c34: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x141c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x141c38: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x141C38u;
    SET_GPR_U32(ctx, 31, 0x141C40u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x141C38u, 0x141C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C40u;
label_141c40:
    // 0x141c40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141c44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x141c44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x141c48: 0x226b8  dsll        $a0, $v0, 26
    ctx->pc = 0x141c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 26);
    // 0x141c4c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x141c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x141c50: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x141c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x141c54: 0x31182  srl         $v0, $v1, 6
    ctx->pc = 0x141c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x141c58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141c5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x141c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x141c60: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x141c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x141c64: 0x34421400  ori         $v0, $v0, 0x1400
    ctx->pc = 0x141c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5120);
    // 0x141c68: 0x449825  or          $s3, $v0, $a0
    ctx->pc = 0x141c68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x141c6c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x141c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x141c70: 0xc05e774  jal         func_179DD0
    ctx->pc = 0x141C70u;
    SET_GPR_U32(ctx, 31, 0x141C78u);
    ctx->pc = 0x179DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179DD0u, 0x141C70u, 0x141C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141C78u;
label_141c78:
    // 0x141c78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141c7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x141c7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x141c80: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x141c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x141c84: 0x2621825  or          $v1, $s3, $v0
    ctx->pc = 0x141c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x141c88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x141c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141c8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x141c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x141c90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x141c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x141c94: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x141c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x141c98: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x141c98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x141c9c: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x141c9cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x141ca0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x141CA0u;
    {
        const bool branch_taken_0x141ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141ca0) {
            ctx->pc = 0x141CC0u;
            return;
        }
    }
    ctx->pc = 0x141CA8u;
}
