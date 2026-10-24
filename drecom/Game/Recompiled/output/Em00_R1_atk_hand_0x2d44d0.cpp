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

// Function: Em00_R1_atk_hand
// Address: 0x2d44d0 - 0x2d4870
void Em00_R1_atk_hand_0x2d44d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em00_R1_atk_hand_0x2d44d0");
#endif

    switch (ctx->pc) {
        case 0x2d4524u: goto label_2d4524;
        case 0x2d4568u: goto label_2d4568;
        case 0x2d4590u: goto label_2d4590;
        case 0x2d4600u: goto label_2d4600;
        case 0x2d4634u: goto label_2d4634;
        case 0x2d4668u: goto label_2d4668;
        case 0x2d469cu: goto label_2d469c;
        case 0x2d46acu: goto label_2d46ac;
        case 0x2d46ecu: goto label_2d46ec;
        case 0x2d4720u: goto label_2d4720;
        case 0x2d4754u: goto label_2d4754;
        case 0x2d4788u: goto label_2d4788;
        case 0x2d4798u: goto label_2d4798;
        case 0x2d47a8u: goto label_2d47a8;
        case 0x2d47b4u: goto label_2d47b4;
        case 0x2d47c4u: goto label_2d47c4;
        case 0x2d47d0u: goto label_2d47d0;
        default: break;
    }

    ctx->pc = 0x2d44d0u;

    // 0x2d44d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d44d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d44d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2d44d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2d44d8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2d44d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2d44dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d44dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d44e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d44e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d44e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d44e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d44e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d44ec: 0x1083002c  beq         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D44ECu;
    {
        const bool branch_taken_0x2d44ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d44ec) {
            ctx->pc = 0x2D45A0u;
            goto label_2d45a0;
        }
    }
    ctx->pc = 0x2D44F4u;
    // 0x2d44f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D44F4u;
    {
        const bool branch_taken_0x2d44f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d44f4) {
            ctx->pc = 0x2D4504u;
            goto label_2d4504;
        }
    }
    ctx->pc = 0x2D44FCu;
    // 0x2d44fc: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x2D44FCu;
    {
        const bool branch_taken_0x2d44fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d44fc) {
            ctx->pc = 0x2D4860u;
            goto label_2d4860;
        }
    }
    ctx->pc = 0x2D4504u;
label_2d4504:
    // 0x2d4504: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4508: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d450c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d4510: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d4510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d4514: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d4514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d4518: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d4518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d451c: 0xc05cc90  jal         func_173240
    ctx->pc = 0x2D451Cu;
    SET_GPR_U32(ctx, 31, 0x2D4524u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x2D451Cu, 0x2D4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4524u;
label_2d4524:
    // 0x2d4524: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d4524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d4528: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d4528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d452c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d452cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d4530: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4534: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d4534u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d4538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d453c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d453cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d4540: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D4540u;
    {
        const bool branch_taken_0x2d4540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4540) {
            ctx->pc = 0x2D4570u;
            goto label_2d4570;
        }
    }
    ctx->pc = 0x2D4548u;
    // 0x2d4548: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d454c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4550: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4554: 0x24061408  addiu       $a2, $zero, 0x1408
    ctx->pc = 0x2d4554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5128));
    // 0x2d4558: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d455c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d455cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4560: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4560u;
    SET_GPR_U32(ctx, 31, 0x2D4568u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4560u, 0x2D4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4568u;
label_2d4568:
    // 0x2d4568: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D4568u;
    {
        const bool branch_taken_0x2d4568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4568) {
            ctx->pc = 0x2D4590u;
            goto label_2d4590;
        }
    }
    ctx->pc = 0x2D4570u;
label_2d4570:
    // 0x2d4570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4578: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d457c: 0x24061408  addiu       $a2, $zero, 0x1408
    ctx->pc = 0x2d457cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5128));
    // 0x2d4580: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d4580u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d4584: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4588: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4588u;
    SET_GPR_U32(ctx, 31, 0x2D4590u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4588u, 0x2D4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4590u;
label_2d4590:
    // 0x2d4590: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4594: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4598: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d459c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d459cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d45a0:
    // 0x2d45a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d45a4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d45a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d45a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d45a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d45ac: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d45acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d45b0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x2D45B0u;
    {
        const bool branch_taken_0x2d45b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d45b0) {
            ctx->pc = 0x2D4798u;
            goto label_2d4798;
        }
    }
    ctx->pc = 0x2D45B8u;
    // 0x2d45b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d45bc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d45bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d45c0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x2D45C0u;
    {
        const bool branch_taken_0x2d45c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d45c0) {
            ctx->pc = 0x2D46B4u;
            goto label_2d46b4;
        }
    }
    ctx->pc = 0x2D45C8u;
    // 0x2d45c8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d45cc: 0x24428770  addiu       $v0, $v0, -0x7890
    ctx->pc = 0x2d45ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936432));
    // 0x2d45d0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2d45d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d45d4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d45d4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398770u));
    // 0x2d45d8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d45d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d45dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d45e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d45e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d45e8: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d45e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d45ec: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d45ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d45f0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d45f4: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d45f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d45f8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D45F8u;
    SET_GPR_U32(ctx, 31, 0x2D4600u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D45F8u, 0x2D4600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4600u;
label_2d4600:
    // 0x2d4600: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2d4600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2d4604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4608: 0x0  nop
    ctx->pc = 0x2d4608u;
    // NOP
    // 0x2d460c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d460cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d4610: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4614: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4618: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d461c: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d461cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4620: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d4620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4624: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4628: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d4628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d462c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D462Cu;
    SET_GPR_U32(ctx, 31, 0x2D4634u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D462Cu, 0x2D4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4634u;
label_2d4634:
    // 0x2d4634: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2d4634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2d4638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d463c: 0x0  nop
    ctx->pc = 0x2d463cu;
    // NOP
    // 0x2d4640: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d4640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d4644: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4648: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d464c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d464cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4650: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4654: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d4654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4658: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d465c: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d465cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d4660: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4660u;
    SET_GPR_U32(ctx, 31, 0x2D4668u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4660u, 0x2D4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4668u;
label_2d4668:
    // 0x2d4668: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2d4668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2d466c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d466cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4670: 0x0  nop
    ctx->pc = 0x2d4670u;
    // NOP
    // 0x2d4674: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d4674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d4678: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d467c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4680: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4684: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4688: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d4688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d468c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d468cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4690: 0x24478bf8  addiu       $a3, $v0, -0x7408
    ctx->pc = 0x2d4690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937592));
    // 0x2d4694: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4694u;
    SET_GPR_U32(ctx, 31, 0x2D469Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4694u, 0x2D469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D469Cu;
label_2d469c:
    // 0x2d469c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d469cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d46a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d46a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d46a4: 0xc0b402c  jal         func_2D00B0
    ctx->pc = 0x2D46A4u;
    SET_GPR_U32(ctx, 31, 0x2D46ACu);
    ctx->pc = 0x2D00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00B0u, 0x2D46A4u, 0x2D46ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46ACu;
label_2d46ac:
    // 0x2d46ac: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2D46ACu;
    {
        const bool branch_taken_0x2d46ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d46ac) {
            ctx->pc = 0x2D4798u;
            goto label_2d4798;
        }
    }
    ctx->pc = 0x2D46B4u;
label_2d46b4:
    // 0x2d46b4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d46b8: 0x24428780  addiu       $v0, $v0, -0x7880
    ctx->pc = 0x2d46b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936448));
    // 0x2d46bc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d46bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d46c0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d46c0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398780u));
    // 0x2d46c4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d46c4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d46c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d46c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d46cc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d46d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d46d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d46d4: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d46d8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d46d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d46dc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d46dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d46e0: 0x24478c04  addiu       $a3, $v0, -0x73FC
    ctx->pc = 0x2d46e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937604));
    // 0x2d46e4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D46E4u;
    SET_GPR_U32(ctx, 31, 0x2D46ECu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D46E4u, 0x2D46ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D46ECu;
label_2d46ec:
    // 0x2d46ec: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2d46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2d46f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d46f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d46f4: 0x0  nop
    ctx->pc = 0x2d46f4u;
    // NOP
    // 0x2d46f8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d46f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d46fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4700: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4704: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4708: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d4708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d470c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4710: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4714: 0x24478c04  addiu       $a3, $v0, -0x73FC
    ctx->pc = 0x2d4714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937604));
    // 0x2d4718: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4718u;
    SET_GPR_U32(ctx, 31, 0x2D4720u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4718u, 0x2D4720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4720u;
label_2d4720:
    // 0x2d4720: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2d4720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2d4724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4728: 0x0  nop
    ctx->pc = 0x2d4728u;
    // NOP
    // 0x2d472c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d472cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d4730: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4734: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4738: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d473c: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d4740: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4744: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4748: 0x24478c04  addiu       $a3, $v0, -0x73FC
    ctx->pc = 0x2d4748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937604));
    // 0x2d474c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D474Cu;
    SET_GPR_U32(ctx, 31, 0x2D4754u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D474Cu, 0x2D4754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4754u;
label_2d4754:
    // 0x2d4754: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2d4754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2d4758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d4758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d475c: 0x0  nop
    ctx->pc = 0x2d475cu;
    // NOP
    // 0x2d4760: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2d4760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d4764: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4768: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d476c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d476cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4770: 0x244502c0  addiu       $a1, $v0, 0x2C0
    ctx->pc = 0x2d4770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    // 0x2d4774: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d4774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d4778: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d477c: 0x24478c04  addiu       $a3, $v0, -0x73FC
    ctx->pc = 0x2d477cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937604));
    // 0x2d4780: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4780u;
    SET_GPR_U32(ctx, 31, 0x2D4788u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4780u, 0x2D4788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4788u;
label_2d4788:
    // 0x2d4788: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d478c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2d478cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4790: 0xc0b402c  jal         func_2D00B0
    ctx->pc = 0x2D4790u;
    SET_GPR_U32(ctx, 31, 0x2D4798u);
    ctx->pc = 0x2D00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D00B0u, 0x2D4790u, 0x2D4798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4798u;
label_2d4798:
    // 0x2d4798: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d4798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d479c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d479cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d47a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D47A0u;
    SET_GPR_U32(ctx, 31, 0x2D47A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D47A0u, 0x2D47A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47A8u;
label_2d47a8:
    // 0x2d47a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d47a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47ac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2D47ACu;
    SET_GPR_U32(ctx, 31, 0x2D47B4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2D47ACu, 0x2D47B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47B4u;
label_2d47b4:
    // 0x2d47b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d47b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d47b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d47bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2D47BCu;
    SET_GPR_U32(ctx, 31, 0x2D47C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2D47BCu, 0x2D47C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47C4u;
label_2d47c4:
    // 0x2d47c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d47c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47c8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x2D47C8u;
    SET_GPR_U32(ctx, 31, 0x2D47D0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x2D47C8u, 0x2D47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D47D0u;
label_2d47d0:
    // 0x2d47d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47d4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d47d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d47d8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D47D8u;
    {
        const bool branch_taken_0x2d47d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d47d8) {
            ctx->pc = 0x2D4860u;
            goto label_2d4860;
        }
    }
    ctx->pc = 0x2D47E0u;
    // 0x2d47e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d47e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d47e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d47e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d47e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d47ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47f0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2d47f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d47f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d47f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d47f8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d47f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d47fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4800: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d4800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4804: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4808: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d4808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d480c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d4810: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4814: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2d4814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d4818: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d481c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2d481cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2d4820: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D4820u;
    {
        const bool branch_taken_0x2d4820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4820) {
            ctx->pc = 0x2D4848u;
            goto label_2d4848;
        }
    }
    ctx->pc = 0x2D4828u;
    // 0x2d4828: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x2d4828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x2d482c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d482cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d4830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d4830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4834: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4838: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d4838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d483c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d4840: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4840u;
    {
        const bool branch_taken_0x2d4840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4840) {
            ctx->pc = 0x2D4860u;
            goto label_2d4860;
        }
    }
    ctx->pc = 0x2D4848u;
label_2d4848:
    // 0x2d4848: 0x3c03bf49  lui         $v1, 0xBF49
    ctx->pc = 0x2d4848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48969 << 16));
    // 0x2d484c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d484cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d4850: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d4850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4854: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4858: 0x2463133c  addiu       $v1, $v1, 0x133C
    ctx->pc = 0x2d4858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4924));
    // 0x2d485c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d485cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2d4860:
    // 0x2d4860: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2d4860u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4864: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d4864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d4868: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4870u;
}
