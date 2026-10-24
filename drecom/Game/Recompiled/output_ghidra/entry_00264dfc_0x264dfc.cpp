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

// Function: entry_00264dfc
// Address: 0x264dfc - 0x264e64
void entry_00264dfc_0x264dfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264dfc_0x264dfc");
#endif

    switch (ctx->pc) {
        case 0x264e3cu: goto label_264e3c;
        case 0x264e48u: goto label_264e48;
        default: break;
    }

    ctx->pc = 0x264dfcu;

    // 0x264dfc: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x264dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x264e00: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x264e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x264e04: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x264e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x264e08: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x264e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x264e0c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x264e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264e10: 0x2c3f021  addu        $fp, $s6, $v1
    ctx->pc = 0x264e10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x264e14: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x264e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x264e18: 0x107e0033  beq         $v1, $fp, . + 4 + (0x33 << 2)
    ctx->pc = 0x264E18u;
    {
        const bool branch_taken_0x264e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        if (branch_taken_0x264e18) {
            ctx->pc = 0x264EE8u;
            return;
        }
    }
    ctx->pc = 0x264E20u;
    // 0x264e20: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x264e20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x264e24: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x264e24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x264e28: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x264e28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x264e2c: 0x72803e28  paddub      $a3, $s4, $zero
    ctx->pc = 0x264e2cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x264e30: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x264e30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264e34: 0xc05e858  jal         func_17A160
    ctx->pc = 0x264E34u;
    SET_GPR_U32(ctx, 31, 0x264E3Cu);
    ctx->pc = 0x17A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A160u, 0x264E34u, 0x264E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264E3Cu;
label_264e3c:
    // 0x264e3c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x264e3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x264e40: 0xc05e964  jal         func_17A590
    ctx->pc = 0x264E40u;
    SET_GPR_U32(ctx, 31, 0x264E48u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x264E40u, 0x264E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264E48u;
label_264e48:
    // 0x264e48: 0xafb300b0  sw          $s3, 0xB0($sp)
    ctx->pc = 0x264e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 19));
    // 0x264e4c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x264e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x264e50: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x264e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
    // 0x264e54: 0xafb400d8  sw          $s4, 0xD8($sp)
    ctx->pc = 0x264e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 20));
    // 0x264e58: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x264e58u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x264e5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x264E5Cu;
    {
        const bool branch_taken_0x264e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x264e5c) {
            ctx->pc = 0x264E90u;
            return;
        }
    }
    ctx->pc = 0x264E64u;
}
