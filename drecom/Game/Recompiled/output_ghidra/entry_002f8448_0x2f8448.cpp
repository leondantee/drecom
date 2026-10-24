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

// Function: entry_002f8448
// Address: 0x2f8448 - 0x2f84e8
void entry_002f8448_0x2f8448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8448_0x2f8448");
#endif

    switch (ctx->pc) {
        case 0x2f8450u: goto label_2f8450;
        case 0x2f84c4u: goto label_2f84c4;
        default: break;
    }

    ctx->pc = 0x2f8448u;

    // 0x2f8448: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8448u;
    SET_GPR_U32(ctx, 31, 0x2F8450u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8448u, 0x2F8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8450u;
label_2f8450:
    // 0x2f8450: 0x3c0740a0  lui         $a3, 0x40A0
    ctx->pc = 0x2f8450u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8454: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2f8454u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8458: 0x0  nop
    ctx->pc = 0x2f8458u;
    // NOP
    // 0x2f845c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f845cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8460: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2f8460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2f8464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f8464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8468: 0x0  nop
    ctx->pc = 0x2f8468u;
    // NOP
    // 0x2f846c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f846cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f8470: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f8474: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f8474u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8478: 0x2602000a  addiu       $v0, $s0, 0xA
    ctx->pc = 0x2f8478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x2f847c: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x2f847cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8480: 0x2608000a  addiu       $t0, $s0, 0xA
    ctx->pc = 0x2f8480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x2f8484: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x2f8484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x2f8488: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2f8488u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f848c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f848cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8490: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f8494: 0x8d2400c4  lw          $a0, 0xC4($t1)
    ctx->pc = 0x2f8494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x2f8498: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f8498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f849c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f849cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f84a0: 0x24661a80  addiu       $a2, $v1, 0x1A80
    ctx->pc = 0x2f84a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f84a4: 0x8d4700c4  lw          $a3, 0xC4($t2)
    ctx->pc = 0x2f84a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 196)));
    // 0x2f84a8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f84a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f84ac: 0x24691a90  addiu       $t1, $v1, 0x1A90
    ctx->pc = 0x2f84acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 6800));
    // 0x2f84b0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f84b4: 0x246a1a80  addiu       $t2, $v1, 0x1A80
    ctx->pc = 0x2f84b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
    // 0x2f84b8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f84b8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f84bc: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F84BCu;
    SET_GPR_U32(ctx, 31, 0x2F84C4u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F84BCu, 0x2F84C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84C4u;
label_2f84c4:
    // 0x2f84c4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f84c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f84c8: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f84c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f84cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f84d0: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f84d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f84d4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f84d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f84dc: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f84dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f84e0: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x2F84E0u;
    {
        const bool branch_taken_0x2f84e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f84e0) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F84E8u;
}
