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

// Function: Em07_R1_atk_tail_f
// Address: 0x2d6500 - 0x2d6940
void Em07_R1_atk_tail_f_0x2d6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_R1_atk_tail_f_0x2d6500");
#endif

    switch (ctx->pc) {
        case 0x2d6558u: goto label_2d6558;
        case 0x2d6588u: goto label_2d6588;
        case 0x2d6618u: goto label_2d6618;
        case 0x2d6858u: goto label_2d6858;
        default: break;
    }

    ctx->pc = 0x2d6500u;

    // 0x2d6500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6504: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d6504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2d6508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d6508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d650c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2d650cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2d6510: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6514: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2d6514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d6518: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2d6518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2d651c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6520: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D6520u;
    {
        const bool branch_taken_0x2d6520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d6520) {
            ctx->pc = 0x2D65D0u;
            goto label_2d65d0;
        }
    }
    ctx->pc = 0x2D6528u;
    // 0x2d6528: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6528u;
    {
        const bool branch_taken_0x2d6528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6528) {
            ctx->pc = 0x2D6538u;
            goto label_2d6538;
        }
    }
    ctx->pc = 0x2D6530u;
    // 0x2d6530: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x2D6530u;
    {
        const bool branch_taken_0x2d6530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6530) {
            ctx->pc = 0x2D692Cu;
            goto label_2d692c;
        }
    }
    ctx->pc = 0x2D6538u;
label_2d6538:
    // 0x2d6538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d653c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d653cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6540: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d6540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d6544: 0x24063c04  addiu       $a2, $zero, 0x3C04
    ctx->pc = 0x2d6544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15364));
    // 0x2d6548: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d6548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d654c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d654cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d6550: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D6550u;
    SET_GPR_U32(ctx, 31, 0x2D6558u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D6550u, 0x2D6558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6558u;
label_2d6558:
    // 0x2d6558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d655c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6560: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6564: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6568: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d656c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6570: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2d6570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2d6574: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d6574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6578: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d6578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d657c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d657cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d6580: 0xc05cc20  jal         func_173080
    ctx->pc = 0x2D6580u;
    SET_GPR_U32(ctx, 31, 0x2D6588u);
    ctx->pc = 0x173080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173080u, 0x2D6580u, 0x2D6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6588u;
label_2d6588:
    // 0x2d6588: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d658c: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d658cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6590: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6598: 0x24431348  addiu       $v1, $v0, 0x1348
    ctx->pc = 0x2d6598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d659c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2d659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2d65a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d65a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d65a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d65a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d65a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d65a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d65ac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d65acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d65b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d65b4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2d65b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d65b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d65bc: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x2d65bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d65c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d65c4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d65c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d65c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d65cc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d65ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2d65d0:
    // 0x2d65d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d65d4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d65d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d65d8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D65D8u;
    {
        const bool branch_taken_0x2d65d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d65d8) {
            ctx->pc = 0x2D662Cu;
            goto label_2d662c;
        }
    }
    ctx->pc = 0x2D65E0u;
    // 0x2d65e0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d65e4: 0x24428950  addiu       $v0, $v0, -0x76B0
    ctx->pc = 0x2d65e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936912));
    // 0x2d65e8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2d65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d65ec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d65ecu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398950u));
    // 0x2d65f0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2d65f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2d65f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d65f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d65f8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d65fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6600: 0x24450400  addiu       $a1, $v0, 0x400
    ctx->pc = 0x2d6600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2d6604: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d6604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d6608: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d6608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d660c: 0x24478cd0  addiu       $a3, $v0, -0x7330
    ctx->pc = 0x2d660cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937808));
    // 0x2d6610: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D6610u;
    SET_GPR_U32(ctx, 31, 0x2D6618u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D6610u, 0x2D6618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6618u;
label_2d6618:
    // 0x2d6618: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6618u;
    {
        const bool branch_taken_0x2d6618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6618) {
            ctx->pc = 0x2D662Cu;
            goto label_2d662c;
        }
    }
    ctx->pc = 0x2D6620u;
    // 0x2d6620: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6624: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6628: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2d6628u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2d662c:
    // 0x2d662c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6630: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d6630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d6634: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d6634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d6638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d6638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d663c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D663Cu;
    {
        const bool branch_taken_0x2d663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d663c) {
            ctx->pc = 0x2D66E8u;
            goto label_2d66e8;
        }
    }
    ctx->pc = 0x2D6644u;
    // 0x2d6644: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6648: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d6648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d664c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D664Cu;
    {
        const bool branch_taken_0x2d664c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d664c) {
            ctx->pc = 0x2D66DCu;
            goto label_2d66dc;
        }
    }
    ctx->pc = 0x2D6654u;
    // 0x2d6654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d6654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6658: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d665c: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6660: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6664: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d6664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6668: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2d6668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d666c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6670: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6674: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6678: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d6678u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d667c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6680: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6688: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d6688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d668c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6690: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d6690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d6694: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d6694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6698: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d6698u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d669c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66a0: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d66a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d66a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d66a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d66ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d66acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d66b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66b4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d66b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d66b8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2d66b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d66bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66c0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d66c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d66c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66c8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d66c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d66cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66d0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d66d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d66d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d66d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2d66dc:
    // 0x2d66dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d66e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66e4: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x2d66e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_2d66e8:
    // 0x2d66e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d66ec: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d66ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d66f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d66f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d66f4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d66f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d66f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D66F8u;
    {
        const bool branch_taken_0x2d66f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d66f8) {
            ctx->pc = 0x2D6728u;
            goto label_2d6728;
        }
    }
    ctx->pc = 0x2D6700u;
    // 0x2d6700: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6704: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d6704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6708: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d670c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6710: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6714: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6718: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2d6718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2d671c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d671cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d6720: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D6720u;
    {
        const bool branch_taken_0x2d6720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6720) {
            ctx->pc = 0x2D6748u;
            goto label_2d6748;
        }
    }
    ctx->pc = 0x2D6728u;
label_2d6728:
    // 0x2d6728: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d672c: 0x24421348  addiu       $v0, $v0, 0x1348
    ctx->pc = 0x2d672cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4936));
    // 0x2d6730: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2d6730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6738: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d673c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6740: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d6740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d6744: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2d6748:
    // 0x2d6748: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d674c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d6750: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x2d6750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x2d6754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6758: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d675c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6760: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d6760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d6764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6768: 0x0  nop
    ctx->pc = 0x2d6768u;
    // NOP
    // 0x2d676c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d676cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d6770: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d6770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d6774: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d6774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d6778: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d6778u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d677c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6780: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d6780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d6784: 0x24500c80  addiu       $s0, $v0, 0xC80
    ctx->pc = 0x2d6784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2d6788: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d678c: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d678cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6790: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6794: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d6794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d6798: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d679c: 0x0  nop
    ctx->pc = 0x2d679cu;
    // NOP
    // 0x2d67a0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d67a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d67a4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d67a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d67a8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d67a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d67ac: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d67acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d67b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d67b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d67b4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d67b8: 0x24500fa0  addiu       $s0, $v0, 0xFA0
    ctx->pc = 0x2d67b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
    // 0x2d67bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d67bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d67c0: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d67c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d67c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d67c8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d67c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d67cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d67ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d67d0: 0x0  nop
    ctx->pc = 0x2d67d0u;
    // NOP
    // 0x2d67d4: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d67d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d67d8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d67d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d67dc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d67dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d67e0: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d67e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d67e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d67e8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d67e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d67ec: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x2d67ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2d67f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d67f4: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d67f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d67f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d67fc: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d67fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d6800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6804: 0x0  nop
    ctx->pc = 0x2d6804u;
    // NOP
    // 0x2d6808: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d6808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d680c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d680cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d6810: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d6810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d6814: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d6814u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d6818: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d681c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d6820: 0x245015e0  addiu       $s0, $v0, 0x15E0
    ctx->pc = 0x2d6820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5600));
    // 0x2d6824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6828: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d682c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d682cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6830: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d6830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d6834: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d6834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d6838: 0x0  nop
    ctx->pc = 0x2d6838u;
    // NOP
    // 0x2d683c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d6840: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d6840u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d6844: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d6844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d6848: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d6848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d684c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d684cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6850: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D6850u;
    SET_GPR_U32(ctx, 31, 0x2D6858u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D6850u, 0x2D6858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6858u;
label_2d6858:
    // 0x2d6858: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d685c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d685cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d6860: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D6860u;
    {
        const bool branch_taken_0x2d6860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6860) {
            ctx->pc = 0x2D692Cu;
            goto label_2d692c;
        }
    }
    ctx->pc = 0x2D6868u;
    // 0x2d6868: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d686c: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6870: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6874: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d6874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6878: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d6878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d687c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d687cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6880: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6880u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d6884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6888: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d688c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d688cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6890: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d6890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6894: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6898: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d6898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d689c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d689cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d68a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d68a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d68a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d68ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d68b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68b8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d68b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d68bc: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x2d68bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x2d68c0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d68c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d68c4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d68c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d68c8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d68c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d68cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68d0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d68d4: 0x24700c80  addiu       $s0, $v1, 0xC80
    ctx->pc = 0x2d68d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
    // 0x2d68d8: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d68d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d68dc: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d68dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d68e0: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d68e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d68e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d68e8: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d68ec: 0x24700fa0  addiu       $s0, $v1, 0xFA0
    ctx->pc = 0x2d68ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x2d68f0: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d68f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d68f4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d68f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d68f8: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d68f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d68fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d68fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6900: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d6900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d6904: 0x247012c0  addiu       $s0, $v1, 0x12C0
    ctx->pc = 0x2d6904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x2d6908: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d6908u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d690c: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d690cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d6910: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d6910u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d6914: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6918: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d6918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d691c: 0x247015e0  addiu       $s0, $v1, 0x15E0
    ctx->pc = 0x2d691cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2d6920: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d6920u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d6924: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d6924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d6928: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d6928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
label_2d692c:
    // 0x2d692c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d692cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d6930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6934: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d6934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d6938: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6940u;
}
