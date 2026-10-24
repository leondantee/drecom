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

// Function: entry_003372e4
// Address: 0x3372e4 - 0x3375ec
void entry_003372e4_0x3372e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003372e4_0x3372e4");
#endif

    switch (ctx->pc) {
        case 0x3372f4u: goto label_3372f4;
        case 0x3374c8u: goto label_3374c8;
        case 0x3374f8u: goto label_3374f8;
        case 0x337578u: goto label_337578;
        case 0x3375acu: goto label_3375ac;
        case 0x3375e4u: goto label_3375e4;
        default: break;
    }

    ctx->pc = 0x3372e4u;

    // 0x3372e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3372e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3372e8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x3372e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3372ec: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x3372ECu;
    SET_GPR_U32(ctx, 31, 0x3372F4u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x3372ECu, 0x3372F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3372F4u;
label_3372f4:
    // 0x3372f4: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x3372f4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3372f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x3372f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3372fc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3372fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x337300: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x337300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x337304: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x337304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x337308: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x337308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x33730c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x33730cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x337310: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x337310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x337314: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x337314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x337318: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33731c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x33731cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x337320: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x337320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x337324: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x337328: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x337328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33732c: 0x26420018  addiu       $v0, $s2, 0x18
    ctx->pc = 0x33732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x337330: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337334: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x337334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x337338: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x337338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x33733c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33733cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337340: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x337340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x337344: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x337344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x337348: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33734c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x33734cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x337350: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x337350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x337354: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x337358: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x337358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33735c: 0x26420024  addiu       $v0, $s2, 0x24
    ctx->pc = 0x33735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x337360: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337364: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x337364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x337368: 0x26420028  addiu       $v0, $s2, 0x28
    ctx->pc = 0x337368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x33736c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33736cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337370: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x337370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x337374: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x337374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x337378: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33737c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x33737cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x337380: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x337380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x337384: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x337384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x337388: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33738c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33738cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x337390: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x337390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x337394: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337398: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x337398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x33739c: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x33739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x3373a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3373a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3373a4: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x3373a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x3373a8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x3373a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x3373ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3373acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3373b0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3373b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3373b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3373b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3373b8: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x3373b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x3373bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3373bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3373c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3373c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3373c4: 0x2642003c  addiu       $v0, $s2, 0x3C
    ctx->pc = 0x3373c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
    // 0x3373c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3373c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3373cc: 0x3403fffb  ori         $v1, $zero, 0xFFFB
    ctx->pc = 0x3373ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
    // 0x3373d0: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x3373d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3373d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3373d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3373d8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3373d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3373dc: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x3373dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3373e0: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x3373e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3373e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3373e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3373e8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3373e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3373ec: 0x94224c40  lhu         $v0, 0x4C40($at)
    ctx->pc = 0x3373ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C40u));
    // 0x3373f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3373f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3373f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3373f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3373f8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3373f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3373fc: 0x94224c42  lhu         $v0, 0x4C42($at)
    ctx->pc = 0x3373fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C42u));
    // 0x337400: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337404: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x337404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337408: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33740c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33740cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x337410: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x337410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x337414: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337418: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33741c: 0x94224c44  lhu         $v0, 0x4C44($at)
    ctx->pc = 0x33741cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C44u));
    // 0x337420: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337424: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x337424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337428: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33742c: 0x94224c42  lhu         $v0, 0x4C42($at)
    ctx->pc = 0x33742cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C42u));
    // 0x337430: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337434: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x337434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337438: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33743c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33743cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x337440: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x337440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x337444: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337448: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33744c: 0x94224c40  lhu         $v0, 0x4C40($at)
    ctx->pc = 0x33744cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C40u));
    // 0x337450: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337454: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x337454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337458: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33745c: 0x94224c46  lhu         $v0, 0x4C46($at)
    ctx->pc = 0x33745cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C46u));
    // 0x337460: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337464: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x337464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337468: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33746c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33746cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x337470: 0x2642002c  addiu       $v0, $s2, 0x2C
    ctx->pc = 0x337470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x337474: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x337474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x337478: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33747c: 0x94224c44  lhu         $v0, 0x4C44($at)
    ctx->pc = 0x33747cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C44u));
    // 0x337480: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337484: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x337484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337488: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33748c: 0x94224c46  lhu         $v0, 0x4C46($at)
    ctx->pc = 0x33748cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C46u));
    // 0x337490: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337494: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x337494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x337498: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33749c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3374a0: 0x26560038  addiu       $s6, $s2, 0x38
    ctx->pc = 0x3374a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x3374a4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x3374a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x3374a8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x3374a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x3374ac: 0x24424c18  addiu       $v0, $v0, 0x4C18
    ctx->pc = 0x3374acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19480));
    // 0x3374b0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3374b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3374b4: 0x26370008  addiu       $s7, $s1, 0x8
    ctx->pc = 0x3374b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3374b8: 0x72e02628  paddub      $a0, $s7, $zero
    ctx->pc = 0x3374b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x3374bc: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x3374bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x3374c0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3374C0u;
    SET_GPR_U32(ctx, 31, 0x3374C8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3374C0u, 0x3374C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374C8u;
label_3374c8:
    // 0x3374c8: 0x26520044  addiu       $s2, $s2, 0x44
    ctx->pc = 0x3374c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x3374cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3374ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3374d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3374d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3374d4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3374d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3374d8: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x3374d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x3374dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3374dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3374e0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x3374e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3374e4: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3374e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x3374e8: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3374e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3374ec: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3374ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3374f0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3374F0u;
    SET_GPR_U32(ctx, 31, 0x3374F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3374F0u, 0x3374F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374F8u;
label_3374f8:
    // 0x3374f8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3374f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3374fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3374fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337500: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x337500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x337504: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x337504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x337508: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x337508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x33750c: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x33750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x337510: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x337510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x337514: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337518: 0x94224c40  lhu         $v0, 0x4C40($at)
    ctx->pc = 0x337518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C40u));
    // 0x33751c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337520: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x337520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x337524: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x337524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x337528: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33752c: 0x94224c44  lhu         $v0, 0x4C44($at)
    ctx->pc = 0x33752cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C44u));
    // 0x337530: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337534: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x337534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x337538: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x337538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33753c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33753cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337540: 0x94224c42  lhu         $v0, 0x4C42($at)
    ctx->pc = 0x337540u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x894C42u));
    // 0x337544: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x337548: 0x22638  dsll        $a0, $v0, 24
    ctx->pc = 0x337548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 24);
    // 0x33754c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x33754cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x337550: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x337550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337554: 0x94254c46  lhu         $a1, 0x4C46($at)
    ctx->pc = 0x337554u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x894C46u));
    // 0x337558: 0x30a6ffff  andi        $a2, $a1, 0xFFFF
    ctx->pc = 0x337558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x33755c: 0x610bc  dsll32      $v0, $a2, 2
    ctx->pc = 0x33755cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 2));
    // 0x337560: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x337560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x337564: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x337564u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x337568: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x337568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x33756c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x33756cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x337570: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x337570u;
    SET_GPR_U32(ctx, 31, 0x337578u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x337570u, 0x337578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337578u;
label_337578:
    // 0x337578: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x337578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33757c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x33757cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x337580: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x337580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x337584: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x337584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x337588: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x337588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x33758c: 0x34451015  ori         $a1, $v0, 0x1015
    ctx->pc = 0x33758cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x337590: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x337590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x337594: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x337594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x337598: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x337598u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x33759c: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x33759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3375a0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3375a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3375a4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3375A4u;
    SET_GPR_U32(ctx, 31, 0x3375ACu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3375A4u, 0x3375ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375ACu;
label_3375ac:
    // 0x3375ac: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x3375acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3375b0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x3375b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3375b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3375b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3375b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3375b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3375bc: 0x3c130400  lui         $s3, 0x400
    ctx->pc = 0x3375bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1024 << 16));
    // 0x3375c0: 0x3662103b  ori         $v0, $s3, 0x103B
    ctx->pc = 0x3375c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4155);
    // 0x3375c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3375c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3375c8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3375c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3375cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3375ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3375d0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x3375d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x3375d4: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3375d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3375d8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x3375d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3375dc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x3375DCu;
    SET_GPR_U32(ctx, 31, 0x3375E4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x3375DCu, 0x3375E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375E4u;
label_3375e4:
    // 0x3375e4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3375e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3375e8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3375e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3375ecu;
}
