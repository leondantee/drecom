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

// Function: Plw01_atk02_off
// Address: 0x1bf750 - 0x1bf9cc
void Plw01_atk02_off_0x1bf750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk02_off_0x1bf750");
#endif

    switch (ctx->pc) {
        case 0x1bf7dcu: goto label_1bf7dc;
        case 0x1bf804u: goto label_1bf804;
        case 0x1bf844u: goto label_1bf844;
        case 0x1bf86cu: goto label_1bf86c;
        case 0x1bf88cu: goto label_1bf88c;
        case 0x1bf89cu: goto label_1bf89c;
        case 0x1bf8bcu: goto label_1bf8bc;
        case 0x1bf8c8u: goto label_1bf8c8;
        case 0x1bf8dcu: goto label_1bf8dc;
        case 0x1bf8e8u: goto label_1bf8e8;
        case 0x1bf8fcu: goto label_1bf8fc;
        default: break;
    }

    ctx->pc = 0x1bf750u;

    // 0x1bf750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bf750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bf754: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1bf754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1bf758: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf75c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1bf75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1bf760: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bf760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1bf764: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bf764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bf768: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1bf768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1bf76c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1bf76cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1bf770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf774: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1bf774u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1bf778: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf77c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bf77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf780: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bf780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bf784: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf788: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1BF788u;
    {
        const bool branch_taken_0x1bf788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf788) {
            ctx->pc = 0x1BF8ACu;
            goto label_1bf8ac;
        }
    }
    ctx->pc = 0x1BF790u;
    // 0x1bf790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf794: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BF794u;
    {
        const bool branch_taken_0x1bf794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf794) {
            ctx->pc = 0x1BF814u;
            goto label_1bf814;
        }
    }
    ctx->pc = 0x1BF79Cu;
    // 0x1bf79c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF79Cu;
    {
        const bool branch_taken_0x1bf79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf79c) {
            ctx->pc = 0x1BF7ACu;
            goto label_1bf7ac;
        }
    }
    ctx->pc = 0x1BF7A4u;
    // 0x1bf7a4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1BF7A4u;
    {
        const bool branch_taken_0x1bf7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf7a4) {
            ctx->pc = 0x1BF9B8u;
            goto label_1bf9b8;
        }
    }
    ctx->pc = 0x1BF7ACu;
label_1bf7ac:
    // 0x1bf7ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf7b0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bf7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bf7b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BF7B4u;
    {
        const bool branch_taken_0x1bf7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf7b4) {
            ctx->pc = 0x1BF7E4u;
            goto label_1bf7e4;
        }
    }
    ctx->pc = 0x1BF7BCu;
    // 0x1bf7bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf7c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf7c4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf7c8: 0x24061417  addiu       $a2, $zero, 0x1417
    ctx->pc = 0x1bf7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5143));
    // 0x1bf7cc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bf7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf7d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf7d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BF7D4u;
    SET_GPR_U32(ctx, 31, 0x1BF7DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BF7D4u, 0x1BF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF7DCu;
label_1bf7dc:
    // 0x1bf7dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF7DCu;
    {
        const bool branch_taken_0x1bf7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf7dc) {
            ctx->pc = 0x1BF804u;
            goto label_1bf804;
        }
    }
    ctx->pc = 0x1BF7E4u;
label_1bf7e4:
    // 0x1bf7e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf7e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf7ec: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf7f0: 0x24060a17  addiu       $a2, $zero, 0xA17
    ctx->pc = 0x1bf7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2583));
    // 0x1bf7f4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1bf7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf7f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf7fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BF7FCu;
    SET_GPR_U32(ctx, 31, 0x1BF804u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BF7FCu, 0x1BF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF804u;
label_1bf804:
    // 0x1bf804: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf808: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf80c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf810: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bf814:
    // 0x1bf814: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf818: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bf818u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bf81c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BF81Cu;
    {
        const bool branch_taken_0x1bf81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf81c) {
            ctx->pc = 0x1BF84Cu;
            goto label_1bf84c;
        }
    }
    ctx->pc = 0x1BF824u;
    // 0x1bf824: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf828: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf82c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf830: 0x24061416  addiu       $a2, $zero, 0x1416
    ctx->pc = 0x1bf830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5142));
    // 0x1bf834: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf838: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf83c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF83Cu;
    SET_GPR_U32(ctx, 31, 0x1BF844u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF83Cu, 0x1BF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF844u;
label_1bf844:
    // 0x1bf844: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF844u;
    {
        const bool branch_taken_0x1bf844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf844) {
            ctx->pc = 0x1BF86Cu;
            goto label_1bf86c;
        }
    }
    ctx->pc = 0x1BF84Cu;
label_1bf84c:
    // 0x1bf84c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf854: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf858: 0x24060a16  addiu       $a2, $zero, 0xA16
    ctx->pc = 0x1bf858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2582));
    // 0x1bf85c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf860: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf864: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF864u;
    SET_GPR_U32(ctx, 31, 0x1BF86Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF864u, 0x1BF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF86Cu;
label_1bf86c:
    // 0x1bf86c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf870: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1bf870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1bf874: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf87c: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bf87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf880: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bf880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bf884: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BF884u;
    SET_GPR_U32(ctx, 31, 0x1BF88Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BF884u, 0x1BF88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF88Cu;
label_1bf88c:
    // 0x1bf88c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bf88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bf890: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bf890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf894: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1BF894u;
    SET_GPR_U32(ctx, 31, 0x1BF89Cu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1BF894u, 0x1BF89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF89Cu;
label_1bf89c:
    // 0x1bf89c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8a0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf8a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf8a8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bf8ac:
    // 0x1bf8ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf8b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf8b4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BF8B4u;
    SET_GPR_U32(ctx, 31, 0x1BF8BCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BF8B4u, 0x1BF8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8BCu;
label_1bf8bc:
    // 0x1bf8bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8c0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BF8C0u;
    SET_GPR_U32(ctx, 31, 0x1BF8C8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BF8C0u, 0x1BF8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8C8u;
label_1bf8c8:
    // 0x1bf8c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bf8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf8cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf8d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf8d4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BF8D4u;
    SET_GPR_U32(ctx, 31, 0x1BF8DCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BF8D4u, 0x1BF8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8DCu;
label_1bf8dc:
    // 0x1bf8dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf8e0: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BF8E0u;
    SET_GPR_U32(ctx, 31, 0x1BF8E8u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BF8E0u, 0x1BF8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8E8u;
label_1bf8e8:
    // 0x1bf8e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf8f0: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1bf8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf8f4: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BF8F4u;
    SET_GPR_U32(ctx, 31, 0x1BF8FCu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BF8F4u, 0x1BF8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8FCu;
label_1bf8fc:
    // 0x1bf8fc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BF8FCu;
    {
        const bool branch_taken_0x1bf8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf8fc) {
            ctx->pc = 0x1BF9A0u;
            goto label_1bf9a0;
        }
    }
    ctx->pc = 0x1BF904u;
    // 0x1bf904: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1bf904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bf908: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1bf908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1bf90c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF90Cu;
    {
        const bool branch_taken_0x1bf90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf90c) {
            ctx->pc = 0x1BF940u;
            goto label_1bf940;
        }
    }
    ctx->pc = 0x1BF914u;
    // 0x1bf914: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf918: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf91c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bf91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bf920: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf924: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF924u;
    {
        const bool branch_taken_0x1bf924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf924) {
            ctx->pc = 0x1BF940u;
            goto label_1bf940;
        }
    }
    ctx->pc = 0x1BF92Cu;
    // 0x1bf92c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf930: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf934: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bf934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf938: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bf938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bf93c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf93cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1bf940:
    // 0x1bf940: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf944: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf948: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bf948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf94c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf94cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf950: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF950u;
    {
        const bool branch_taken_0x1bf950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf950) {
            ctx->pc = 0x1BF970u;
            goto label_1bf970;
        }
    }
    ctx->pc = 0x1BF958u;
    // 0x1bf958: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf95c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf960: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf964: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf968: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf96c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf96cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bf970:
    // 0x1bf970: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf974: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1bf974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1bf978: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1BF978u;
    {
        const bool branch_taken_0x1bf978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf978) {
            ctx->pc = 0x1BF9B8u;
            goto label_1bf9b8;
        }
    }
    ctx->pc = 0x1BF980u;
    // 0x1bf980: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf984: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf988: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf98c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf990: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf994: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf994u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BF998u;
    {
        const bool branch_taken_0x1bf998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf998) {
            ctx->pc = 0x1BF9B8u;
            goto label_1bf9b8;
        }
    }
    ctx->pc = 0x1BF9A0u;
label_1bf9a0:
    // 0x1bf9a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf9a4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf9a8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bf9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bf9ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bf9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bf9b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf9b4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1bf9b8:
    // 0x1bf9b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1bf9b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf9c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bf9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF9CCu;
}
