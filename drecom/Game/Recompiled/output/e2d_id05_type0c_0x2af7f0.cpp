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

// Function: e2d_id05_type0c
// Address: 0x2af7f0 - 0x2af904
void e2d_id05_type0c_0x2af7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type0c_0x2af7f0");
#endif

    switch (ctx->pc) {
        case 0x2af844u: goto label_2af844;
        default: break;
    }

    ctx->pc = 0x2af7f0u;

    // 0x2af7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af7f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2af7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2af7f8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2af7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2af7fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af804: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af808: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2af808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2af80c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af814: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af818: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2af818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2af81c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2af81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2af820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af824: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af828: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2af828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2af82c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2af82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2af830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2af830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af834: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2af834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af838: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2af838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2af83c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AF83Cu;
    SET_GPR_U32(ctx, 31, 0x2AF844u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AF83Cu, 0x2AF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF844u;
label_2af844:
    // 0x2af844: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2af844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2af848: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2af848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2af84c: 0x0  nop
    ctx->pc = 0x2af84cu;
    // NOP
    // 0x2af850: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2af850u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2af854: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2af854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2af858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af85c: 0x0  nop
    ctx->pc = 0x2af85cu;
    // NOP
    // 0x2af860: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2af860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2af864: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af868: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af86c: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x2af86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
    // 0x2af870: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af870u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af874: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af878: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2af878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2af87c: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2af87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2af880: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2af880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2af884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af888: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af88c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2af88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2af890: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2af890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2af894: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af898: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2af898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af89c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2af89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2af8a0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2af8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2af8a4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2af8a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2af8a8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2af8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af8ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2af8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af8b0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2af8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2af8b4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2af8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2af8b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2af8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2af8bc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2af8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2af8c0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2af8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2af8c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2af8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2af8c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2af8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2af8cc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2af8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2af8d0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2af8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2af8d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2af8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2af8d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2af8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2af8dc: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2af8dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2af8e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2af8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2af8e4: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2af8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2af8e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2af8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2af8ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2af8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2af8f0: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2af8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af8f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2af8f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af8f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2af8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2af8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF904u;
}
