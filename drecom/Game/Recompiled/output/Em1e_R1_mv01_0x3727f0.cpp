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

// Function: Em1e_R1_mv01
// Address: 0x3727f0 - 0x372b0c
void Em1e_R1_mv01_0x3727f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_R1_mv01_0x3727f0");
#endif

    switch (ctx->pc) {
        case 0x37285cu: goto label_37285c;
        case 0x372864u: goto label_372864;
        case 0x372888u: goto label_372888;
        case 0x3728b4u: goto label_3728b4;
        case 0x3728c4u: goto label_3728c4;
        case 0x3728d0u: goto label_3728d0;
        case 0x3728f0u: goto label_3728f0;
        case 0x372920u: goto label_372920;
        case 0x37294cu: goto label_37294c;
        case 0x372974u: goto label_372974;
        case 0x3729d8u: goto label_3729d8;
        case 0x3729f8u: goto label_3729f8;
        case 0x372a28u: goto label_372a28;
        case 0x372a54u: goto label_372a54;
        case 0x372a7cu: goto label_372a7c;
        case 0x372ae0u: goto label_372ae0;
        case 0x372aecu: goto label_372aec;
        case 0x372af8u: goto label_372af8;
        default: break;
    }

    ctx->pc = 0x3727f0u;

    // 0x3727f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3727f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3727f4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3727f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3727f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3727f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3727fc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x3727fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x372800: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x372800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372804: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x372804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x372808: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x372808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37280c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x37280cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x372810: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x372810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x372814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372818: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x372818u;
    {
        const bool branch_taken_0x372818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x372818) {
            ctx->pc = 0x3728A4u;
            goto label_3728a4;
        }
    }
    ctx->pc = 0x372820u;
    // 0x372820: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x372820u;
    {
        const bool branch_taken_0x372820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x372820) {
            ctx->pc = 0x372830u;
            goto label_372830;
        }
    }
    ctx->pc = 0x372828u;
    // 0x372828: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x372828u;
    {
        const bool branch_taken_0x372828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372828) {
            ctx->pc = 0x372AF8u;
            goto label_372af8;
        }
    }
    ctx->pc = 0x372830u;
label_372830:
    // 0x372830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372838: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x372838u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37283c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372840: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372844: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x372844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x372848: 0x3406b402  ori         $a2, $zero, 0xB402
    ctx->pc = 0x372848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46082);
    // 0x37284c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37284cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372850: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x372850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x372854: 0xc0965d0  jal         func_259740
    ctx->pc = 0x372854u;
    SET_GPR_U32(ctx, 31, 0x37285Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x372854u, 0x37285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37285Cu;
label_37285c:
    // 0x37285c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x37285Cu;
    SET_GPR_U32(ctx, 31, 0x372864u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x37285Cu, 0x372864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372864u;
label_372864:
    // 0x372864: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372868: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x372868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x37286c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x37286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x372870: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x372870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372874: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372874u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x372878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37287c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x37287cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x372880: 0xc067694  jal         func_19DA50
    ctx->pc = 0x372880u;
    SET_GPR_U32(ctx, 31, 0x372888u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x372880u, 0x372888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372888u;
label_372888:
    // 0x372888: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37288c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x37288cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x372890: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x372890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x372894: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x372894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372898: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372898u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37289c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3728a0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3728a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_3728a4:
    // 0x3728a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3728a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3728a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3728a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3728ac: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3728ACu;
    SET_GPR_U32(ctx, 31, 0x3728B4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3728ACu, 0x3728B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728B4u;
label_3728b4:
    // 0x3728b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3728b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3728b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3728b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3728bc: 0xc0dc7c8  jal         func_371F20
    ctx->pc = 0x3728BCu;
    SET_GPR_U32(ctx, 31, 0x3728C4u);
    ctx->pc = 0x371F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371F20u, 0x3728BCu, 0x3728C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728C4u;
label_3728c4:
    // 0x3728c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3728c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3728c8: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x3728C8u;
    SET_GPR_U32(ctx, 31, 0x3728D0u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x3728C8u, 0x3728D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728D0u;
label_3728d0:
    // 0x3728d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3728d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3728d4: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x3728d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x3728d8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3728d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3728dc: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x3728dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x3728e0: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3728E0u;
    {
        const bool branch_taken_0x3728e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3728e0) {
            ctx->pc = 0x3729D8u;
            goto label_3729d8;
        }
    }
    ctx->pc = 0x3728E8u;
    // 0x3728e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3728E8u;
    SET_GPR_U32(ctx, 31, 0x3728F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3728E8u, 0x3728F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728F0u;
label_3728f0:
    // 0x3728f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3728f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3728f4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3728f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3728f8: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x3728f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x3728fc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3728fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372900: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372900u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x372904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372908: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x372908u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x37290c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x37290cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372910: 0x0  nop
    ctx->pc = 0x372910u;
    // NOP
    // 0x372914: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x372914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x372918: 0xc06765c  jal         func_19D970
    ctx->pc = 0x372918u;
    SET_GPR_U32(ctx, 31, 0x372920u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x372918u, 0x372920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372920u;
label_372920:
    // 0x372920: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x372920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x372924: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x372924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x372928: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x372928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37292c: 0x0  nop
    ctx->pc = 0x37292cu;
    // NOP
    // 0x372930: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x372930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x372934: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x372934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x372938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37293c: 0x0  nop
    ctx->pc = 0x37293cu;
    // NOP
    // 0x372940: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x372940u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372944: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x372944u;
    SET_GPR_U32(ctx, 31, 0x37294Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x372944u, 0x37294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37294Cu;
label_37294c:
    // 0x37294c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x37294cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x372950: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372950u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372954: 0x0  nop
    ctx->pc = 0x372954u;
    // NOP
    // 0x372958: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x372958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x37295c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37295cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x372960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372964: 0x0  nop
    ctx->pc = 0x372964u;
    // NOP
    // 0x372968: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x372968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x37296c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x37296Cu;
    SET_GPR_U32(ctx, 31, 0x372974u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x37296Cu, 0x372974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372974u;
label_372974:
    // 0x372974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372978: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x372978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x37297c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x372980: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x372980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x372984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372988: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x372988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37298c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372990: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x372990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x372994: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372998: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x372998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37299c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x37299cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3729a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3729a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3729a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3729a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3729a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3729a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3729ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3729acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3729b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3729b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3729b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3729b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3729b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3729b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3729bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3729bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3729c0: 0x34440203  ori         $a0, $v0, 0x203
    ctx->pc = 0x3729c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)515);
    // 0x3729c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3729c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3729c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3729c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3729cc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3729ccu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3729d0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x3729D0u;
    SET_GPR_U32(ctx, 31, 0x3729D8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x3729D0u, 0x3729D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3729D8u;
label_3729d8:
    // 0x3729d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3729d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3729dc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x3729dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x3729e0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3729e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3729e4: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x3729e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x3729e8: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3729E8u;
    {
        const bool branch_taken_0x3729e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3729e8) {
            ctx->pc = 0x372AE0u;
            goto label_372ae0;
        }
    }
    ctx->pc = 0x3729F0u;
    // 0x3729f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3729F0u;
    SET_GPR_U32(ctx, 31, 0x3729F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3729F0u, 0x3729F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3729F8u;
label_3729f8:
    // 0x3729f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3729f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3729fc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3729fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x372a00: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x372a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x372a04: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x372a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372a08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372a08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x372a0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372a10: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x372a10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x372a14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372a18: 0x0  nop
    ctx->pc = 0x372a18u;
    // NOP
    // 0x372a1c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x372a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x372a20: 0xc06765c  jal         func_19D970
    ctx->pc = 0x372A20u;
    SET_GPR_U32(ctx, 31, 0x372A28u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x372A20u, 0x372A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A28u;
label_372a28:
    // 0x372a28: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x372a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x372a2c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x372a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x372a30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x372a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x372a34: 0x0  nop
    ctx->pc = 0x372a34u;
    // NOP
    // 0x372a38: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x372a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x372a3c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x372a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x372a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372a44: 0x0  nop
    ctx->pc = 0x372a44u;
    // NOP
    // 0x372a48: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x372a48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372a4c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x372A4Cu;
    SET_GPR_U32(ctx, 31, 0x372A54u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x372A4Cu, 0x372A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A54u;
label_372a54:
    // 0x372a54: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x372a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x372a58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372a5c: 0x0  nop
    ctx->pc = 0x372a5cu;
    // NOP
    // 0x372a60: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x372a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x372a64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x372a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x372a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372a6c: 0x0  nop
    ctx->pc = 0x372a6cu;
    // NOP
    // 0x372a70: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x372a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x372a74: 0xc067694  jal         func_19DA50
    ctx->pc = 0x372A74u;
    SET_GPR_U32(ctx, 31, 0x372A7Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x372A74u, 0x372A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372A7Cu;
label_372a7c:
    // 0x372a7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372a80: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x372a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x372a84: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x372a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x372a88: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x372a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x372a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372a90: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x372a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372a94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372a98: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x372a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x372a9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372aa0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x372aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x372aa4: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x372aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372aa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372aac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x372aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372ab0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x372ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x372ab4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x372ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x372ab8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x372ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x372abc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x372abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x372ac0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x372ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x372ac4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x372ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372ac8: 0x34440203  ori         $a0, $v0, 0x203
    ctx->pc = 0x372ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)515);
    // 0x372acc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x372accu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372ad0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x372ad0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372ad4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x372ad4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372ad8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x372AD8u;
    SET_GPR_U32(ctx, 31, 0x372AE0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x372AD8u, 0x372AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AE0u;
label_372ae0:
    // 0x372ae0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372ae4: 0xc0dce3c  jal         func_3738F0
    ctx->pc = 0x372AE4u;
    SET_GPR_U32(ctx, 31, 0x372AECu);
    ctx->pc = 0x3738F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738F0u, 0x372AE4u, 0x372AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AECu;
label_372aec:
    // 0x372aec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372af0: 0xc097c6c  jal         func_25F1B0
    ctx->pc = 0x372AF0u;
    SET_GPR_U32(ctx, 31, 0x372AF8u);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x372AF0u, 0x372AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372AF8u;
label_372af8:
    // 0x372af8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x372af8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372afc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372b00: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x372b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x372b04: 0x3e00008  jr          $ra
    ctx->pc = 0x372B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372B0Cu;
}
