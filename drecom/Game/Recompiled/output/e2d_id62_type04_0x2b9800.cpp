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

// Function: e2d_id62_type04
// Address: 0x2b9800 - 0x2b9918
void e2d_id62_type04_0x2b9800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id62_type04_0x2b9800");
#endif

    switch (ctx->pc) {
        case 0x2b9854u: goto label_2b9854;
        default: break;
    }

    ctx->pc = 0x2b9800u;

    // 0x2b9800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9804: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b9804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b9808: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b9808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b980c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b980cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9814: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9818: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b9818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b981c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b981cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9824: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9828: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b9828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b982c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b982cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9838: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b9838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b983c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b983cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b9840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b9840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9844: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b9844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9848: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b9848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b984c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B984Cu;
    SET_GPR_U32(ctx, 31, 0x2B9854u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B984Cu, 0x2B9854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9854u;
label_2b9854:
    // 0x2b9854: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b9854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b9858: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b9858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b985c: 0x0  nop
    ctx->pc = 0x2b985cu;
    // NOP
    // 0x2b9860: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b9860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b9864: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b9864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b9868: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b986c: 0x0  nop
    ctx->pc = 0x2b986cu;
    // NOP
    // 0x2b9870: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b9870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b9874: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9878: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b987c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b9880: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9884: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9888: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x2b9888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x2b988c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b988cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b9890: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9890u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9894: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9898: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b9898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b989c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2b989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2b98a0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b98a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b98a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b98a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b98a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b98ac: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b98acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b98b0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b98b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b98b4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b98b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b98b8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b98b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b98bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b98c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b98c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b98c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b98c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b98c8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b98c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b98cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b98ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b98d0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b98d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b98d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b98d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b98d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b98dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b98e0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b98e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b98e4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b98e8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b98e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b98ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b98ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b98f0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b98f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b98f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b98f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b98f8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b98f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b98fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b98fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b9900: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b9900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b9904: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b9904u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9908: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b9908u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b990c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b990cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b9910: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9918u;
}
