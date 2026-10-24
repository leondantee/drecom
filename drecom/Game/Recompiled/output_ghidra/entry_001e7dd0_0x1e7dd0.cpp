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

// Function: entry_001e7dd0
// Address: 0x1e7dd0 - 0x1e7e60
void entry_001e7dd0_0x1e7dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7dd0_0x1e7dd0");
#endif

    switch (ctx->pc) {
        case 0x1e7df0u: goto label_1e7df0;
        case 0x1e7e14u: goto label_1e7e14;
        case 0x1e7e30u: goto label_1e7e30;
        case 0x1e7e48u: goto label_1e7e48;
        default: break;
    }

    ctx->pc = 0x1e7dd0u;

    // 0x1e7dd0: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1e7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7dd4: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1e7dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1e7dd8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e7dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7ddc: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e7ddcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7de0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7de4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x1e7de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1e7de8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7DE8u;
    SET_GPR_U32(ctx, 31, 0x1E7DF0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7DF0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7DF0u) { return; }
    ctx->pc = 0x1E7DF0u;
label_1e7df0:
    // 0x1e7df0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e7df0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7df4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e7df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7df8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e7df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e7dfc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e7dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7e00: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e7e00u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7e04: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7e08: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1e7e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7e0c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E7E14u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7E14u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7E14u) { return; }
    ctx->pc = 0x1E7E14u;
label_1e7e14:
    // 0x1e7e14: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e7e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7e18: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e7e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e7e1c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7e20: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7e20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7e24: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1e7e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x1e7e28: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7E28u;
    SET_GPR_U32(ctx, 31, 0x1E7E30u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7E30u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7E30u) { return; }
    ctx->pc = 0x1E7E30u;
label_1e7e30:
    // 0x1e7e30: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7e34: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7e34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7e38: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7e38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7e3c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1e7e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e7e40: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7E40u;
    SET_GPR_U32(ctx, 31, 0x1E7E48u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7E48u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7E48u) { return; }
    ctx->pc = 0x1E7E48u;
label_1e7e48:
    // 0x1e7e48: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1e7e48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7e4c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7e50: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e7e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7e54: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1e7e54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7e58: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x1e7e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e7e5c: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x1e7e5cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1e7e60u;
}
