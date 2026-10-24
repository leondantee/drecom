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

// Function: e2d_id28_type07
// Address: 0x2b42e0 - 0x2b4428
void e2d_id28_type07_0x2b42e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id28_type07_0x2b42e0");
#endif

    switch (ctx->pc) {
        case 0x2b4330u: goto label_2b4330;
        default: break;
    }

    ctx->pc = 0x2b42e0u;

    // 0x2b42e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b42e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b42e4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b42e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b42e8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b42e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b42ec: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b42f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b42f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b42f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b42f8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b42f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b42fc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b4300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4304: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4308: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b4308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b430c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2b430cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x2b4310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4314: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4318: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b4318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b431c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4320: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b4320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4324: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b4324u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b4328: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B4328u;
    SET_GPR_U32(ctx, 31, 0x2B4330u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B4328u, 0x2B4330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4330u;
label_2b4330:
    // 0x2b4330: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b4330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b4334: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b4334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b4338: 0x0  nop
    ctx->pc = 0x2b4338u;
    // NOP
    // 0x2b433c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b433cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b4340: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b4340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b4344: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4348: 0x0  nop
    ctx->pc = 0x2b4348u;
    // NOP
    // 0x2b434c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b434cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b4350: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4354: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b4354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b4358: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b4358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b435c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4360: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b4360u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4364: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b4364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b4368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b436c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b436cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4370: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b4370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b4374: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x2b4374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x2b4378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b437c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4380: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b4380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b4384: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b4384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b4388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b438c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b438cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4390: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b4390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b4394: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b4394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b4398: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b439c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b439cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b43a0: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b43a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b43a4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2b43a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2b43a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b43a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b43ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b43acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b43b0: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b43b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b43b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b43b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b43b8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b43b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b43bc: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b43bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b43c0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b43c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b43c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b43c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b43c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b43cc: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b43ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b43d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b43d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b43d4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b43d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b43d8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b43d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b43dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b43dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b43e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b43e4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b43e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b43e8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b43ec: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b43ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b43f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b43f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b43f4: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b43f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b43f8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b43f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b43fc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b43fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b4400: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b4400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4404: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4408: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b4408u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b440c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b440cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4410: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b4410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4414: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b4414u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4418: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b4418u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b441c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b441cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4420: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4428u;
}
