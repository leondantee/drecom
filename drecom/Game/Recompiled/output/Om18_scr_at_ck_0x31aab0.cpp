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

// Function: Om18_scr_at_ck
// Address: 0x31aab0 - 0x31abb8
void Om18_scr_at_ck_0x31aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om18_scr_at_ck_0x31aab0");
#endif

    switch (ctx->pc) {
        case 0x31ab60u: goto label_31ab60;
        default: break;
    }

    ctx->pc = 0x31aab0u;

    // 0x31aab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31aab4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x31aab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x31aab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31aabc: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x31aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x31aac0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aac4: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x31aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x31aac8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31aac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31aacc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x31aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31aad0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31aad0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31aad4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31aad8: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31aadc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31aadcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31aae0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x31aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31aae4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31aae4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31aae8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x31aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31aaec: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x31aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x31aaf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31aaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31aaf4: 0x0  nop
    ctx->pc = 0x31aaf4u;
    // NOP
    // 0x31aaf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31aaf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31aafc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x31aafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x31ab00: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x31ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ab04: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x31ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x31ab08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ab08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ab0c: 0x0  nop
    ctx->pc = 0x31ab0cu;
    // NOP
    // 0x31ab10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31ab10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31ab14: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x31ab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x31ab18: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x31ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ab1c: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x31ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x31ab20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ab20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ab24: 0x0  nop
    ctx->pc = 0x31ab24u;
    // NOP
    // 0x31ab28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31ab28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31ab2c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x31ab2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31ab30: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x31ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31ab34: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x31ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x31ab38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ab38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ab3c: 0x0  nop
    ctx->pc = 0x31ab3cu;
    // NOP
    // 0x31ab40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31ab40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31ab44: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x31ab44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x31ab48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x31ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31ab4c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x31ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31ab50: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x31ab50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31ab54: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x31ab54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x31ab58: 0xc059e1c  jal         func_167870
    ctx->pc = 0x31AB58u;
    SET_GPR_U32(ctx, 31, 0x31AB60u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x31AB58u, 0x31AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AB60u;
label_31ab60:
    // 0x31ab60: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31ab60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31ab64: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x31AB64u;
    {
        const bool branch_taken_0x31ab64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ab64) {
            ctx->pc = 0x31ABA0u;
            goto label_31aba0;
        }
    }
    ctx->pc = 0x31AB6Cu;
    // 0x31ab6c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x31ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31ab70: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31ab70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ab74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31ab78: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x31ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31ab7c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31ab80: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x31ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x31ab84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31ab84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ab88: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31ab8c: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x31ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x31ab90: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31ab90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31ab94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ab98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31AB98u;
    {
        const bool branch_taken_0x31ab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ab98) {
            ctx->pc = 0x31ABA4u;
            goto label_31aba4;
        }
    }
    ctx->pc = 0x31ABA0u;
label_31aba0:
    // 0x31aba0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x31aba0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_31aba4:
    // 0x31aba4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x31aba4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31aba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31aba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31abac: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x31abacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31abb0: 0x3e00008  jr          $ra
    ctx->pc = 0x31ABB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ABB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31ABB8u;
}
