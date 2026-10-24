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

// Function: Em0b_R1_mv0e
// Address: 0x1f2670 - 0x1f2b5c
void Em0b_R1_mv0e_0x1f2670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv0e_0x1f2670");
#endif

    switch (ctx->pc) {
        case 0x1f274cu: goto label_1f274c;
        case 0x1f2a04u: goto label_1f2a04;
        case 0x1f2a10u: goto label_1f2a10;
        case 0x1f2accu: goto label_1f2acc;
        case 0x1f2af0u: goto label_1f2af0;
        default: break;
    }

    ctx->pc = 0x1f2670u;

    // 0x1f2670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f2670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f2674: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1f2674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f2678: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1f2678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1f267c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2680: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f2680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f2684: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f2684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f2688: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f2688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f268c: 0x10830101  beq         $a0, $v1, . + 4 + (0x101 << 2)
    ctx->pc = 0x1F268Cu;
    {
        const bool branch_taken_0x1f268c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f268c) {
            ctx->pc = 0x1F2A94u;
            goto label_1f2a94;
        }
    }
    ctx->pc = 0x1F2694u;
    // 0x1f2694: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f2694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2698: 0x108300e8  beq         $a0, $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x1F2698u;
    {
        const bool branch_taken_0x1f2698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f2698) {
            ctx->pc = 0x1F2A3Cu;
            goto label_1f2a3c;
        }
    }
    ctx->pc = 0x1F26A0u;
    // 0x1f26a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f26a4: 0x10830069  beq         $a0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1F26A4u;
    {
        const bool branch_taken_0x1f26a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f26a4) {
            ctx->pc = 0x1F284Cu;
            goto label_1f284c;
        }
    }
    ctx->pc = 0x1F26ACu;
    // 0x1f26ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f26acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f26b0: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F26B0u;
    {
        const bool branch_taken_0x1f26b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f26b0) {
            ctx->pc = 0x1F2790u;
            goto label_1f2790;
        }
    }
    ctx->pc = 0x1F26B8u;
    // 0x1f26b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F26B8u;
    {
        const bool branch_taken_0x1f26b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f26b8) {
            ctx->pc = 0x1F26C8u;
            goto label_1f26c8;
        }
    }
    ctx->pc = 0x1F26C0u;
    // 0x1f26c0: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x1F26C0u;
    {
        const bool branch_taken_0x1f26c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f26c0) {
            ctx->pc = 0x1F2B4Cu;
            goto label_1f2b4c;
        }
    }
    ctx->pc = 0x1F26C8u;
label_1f26c8:
    // 0x1f26c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f26c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f26cc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f26ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f26d0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f26d4: 0x34422018  ori         $v0, $v0, 0x2018
    ctx->pc = 0x1f26d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8216);
    // 0x1f26d8: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f26dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f26e0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f26e4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1f26e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1f26e8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f26e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f26ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f26ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f26f0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f26f4: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f26f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f26f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f26f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f26fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2700: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f2700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x1f2704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2708: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f270c: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f270cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f2710: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f2710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f2714: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2718: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f2718u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f271c: 0x3c023eb2  lui         $v0, 0x3EB2
    ctx->pc = 0x1f271cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
    // 0x1f2720: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f2720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f2724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2728: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f272c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2730: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f2730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f2734: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2738: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f273c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f273cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2740: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2744: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F2744u;
    SET_GPR_U32(ctx, 31, 0x1F274Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F2744u, 0x1F274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F274Cu;
label_1f274c:
    // 0x1f274c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f274cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2750: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2754: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f2754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f2758: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1f2758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f275c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f275cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2760: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1f2760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f2764: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2768: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f2768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f276c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1f276cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1f2770: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f2770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f2774: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f2774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2778: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f2778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f277c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f277cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f2780: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2784: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f2784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f2788: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1F2788u;
    {
        const bool branch_taken_0x1f2788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2788) {
            ctx->pc = 0x1F2B4Cu;
            goto label_1f2b4c;
        }
    }
    ctx->pc = 0x1F2790u;
label_1f2790:
    // 0x1f2790: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2794: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f2794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f2798: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f2798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f279c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f279cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1f27a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f27a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f27a4: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x1f27a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f27a8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1f27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x1f27ac: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1f27acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1f27b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f27b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f27b4: 0x0  nop
    ctx->pc = 0x1f27b4u;
    // NOP
    // 0x1f27b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f27b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f27bc: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x1f27bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x1f27c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f27c4: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x1f27c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f27c8: 0x3c033b75  lui         $v1, 0x3B75
    ctx->pc = 0x1f27c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15221 << 16));
    // 0x1f27cc: 0x3463c290  ori         $v1, $v1, 0xC290
    ctx->pc = 0x1f27ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49808);
    // 0x1f27d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f27d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f27d4: 0x0  nop
    ctx->pc = 0x1f27d4u;
    // NOP
    // 0x1f27d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f27d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f27dc: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x1f27dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x1f27e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f27e4: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x1f27e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f27e8: 0x3c033b75  lui         $v1, 0x3B75
    ctx->pc = 0x1f27e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15221 << 16));
    // 0x1f27ec: 0x3463c290  ori         $v1, $v1, 0xC290
    ctx->pc = 0x1f27ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49808);
    // 0x1f27f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f27f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f27f4: 0x0  nop
    ctx->pc = 0x1f27f4u;
    // NOP
    // 0x1f27f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f27f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f27fc: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x1f27fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x1f2800: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f2800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2804: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1f2804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1f2808: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1f2808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1f280c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1f280cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2810: 0x148000ce  bnez        $a0, . + 4 + (0xCE << 2)
    ctx->pc = 0x1F2810u;
    {
        const bool branch_taken_0x1f2810 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2810) {
            ctx->pc = 0x1F2B4Cu;
            goto label_1f2b4c;
        }
    }
    ctx->pc = 0x1F2818u;
    // 0x1f2818: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f2818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f281c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2820: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f2820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f2824: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2828: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x1f2828u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f282c: 0x3c033d81  lui         $v1, 0x3D81
    ctx->pc = 0x1f282cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15745 << 16));
    // 0x1f2830: 0x3463fabc  ori         $v1, $v1, 0xFABC
    ctx->pc = 0x1f2830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64188);
    // 0x1f2834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f2834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2838: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f283c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f283cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2840: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f2840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f2844: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1F2844u;
    {
        const bool branch_taken_0x1f2844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2844) {
            ctx->pc = 0x1F2B4Cu;
            goto label_1f2b4c;
        }
    }
    ctx->pc = 0x1F284Cu;
label_1f284c:
    // 0x1f284c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2850: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1f2850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x1f2854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2858: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1f2858u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f285c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2860: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f2860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f2864: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f2864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f2868: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f2868u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f286c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1f286cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f2870: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1F2870u;
    {
        const bool branch_taken_0x1f2870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2870) {
            ctx->pc = 0x1F2940u;
            goto label_1f2940;
        }
    }
    ctx->pc = 0x1F2878u;
    // 0x1f2878: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f287c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f287cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2880: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1f2880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2888: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f2888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f288c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2890: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f2890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f2894: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f2894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f2898: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f289c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f28a0: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f28a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f28a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f28a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f28a8: 0x0  nop
    ctx->pc = 0x1f28a8u;
    // NOP
    // 0x1f28ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f28acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f28b0: 0x0  nop
    ctx->pc = 0x1f28b0u;
    // NOP
    // 0x1f28b4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F28B4u;
    {
        const bool branch_taken_0x1f28b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f28b4) {
            ctx->pc = 0x1F28CCu;
            goto label_1f28cc;
        }
    }
    ctx->pc = 0x1F28BCu;
    // 0x1f28bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f28bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f28c0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f28c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f28c8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f28c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1f28cc:
    // 0x1f28cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f28d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f28d4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1f28d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f28d8: 0x3c023cb2  lui         $v0, 0x3CB2
    ctx->pc = 0x1f28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15538 << 16));
    // 0x1f28dc: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x1f28dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
    // 0x1f28e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f28e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f28e4: 0x0  nop
    ctx->pc = 0x1f28e4u;
    // NOP
    // 0x1f28e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f28e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f28ec: 0x0  nop
    ctx->pc = 0x1f28ecu;
    // NOP
    // 0x1f28f0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1F28F0u;
    {
        const bool branch_taken_0x1f28f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f28f0) {
            ctx->pc = 0x1F2920u;
            goto label_1f2920;
        }
    }
    ctx->pc = 0x1F28F8u;
    // 0x1f28f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f28fc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2900: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1f2900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1f2904: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1f2904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1f2908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f2908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f290c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2910: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f2914: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f2914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1f2918: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2918u;
    {
        const bool branch_taken_0x1f2918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2918) {
            ctx->pc = 0x1F2940u;
            goto label_1f2940;
        }
    }
    ctx->pc = 0x1F2920u;
label_1f2920:
    // 0x1f2920: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2924: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f2924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f2928: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1f2928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x1f292c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1f292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x1f2930: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f2930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f2934: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1f2934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2938: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f293c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1f293cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_1f2940:
    // 0x1f2940: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2944: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x1f2944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2948: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f2948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f294c: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f2950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2954: 0x0  nop
    ctx->pc = 0x1f2954u;
    // NOP
    // 0x1f2958: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f295c: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f2960: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2964: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x1f2964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2968: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f2968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f296c: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f2970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2974: 0x0  nop
    ctx->pc = 0x1f2974u;
    // NOP
    // 0x1f2978: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f297c: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x1f297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x1f2980: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2984: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x1f2984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2988: 0x3c023bda  lui         $v0, 0x3BDA
    ctx->pc = 0x1f2988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15322 << 16));
    // 0x1f298c: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x1f298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x1f2990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2994: 0x0  nop
    ctx->pc = 0x1f2994u;
    // NOP
    // 0x1f2998: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f299c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1f299cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1f29a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f29a4: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x1f29a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f29a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f29ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f29acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f29b0: 0x0  nop
    ctx->pc = 0x1f29b0u;
    // NOP
    // 0x1f29b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f29b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f29b8: 0x0  nop
    ctx->pc = 0x1f29b8u;
    // NOP
    // 0x1f29bc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F29BCu;
    {
        const bool branch_taken_0x1f29bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f29bc) {
            ctx->pc = 0x1F29F4u;
            goto label_1f29f4;
        }
    }
    ctx->pc = 0x1F29C4u;
    // 0x1f29c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f29c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f29c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f29cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f29d0: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f29d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f29d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f29d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f29d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f29dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f29e0: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f29e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f29e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f29e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f29e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f29ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f29f0: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f29f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
label_1f29f4:
    // 0x1f29f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f29f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f29f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f29f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f29fc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1F29FCu;
    SET_GPR_U32(ctx, 31, 0x1F2A04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1F29FCu, 0x1F2A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A04u;
label_1f2a04:
    // 0x1f2a04: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a08: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F2A08u;
    SET_GPR_U32(ctx, 31, 0x1F2A10u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F2A08u, 0x1F2A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A10u;
label_1f2a10:
    // 0x1f2a10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a14: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1f2a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1f2a18: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F2A18u;
    {
        const bool branch_taken_0x1f2a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2a18) {
            ctx->pc = 0x1F2B4Cu;
            goto label_1f2b4c;
        }
    }
    ctx->pc = 0x1F2A20u;
    // 0x1f2a20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f2a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f2a24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a28: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f2a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f2a2c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a30: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f2a30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2a34: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1F2A34u;
    {
        const bool branch_taken_0x1f2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2a34) {
            ctx->pc = 0x1F2B4Cu;
            goto label_1f2b4c;
        }
    }
    ctx->pc = 0x1F2A3Cu;
label_1f2a3c:
    // 0x1f2a3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a40: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1f2a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2a44: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1f2a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1f2a48: 0x2403dfe7  addiu       $v1, $zero, -0x2019
    ctx->pc = 0x1f2a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959079));
    // 0x1f2a4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2a50: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1f2a50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1f2a54: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f2a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a58: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f2a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f2a5c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1f2a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1f2a60: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2a64: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f2a64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f2a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2a6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a70: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f2a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f2a74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2a78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a7c: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x1f2a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x1f2a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f2a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2a84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a88: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f2a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f2a8c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1F2A8Cu;
    {
        const bool branch_taken_0x1f2a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2a8c) {
            ctx->pc = 0x1F2B4Cu;
            goto label_1f2b4c;
        }
    }
    ctx->pc = 0x1F2A94u;
label_1f2a94:
    // 0x1f2a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2a98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2a9c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f2a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2aa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2aa4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2aa8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f2aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f2aac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2ab0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f2ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2ab4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2ab8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f2ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2abc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2ac0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f2ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f2ac4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F2AC4u;
    SET_GPR_U32(ctx, 31, 0x1F2ACCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F2AC4u, 0x1F2ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2ACCu;
label_1f2acc:
    // 0x1f2acc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f2accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2ad0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f2ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f2ad4: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f2ad8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f2ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f2adc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f2adcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f2ae0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2ae4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f2ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2ae8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F2AE8u;
    SET_GPR_U32(ctx, 31, 0x1F2AF0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F2AE8u, 0x1F2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2AF0u;
label_1f2af0:
    // 0x1f2af0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f2af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f2af4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1f2af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1f2af8: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f2afc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f2afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f2b00: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f2b00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f2b04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f2b0c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x1f2b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f2b10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b14: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x1f2b14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x1f2b18: 0x3063f8ff  andi        $v1, $v1, 0xF8FF
    ctx->pc = 0x1f2b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63743);
    // 0x1f2b1c: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x1f2b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2b20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b24: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1f2b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2b28: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1f2b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b2c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1f2b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f2b30: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1f2b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f2b34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f2b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f2b38: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1f2b38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1f2b3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1f2b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2b40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1f2b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f2b44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1f2b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x1f2b48: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1f2b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1f2b4c:
    // 0x1f2b4c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1f2b4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2b50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f2b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f2b54: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2B5Cu;
}
