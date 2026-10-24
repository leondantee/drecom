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

// Function: entry_002f8a18
// Address: 0x2f8a18 - 0x2f8ab8
void entry_002f8a18_0x2f8a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f8a18_0x2f8a18");
#endif

    switch (ctx->pc) {
        case 0x2f8a20u: goto label_2f8a20;
        case 0x2f8a98u: goto label_2f8a98;
        default: break;
    }

    ctx->pc = 0x2f8a18u;

    // 0x2f8a18: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F8A18u;
    SET_GPR_U32(ctx, 31, 0x2F8A20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F8A18u, 0x2F8A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A20u;
label_2f8a20:
    // 0x2f8a20: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x2f8a20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x2f8a24: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2f8a24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8a28: 0x0  nop
    ctx->pc = 0x2f8a28u;
    // NOP
    // 0x2f8a2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f8a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8a30: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f8a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f8a34: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f8a34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f8a38: 0x0  nop
    ctx->pc = 0x2f8a38u;
    // NOP
    // 0x2f8a3c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f8a3cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f8a40: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f8a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f8a44: 0x8fac0048  lw          $t4, 0x48($sp)
    ctx->pc = 0x2f8a44u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8a48: 0x26090009  addiu       $t1, $s0, 0x9
    ctx->pc = 0x2f8a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
    // 0x2f8a4c: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x2f8a4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8a50: 0x260a000b  addiu       $t2, $s0, 0xB
    ctx->pc = 0x2f8a50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 11));
    // 0x2f8a54: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2f8a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2f8a58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f8a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f8a5c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f8a60: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f8a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f8a64: 0x8d8400c4  lw          $a0, 0xC4($t4)
    ctx->pc = 0x2f8a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 196)));
    // 0x2f8a68: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2f8a68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f8a6c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2f8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2f8a70: 0x24661a90  addiu       $a2, $v1, 0x1A90
    ctx->pc = 0x2f8a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 6800));
    // 0x2f8a74: 0x8d6700c4  lw          $a3, 0xC4($t3)
    ctx->pc = 0x2f8a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 196)));
    // 0x2f8a78: 0x71404628  paddub      $t0, $t2, $zero
    ctx->pc = 0x2f8a78u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2f8a7c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2f8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2f8a80: 0x24491a90  addiu       $t1, $v0, 0x1A90
    ctx->pc = 0x2f8a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 6800));
    // 0x2f8a84: 0x3c0b003b  lui         $t3, 0x3B
    ctx->pc = 0x2f8a84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)59 << 16));
    // 0x2f8a88: 0x256a1a80  addiu       $t2, $t3, 0x1A80
    ctx->pc = 0x2f8a88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 6784));
    // 0x2f8a8c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f8a8cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f8a90: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F8A90u;
    SET_GPR_U32(ctx, 31, 0x2F8A98u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F8A90u, 0x2F8A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8A98u;
label_2f8a98:
    // 0x2f8a98: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2f8a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f8a9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8aa0: 0xa0680100  sb          $t0, 0x100($v1)
    ctx->pc = 0x2f8aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f8aa4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2f8aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f8aa8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2f8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f8aac: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f8aacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f8ab0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2F8AB0u;
    {
        const bool branch_taken_0x2f8ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8ab0) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F8AB8u;
}
