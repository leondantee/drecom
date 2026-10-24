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

// Function: e2d_id55_com_smoke01
// Address: 0x2b69a0 - 0x2b6af0
void e2d_id55_com_smoke01_0x2b69a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id55_com_smoke01_0x2b69a0");
#endif

    switch (ctx->pc) {
        case 0x2b6a3cu: goto label_2b6a3c;
        default: break;
    }

    ctx->pc = 0x2b69a0u;

    // 0x2b69a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b69a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b69a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b69a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b69a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b69a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b69ac: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b69acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b69b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b69b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b69b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b69b8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b69b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b69bc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b69c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b69c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b69c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b69c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b69c8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b69c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b69cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b69d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b69d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b69d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b69d8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b69d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b69dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b69dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b69e0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b69e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b69e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b69e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b69ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b69f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b69f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b69f4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2b69f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2b69f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b69f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b69fc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2b69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2b6a00: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2b6a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2b6a04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b6a08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b6a0c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2b6a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2b6a10: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b6a14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b6a18: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b6a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b6a1c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2b6a1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b6a20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b6a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b6a24: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b6a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b6a28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b6a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b6a2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6a30: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2b6a30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b6a34: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B6A34u;
    SET_GPR_U32(ctx, 31, 0x2B6A3Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B6A34u, 0x2B6A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A3Cu;
label_2b6a3c:
    // 0x2b6a3c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b6a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b6a40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6a44: 0x0  nop
    ctx->pc = 0x2b6a44u;
    // NOP
    // 0x2b6a48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b6a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6a4c: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2b6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2b6a50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6a50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6a54: 0x0  nop
    ctx->pc = 0x2b6a54u;
    // NOP
    // 0x2b6a58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b6a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b6a5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6a60: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6a64: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b6a68: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b6a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b6a6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6a6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6a70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6a74: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b6a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b6a78: 0x3c03be99  lui         $v1, 0xBE99
    ctx->pc = 0x2b6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48793 << 16));
    // 0x2b6a7c: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b6a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b6a80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6a80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6a84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6a88: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b6a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b6a8c: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x2b6a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x2b6a90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6a90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6a94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6a98: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b6a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b6a9c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2b6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2b6aa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6aa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6aa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6aa8: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b6aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b6aac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2b6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2b6ab0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6ab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6ab4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6ab8: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b6ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b6abc: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2b6abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2b6ac0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6ac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6ac4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6ac8: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b6ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b6acc: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2b6accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2b6ad0: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2b6ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2b6ad4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6ad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6ad8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6adc: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b6adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b6ae0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b6ae0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ae4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b6ae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b6ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6AF0u;
}
