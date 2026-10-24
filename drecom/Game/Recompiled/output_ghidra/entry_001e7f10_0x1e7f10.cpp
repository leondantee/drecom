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

// Function: entry_001e7f10
// Address: 0x1e7f10 - 0x1e7fa8
void entry_001e7f10_0x1e7f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7f10_0x1e7f10");
#endif

    switch (ctx->pc) {
        case 0x1e7f30u: goto label_1e7f30;
        case 0x1e7f54u: goto label_1e7f54;
        case 0x1e7f74u: goto label_1e7f74;
        case 0x1e7f90u: goto label_1e7f90;
        default: break;
    }

    ctx->pc = 0x1e7f10u;

    // 0x1e7f10: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1e7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e7f14: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1e7f14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x1e7f18: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7f1c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7f1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7f20: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1e7f24: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1e7f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e7f28: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7F28u;
    SET_GPR_U32(ctx, 31, 0x1E7F30u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7F30u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7F30u) { return; }
    ctx->pc = 0x1E7F30u;
label_1e7f30:
    // 0x1e7f30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e7f30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7f34: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1e7f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7f38: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1e7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1e7f3c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1e7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7f40: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1e7f40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7f44: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7f44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7f48: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e7f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e7f4c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E7F54u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7F54u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7F54u) { return; }
    ctx->pc = 0x1E7F54u;
label_1e7f54:
    // 0x1e7f54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7f54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7f58: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e7f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e7f5c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e7f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e7f60: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7f64: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7f64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7f68: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1e7f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x1e7f6c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7F6Cu;
    SET_GPR_U32(ctx, 31, 0x1E7F74u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7F74u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7F74u) { return; }
    ctx->pc = 0x1E7F74u;
label_1e7f74:
    // 0x1e7f74: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7f74u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7f78: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7f7c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7f80: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1e7f80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7f84: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x1e7f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1e7f88: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1E7F88u;
    SET_GPR_U32(ctx, 31, 0x1E7F90u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1E7F90u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E7F90u) { return; }
    ctx->pc = 0x1E7F90u;
label_1e7f90:
    // 0x1e7f90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e7f90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e7f94: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e7f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e7f98: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1e7f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e7f9c: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1e7f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1e7fa0: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x1e7fa0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7fa4: 0x0  nop
    ctx->pc = 0x1e7fa4u;
    // NOP
    ctx->pc = 0x1e7fa8u;
}
