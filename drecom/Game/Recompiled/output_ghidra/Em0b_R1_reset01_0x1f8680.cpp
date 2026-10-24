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

// Function: Em0b_R1_reset01
// Address: 0x1f8680 - 0x1f8c20
void Em0b_R1_reset01_0x1f8680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_reset01_0x1f8680");
#endif

    switch (ctx->pc) {
        case 0x1f86ecu: goto label_1f86ec;
        case 0x1f87b4u: goto label_1f87b4;
        case 0x1f88a0u: goto label_1f88a0;
        case 0x1f88b0u: goto label_1f88b0;
        case 0x1f88bcu: goto label_1f88bc;
        case 0x1f8a9cu: goto label_1f8a9c;
        case 0x1f8aa8u: goto label_1f8aa8;
        case 0x1f8b04u: goto label_1f8b04;
        case 0x1f8b28u: goto label_1f8b28;
        case 0x1f8b60u: goto label_1f8b60;
        default: break;
    }

    ctx->pc = 0x1f8680u;

    // 0x1f8680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8684: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1f8684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f8688: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1f8688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1f868c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8690: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f8690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f8694: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8698: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f8698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f869c: 0x1083010b  beq         $a0, $v1, . + 4 + (0x10B << 2)
    ctx->pc = 0x1F869Cu;
    {
        const bool branch_taken_0x1f869c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f869c) {
            ctx->pc = 0x1F8ACCu;
            goto label_1f8acc;
        }
    }
    ctx->pc = 0x1F86A4u;
    // 0x1f86a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f86a8: 0x10830086  beq         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x1F86A8u;
    {
        const bool branch_taken_0x1f86a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f86a8) {
            ctx->pc = 0x1F88C4u;
            goto label_1f88c4;
        }
    }
    ctx->pc = 0x1F86B0u;
    // 0x1f86b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f86b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f86b4: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F86B4u;
    {
        const bool branch_taken_0x1f86b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f86b4) {
            ctx->pc = 0x1F8794u;
            goto label_1f8794;
        }
    }
    ctx->pc = 0x1F86BCu;
    // 0x1f86bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F86BCu;
    {
        const bool branch_taken_0x1f86bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f86bc) {
            ctx->pc = 0x1F86CCu;
            goto label_1f86cc;
        }
    }
    ctx->pc = 0x1F86C4u;
    // 0x1f86c4: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x1F86C4u;
    {
        const bool branch_taken_0x1f86c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f86c4) {
            ctx->pc = 0x1F8C10u;
            goto label_1f8c10;
        }
    }
    ctx->pc = 0x1F86CCu;
label_1f86cc:
    // 0x1f86cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f86d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f86d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f86d4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f86d8: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f86d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f86dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f86dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f86e0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f86e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f86e4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F86E4u;
    SET_GPR_U32(ctx, 31, 0x1F86ECu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F86E4u, 0x1F86ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86ECu;
label_1f86ec:
    // 0x1f86ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f86f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f86f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f86f4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f86f8: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f86f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f86fc: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f86fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f8700: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8704: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f8704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f8708: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1f8708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1f870c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f870cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f8710: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8714: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8718: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f8718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f871c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f871cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8720: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8724: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f8724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x1f8728: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f872c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8730: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f8730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f8734: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f8734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f8738: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f873c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f873cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8740: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x1f8740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x1f8744: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f8744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f8748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f874c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8754: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f8754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f8758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f875c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8760: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f8760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8768: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f876c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1f876cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1f8770: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f8770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1f8774: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f8774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1f8778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f877c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f877cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8780: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8784: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f8784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f8788: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f8788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f878c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8790: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f8790u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_1f8794:
    // 0x1f8794: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8798: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f879c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f87a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f87a4: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f87a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f87a8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1f87a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f87ac: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F87ACu;
    SET_GPR_U32(ctx, 31, 0x1F87B4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F87ACu, 0x1F87B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F87B4u;
label_1f87b4:
    // 0x1f87b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f87b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f87b8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f87b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f87bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f87c0: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x1f87c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f87c4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1f87c8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f87c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1f87cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f87ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f87d0: 0x0  nop
    ctx->pc = 0x1f87d0u;
    // NOP
    // 0x1f87d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f87d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f87d8: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1f87d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1f87dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f87e0: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x1f87e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f87e4: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x1f87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x1f87e8: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x1f87e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x1f87ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f87ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f87f0: 0x0  nop
    ctx->pc = 0x1f87f0u;
    // NOP
    // 0x1f87f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f87f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f87f8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f87f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f87fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f87fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8800: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x1f8800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8804: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x1f8804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x1f8808: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x1f8808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x1f880c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f880cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8810: 0x0  nop
    ctx->pc = 0x1f8810u;
    // NOP
    // 0x1f8814: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8818: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x1f8818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x1f881c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8820: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8824: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f8824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8828: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f882c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8830: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x1f8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8834: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f8834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f8838: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f8838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f883c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f883cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8840: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1f8840u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1f8844: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1f8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f8848: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x1f8848u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f884c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F884Cu;
    {
        const bool branch_taken_0x1f884c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f884c) {
            ctx->pc = 0x1F8880u;
            goto label_1f8880;
        }
    }
    ctx->pc = 0x1F8854u;
    // 0x1f8854: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8858: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f885c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f885cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8860: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8864: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1f8864u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f8868: 0x3c023d81  lui         $v0, 0x3D81
    ctx->pc = 0x1f8868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15745 << 16));
    // 0x1f886c: 0x3442fabc  ori         $v0, $v0, 0xFABC
    ctx->pc = 0x1f886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64188);
    // 0x1f8870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8874: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8878: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f887c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1f887cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_1f8880:
    // 0x1f8880: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8884: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8888: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f8888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f888c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1f888cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1f8890: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8894: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f8894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f8898: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F8898u;
    SET_GPR_U32(ctx, 31, 0x1F88A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F8898u, 0x1F88A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88A0u;
label_1f88a0:
    // 0x1f88a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f88a4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f88a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f88a8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F88A8u;
    SET_GPR_U32(ctx, 31, 0x1F88B0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F88A8u, 0x1F88B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88B0u;
label_1f88b0:
    // 0x1f88b0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f88b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f88b4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F88B4u;
    SET_GPR_U32(ctx, 31, 0x1F88BCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F88B4u, 0x1F88BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88BCu;
label_1f88bc:
    // 0x1f88bc: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1F88BCu;
    {
        const bool branch_taken_0x1f88bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f88bc) {
            ctx->pc = 0x1F8C10u;
            goto label_1f8c10;
        }
    }
    ctx->pc = 0x1F88C4u;
label_1f88c4:
    // 0x1f88c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f88c8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f88c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f88cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f88ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f88d0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f88d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f88d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f88d8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f88dc: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1f88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1f88e0: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1f88e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1f88e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f88e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f88e8: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x1f88e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f88ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f88ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f88f0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f88f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x1f88f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f88f8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f88f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f88fc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f88fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8900: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f8900u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f8904: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1f8904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f8908: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F8908u;
    {
        const bool branch_taken_0x1f8908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8908) {
            ctx->pc = 0x1F89D8u;
            goto label_1f89d8;
        }
    }
    ctx->pc = 0x1F8910u;
    // 0x1f8910: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8914: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8918: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1f8918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f891c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f891cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8920: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8924: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f8924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8928: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f8928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f892c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f892cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f8930: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8934: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8938: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f8938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f893c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f893cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8940: 0x0  nop
    ctx->pc = 0x1f8940u;
    // NOP
    // 0x1f8944: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8948: 0x0  nop
    ctx->pc = 0x1f8948u;
    // NOP
    // 0x1f894c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F894Cu;
    {
        const bool branch_taken_0x1f894c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f894c) {
            ctx->pc = 0x1F8964u;
            goto label_1f8964;
        }
    }
    ctx->pc = 0x1F8954u;
    // 0x1f8954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8958: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f895c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f895cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8960: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f8960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1f8964:
    // 0x1f8964: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8968: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f896c: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8970: 0x3c023cb2  lui         $v0, 0x3CB2
    ctx->pc = 0x1f8970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15538 << 16));
    // 0x1f8974: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f8974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f8978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f897c: 0x0  nop
    ctx->pc = 0x1f897cu;
    // NOP
    // 0x1f8980: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f8980u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8984: 0x0  nop
    ctx->pc = 0x1f8984u;
    // NOP
    // 0x1f8988: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1F8988u;
    {
        const bool branch_taken_0x1f8988 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8988) {
            ctx->pc = 0x1F89B8u;
            goto label_1f89b8;
        }
    }
    ctx->pc = 0x1F8990u;
    // 0x1f8990: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8994: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f8994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8998: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1f8998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1f899c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f899cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f89a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f89a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f89a4: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f89a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f89a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f89a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f89ac: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f89acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f89b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F89B0u;
    {
        const bool branch_taken_0x1f89b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f89b0) {
            ctx->pc = 0x1F89D8u;
            goto label_1f89d8;
        }
    }
    ctx->pc = 0x1F89B8u;
label_1f89b8:
    // 0x1f89b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f89bc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f89bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f89c0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1f89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x1f89c4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f89c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f89c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f89c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f89cc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f89ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f89d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f89d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f89d4: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f89d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_1f89d8:
    // 0x1f89d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f89d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f89dc: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x1f89dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f89e0: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f89e4: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f89e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f89e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f89e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f89ec: 0x0  nop
    ctx->pc = 0x1f89ecu;
    // NOP
    // 0x1f89f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f89f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f89f4: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f89f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f89f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f89f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f89fc: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x1f89fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8a00: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f8a04: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f8a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f8a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a0c: 0x0  nop
    ctx->pc = 0x1f8a0cu;
    // NOP
    // 0x1f8a10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8a14: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x1f8a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x1f8a18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a1c: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x1f8a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8a20: 0x3c023bda  lui         $v0, 0x3BDA
    ctx->pc = 0x1f8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15322 << 16));
    // 0x1f8a24: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x1f8a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x1f8a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a2c: 0x0  nop
    ctx->pc = 0x1f8a2cu;
    // NOP
    // 0x1f8a30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8a30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8a34: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1f8a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1f8a38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a3c: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x1f8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8a40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a48: 0x0  nop
    ctx->pc = 0x1f8a48u;
    // NOP
    // 0x1f8a4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8a50: 0x0  nop
    ctx->pc = 0x1f8a50u;
    // NOP
    // 0x1f8a54: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F8A54u;
    {
        const bool branch_taken_0x1f8a54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8a54) {
            ctx->pc = 0x1F8A8Cu;
            goto label_1f8a8c;
        }
    }
    ctx->pc = 0x1F8A5Cu;
    // 0x1f8a5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a68: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f8a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f8a6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a78: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f8a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f8a7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a88: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f8a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_1f8a8c:
    // 0x1f8a8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a90: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f8a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f8a94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F8A94u;
    SET_GPR_U32(ctx, 31, 0x1F8A9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F8A94u, 0x1F8A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A9Cu;
label_1f8a9c:
    // 0x1f8a9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8aa0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F8AA0u;
    SET_GPR_U32(ctx, 31, 0x1F8AA8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F8AA0u, 0x1F8AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8AA8u;
label_1f8aa8:
    // 0x1f8aa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8aac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f8aacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f8ab0: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1F8AB0u;
    {
        const bool branch_taken_0x1f8ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ab0) {
            ctx->pc = 0x1F8C10u;
            goto label_1f8c10;
        }
    }
    ctx->pc = 0x1F8AB8u;
    // 0x1f8ab8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f8ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8abc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ac0: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f8ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8ac4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1F8AC4u;
    {
        const bool branch_taken_0x1f8ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ac4) {
            ctx->pc = 0x1F8C10u;
            goto label_1f8c10;
        }
    }
    ctx->pc = 0x1F8ACCu;
label_1f8acc:
    // 0x1f8acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8ad0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ad4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f8ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8ad8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8adc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ae0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f8ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f8ae4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ae8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f8ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8aec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8af0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f8af0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8af4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8af8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f8afc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8AFCu;
    SET_GPR_U32(ctx, 31, 0x1F8B04u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8AFCu, 0x1F8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B04u;
label_1f8b04:
    // 0x1f8b04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f8b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8b08: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f8b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f8b0c: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f8b10: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f8b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8b14: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8b14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8b18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8b1c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f8b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8b20: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8B20u;
    SET_GPR_U32(ctx, 31, 0x1F8B28u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8B20u, 0x1F8B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B28u;
label_1f8b28:
    // 0x1f8b28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f8b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8b2c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f8b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f8b30: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f8b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f8b34: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f8b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f8b38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8b38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8b3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8b40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f8b44: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f8b44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f8b48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8b4c: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x1f8b4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1f8b50: 0x3042f8ff  andi        $v0, $v0, 0xF8FF
    ctx->pc = 0x1f8b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63743);
    // 0x1f8b54: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x1f8b54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f8b58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F8B58u;
    SET_GPR_U32(ctx, 31, 0x1F8B60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F8B58u, 0x1F8B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B60u;
label_1f8b60:
    // 0x1f8b60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f8b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f8b64: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1f8b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1f8b68: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x1f8b68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f8b6c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f8b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f8b70: 0x24639c20  addiu       $v1, $v1, -0x63E0
    ctx->pc = 0x1f8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941728));
    // 0x1f8b74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f8b78: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1f8b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8b7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8b80: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x1f8b80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f8b84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f8b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f8b88: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f8b88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f8b8c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8b90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8b94: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8B94u;
    {
        const bool branch_taken_0x1f8b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8b94) {
            ctx->pc = 0x1F8BACu;
            goto label_1f8bac;
        }
    }
    ctx->pc = 0x1F8B9Cu;
    // 0x1f8b9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ba0: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8ba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8ba4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f8ba8: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1f8bac:
    // 0x1f8bac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f8bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f8bb0: 0x90230e05  lbu         $v1, 0xE05($at)
    ctx->pc = 0x1f8bb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E05u));
    // 0x1f8bb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f8bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f8bb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8bbc: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8BBCu;
    {
        const bool branch_taken_0x1f8bbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f8bbc) {
            ctx->pc = 0x1F8BF0u;
            goto label_1f8bf0;
        }
    }
    ctx->pc = 0x1F8BC4u;
    // 0x1f8bc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8bc8: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x1f8bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1f8bcc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f8bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f8bd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f8bd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f8bd4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x1f8bd4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1f8bd8: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1f8bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f8bdc: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f8bdcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f8be0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f8be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8be4: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8be4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1f8be8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f8be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f8bec: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1f8becu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
label_1f8bf0:
    // 0x1f8bf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8bf4: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f8bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f8bf8: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f8bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f8bfc: 0x2403dfe7  addiu       $v1, $zero, -0x2019
    ctx->pc = 0x1f8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f8c00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f8c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f8c04: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f8c04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f8c08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8c0c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f8c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1f8c10:
    // 0x1f8c10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1f8c10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8c14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f8c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f8c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8C20u;
}
