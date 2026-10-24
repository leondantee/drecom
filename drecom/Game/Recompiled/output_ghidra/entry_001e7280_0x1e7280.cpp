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

// Function: entry_001e7280
// Address: 0x1e7280 - 0x1e7320
void entry_001e7280_0x1e7280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7280_0x1e7280");
#endif

    switch (ctx->pc) {
        case 0x1e72a0u: goto label_1e72a0;
        case 0x1e72c4u: goto label_1e72c4;
        case 0x1e72e8u: goto label_1e72e8;
        case 0x1e7308u: goto label_1e7308;
        default: break;
    }

    ctx->pc = 0x1e7280u;

    // 0x1e7280: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1e7280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7284: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x1e7284u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x1e7288: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e7288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e728c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e728cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7290: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7290u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7294: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1e7294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7298: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7298u;
    SET_GPR_U32(ctx, 31, 0x1E72A0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E72A0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E72A0u) { return; }
    ctx->pc = 0x1E72A0u;
label_1e72a0:
    // 0x1e72a0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e72a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e72a4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1e72a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e72a8: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x1e72a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x1e72ac: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e72acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e72b0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e72b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e72b4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e72b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e72b8: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e72b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e72bc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E72BCu;
    SET_GPR_U32(ctx, 31, 0x1E72C4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E72C4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E72C4u) { return; }
    ctx->pc = 0x1E72C4u;
label_1e72c4:
    // 0x1e72c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1e72c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e72c8: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x1e72c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e72cc: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x1e72ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x1e72d0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e72d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e72d4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e72d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e72d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e72d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e72dc: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1e72dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e72e0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E72E0u;
    SET_GPR_U32(ctx, 31, 0x1E72E8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E72E8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E72E8u) { return; }
    ctx->pc = 0x1E72E8u;
label_1e72e8:
    // 0x1e72e8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e72e8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e72ec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e72ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e72f0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e72f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e72f4: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e72f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e72f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e72f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e72fc: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1e72fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e7300: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7300u;
    SET_GPR_U32(ctx, 31, 0x1E7308u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7308u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7308u) { return; }
    ctx->pc = 0x1E7308u;
label_1e7308:
    // 0x1e7308: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e730c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1e730cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7310: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e7310u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7314: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1e7314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e7318: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e7318u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e731c: 0x0  nop
    ctx->pc = 0x1e731cu;
    // NOP
    ctx->pc = 0x1e7320u;
}
