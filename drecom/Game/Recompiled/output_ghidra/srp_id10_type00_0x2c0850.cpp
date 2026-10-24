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

// Function: srp_id10_type00
// Address: 0x2c0850 - 0x2c0944
void srp_id10_type00_0x2c0850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id10_type00_0x2c0850");
#endif

    switch (ctx->pc) {
        case 0x2c090cu: goto label_2c090c;
        default: break;
    }

    ctx->pc = 0x2c0850u;

    // 0x2c0850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0854: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2c0854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2c0858: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2c0858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2c085c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c085cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c0860: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c0860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c0864: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c0864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c0868: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c0868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c086c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0870: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c0870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c0874: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2c0874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2c0878: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c0878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c087c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2c087cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2c0880: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2c0880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c0884: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c0884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c0888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c088c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2c088cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2c0890: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c0890u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2c0894: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c0894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c0898: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2c0898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2c089c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2c089cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2c08a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c08a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c08a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c08a8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2c08a8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c08ac: 0x0  nop
    ctx->pc = 0x2c08acu;
    // NOP
    // 0x2c08b0: 0x0  nop
    ctx->pc = 0x2c08b0u;
    // NOP
    // 0x2c08b4: 0x1010  mfhi        $v0
    ctx->pc = 0x2c08b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c08b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c08b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c08bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c08bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c08c0: 0xa043036a  sb          $v1, 0x36A($v0)
    ctx->pc = 0x2c08c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 874), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c08c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c08c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c08c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c08cc: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2c08ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c08d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c08d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c08d8: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2c08d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c08dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2c08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c08e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c08e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c08e4: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2c08e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c08e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c08e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c08ec: 0x94620340  lhu         $v0, 0x340($v1)
    ctx->pc = 0x2c08ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x2c08f0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2c08f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2c08f4: 0xa4620340  sh          $v0, 0x340($v1)
    ctx->pc = 0x2c08f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c08f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c08f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c08fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0900: 0xa04302a8  sb          $v1, 0x2A8($v0)
    ctx->pc = 0x2c0900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c0904: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2C0904u;
    SET_GPR_U32(ctx, 31, 0x2C090Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2C0904u, 0x2C090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C090Cu;
label_2c090c:
    // 0x2c090c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2c090cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2c0910: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c0910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0914: 0x0  nop
    ctx->pc = 0x2c0914u;
    // NOP
    // 0x2c0918: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c091c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2c091cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2c0920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0924: 0x0  nop
    ctx->pc = 0x2c0924u;
    // NOP
    // 0x2c0928: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c092c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0930: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c0930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c0934: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c0934u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0938: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c0938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c093c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C093Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C093Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0944u;
}
