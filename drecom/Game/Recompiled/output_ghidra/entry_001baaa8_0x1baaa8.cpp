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

// Function: entry_001baaa8
// Address: 0x1baaa8 - 0x1babc0
void entry_001baaa8_0x1baaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baaa8_0x1baaa8");
#endif

    switch (ctx->pc) {
        case 0x1baabcu: goto label_1baabc;
        case 0x1baad0u: goto label_1baad0;
        case 0x1baae4u: goto label_1baae4;
        case 0x1baaf4u: goto label_1baaf4;
        case 0x1bab18u: goto label_1bab18;
        case 0x1bab68u: goto label_1bab68;
        case 0x1bab80u: goto label_1bab80;
        default: break;
    }

    ctx->pc = 0x1baaa8u;

    // 0x1baaa8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1baaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1baaac: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1baaacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1baab0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1baab0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1baab4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BAAB4u;
    SET_GPR_U32(ctx, 31, 0x1BAABCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BAAB4u, 0x1BAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAABCu;
label_1baabc:
    // 0x1baabc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1baabcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1baac0: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x1baac0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1baac4: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1baac4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1baac8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BAAC8u;
    SET_GPR_U32(ctx, 31, 0x1BAAD0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BAAC8u, 0x1BAAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAAD0u;
label_1baad0:
    // 0x1baad0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1baad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1baad4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1baad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1baad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1baad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1baadc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BAADCu;
    SET_GPR_U32(ctx, 31, 0x1BAAE4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BAADCu, 0x1BAAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAAE4u;
label_1baae4:
    // 0x1baae4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1baae4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1baae8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1baae8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1baaec: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BAAECu;
    SET_GPR_U32(ctx, 31, 0x1BAAF4u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BAAECu, 0x1BAAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAAF4u;
label_1baaf4:
    // 0x1baaf4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1baaf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1baaf8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1baaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1baafc: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1baafcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bab00: 0x24c80120  addiu       $t0, $a2, 0x120
    ctx->pc = 0x1bab00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 288));
    // 0x1bab04: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1bab04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1bab08: 0x24e212c0  addiu       $v0, $a3, 0x12C0
    ctx->pc = 0x1bab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4800));
    // 0x1bab0c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1bab0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bab10: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1BAB10u;
    SET_GPR_U32(ctx, 31, 0x1BAB18u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1BAB10u, 0x1BAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB18u;
label_1bab18:
    // 0x1bab18: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bab18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1bab1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bab20: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1bab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bab24: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1bab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1bab28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bab2c: 0x0  nop
    ctx->pc = 0x1bab2cu;
    // NOP
    // 0x1bab30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1bab30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bab34: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1bab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bab38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bab38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bab3c: 0x0  nop
    ctx->pc = 0x1bab3cu;
    // NOP
    // 0x1bab40: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1BAB40u;
    {
        const bool branch_taken_0x1bab40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bab40) {
            ctx->pc = 0x1BABC0u;
            return;
        }
    }
    ctx->pc = 0x1BAB48u;
    // 0x1bab48: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bab48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bab4c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bab50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bab54: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x1bab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x1bab58: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1bab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1bab5c: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1bab5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1bab60: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1BAB60u;
    SET_GPR_U32(ctx, 31, 0x1BAB68u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1BAB60u, 0x1BAB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB68u;
label_1bab68:
    // 0x1bab68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bab68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bab6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bab70: 0xc46c1b40  lwc1        $f12, 0x1B40($v1)
    ctx->pc = 0x1bab70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bab74: 0xc44d1b48  lwc1        $f13, 0x1B48($v0)
    ctx->pc = 0x1bab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bab78: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1BAB78u;
    SET_GPR_U32(ctx, 31, 0x1BAB80u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1BAB78u, 0x1BAB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB80u;
label_1bab80:
    // 0x1bab80: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bab84: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1bab84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1bab88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bab8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bab90: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bab90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bab94: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x1bab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1bab98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1bab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bab9c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1bab9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1baba0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1baba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1baba4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1baba4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1baba8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1baba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1babac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1babacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1babb0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1babb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1babb4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1babb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1babb8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1BABB8u;
    {
        const bool branch_taken_0x1babb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1babb8) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BABC0u;
}
