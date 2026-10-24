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

// Function: Em1e_R1_mv00
// Address: 0x3724b0 - 0x3727cc
void Em1e_R1_mv00_0x3724b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_R1_mv00_0x3724b0");
#endif

    switch (ctx->pc) {
        case 0x37251cu: goto label_37251c;
        case 0x372524u: goto label_372524;
        case 0x372548u: goto label_372548;
        case 0x372574u: goto label_372574;
        case 0x372584u: goto label_372584;
        case 0x372590u: goto label_372590;
        case 0x3725b0u: goto label_3725b0;
        case 0x3725e0u: goto label_3725e0;
        case 0x37260cu: goto label_37260c;
        case 0x372634u: goto label_372634;
        case 0x372698u: goto label_372698;
        case 0x3726b8u: goto label_3726b8;
        case 0x3726e8u: goto label_3726e8;
        case 0x372714u: goto label_372714;
        case 0x37273cu: goto label_37273c;
        case 0x3727a0u: goto label_3727a0;
        case 0x3727acu: goto label_3727ac;
        case 0x3727b8u: goto label_3727b8;
        default: break;
    }

    ctx->pc = 0x3724b0u;

    // 0x3724b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3724b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3724b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3724b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3724b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3724b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3724bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x3724bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x3724c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3724c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3724c4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x3724c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3724c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3724c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3724cc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3724ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3724d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3724d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3724d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3724d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3724d8: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3724D8u;
    {
        const bool branch_taken_0x3724d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3724d8) {
            ctx->pc = 0x372564u;
            goto label_372564;
        }
    }
    ctx->pc = 0x3724E0u;
    // 0x3724e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3724E0u;
    {
        const bool branch_taken_0x3724e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3724e0) {
            ctx->pc = 0x3724F0u;
            goto label_3724f0;
        }
    }
    ctx->pc = 0x3724E8u;
    // 0x3724e8: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x3724E8u;
    {
        const bool branch_taken_0x3724e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3724e8) {
            ctx->pc = 0x3727B8u;
            goto label_3727b8;
        }
    }
    ctx->pc = 0x3724F0u;
label_3724f0:
    // 0x3724f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3724f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3724f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3724f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3724f8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3724f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3724fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3724fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372500: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372504: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x372504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x372508: 0x3406b401  ori         $a2, $zero, 0xB401
    ctx->pc = 0x372508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46081);
    // 0x37250c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37250cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372510: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x372510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x372514: 0xc0965d0  jal         func_259740
    ctx->pc = 0x372514u;
    SET_GPR_U32(ctx, 31, 0x37251Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x372514u, 0x37251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37251Cu;
label_37251c:
    // 0x37251c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x37251Cu;
    SET_GPR_U32(ctx, 31, 0x372524u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x37251Cu, 0x372524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372524u;
label_372524:
    // 0x372524: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372528: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x372528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x37252c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x37252cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x372530: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x372530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372534: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372534u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x372538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37253c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x37253cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x372540: 0xc067694  jal         func_19DA50
    ctx->pc = 0x372540u;
    SET_GPR_U32(ctx, 31, 0x372548u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x372540u, 0x372548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372548u;
label_372548:
    // 0x372548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37254c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x37254cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x372550: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x372550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x372554: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x372554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x372558: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x372558u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37255c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372560: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x372560u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_372564:
    // 0x372564: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372568: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x372568u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37256c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x37256Cu;
    SET_GPR_U32(ctx, 31, 0x372574u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x37256Cu, 0x372574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372574u;
label_372574:
    // 0x372574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372578: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x372578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37257c: 0xc0dc7c8  jal         func_371F20
    ctx->pc = 0x37257Cu;
    SET_GPR_U32(ctx, 31, 0x372584u);
    ctx->pc = 0x371F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371F20u, 0x37257Cu, 0x372584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372584u;
label_372584:
    // 0x372584: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372588: 0xc0dcdec  jal         func_3737B0
    ctx->pc = 0x372588u;
    SET_GPR_U32(ctx, 31, 0x372590u);
    ctx->pc = 0x3737B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737B0u, 0x372588u, 0x372590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372590u;
label_372590:
    // 0x372590: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372594: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x372594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x372598: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x372598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x37259c: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x37259cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x3725a0: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3725A0u;
    {
        const bool branch_taken_0x3725a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3725a0) {
            ctx->pc = 0x372698u;
            goto label_372698;
        }
    }
    ctx->pc = 0x3725A8u;
    // 0x3725a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3725A8u;
    SET_GPR_U32(ctx, 31, 0x3725B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3725A8u, 0x3725B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3725B0u;
label_3725b0:
    // 0x3725b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3725b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3725b4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3725b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3725b8: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x3725b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x3725bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3725bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3725c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3725c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3725c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3725c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3725c8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3725c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3725cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3725ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3725d0: 0x0  nop
    ctx->pc = 0x3725d0u;
    // NOP
    // 0x3725d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3725d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3725d8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3725D8u;
    SET_GPR_U32(ctx, 31, 0x3725E0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3725D8u, 0x3725E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3725E0u;
label_3725e0:
    // 0x3725e0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3725e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x3725e4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3725e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3725e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3725e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3725ec: 0x0  nop
    ctx->pc = 0x3725ecu;
    // NOP
    // 0x3725f0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3725f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3725f4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3725f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3725f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3725f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3725fc: 0x0  nop
    ctx->pc = 0x3725fcu;
    // NOP
    // 0x372600: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x372600u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x372604: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x372604u;
    SET_GPR_U32(ctx, 31, 0x37260Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x372604u, 0x37260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37260Cu;
label_37260c:
    // 0x37260c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x37260cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x372610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372614: 0x0  nop
    ctx->pc = 0x372614u;
    // NOP
    // 0x372618: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x372618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x37261c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x37261cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x372620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372624: 0x0  nop
    ctx->pc = 0x372624u;
    // NOP
    // 0x372628: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x372628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x37262c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x37262Cu;
    SET_GPR_U32(ctx, 31, 0x372634u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x37262Cu, 0x372634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372634u;
label_372634:
    // 0x372634: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372638: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x372638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x37263c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37263cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x372640: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x372640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x372644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372648: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x372648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37264c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372650: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x372650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x372654: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372658: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x372658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37265c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x37265cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372660: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372664: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x372664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372668: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x372668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x37266c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x37266cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x372670: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x372670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x372674: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x372674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x372678: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x372678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37267c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37267cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372680: 0x34440203  ori         $a0, $v0, 0x203
    ctx->pc = 0x372680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)515);
    // 0x372684: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x372684u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372688: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x372688u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37268c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x37268cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372690: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x372690u;
    SET_GPR_U32(ctx, 31, 0x372698u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x372690u, 0x372698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372698u;
label_372698:
    // 0x372698: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37269c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x37269cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x3726a0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3726a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3726a4: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x3726a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x3726a8: 0x1460003d  bnez        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3726A8u;
    {
        const bool branch_taken_0x3726a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3726a8) {
            ctx->pc = 0x3727A0u;
            goto label_3727a0;
        }
    }
    ctx->pc = 0x3726B0u;
    // 0x3726b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3726B0u;
    SET_GPR_U32(ctx, 31, 0x3726B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3726B0u, 0x3726B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726B8u;
label_3726b8:
    // 0x3726b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3726b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3726bc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3726bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x3726c0: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x3726c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x3726c4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3726c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3726c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3726c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3726cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3726ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3726d0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3726d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x3726d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3726d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3726d8: 0x0  nop
    ctx->pc = 0x3726d8u;
    // NOP
    // 0x3726dc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3726dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3726e0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3726E0u;
    SET_GPR_U32(ctx, 31, 0x3726E8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3726E0u, 0x3726E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3726E8u;
label_3726e8:
    // 0x3726e8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3726e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x3726ec: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3726ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3726f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3726f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3726f4: 0x0  nop
    ctx->pc = 0x3726f4u;
    // NOP
    // 0x3726f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3726f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3726fc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3726fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x372700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372704: 0x0  nop
    ctx->pc = 0x372704u;
    // NOP
    // 0x372708: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x372708u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37270c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x37270Cu;
    SET_GPR_U32(ctx, 31, 0x372714u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x37270Cu, 0x372714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372714u;
label_372714:
    // 0x372714: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x372714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x372718: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37271c: 0x0  nop
    ctx->pc = 0x37271cu;
    // NOP
    // 0x372720: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x372720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x372724: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x372724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x372728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37272c: 0x0  nop
    ctx->pc = 0x37272cu;
    // NOP
    // 0x372730: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x372730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x372734: 0xc067694  jal         func_19DA50
    ctx->pc = 0x372734u;
    SET_GPR_U32(ctx, 31, 0x37273Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x372734u, 0x37273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37273Cu;
label_37273c:
    // 0x37273c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37273cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372740: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x372740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x372744: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x372744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x372748: 0x2442b580  addiu       $v0, $v0, -0x4A80
    ctx->pc = 0x372748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948224));
    // 0x37274c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372750: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x372750u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372754: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372758: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x372758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x37275c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372760: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x372760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x372764: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x372764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x372768: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37276c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37276cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372770: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x372770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x372774: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x372774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x372778: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x372778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x37277c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x372780: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x372780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x372784: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x372784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x372788: 0x34440203  ori         $a0, $v0, 0x203
    ctx->pc = 0x372788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)515);
    // 0x37278c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37278cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372790: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x372790u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372794: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x372794u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372798: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x372798u;
    SET_GPR_U32(ctx, 31, 0x3727A0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x372798u, 0x3727A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727A0u;
label_3727a0:
    // 0x3727a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3727a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3727a4: 0xc0dce3c  jal         func_3738F0
    ctx->pc = 0x3727A4u;
    SET_GPR_U32(ctx, 31, 0x3727ACu);
    ctx->pc = 0x3738F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738F0u, 0x3727A4u, 0x3727ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727ACu;
label_3727ac:
    // 0x3727ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3727acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3727b0: 0xc097c6c  jal         func_25F1B0
    ctx->pc = 0x3727B0u;
    SET_GPR_U32(ctx, 31, 0x3727B8u);
    ctx->pc = 0x25F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B0u, 0x3727B0u, 0x3727B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727B8u;
label_3727b8:
    // 0x3727b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3727b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3727bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3727bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3727c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3727c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3727c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3727C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3727C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3727CCu;
}
