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

// Function: entry_00267738
// Address: 0x267738 - 0x2678a8
void entry_00267738_0x267738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267738_0x267738");
#endif

    switch (ctx->pc) {
        case 0x2677b4u: goto label_2677b4;
        case 0x2677c8u: goto label_2677c8;
        case 0x2677dcu: goto label_2677dc;
        case 0x267870u: goto label_267870;
        case 0x267890u: goto label_267890;
        default: break;
    }

    ctx->pc = 0x267738u;

    // 0x267738: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x267738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x26773c: 0x2473a610  addiu       $s3, $v1, -0x59F0
    ctx->pc = 0x26773cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x267740: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x267740u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x267744: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x267744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x267748: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x267748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x26774c: 0x12030056  beq         $s0, $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x26774Cu;
    {
        const bool branch_taken_0x26774c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x26774c) {
            ctx->pc = 0x2678A8u;
            return;
        }
    }
    ctx->pc = 0x267754u;
    // 0x267754: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x267754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x267758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26775c: 0x0  nop
    ctx->pc = 0x26775cu;
    // NOP
    // 0x267760: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x267760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x267764: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x267764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x267768: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x267768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x26776c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26776cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267770: 0x0  nop
    ctx->pc = 0x267770u;
    // NOP
    // 0x267774: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x267774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x267778: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x267778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x26777c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26777cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267780: 0x0  nop
    ctx->pc = 0x267780u;
    // NOP
    // 0x267784: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x267784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x267788: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x267788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x26778c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26778cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267790: 0x0  nop
    ctx->pc = 0x267790u;
    // NOP
    // 0x267794: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x267794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x267798: 0x3c023f77  lui         $v0, 0x3F77
    ctx->pc = 0x267798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16247 << 16));
    // 0x26779c: 0x34420a3d  ori         $v0, $v0, 0xA3D
    ctx->pc = 0x26779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x2677a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2677a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2677a4: 0x0  nop
    ctx->pc = 0x2677a4u;
    // NOP
    // 0x2677a8: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2677a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2677ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2677ACu;
    SET_GPR_U32(ctx, 31, 0x2677B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2677ACu, 0x2677B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677B4u;
label_2677b4:
    // 0x2677b4: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x2677b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2677b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2677b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2677bc: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2677bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2677c0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2677C0u;
    SET_GPR_U32(ctx, 31, 0x2677C8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2677C0u, 0x2677C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677C8u;
label_2677c8:
    // 0x2677c8: 0xc6010094  lwc1        $f1, 0x94($s0)
    ctx->pc = 0x2677c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2677cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2677ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2677d0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2677d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2677d4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2677D4u;
    SET_GPR_U32(ctx, 31, 0x2677DCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2677D4u, 0x2677DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677DCu;
label_2677dc:
    // 0x2677dc: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2677dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2677e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2677e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2677e4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2677e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2677e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2677e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2677ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2677ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2677f0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2677f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2677f4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2677f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2677f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2677f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2677fc: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2677fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x267800: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x267800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x267804: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x267804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267808: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x267808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x26780c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x26780cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x267810: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x267810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x267814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267818: 0x0  nop
    ctx->pc = 0x267818u;
    // NOP
    // 0x26781c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x26781cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x267820: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x267820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x267824: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x267824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x267828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26782c: 0x0  nop
    ctx->pc = 0x26782cu;
    // NOP
    // 0x267830: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x267830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x267834: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x267834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x267838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26783c: 0x0  nop
    ctx->pc = 0x26783cu;
    // NOP
    // 0x267840: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x267840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x267844: 0x3c0244af  lui         $v0, 0x44AF
    ctx->pc = 0x267844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17583 << 16));
    // 0x267848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x267848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26784c: 0x0  nop
    ctx->pc = 0x26784cu;
    // NOP
    // 0x267850: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x267850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x267854: 0x3c023e38  lui         $v0, 0x3E38
    ctx->pc = 0x267854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15928 << 16));
    // 0x267858: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x267858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x26785c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26785cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x267860: 0x0  nop
    ctx->pc = 0x267860u;
    // NOP
    // 0x267864: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x267864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x267868: 0xc067648  jal         func_19D920
    ctx->pc = 0x267868u;
    SET_GPR_U32(ctx, 31, 0x267870u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x267868u, 0x267870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267870u;
label_267870:
    // 0x267870: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x267870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x267874: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x267874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x267878: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x267878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26787c: 0x0  nop
    ctx->pc = 0x26787cu;
    // NOP
    // 0x267880: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x267880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x267884: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x267884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x267888: 0xc067648  jal         func_19D920
    ctx->pc = 0x267888u;
    SET_GPR_U32(ctx, 31, 0x267890u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x267888u, 0x267890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267890u;
label_267890:
    // 0x267890: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x267890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x267894: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x267894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x267898: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x267898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26789c: 0x0  nop
    ctx->pc = 0x26789cu;
    // NOP
    // 0x2678a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2678a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2678a4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2678a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    ctx->pc = 0x2678a8u;
}
