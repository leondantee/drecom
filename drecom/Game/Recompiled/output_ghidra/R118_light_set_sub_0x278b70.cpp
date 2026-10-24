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

// Function: R118_light_set_sub
// Address: 0x278b70 - 0x278d50
void R118_light_set_sub_0x278b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R118_light_set_sub_0x278b70");
#endif

    switch (ctx->pc) {
        case 0x278be0u: goto label_278be0;
        case 0x278bfcu: goto label_278bfc;
        case 0x278c0cu: goto label_278c0c;
        default: break;
    }

    ctx->pc = 0x278b70u;

    // 0x278b70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x278b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x278b74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x278b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x278b78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278b7c: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x278b7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x278b80: 0xe7ad0058  swc1        $f13, 0x58($sp)
    ctx->pc = 0x278b80u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x278b84: 0xe7ae0060  swc1        $f14, 0x60($sp)
    ctx->pc = 0x278b84u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x278b88: 0xe7af0068  swc1        $f15, 0x68($sp)
    ctx->pc = 0x278b88u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x278b8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x278b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x278b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278b94: 0x0  nop
    ctx->pc = 0x278b94u;
    // NOP
    // 0x278b98: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x278b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x278b9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x278b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x278ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278ba4: 0x0  nop
    ctx->pc = 0x278ba4u;
    // NOP
    // 0x278ba8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x278ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x278bac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x278bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278bb0: 0x0  nop
    ctx->pc = 0x278bb0u;
    // NOP
    // 0x278bb4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x278bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x278bb8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x278bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x278bbc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x278bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x278bc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x278bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278bc4: 0x0  nop
    ctx->pc = 0x278bc4u;
    // NOP
    // 0x278bc8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x278bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x278bcc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x278bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x278bd0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x278bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x278bd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x278bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278bd8: 0xc05da88  jal         func_176A20
    ctx->pc = 0x278BD8u;
    SET_GPR_U32(ctx, 31, 0x278BE0u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x278BD8u, 0x278BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278BE0u;
label_278be0:
    // 0x278be0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x278be0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278be4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x278be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x278be8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x278be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x278bec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x278becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278bf0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x278bf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x278bf4: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x278BF4u;
    SET_GPR_U32(ctx, 31, 0x278BFCu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x278BF4u, 0x278BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278BFCu;
label_278bfc:
    // 0x278bfc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x278bfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x278c00: 0xc7ac0068  lwc1        $f12, 0x68($sp)
    ctx->pc = 0x278c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278c04: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x278C04u;
    SET_GPR_U32(ctx, 31, 0x278C0Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x278C04u, 0x278C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C0Cu;
label_278c0c:
    // 0x278c0c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x278c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278c10: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x278c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x278c14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x278c18: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x278c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278c1c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x278c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x278c20: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x278c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x278c24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278c28: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x278c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x278c2c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x278c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278c30: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x278c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x278c34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x278c38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x278c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278c3c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x278c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x278c40: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x278c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x278c44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278c48: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x278c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x278c4c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x278c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278c50: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x278c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x278c54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x278c58: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x278c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278c5c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x278c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x278c60: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x278c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x278c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278c68: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x278c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x278c6c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x278c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x278c70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x278c74: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x278c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278c78: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x278c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x278c7c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x278c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x278c80: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x278c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278c84: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x278c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x278c88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x278c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278c8c: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x278c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278c90: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x278c90u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x278c94: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x278c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x278c98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x278c9c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x278c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278ca0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x278ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x278ca4: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x278ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x278ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278cac: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x278cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x278cb0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x278cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x278cb4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x278cb8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x278cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278cbc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x278cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x278cc0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x278cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x278cc4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x278cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278cc8: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x278cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x278ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x278cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278cd0: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x278cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278cd4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x278cd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x278cd8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x278cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x278cdc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x278ce0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x278ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278ce4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x278ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x278ce8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x278ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x278cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278cf0: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x278cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x278cf4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x278cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x278cf8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x278cfc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x278cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278d00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x278d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x278d04: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x278d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x278d08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x278d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278d0c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x278d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x278d10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x278d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278d14: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x278d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278d18: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x278d18u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x278d1c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x278d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x278d20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x278d24: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x278d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278d28: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x278d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x278d2c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x278d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x278d30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278d34: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x278d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x278d38: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x278d38u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x278d3c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x278d3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278d40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278d44: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x278d44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x278d48: 0x3e00008  jr          $ra
    ctx->pc = 0x278D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278D50u;
}
