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

// Function: entry_001faa34
// Address: 0x1faa34 - 0x1fab0c
void entry_001faa34_0x1faa34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faa34_0x1faa34");
#endif

    switch (ctx->pc) {
        case 0x1faaa4u: goto label_1faaa4;
        default: break;
    }

    ctx->pc = 0x1faa34u;

    // 0x1faa34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1faa34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa38: 0x0  nop
    ctx->pc = 0x1faa38u;
    // NOP
    // 0x1faa3c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1faa3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1faa40: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x1faa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x1faa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa48: 0x0  nop
    ctx->pc = 0x1faa48u;
    // NOP
    // 0x1faa4c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1faa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1faa50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1faa50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa54: 0x0  nop
    ctx->pc = 0x1faa54u;
    // NOP
    // 0x1faa58: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1faa58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1faa5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1faa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1faa60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faa60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faa64: 0x0  nop
    ctx->pc = 0x1faa64u;
    // NOP
    // 0x1faa68: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1faa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1faa6c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1faa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1faa70: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1faa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x1faa74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1faa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1faa78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1faa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faa7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1faa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1faa80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1faa80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1faa84: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x1faa84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x1faa88: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1faa88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1faa8c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1faa8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1faa90: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1faa90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1faa94: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1faa94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1faa98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1faa98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faa9c: 0xc086488  jal         func_219220
    ctx->pc = 0x1FAA9Cu;
    SET_GPR_U32(ctx, 31, 0x1FAAA4u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x1FAA9Cu, 0x1FAAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAAA4u;
label_1faaa4:
    // 0x1faaa4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1faaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faaa8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1faaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1faaac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faaacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faab0: 0x0  nop
    ctx->pc = 0x1faab0u;
    // NOP
    // 0x1faab4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1faab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1faab8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1faab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1faabc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1faabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faac0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1faac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1faac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faac8: 0x0  nop
    ctx->pc = 0x1faac8u;
    // NOP
    // 0x1faacc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1faaccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1faad0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1faad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1faad4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1faad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1faad8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1faad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x1faadc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1faadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1faae0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1faae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faae4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1faae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1faae8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1faae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1faaec: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x1faaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x1faaf0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1faaf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1faaf4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1faaf4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1faaf8: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1faaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1faafc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1faafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fab00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1fab00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fab04: 0xc086488  jal         func_219220
    ctx->pc = 0x1FAB04u;
    SET_GPR_U32(ctx, 31, 0x1FAB0Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x1FAB04u, 0x1FAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAB0Cu;
}
