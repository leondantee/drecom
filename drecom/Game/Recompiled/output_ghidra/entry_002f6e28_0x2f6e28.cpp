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

// Function: entry_002f6e28
// Address: 0x2f6e28 - 0x2f6eb4
void entry_002f6e28_0x2f6e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6e28_0x2f6e28");
#endif

    switch (ctx->pc) {
        case 0x2f6e30u: goto label_2f6e30;
        case 0x2f6e90u: goto label_2f6e90;
        default: break;
    }

    ctx->pc = 0x2f6e28u;

    // 0x2f6e28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6E28u;
    SET_GPR_U32(ctx, 31, 0x2F6E30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6E28u, 0x2F6E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E30u;
label_2f6e30:
    // 0x2f6e30: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6e34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f6e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6e38: 0x0  nop
    ctx->pc = 0x2f6e38u;
    // NOP
    // 0x2f6e3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6e40: 0x3c074234  lui         $a3, 0x4234
    ctx->pc = 0x2f6e40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6e44: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2f6e44u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6e48: 0x0  nop
    ctx->pc = 0x2f6e48u;
    // NOP
    // 0x2f6e4c: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6e4cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6e50: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6e54: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f6e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6e58: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2f6e58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6e5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6e60: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6e64: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f6e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6e68: 0x8ca400c4  lw          $a0, 0xC4($a1)
    ctx->pc = 0x2f6e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x2f6e6c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2f6e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6e70: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f6e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6e74: 0x8d0700c4  lw          $a3, 0xC4($t0)
    ctx->pc = 0x2f6e74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2f6e78: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2f6e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f6e7c: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6e7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6e80: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6e80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6e84: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6e84u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6e88: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6E88u;
    SET_GPR_U32(ctx, 31, 0x2F6E90u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6E88u, 0x2F6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6E90u;
label_2f6e90:
    // 0x2f6e90: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x2f6e90u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6e94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6e98: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6e9c: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2f6e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6ea0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2f6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6ea4: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f6ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6ea8: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f6ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f6eac: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2F6EACu;
    {
        const bool branch_taken_0x2f6eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6eac) {
            ctx->pc = 0x2F706Cu;
            return;
        }
    }
    ctx->pc = 0x2F6EB4u;
}
