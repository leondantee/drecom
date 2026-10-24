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

// Function: entry_0013e95c
// Address: 0x13e95c - 0x13e9d8
void entry_0013e95c_0x13e95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e95c_0x13e95c");
#endif

    switch (ctx->pc) {
        case 0x13e9b0u: goto label_13e9b0;
        case 0x13e9d4u: goto label_13e9d4;
        default: break;
    }

    ctx->pc = 0x13e95cu;

    // 0x13e95c: 0x8fa416b0  lw          $a0, 0x16B0($sp)
    ctx->pc = 0x13e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13e960: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x13e960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13e964: 0x8fa21668  lw          $v0, 0x1668($sp)
    ctx->pc = 0x13e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13e968: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x13e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13e96c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x13e96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x13e970: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x13e970u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13e974: 0x8fa216b0  lw          $v0, 0x16B0($sp)
    ctx->pc = 0x13e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5808)));
    // 0x13e978: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13e978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e97c: 0x8fa51668  lw          $a1, 0x1668($sp)
    ctx->pc = 0x13e97cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5736)));
    // 0x13e980: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x13e980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13e984: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x13e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x13e988: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x13e988u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13e98c: 0xafa01680  sw          $zero, 0x1680($sp)
    ctx->pc = 0x13e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 0));
    // 0x13e990: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x13e990u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13e994: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x13e994u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13e998: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x13e998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13e99c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13e99cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13e9a0: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x13e9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x13e9a4: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x13e9a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x13e9a8: 0xc04f96c  jal         func_13E5B0
    ctx->pc = 0x13E9A8u;
    SET_GPR_U32(ctx, 31, 0x13E9B0u);
    ctx->pc = 0x13E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5B0u, 0x13E9A8u, 0x13E9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9B0u;
label_13e9b0:
    // 0x13e9b0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x13e9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9b4: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x13e9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x13e9b8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x13e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9bc: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x13e9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x13e9c0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x13e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e9c4: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x13e9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x13e9c8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x13e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x13e9cc: 0xc04f978  jal         func_13E5E0
    ctx->pc = 0x13E9CCu;
    SET_GPR_U32(ctx, 31, 0x13E9D4u);
    ctx->pc = 0x13E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5E0u, 0x13E9CCu, 0x13E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E9D4u;
label_13e9d4:
    // 0x13e9d4: 0x0  nop
    ctx->pc = 0x13e9d4u;
    // NOP
    ctx->pc = 0x13e9d8u;
}
