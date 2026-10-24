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

// Function: entry_002daa50
// Address: 0x2daa50 - 0x2dac70
void entry_002daa50_0x2daa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002daa50_0x2daa50");
#endif

    switch (ctx->pc) {
        case 0x2daa80u: goto label_2daa80;
        case 0x2daafcu: goto label_2daafc;
        case 0x2dab78u: goto label_2dab78;
        case 0x2dabf4u: goto label_2dabf4;
        default: break;
    }

    ctx->pc = 0x2daa50u;

    // 0x2daa50: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x2daa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2daa54: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x2daa54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x2daa58: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2daa58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2daa5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2daa5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa60: 0x0  nop
    ctx->pc = 0x2daa60u;
    // NOP
    // 0x2daa64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2daa64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2daa68: 0x0  nop
    ctx->pc = 0x2daa68u;
    // NOP
    // 0x2daa6c: 0x45010080  bc1t        . + 4 + (0x80 << 2)
    ctx->pc = 0x2DAA6Cu;
    {
        const bool branch_taken_0x2daa6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2daa6c) {
            ctx->pc = 0x2DAC70u;
            return;
        }
    }
    ctx->pc = 0x2DAA74u;
    // 0x2daa74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2daa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2daa78: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DAA78u;
    SET_GPR_U32(ctx, 31, 0x2DAA80u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DAA78u, 0x2DAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAA80u;
label_2daa80:
    // 0x2daa80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daa80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa84: 0x0  nop
    ctx->pc = 0x2daa84u;
    // NOP
    // 0x2daa88: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2daa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2daa8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daa8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa90: 0x0  nop
    ctx->pc = 0x2daa90u;
    // NOP
    // 0x2daa94: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2daa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2daa98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daa98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daa9c: 0x0  nop
    ctx->pc = 0x2daa9cu;
    // NOP
    // 0x2daaa0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2daaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2daaa4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2daaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2daaa8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2daaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2daaac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2daaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2daab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2daab4: 0x0  nop
    ctx->pc = 0x2daab4u;
    // NOP
    // 0x2daab8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2daab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2daabc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2daabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2daac0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2daac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2daac4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2daac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2daac8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2daac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2daacc: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2daaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2daad0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2daad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2daad4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2daad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2daad8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2daad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2daadc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2daadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2daae0: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2daae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2daae4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2daae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2daae8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2daae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2daaec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2daaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2daaf0: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2daaf0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2daaf4: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DAAF4u;
    SET_GPR_U32(ctx, 31, 0x2DAAFCu);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DAAF4u, 0x2DAAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAAFCu;
label_2daafc:
    // 0x2daafc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2daafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab00: 0x0  nop
    ctx->pc = 0x2dab00u;
    // NOP
    // 0x2dab04: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2dab04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dab08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dab08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab0c: 0x0  nop
    ctx->pc = 0x2dab0cu;
    // NOP
    // 0x2dab10: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2dab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2dab14: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2dab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2dab18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dab18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dab1c: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2dab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dab20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dab20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dab24: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dab24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dab28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dab28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dab2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dab2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab30: 0x0  nop
    ctx->pc = 0x2dab30u;
    // NOP
    // 0x2dab34: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dab34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2dab38: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dab3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dab3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dab40: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2dab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2dab44: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dab44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dab48: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2dab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2dab4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dab4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dab50: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dab54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dab54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dab58: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2dab58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dab5c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2dab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2dab60: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dab60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dab64: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2dab64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dab68: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dab68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dab6c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dab6cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dab70: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DAB70u;
    SET_GPR_U32(ctx, 31, 0x2DAB78u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DAB70u, 0x2DAB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAB78u;
label_2dab78:
    // 0x2dab78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dab78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab7c: 0x0  nop
    ctx->pc = 0x2dab7cu;
    // NOP
    // 0x2dab80: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2dab80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dab84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dab84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dab88: 0x0  nop
    ctx->pc = 0x2dab88u;
    // NOP
    // 0x2dab8c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2dab8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2dab90: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2dab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2dab94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dab94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dab98: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2dab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dab9c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dab9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2daba0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2daba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2daba4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2daba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2daba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dabac: 0x0  nop
    ctx->pc = 0x2dabacu;
    // NOP
    // 0x2dabb0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dabb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2dabb4: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2dabb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2dabb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dabb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dabbc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dabc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dabc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dabc4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dabc8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dabc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dabcc: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2dabccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2dabd0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dabd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dabd4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2dabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dabd8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2dabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2dabdc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dabdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dabe0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2dabe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dabe4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dabe4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dabe8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dabe8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dabec: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DABECu;
    SET_GPR_U32(ctx, 31, 0x2DABF4u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DABECu, 0x2DABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DABF4u;
label_2dabf4:
    // 0x2dabf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dabf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dabf8: 0x0  nop
    ctx->pc = 0x2dabf8u;
    // NOP
    // 0x2dabfc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2dabfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dac00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dac00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dac04: 0x0  nop
    ctx->pc = 0x2dac04u;
    // NOP
    // 0x2dac08: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2dac08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2dac0c: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x2dac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x2dac10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dac10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dac14: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2dac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dac18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2dac18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2dac1c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2dac1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dac20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dac24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dac24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dac28: 0x0  nop
    ctx->pc = 0x2dac28u;
    // NOP
    // 0x2dac2c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x2dac2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2dac30: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2dac30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2dac34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dac34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dac38: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dac3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dac3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dac40: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2dac40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2dac44: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2dac44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dac48: 0x3c02425c  lui         $v0, 0x425C
    ctx->pc = 0x2dac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16988 << 16));
    // 0x2dac4c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dac4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2dac50: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2dac50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2dac54: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2dac54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2dac58: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2dac58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dac5c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2dac5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dac60: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2dac60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dac64: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x2dac64u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dac68: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2DAC68u;
    SET_GPR_U32(ctx, 31, 0x2DAC70u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2DAC68u, 0x2DAC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAC70u;
}
