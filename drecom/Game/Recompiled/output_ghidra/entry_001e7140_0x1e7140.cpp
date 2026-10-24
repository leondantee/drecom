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

// Function: entry_001e7140
// Address: 0x1e7140 - 0x1e71d0
void entry_001e7140_0x1e7140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7140_0x1e7140");
#endif

    switch (ctx->pc) {
        case 0x1e715cu: goto label_1e715c;
        case 0x1e717cu: goto label_1e717c;
        case 0x1e719cu: goto label_1e719c;
        case 0x1e71b8u: goto label_1e71b8;
        default: break;
    }

    ctx->pc = 0x1e7140u;

    // 0x1e7140: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1e7140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7144: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1e7144u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x1e7148: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e714c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e714cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7150: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1e7150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7154: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7154u;
    SET_GPR_U32(ctx, 31, 0x1E715Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E715Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E715Cu) { return; }
    ctx->pc = 0x1E715Cu;
label_1e715c:
    // 0x1e715c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e715cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7160: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e7160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7164: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e7164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e7168: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e716c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e716cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7170: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1e7170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7174: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7174u;
    SET_GPR_U32(ctx, 31, 0x1E717Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E717Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E717Cu) { return; }
    ctx->pc = 0x1E717Cu;
label_1e717c:
    // 0x1e717c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e717cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7180: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e7180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7184: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e7184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e7188: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7188u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e718c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e718cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7190: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1e7190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e7194: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7194u;
    SET_GPR_U32(ctx, 31, 0x1E719Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E719Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E719Cu) { return; }
    ctx->pc = 0x1E719Cu;
label_1e719c:
    // 0x1e719c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e719cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e71a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e71a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e71a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e71a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e71a8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e71a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e71ac: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1e71acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e71b0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E71B0u;
    SET_GPR_U32(ctx, 31, 0x1E71B8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E71B8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E71B8u) { return; }
    ctx->pc = 0x1E71B8u;
label_1e71b8:
    // 0x1e71b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e71b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e71bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e71bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e71c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e71c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e71c4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1e71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e71c8: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e71c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e71cc: 0x0  nop
    ctx->pc = 0x1e71ccu;
    // NOP
    ctx->pc = 0x1e71d0u;
}
