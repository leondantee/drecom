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

// Function: Keep_round_pi
// Address: 0x325bc0 - 0x325c7c
void Keep_round_pi_0x325bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Keep_round_pi_0x325bc0");
#endif

    switch (ctx->pc) {
        case 0x325bf8u: goto label_325bf8;
        default: break;
    }

    ctx->pc = 0x325bc0u;

    // 0x325bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x325bc4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x325bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x325bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x325bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x325bcc: 0xe7ac0038  swc1        $f12, 0x38($sp)
    ctx->pc = 0x325bccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x325bd0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x325bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x325bd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x325bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x325bd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325bdc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x325bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325be0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x325be0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x325be4: 0x0  nop
    ctx->pc = 0x325be4u;
    // NOP
    // 0x325be8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x325be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x325bec: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x325becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325bf0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x325BF0u;
    SET_GPR_U32(ctx, 31, 0x325BF8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x325BF0u, 0x325BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BF8u;
label_325bf8:
    // 0x325bf8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x325bf8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x325bfc: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x325bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x325c00: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x325c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x325c04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x325c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x325c08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325c0c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x325c0cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325c10: 0x0  nop
    ctx->pc = 0x325c10u;
    // NOP
    // 0x325c14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x325c14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325c18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325c1c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x325c1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x325c20: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x325c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x325c24: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x325c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325c28: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x325c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x325c2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x325c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x325c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325c34: 0x0  nop
    ctx->pc = 0x325c34u;
    // NOP
    // 0x325c38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x325c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x325c3c: 0x0  nop
    ctx->pc = 0x325c3cu;
    // NOP
    // 0x325c40: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x325C40u;
    {
        const bool branch_taken_0x325c40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x325c40) {
            ctx->pc = 0x325C64u;
            goto label_325c64;
        }
    }
    ctx->pc = 0x325C48u;
    // 0x325c48: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x325c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x325c4c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x325c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x325c50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x325c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x325c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325c58: 0x0  nop
    ctx->pc = 0x325c58u;
    // NOP
    // 0x325c5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x325c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x325c60: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x325c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_325c64:
    // 0x325c64: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x325c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325c68: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x325c68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x325c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325c70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x325c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x325c74: 0x3e00008  jr          $ra
    ctx->pc = 0x325C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325C7Cu;
}
