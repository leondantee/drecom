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

// Function: entry_00190c30
// Address: 0x190c30 - 0x190cb8
void entry_00190c30_0x190c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190c30_0x190c30");
#endif

    switch (ctx->pc) {
        case 0x190c54u: goto label_190c54;
        default: break;
    }

    ctx->pc = 0x190c30u;

    // 0x190c30: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190c34: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x190c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c38: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190c3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c40: 0x246400a0  addiu       $a0, $v1, 0xA0
    ctx->pc = 0x190c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x190c44: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x190c44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x190c48: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x190c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x190c4c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x190C4Cu;
    SET_GPR_U32(ctx, 31, 0x190C54u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x190C54u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190C54u) { return; }
    ctx->pc = 0x190C54u;
label_190c54:
    // 0x190c54: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190c58: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c5c: 0xc44000ac  lwc1        $f0, 0xAC($v0)
    ctx->pc = 0x190c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190c60: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x190c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x190c64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c68: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x190c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x190c6c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x190c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x190c70: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c74: 0xc4410160  lwc1        $f1, 0x160($v0)
    ctx->pc = 0x190c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190c78: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x190c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x190c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190c80: 0x0  nop
    ctx->pc = 0x190c80u;
    // NOP
    // 0x190c84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190c88: 0x0  nop
    ctx->pc = 0x190c88u;
    // NOP
    // 0x190c8c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x190C8Cu;
    {
        const bool branch_taken_0x190c8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190c8c) {
            ctx->pc = 0x190CB8u;
            return;
        }
    }
    ctx->pc = 0x190C94u;
    // 0x190c94: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x190c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x190c98: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190c9c: 0xc4410160  lwc1        $f1, 0x160($v0)
    ctx->pc = 0x190c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190ca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x190ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x190ca4: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x190ca4u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190ca8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190cac: 0x0  nop
    ctx->pc = 0x190cacu;
    // NOP
    // 0x190cb0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x190CB0u;
    {
        const bool branch_taken_0x190cb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190cb0) {
            ctx->pc = 0x190CC4u;
            return;
        }
    }
    ctx->pc = 0x190CB8u;
}
