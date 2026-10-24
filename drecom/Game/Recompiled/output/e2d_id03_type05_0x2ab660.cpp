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

// Function: e2d_id03_type05
// Address: 0x2ab660 - 0x2ab904
void e2d_id03_type05_0x2ab660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id03_type05_0x2ab660");
#endif

    switch (ctx->pc) {
        case 0x2ab704u: goto label_2ab704;
        case 0x2ab734u: goto label_2ab734;
        case 0x2ab754u: goto label_2ab754;
        case 0x2ab774u: goto label_2ab774;
        default: break;
    }

    ctx->pc = 0x2ab660u;

    // 0x2ab660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab664: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2ab664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2ab668: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2ab668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2ab66c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ab66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab674: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab678: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2ab678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2ab67c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ab67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab684: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab688: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2ab688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2ab68c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ab68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ab690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab694: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab698: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2ab698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2ab69c: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2ab69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2ab6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab6a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab6a8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2ab6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2ab6ac: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2ab6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2ab6b0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2ab6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2ab6b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab6b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab6bc: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2ab6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2ab6c0: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ab6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ab6c4: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ab6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ab6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab6cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab6d0: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2ab6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2ab6d4: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2ab6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2ab6d8: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2ab6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2ab6dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab6e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab6e4: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2ab6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2ab6e8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2ab6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2ab6ec: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2ab6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2ab6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab6f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab6f8: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2ab6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2ab6fc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2AB6FCu;
    SET_GPR_U32(ctx, 31, 0x2AB704u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2AB6FCu, 0x2AB704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB704u;
label_2ab704:
    // 0x2ab704: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2ab704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2ab708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ab708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab70c: 0x0  nop
    ctx->pc = 0x2ab70cu;
    // NOP
    // 0x2ab710: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ab710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab714: 0x3c0243d2  lui         $v0, 0x43D2
    ctx->pc = 0x2ab714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17362 << 16));
    // 0x2ab718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ab718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab71c: 0x0  nop
    ctx->pc = 0x2ab71cu;
    // NOP
    // 0x2ab720: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ab720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ab724: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab728: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2ab728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2ab72c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AB72Cu;
    SET_GPR_U32(ctx, 31, 0x2AB734u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AB72Cu, 0x2AB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB734u;
label_2ab734:
    // 0x2ab734: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ab734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ab738: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ab738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab73c: 0x0  nop
    ctx->pc = 0x2ab73cu;
    // NOP
    // 0x2ab740: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ab740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab744: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab748: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2ab748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2ab74c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AB74Cu;
    SET_GPR_U32(ctx, 31, 0x2AB754u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AB74Cu, 0x2AB754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB754u;
label_2ab754:
    // 0x2ab754: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2ab754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2ab758: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ab758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab75c: 0x0  nop
    ctx->pc = 0x2ab75cu;
    // NOP
    // 0x2ab760: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ab760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab764: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2ab764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab768: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2ab768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2ab76c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2AB76Cu;
    SET_GPR_U32(ctx, 31, 0x2AB774u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2AB76Cu, 0x2AB774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB774u;
label_2ab774:
    // 0x2ab774: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2ab774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2ab778: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ab778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ab77c: 0x0  nop
    ctx->pc = 0x2ab77cu;
    // NOP
    // 0x2ab780: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ab780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ab784: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ab784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab788: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2ab788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2ab78c: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2ab78cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2ab790: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ab790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ab794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab798: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ab798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab79c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2ab79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2ab7a0: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2ab7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2ab7a4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ab7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ab7a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab7a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab7ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ab7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab7b0: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x2ab7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x2ab7b4: 0x3c033f63  lui         $v1, 0x3F63
    ctx->pc = 0x2ab7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16227 << 16));
    // 0x2ab7b8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ab7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ab7bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ab7bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ab7c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ab7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab7c4: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x2ab7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2ab7c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab7cc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab7d0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab7d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab7d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab7dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab7e0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ab7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ab7e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab7e8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab7ec: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab7f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab7f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab7f8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ab7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ab7fc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ab7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ab800: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab804: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab808: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ab808u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ab80c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ab80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab810: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ab810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ab814: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2ab814u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2ab818: 0x0  nop
    ctx->pc = 0x2ab818u;
    // NOP
    // 0x2ab81c: 0x0  nop
    ctx->pc = 0x2ab81cu;
    // NOP
    // 0x2ab820: 0x1810  mfhi        $v1
    ctx->pc = 0x2ab820u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ab824: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ab824u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab828: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2ab828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab82c: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ab82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ab830: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab834: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab834u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab838: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab83c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab83cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab840: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab844: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab848: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ab848u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ab84c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab850: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab854: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab858: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab85c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab860: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ab860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ab864: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ab864u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ab868: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab86c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab870: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ab870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ab874: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab878: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ab878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ab87c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ab87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab880: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ab880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab884: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ab884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ab888: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ab888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ab88c: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ab88cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ab890: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab894: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab894u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab898: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab89c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab8a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab8a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab8a8: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2ab8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ab8ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab8b0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ab8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ab8b4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2ab8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ab8b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ab8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ab8bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ab8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ab8c0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ab8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ab8c4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ab8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ab8c8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ab8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ab8cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ab8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ab8d0: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ab8d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ab8d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ab8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab8d8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ab8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ab8dc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ab8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ab8e0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2ab8e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ab8e4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2ab8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab8e8: 0x9083011a  lbu         $v1, 0x11A($a0)
    ctx->pc = 0x2ab8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 282)));
    // 0x2ab8ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ab8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ab8f0: 0xa083011a  sb          $v1, 0x11A($a0)
    ctx->pc = 0x2ab8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ab8f4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2ab8f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab8f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2ab8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ab8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB904u;
}
