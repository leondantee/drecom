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

// Function: Em02_move
// Address: 0x29d740 - 0x29d970
void Em02_move_0x29d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_move_0x29d740");
#endif

    switch (ctx->pc) {
        case 0x29d740u: goto label_29d740;
        case 0x29d744u: goto label_29d744;
        case 0x29d748u: goto label_29d748;
        case 0x29d74cu: goto label_29d74c;
        case 0x29d750u: goto label_29d750;
        case 0x29d754u: goto label_29d754;
        case 0x29d758u: goto label_29d758;
        case 0x29d75cu: goto label_29d75c;
        case 0x29d760u: goto label_29d760;
        case 0x29d764u: goto label_29d764;
        case 0x29d768u: goto label_29d768;
        case 0x29d76cu: goto label_29d76c;
        case 0x29d770u: goto label_29d770;
        case 0x29d774u: goto label_29d774;
        case 0x29d778u: goto label_29d778;
        case 0x29d77cu: goto label_29d77c;
        case 0x29d780u: goto label_29d780;
        case 0x29d784u: goto label_29d784;
        case 0x29d788u: goto label_29d788;
        case 0x29d78cu: goto label_29d78c;
        case 0x29d790u: goto label_29d790;
        case 0x29d794u: goto label_29d794;
        case 0x29d798u: goto label_29d798;
        case 0x29d79cu: goto label_29d79c;
        case 0x29d7a0u: goto label_29d7a0;
        case 0x29d7a4u: goto label_29d7a4;
        case 0x29d7a8u: goto label_29d7a8;
        case 0x29d7acu: goto label_29d7ac;
        case 0x29d7b0u: goto label_29d7b0;
        case 0x29d7b4u: goto label_29d7b4;
        case 0x29d7b8u: goto label_29d7b8;
        case 0x29d7bcu: goto label_29d7bc;
        case 0x29d7c0u: goto label_29d7c0;
        case 0x29d7c4u: goto label_29d7c4;
        case 0x29d7c8u: goto label_29d7c8;
        case 0x29d7ccu: goto label_29d7cc;
        case 0x29d7d0u: goto label_29d7d0;
        case 0x29d7d4u: goto label_29d7d4;
        case 0x29d7d8u: goto label_29d7d8;
        case 0x29d7dcu: goto label_29d7dc;
        case 0x29d7e0u: goto label_29d7e0;
        case 0x29d7e4u: goto label_29d7e4;
        case 0x29d7e8u: goto label_29d7e8;
        case 0x29d7ecu: goto label_29d7ec;
        case 0x29d7f0u: goto label_29d7f0;
        case 0x29d7f4u: goto label_29d7f4;
        case 0x29d7f8u: goto label_29d7f8;
        case 0x29d7fcu: goto label_29d7fc;
        case 0x29d800u: goto label_29d800;
        case 0x29d804u: goto label_29d804;
        case 0x29d808u: goto label_29d808;
        case 0x29d80cu: goto label_29d80c;
        case 0x29d810u: goto label_29d810;
        case 0x29d814u: goto label_29d814;
        case 0x29d818u: goto label_29d818;
        case 0x29d81cu: goto label_29d81c;
        case 0x29d820u: goto label_29d820;
        case 0x29d824u: goto label_29d824;
        case 0x29d828u: goto label_29d828;
        case 0x29d82cu: goto label_29d82c;
        case 0x29d830u: goto label_29d830;
        case 0x29d834u: goto label_29d834;
        case 0x29d838u: goto label_29d838;
        case 0x29d83cu: goto label_29d83c;
        case 0x29d840u: goto label_29d840;
        case 0x29d844u: goto label_29d844;
        case 0x29d848u: goto label_29d848;
        case 0x29d84cu: goto label_29d84c;
        case 0x29d850u: goto label_29d850;
        case 0x29d854u: goto label_29d854;
        case 0x29d858u: goto label_29d858;
        case 0x29d85cu: goto label_29d85c;
        case 0x29d860u: goto label_29d860;
        case 0x29d864u: goto label_29d864;
        case 0x29d868u: goto label_29d868;
        case 0x29d86cu: goto label_29d86c;
        case 0x29d870u: goto label_29d870;
        case 0x29d874u: goto label_29d874;
        case 0x29d878u: goto label_29d878;
        case 0x29d87cu: goto label_29d87c;
        case 0x29d880u: goto label_29d880;
        case 0x29d884u: goto label_29d884;
        case 0x29d888u: goto label_29d888;
        case 0x29d88cu: goto label_29d88c;
        case 0x29d890u: goto label_29d890;
        case 0x29d894u: goto label_29d894;
        case 0x29d898u: goto label_29d898;
        case 0x29d89cu: goto label_29d89c;
        case 0x29d8a0u: goto label_29d8a0;
        case 0x29d8a4u: goto label_29d8a4;
        case 0x29d8a8u: goto label_29d8a8;
        case 0x29d8acu: goto label_29d8ac;
        case 0x29d8b0u: goto label_29d8b0;
        case 0x29d8b4u: goto label_29d8b4;
        case 0x29d8b8u: goto label_29d8b8;
        case 0x29d8bcu: goto label_29d8bc;
        case 0x29d8c0u: goto label_29d8c0;
        case 0x29d8c4u: goto label_29d8c4;
        case 0x29d8c8u: goto label_29d8c8;
        case 0x29d8ccu: goto label_29d8cc;
        case 0x29d8d0u: goto label_29d8d0;
        case 0x29d8d4u: goto label_29d8d4;
        case 0x29d8d8u: goto label_29d8d8;
        case 0x29d8dcu: goto label_29d8dc;
        case 0x29d8e0u: goto label_29d8e0;
        case 0x29d8e4u: goto label_29d8e4;
        case 0x29d8e8u: goto label_29d8e8;
        case 0x29d8ecu: goto label_29d8ec;
        case 0x29d8f0u: goto label_29d8f0;
        case 0x29d8f4u: goto label_29d8f4;
        case 0x29d8f8u: goto label_29d8f8;
        case 0x29d8fcu: goto label_29d8fc;
        case 0x29d900u: goto label_29d900;
        case 0x29d904u: goto label_29d904;
        case 0x29d908u: goto label_29d908;
        case 0x29d90cu: goto label_29d90c;
        case 0x29d910u: goto label_29d910;
        case 0x29d914u: goto label_29d914;
        case 0x29d918u: goto label_29d918;
        case 0x29d91cu: goto label_29d91c;
        case 0x29d920u: goto label_29d920;
        case 0x29d924u: goto label_29d924;
        case 0x29d928u: goto label_29d928;
        case 0x29d92cu: goto label_29d92c;
        case 0x29d930u: goto label_29d930;
        case 0x29d934u: goto label_29d934;
        case 0x29d938u: goto label_29d938;
        case 0x29d93cu: goto label_29d93c;
        case 0x29d940u: goto label_29d940;
        case 0x29d944u: goto label_29d944;
        case 0x29d948u: goto label_29d948;
        case 0x29d94cu: goto label_29d94c;
        case 0x29d950u: goto label_29d950;
        case 0x29d954u: goto label_29d954;
        case 0x29d958u: goto label_29d958;
        case 0x29d95cu: goto label_29d95c;
        case 0x29d960u: goto label_29d960;
        case 0x29d964u: goto label_29d964;
        case 0x29d968u: goto label_29d968;
        case 0x29d96cu: goto label_29d96c;
        default: break;
    }

    ctx->pc = 0x29d740u;

label_29d740:
    // 0x29d740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29d740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_29d744:
    // 0x29d744: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x29d744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_29d748:
    // 0x29d748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29d748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29d74c:
    // 0x29d74c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29d750:
    // 0x29d750: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x29d750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_29d754:
    // 0x29d754: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x29d754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_29d758:
    // 0x29d758: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x29d758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_29d75c:
    // 0x29d75c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d760:
    // 0x29d760: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d764:
    // 0x29d764: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29d764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29d768:
    // 0x29d768: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x29d768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_29d76c:
    // 0x29d76c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x29d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_29d770:
    // 0x29d770: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29d770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d774:
    // 0x29d774: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d778:
    // 0x29d778: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x29d778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_29d77c:
    // 0x29d77c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29d77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29d780:
    // 0x29d780: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29d780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29d784:
    // 0x29d784: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x29d784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_29d788:
    // 0x29d788: 0x24426aa0  addiu       $v0, $v0, 0x6AA0
    ctx->pc = 0x29d788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27296));
label_29d78c:
    // 0x29d78c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29d790:
    // 0x29d790: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29d790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29d794:
    // 0x29d794: 0x40f809  jalr        $v0
label_29d798:
    if (ctx->pc == 0x29D798u) {
        ctx->pc = 0x29D79Cu;
        goto label_29d79c;
    }
    ctx->pc = 0x29D794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D79Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D794u, 0x29D79Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D79Cu;
label_29d79c:
    // 0x29d79c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d7a0:
    // 0x29d7a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d7a4:
    // 0x29d7a4: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x29d7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_29d7a8:
    // 0x29d7a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d7ac:
    // 0x29d7ac: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x29d7acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_29d7b0:
    // 0x29d7b0: 0xc0aa1c0  jal         func_2A8700
label_29d7b4:
    if (ctx->pc == 0x29D7B4u) {
        ctx->pc = 0x29D7B8u;
        goto label_29d7b8;
    }
    ctx->pc = 0x29D7B0u;
    SET_GPR_U32(ctx, 31, 0x29D7B8u);
    ctx->pc = 0x2A8700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8700u, 0x29D7B0u, 0x29D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7B8u;
label_29d7b8:
    // 0x29d7b8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x29d7b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_29d7bc:
    // 0x29d7bc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_29d7c0:
    if (ctx->pc == 0x29D7C0u) {
        ctx->pc = 0x29D7C4u;
        goto label_29d7c4;
    }
    ctx->pc = 0x29D7BCu;
    {
        const bool branch_taken_0x29d7bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d7bc) {
            ctx->pc = 0x29D7D0u;
            goto label_29d7d0;
        }
    }
    ctx->pc = 0x29D7C4u;
label_29d7c4:
    // 0x29d7c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d7c8:
    // 0x29d7c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d7cc:
    // 0x29d7cc: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x29d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_29d7d0:
    // 0x29d7d0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d7d4:
    // 0x29d7d4: 0xc0b3950  jal         func_2CE540
label_29d7d8:
    if (ctx->pc == 0x29D7D8u) {
        ctx->pc = 0x29D7DCu;
        goto label_29d7dc;
    }
    ctx->pc = 0x29D7D4u;
    SET_GPR_U32(ctx, 31, 0x29D7DCu);
    ctx->pc = 0x2CE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE540u, 0x29D7D4u, 0x29D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7DCu;
label_29d7dc:
    // 0x29d7dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d7e0:
    // 0x29d7e0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x29d7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29d7e4:
    // 0x29d7e4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x29d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_29d7e8:
    // 0x29d7e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29d7ec:
    // 0x29d7ec: 0x0  nop
    ctx->pc = 0x29d7ecu;
    // NOP
label_29d7f0:
    // 0x29d7f0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x29d7f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29d7f4:
    // 0x29d7f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29d7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_29d7f8:
    // 0x29d7f8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x29d7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29d7fc:
    // 0x29d7fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29d7fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29d800:
    // 0x29d800: 0x0  nop
    ctx->pc = 0x29d800u;
    // NOP
label_29d804:
    // 0x29d804: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_29d808:
    if (ctx->pc == 0x29D808u) {
        ctx->pc = 0x29D80Cu;
        goto label_29d80c;
    }
    ctx->pc = 0x29D804u;
    {
        const bool branch_taken_0x29d804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d804) {
            ctx->pc = 0x29D820u;
            goto label_29d820;
        }
    }
    ctx->pc = 0x29D80Cu;
label_29d80c:
    // 0x29d80c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d810:
    // 0x29d810: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d814:
    // 0x29d814: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x29d814u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_29d818:
    // 0x29d818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29d81c:
    // 0x29d81c: 0xa4620048  sh          $v0, 0x48($v1)
    ctx->pc = 0x29d81cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 2));
label_29d820:
    // 0x29d820: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d824:
    // 0x29d824: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x29d824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29d828:
    // 0x29d828: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x29d828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_29d82c:
    // 0x29d82c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29d82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29d830:
    // 0x29d830: 0x0  nop
    ctx->pc = 0x29d830u;
    // NOP
label_29d834:
    // 0x29d834: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29d834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_29d838:
    // 0x29d838: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29d838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_29d83c:
    // 0x29d83c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x29d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294958308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29d840:
    // 0x29d840: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29d840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29d844:
    // 0x29d844: 0x0  nop
    ctx->pc = 0x29d844u;
    // NOP
label_29d848:
    // 0x29d848: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_29d84c:
    if (ctx->pc == 0x29D84Cu) {
        ctx->pc = 0x29D850u;
        goto label_29d850;
    }
    ctx->pc = 0x29D848u;
    {
        const bool branch_taken_0x29d848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d848) {
            ctx->pc = 0x29D86Cu;
            goto label_29d86c;
        }
    }
    ctx->pc = 0x29D850u;
label_29d850:
    // 0x29d850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d854:
    // 0x29d854: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d858:
    // 0x29d858: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x29d858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_29d85c:
    // 0x29d85c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29d860:
    // 0x29d860: 0xa4620048  sh          $v0, 0x48($v1)
    ctx->pc = 0x29d860u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 2));
label_29d864:
    // 0x29d864: 0x10000004  b           . + 4 + (0x4 << 2)
label_29d868:
    if (ctx->pc == 0x29D868u) {
        ctx->pc = 0x29D86Cu;
        goto label_29d86c;
    }
    ctx->pc = 0x29D864u;
    {
        const bool branch_taken_0x29d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d864) {
            ctx->pc = 0x29D878u;
            goto label_29d878;
        }
    }
    ctx->pc = 0x29D86Cu;
label_29d86c:
    // 0x29d86c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d870:
    // 0x29d870: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d874:
    // 0x29d874: 0xa4400048  sh          $zero, 0x48($v0)
    ctx->pc = 0x29d874u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 0));
label_29d878:
    // 0x29d878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d87c:
    // 0x29d87c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d880:
    // 0x29d880: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x29d880u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_29d884:
    // 0x29d884: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29d888:
    if (ctx->pc == 0x29D888u) {
        ctx->pc = 0x29D88Cu;
        goto label_29d88c;
    }
    ctx->pc = 0x29D884u;
    {
        const bool branch_taken_0x29d884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d884) {
            ctx->pc = 0x29D8A0u;
            goto label_29d8a0;
        }
    }
    ctx->pc = 0x29D88Cu;
label_29d88c:
    // 0x29d88c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d890:
    // 0x29d890: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d894:
    // 0x29d894: 0x84620010  lh          $v0, 0x10($v1)
    ctx->pc = 0x29d894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_29d898:
    // 0x29d898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29d89c:
    // 0x29d89c: 0xa4620010  sh          $v0, 0x10($v1)
    ctx->pc = 0x29d89cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 2));
label_29d8a0:
    // 0x29d8a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d8a4:
    // 0x29d8a4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d8a8:
    // 0x29d8a8: 0x94420040  lhu         $v0, 0x40($v0)
    ctx->pc = 0x29d8a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_29d8ac:
    // 0x29d8ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29d8b0:
    if (ctx->pc == 0x29D8B0u) {
        ctx->pc = 0x29D8B4u;
        goto label_29d8b4;
    }
    ctx->pc = 0x29D8ACu;
    {
        const bool branch_taken_0x29d8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d8ac) {
            ctx->pc = 0x29D8C8u;
            goto label_29d8c8;
        }
    }
    ctx->pc = 0x29D8B4u;
label_29d8b4:
    // 0x29d8b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d8b8:
    // 0x29d8b8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d8bc:
    // 0x29d8bc: 0x94620040  lhu         $v0, 0x40($v1)
    ctx->pc = 0x29d8bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_29d8c0:
    // 0x29d8c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29d8c4:
    // 0x29d8c4: 0xa4620040  sh          $v0, 0x40($v1)
    ctx->pc = 0x29d8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 2));
label_29d8c8:
    // 0x29d8c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d8cc:
    // 0x29d8cc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d8d0:
    // 0x29d8d0: 0x94420042  lhu         $v0, 0x42($v0)
    ctx->pc = 0x29d8d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
label_29d8d4:
    // 0x29d8d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29d8d8:
    if (ctx->pc == 0x29D8D8u) {
        ctx->pc = 0x29D8DCu;
        goto label_29d8dc;
    }
    ctx->pc = 0x29D8D4u;
    {
        const bool branch_taken_0x29d8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d8d4) {
            ctx->pc = 0x29D8F0u;
            goto label_29d8f0;
        }
    }
    ctx->pc = 0x29D8DCu;
label_29d8dc:
    // 0x29d8dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d8e0:
    // 0x29d8e0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d8e4:
    // 0x29d8e4: 0x94620042  lhu         $v0, 0x42($v1)
    ctx->pc = 0x29d8e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
label_29d8e8:
    // 0x29d8e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29d8ec:
    // 0x29d8ec: 0xa4620042  sh          $v0, 0x42($v1)
    ctx->pc = 0x29d8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 2));
label_29d8f0:
    // 0x29d8f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d8f4:
    // 0x29d8f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d8f8:
    // 0x29d8f8: 0x94420046  lhu         $v0, 0x46($v0)
    ctx->pc = 0x29d8f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_29d8fc:
    // 0x29d8fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29d900:
    if (ctx->pc == 0x29D900u) {
        ctx->pc = 0x29D904u;
        goto label_29d904;
    }
    ctx->pc = 0x29D8FCu;
    {
        const bool branch_taken_0x29d8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d8fc) {
            ctx->pc = 0x29D918u;
            goto label_29d918;
        }
    }
    ctx->pc = 0x29D904u;
label_29d904:
    // 0x29d904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d908:
    // 0x29d908: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d90c:
    // 0x29d90c: 0x94620046  lhu         $v0, 0x46($v1)
    ctx->pc = 0x29d90cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
label_29d910:
    // 0x29d910: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29d914:
    // 0x29d914: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x29d914u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
label_29d918:
    // 0x29d918: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d91c:
    // 0x29d91c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d920:
    // 0x29d920: 0x94420044  lhu         $v0, 0x44($v0)
    ctx->pc = 0x29d920u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
label_29d924:
    // 0x29d924: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_29d928:
    if (ctx->pc == 0x29D928u) {
        ctx->pc = 0x29D92Cu;
        goto label_29d92c;
    }
    ctx->pc = 0x29D924u;
    {
        const bool branch_taken_0x29d924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d924) {
            ctx->pc = 0x29D940u;
            goto label_29d940;
        }
    }
    ctx->pc = 0x29D92Cu;
label_29d92c:
    // 0x29d92c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x29d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d930:
    // 0x29d930: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29d930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
label_29d934:
    // 0x29d934: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x29d934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
label_29d938:
    // 0x29d938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29d93c:
    // 0x29d93c: 0xa4620044  sh          $v0, 0x44($v1)
    ctx->pc = 0x29d93cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 68), (uint16_t)GPR_U32(ctx, 2));
label_29d940:
    // 0x29d940: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29d940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d944:
    // 0x29d944: 0xc0aa184  jal         func_2A8610
label_29d948:
    if (ctx->pc == 0x29D948u) {
        ctx->pc = 0x29D94Cu;
        goto label_29d94c;
    }
    ctx->pc = 0x29D944u;
    SET_GPR_U32(ctx, 31, 0x29D94Cu);
    ctx->pc = 0x2A8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8610u, 0x29D944u, 0x29D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D94Cu;
label_29d94c:
    // 0x29d94c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x29d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_29d950:
    // 0x29d950: 0xc0aa22c  jal         func_2A88B0
label_29d954:
    if (ctx->pc == 0x29D954u) {
        ctx->pc = 0x29D958u;
        goto label_29d958;
    }
    ctx->pc = 0x29D950u;
    SET_GPR_U32(ctx, 31, 0x29D958u);
    ctx->pc = 0x2A88B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A88B0u, 0x29D950u, 0x29D958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D958u;
label_29d958:
    // 0x29d958: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29d958u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29d95c:
    // 0x29d95c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29d95cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29d960:
    // 0x29d960: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29d964:
    // 0x29d964: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29d964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_29d968:
    // 0x29d968: 0x3e00008  jr          $ra
label_29d96c:
    if (ctx->pc == 0x29D96Cu) {
        ctx->pc = 0x29D970u;
        goto label_fallthrough_0x29d968;
    }
    ctx->pc = 0x29D968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d968:
    ctx->pc = 0x29D970u;
}
