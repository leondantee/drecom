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

// Function: entry_001e8050
// Address: 0x1e8050 - 0x1e80e8
void entry_001e8050_0x1e8050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8050_0x1e8050");
#endif

    switch (ctx->pc) {
        case 0x1e806cu: goto label_1e806c;
        case 0x1e808cu: goto label_1e808c;
        case 0x1e80b0u: goto label_1e80b0;
        case 0x1e80d0u: goto label_1e80d0;
        default: break;
    }

    ctx->pc = 0x1e8050u;

    // 0x1e8050: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e8050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e8054: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e8054u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e8058: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e805c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e805cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e8060: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e8060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e8064: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E8064u;
    SET_GPR_U32(ctx, 31, 0x1E806Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E806Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E806Cu) { return; }
    ctx->pc = 0x1E806Cu;
label_1e806c:
    // 0x1e806c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e806cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8070: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e8070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e8074: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e8074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e8078: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e8078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e807c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e807cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e8080: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1e8080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e8084: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E8084u;
    SET_GPR_U32(ctx, 31, 0x1E808Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E808Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E808Cu) { return; }
    ctx->pc = 0x1E808Cu;
label_1e808c:
    // 0x1e808c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e808cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8090: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e8090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e8094: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e8094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e8098: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e8098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e809c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e809cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e80a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e80a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e80a4: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1e80a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e80a8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E80A8u;
    SET_GPR_U32(ctx, 31, 0x1E80B0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E80B0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E80B0u) { return; }
    ctx->pc = 0x1E80B0u;
label_1e80b0:
    // 0x1e80b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e80b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e80b4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e80b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e80b8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e80bc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e80bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e80c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e80c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e80c4: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1e80c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e80c8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E80C8u;
    SET_GPR_U32(ctx, 31, 0x1E80D0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E80D0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E80D0u) { return; }
    ctx->pc = 0x1E80D0u;
label_1e80d0:
    // 0x1e80d0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e80d0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e80d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e80d8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e80dc: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e80dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e80e0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1e80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e80e4: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1e80e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e80e8u;
}
