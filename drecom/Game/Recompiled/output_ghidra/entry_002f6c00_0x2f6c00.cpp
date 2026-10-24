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

// Function: entry_002f6c00
// Address: 0x2f6c00 - 0x2f6c8c
void entry_002f6c00_0x2f6c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6c00_0x2f6c00");
#endif

    switch (ctx->pc) {
        case 0x2f6c08u: goto label_2f6c08;
        case 0x2f6c68u: goto label_2f6c68;
        default: break;
    }

    ctx->pc = 0x2f6c00u;

    // 0x2f6c00: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F6C00u;
    SET_GPR_U32(ctx, 31, 0x2F6C08u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F6C00u, 0x2F6C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C08u;
label_2f6c08:
    // 0x2f6c08: 0x3c0640a0  lui         $a2, 0x40A0
    ctx->pc = 0x2f6c08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16544 << 16));
    // 0x2f6c0c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2f6c0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6c10: 0x0  nop
    ctx->pc = 0x2f6c10u;
    // NOP
    // 0x2f6c14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f6c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f6c18: 0x3c044234  lui         $a0, 0x4234
    ctx->pc = 0x2f6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16948 << 16));
    // 0x2f6c1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f6c1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6c20: 0x0  nop
    ctx->pc = 0x2f6c20u;
    // NOP
    // 0x2f6c24: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f6c24u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f6c28: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2f6c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2f6c2c: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x2f6c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c30: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f6c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f6c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f6c38: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2f6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6c3c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f6c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f6c40: 0x8d0400c4  lw          $a0, 0xC4($t0)
    ctx->pc = 0x2f6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 196)));
    // 0x2f6c44: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2f6c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2f6c48: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f6c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6c4c: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f6c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f6c50: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2f6c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f6c54: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f6c54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6c58: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f6c58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f6c5c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f6c5cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f6c60: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F6C60u;
    SET_GPR_U32(ctx, 31, 0x2F6C68u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F6C60u, 0x2F6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C68u;
label_2f6c68:
    // 0x2f6c68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2f6c68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f6c6c: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f6c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f6c70: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c74: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x2f6c74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6c78: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2f6c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f6c7c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6c80: 0xa0640101  sb          $a0, 0x101($v1)
    ctx->pc = 0x2f6c80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 257), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f6c84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6C84u;
    {
        const bool branch_taken_0x2f6c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6c84) {
            ctx->pc = 0x2F6CA0u;
            return;
        }
    }
    ctx->pc = 0x2F6C8Cu;
}
