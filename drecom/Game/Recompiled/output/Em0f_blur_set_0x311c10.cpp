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

// Function: Em0f_blur_set
// Address: 0x311c10 - 0x311d30
void Em0f_blur_set_0x311c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_blur_set_0x311c10");
#endif

    switch (ctx->pc) {
        case 0x311c40u: goto label_311c40;
        case 0x311c54u: goto label_311c54;
        case 0x311c98u: goto label_311c98;
        default: break;
    }

    ctx->pc = 0x311c10u;

    // 0x311c10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x311c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x311c14: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x311c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x311c18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x311c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x311c1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x311c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x311c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x311c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x311c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x311c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x311c28: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x311c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x311c2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x311c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x311c30: 0x2444023c  addiu       $a0, $v0, 0x23C
    ctx->pc = 0x311c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 572));
    // 0x311c34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x311c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x311c38: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x311C38u;
    SET_GPR_U32(ctx, 31, 0x311C40u);
    ctx->pc = 0x1AC3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC3B0u, 0x311C38u, 0x311C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C40u;
label_311c40:
    // 0x311c40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x311c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x311c44: 0x24440244  addiu       $a0, $v0, 0x244
    ctx->pc = 0x311c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 580));
    // 0x311c48: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x311c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x311c4c: 0xc074d44  jal         func_1D3510
    ctx->pc = 0x311C4Cu;
    SET_GPR_U32(ctx, 31, 0x311C54u);
    ctx->pc = 0x1D3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3510u, 0x311C4Cu, 0x311C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C54u;
label_311c54:
    // 0x311c54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x311c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x311c58: 0x8c520244  lw          $s2, 0x244($v0)
    ctx->pc = 0x311c58u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x311c5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x311c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x311c60: 0x8c530248  lw          $s3, 0x248($v0)
    ctx->pc = 0x311c60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x311c64: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x311c64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x311c68: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x311c68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x311c6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x311c6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x311c70: 0x3c0230ff  lui         $v0, 0x30FF
    ctx->pc = 0x311c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
    // 0x311c74: 0x34474040  ori         $a3, $v0, 0x4040
    ctx->pc = 0x311c74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x311c78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x311c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x311c7c: 0x34482020  ori         $t0, $v0, 0x2020
    ctx->pc = 0x311c7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x311c80: 0x3c0230ff  lui         $v0, 0x30FF
    ctx->pc = 0x311c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
    // 0x311c84: 0x34494040  ori         $t1, $v0, 0x4040
    ctx->pc = 0x311c84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x311c88: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x311c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x311c8c: 0x344a2020  ori         $t2, $v0, 0x2020
    ctx->pc = 0x311c8cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x311c90: 0xc074db8  jal         func_1D36E0
    ctx->pc = 0x311C90u;
    SET_GPR_U32(ctx, 31, 0x311C98u);
    ctx->pc = 0x1D36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D36E0u, 0x311C90u, 0x311C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C98u;
label_311c98:
    // 0x311c98: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x311c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x311c9c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x311c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x311ca0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x311ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x311ca4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x311ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x311ca8: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x311ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x311cac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x311cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x311cb0: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x311cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    // 0x311cb4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x311cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x311cb8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x311cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x311cbc: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x311cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x311cc0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x311cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x311cc4: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x311cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x311cc8: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x311cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x311ccc: 0x34633001  ori         $v1, $v1, 0x3001
    ctx->pc = 0x311cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x311cd0: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x311cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
    // 0x311cd4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x311cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x311cd8: 0x34633001  ori         $v1, $v1, 0x3001
    ctx->pc = 0x311cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12289);
    // 0x311cdc: 0xfe230030  sd          $v1, 0x30($s1)
    ctx->pc = 0x311cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 3));
    // 0x311ce0: 0x3c036126  lui         $v1, 0x6126
    ctx->pc = 0x311ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24870 << 16));
    // 0x311ce4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x311ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x311ce8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x311ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x311cec: 0x34038009  ori         $v1, $zero, 0x8009
    ctx->pc = 0x311cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x311cf0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x311cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x311cf4: 0xfe030070  sd          $v1, 0x70($s0)
    ctx->pc = 0x311cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 3));
    // 0x311cf8: 0x3c036126  lui         $v1, 0x6126
    ctx->pc = 0x311cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24870 << 16));
    // 0x311cfc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x311cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x311d00: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x311d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x311d04: 0x34038009  ori         $v1, $zero, 0x8009
    ctx->pc = 0x311d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    // 0x311d08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x311d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x311d0c: 0xfe230070  sd          $v1, 0x70($s1)
    ctx->pc = 0x311d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 3));
    // 0x311d10: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x311d10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x311d14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x311d14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311d18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x311d18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311d1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x311d1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x311d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311d24: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x311d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x311d28: 0x3e00008  jr          $ra
    ctx->pc = 0x311D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311D30u;
}
