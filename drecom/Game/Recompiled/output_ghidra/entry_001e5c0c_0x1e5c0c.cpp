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

// Function: entry_001e5c0c
// Address: 0x1e5c0c - 0x1e5c90
void entry_001e5c0c_0x1e5c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5c0c_0x1e5c0c");
#endif

    switch (ctx->pc) {
        case 0x1e5c50u: goto label_1e5c50;
        case 0x1e5c64u: goto label_1e5c64;
        default: break;
    }

    ctx->pc = 0x1e5c0cu;

    // 0x1e5c0c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x1e5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e5c10: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1e5c10u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e5c14: 0x96300000  lhu         $s0, 0x0($s1)
    ctx->pc = 0x1e5c14u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e5c18: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1e5c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1e5c1c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1e5c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5c20: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x1e5c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5c24: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1e5c24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1e5c28: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5c2c: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x1e5c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1e5c30: 0x2f03021  addu        $a2, $s7, $s0
    ctx->pc = 0x1e5c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1e5c34: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x1e5c34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e5c38: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1e5c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1e5c3c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1e5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1e5c40: 0x2e33821  addu        $a3, $s7, $v1
    ctx->pc = 0x1e5c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5c44: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1e5c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e5c48: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x1E5C48u;
    SET_GPR_U32(ctx, 31, 0x1E5C50u);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x1E5C48u, 0x1E5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5C50u;
label_1e5c50:
    // 0x1e5c50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e5c50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5c54: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1e5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e5c58: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x1e5c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1e5c5c: 0xc040c1a  jal         func_103068
    ctx->pc = 0x1E5C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E5C64u);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x1E5C64u;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E5C64u) { return; }
    ctx->pc = 0x1E5C64u;
label_1e5c64:
    // 0x1e5c64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1e5c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5c68: 0x0  nop
    ctx->pc = 0x1e5c68u;
    // NOP
    // 0x1e5c6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e5c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5c70: 0x0  nop
    ctx->pc = 0x1e5c70u;
    // NOP
    // 0x1e5c74: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5C74u;
    {
        const bool branch_taken_0x1e5c74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5c74) {
            ctx->pc = 0x1E5C90u;
            return;
        }
    }
    ctx->pc = 0x1E5C7Cu;
    // 0x1e5c7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5c80: 0x27d9021  addu        $s2, $s3, $sp
    ctx->pc = 0x1e5c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e5c84: 0xa24301b0  sb          $v1, 0x1B0($s2)
    ctx->pc = 0x1e5c84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 432), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5c88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5C88u;
    {
        const bool branch_taken_0x1e5c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c88) {
            ctx->pc = 0x1E5CA8u;
            return;
        }
    }
    ctx->pc = 0x1E5C90u;
}
