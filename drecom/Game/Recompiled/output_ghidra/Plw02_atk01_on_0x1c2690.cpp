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

// Function: Plw02_atk01_on
// Address: 0x1c2690 - 0x1c2948
void Plw02_atk01_on_0x1c2690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk01_on_0x1c2690");
#endif

    switch (ctx->pc) {
        case 0x1c271cu: goto label_1c271c;
        case 0x1c2744u: goto label_1c2744;
        case 0x1c2784u: goto label_1c2784;
        case 0x1c27acu: goto label_1c27ac;
        case 0x1c27ccu: goto label_1c27cc;
        case 0x1c27e4u: goto label_1c27e4;
        case 0x1c27f4u: goto label_1c27f4;
        case 0x1c2814u: goto label_1c2814;
        case 0x1c2820u: goto label_1c2820;
        case 0x1c2834u: goto label_1c2834;
        case 0x1c2840u: goto label_1c2840;
        case 0x1c2890u: goto label_1c2890;
        default: break;
    }

    ctx->pc = 0x1c2690u;

    // 0x1c2690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c2694: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c2694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c2698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c269c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c269cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c26a0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c26a4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c26a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c26a8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c26ac: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c26acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c26b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c26b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c26b4: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c26b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c26b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c26bc: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c26bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c26c0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c26c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c26c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c26c8: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C26C8u;
    {
        const bool branch_taken_0x1c26c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c26c8) {
            ctx->pc = 0x1C2804u;
            goto label_1c2804;
        }
    }
    ctx->pc = 0x1C26D0u;
    // 0x1c26d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c26d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c26d4: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C26D4u;
    {
        const bool branch_taken_0x1c26d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c26d4) {
            ctx->pc = 0x1C2754u;
            goto label_1c2754;
        }
    }
    ctx->pc = 0x1C26DCu;
    // 0x1c26dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C26DCu;
    {
        const bool branch_taken_0x1c26dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c26dc) {
            ctx->pc = 0x1C26ECu;
            goto label_1c26ec;
        }
    }
    ctx->pc = 0x1C26E4u;
    // 0x1c26e4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1C26E4u;
    {
        const bool branch_taken_0x1c26e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c26e4) {
            ctx->pc = 0x1C2934u;
            goto label_1c2934;
        }
    }
    ctx->pc = 0x1C26ECu;
label_1c26ec:
    // 0x1c26ec: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c26ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c26f0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c26f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C26F4u;
    {
        const bool branch_taken_0x1c26f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c26f4) {
            ctx->pc = 0x1C2724u;
            goto label_1c2724;
        }
    }
    ctx->pc = 0x1C26FCu;
    // 0x1c26fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c26fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2700: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2704: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2708: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x1c2708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x1c270c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c270cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2710: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c2714: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C2714u;
    SET_GPR_U32(ctx, 31, 0x1C271Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C2714u, 0x1C271Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C271Cu;
label_1c271c:
    // 0x1c271c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C271Cu;
    {
        const bool branch_taken_0x1c271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c271c) {
            ctx->pc = 0x1C2744u;
            goto label_1c2744;
        }
    }
    ctx->pc = 0x1C2724u;
label_1c2724:
    // 0x1c2724: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2728: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c272c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c272cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2730: 0x24060a0a  addiu       $a2, $zero, 0xA0A
    ctx->pc = 0x1c2730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    // 0x1c2734: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2738: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c273c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C273Cu;
    SET_GPR_U32(ctx, 31, 0x1C2744u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C273Cu, 0x1C2744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2744u;
label_1c2744:
    // 0x1c2744: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2748: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c2748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c274c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2750: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c2754:
    // 0x1c2754: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c2754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c2758: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c2758u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c275c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C275Cu;
    {
        const bool branch_taken_0x1c275c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c275c) {
            ctx->pc = 0x1C278Cu;
            goto label_1c278c;
        }
    }
    ctx->pc = 0x1C2764u;
    // 0x1c2764: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2768: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c276c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c276cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2770: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x1c2770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x1c2774: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c2774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2778: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c2778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c277c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C277Cu;
    SET_GPR_U32(ctx, 31, 0x1C2784u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C277Cu, 0x1C2784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2784u;
label_1c2784:
    // 0x1c2784: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2784u;
    {
        const bool branch_taken_0x1c2784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2784) {
            ctx->pc = 0x1C27ACu;
            goto label_1c27ac;
        }
    }
    ctx->pc = 0x1C278Cu;
label_1c278c:
    // 0x1c278c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c278cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2790: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2794: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c2794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c2798: 0x24060a0a  addiu       $a2, $zero, 0xA0A
    ctx->pc = 0x1c2798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    // 0x1c279c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c279cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c27a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c27a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c27a4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C27A4u;
    SET_GPR_U32(ctx, 31, 0x1C27ACu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C27A4u, 0x1C27ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27ACu;
label_1c27ac:
    // 0x1c27ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c27acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c27b0: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c27b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c27b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c27b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c27b8: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c27b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c27bc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c27bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c27c0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c27c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c27c4: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C27C4u;
    SET_GPR_U32(ctx, 31, 0x1C27CCu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C27C4u, 0x1C27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27CCu;
label_1c27cc:
    // 0x1c27cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c27ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c27d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c27d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c27d4: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c27d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c27d8: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c27d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c27dc: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C27DCu;
    SET_GPR_U32(ctx, 31, 0x1C27E4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C27DCu, 0x1C27E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27E4u;
label_1c27e4:
    // 0x1c27e4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c27e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c27e8: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c27e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c27ec: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C27ECu;
    SET_GPR_U32(ctx, 31, 0x1C27F4u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C27ECu, 0x1C27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27F4u;
label_1c27f4:
    // 0x1c27f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c27f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c27f8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c27f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c27fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c2800: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c2800u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c2804:
    // 0x1c2804: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2808: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2808u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c280c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C280Cu;
    SET_GPR_U32(ctx, 31, 0x1C2814u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C280Cu, 0x1C2814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2814u;
label_1c2814:
    // 0x1c2814: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2818: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C2818u;
    SET_GPR_U32(ctx, 31, 0x1C2820u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C2818u, 0x1C2820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2820u;
label_1c2820:
    // 0x1c2820: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c2820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2824: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2828: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c2828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c282c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C282Cu;
    SET_GPR_U32(ctx, 31, 0x1C2834u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C282Cu, 0x1C2834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2834u;
label_1c2834:
    // 0x1c2834: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c2834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c2838: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C2838u;
    SET_GPR_U32(ctx, 31, 0x1C2840u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C2838u, 0x1C2840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2840u;
label_1c2840:
    // 0x1c2840: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c2840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c2844: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c2844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c2848: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2848u;
    {
        const bool branch_taken_0x1c2848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2848) {
            ctx->pc = 0x1C287Cu;
            goto label_1c287c;
        }
    }
    ctx->pc = 0x1C2850u;
    // 0x1c2850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c2850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2854: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c2854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2858: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c2858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c285c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c2860: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2860u;
    {
        const bool branch_taken_0x1c2860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2860) {
            ctx->pc = 0x1C287Cu;
            goto label_1c287c;
        }
    }
    ctx->pc = 0x1C2868u;
    // 0x1c2868: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c286c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c2870: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c2870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2874: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c2878: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c2878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c287c:
    // 0x1c287c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2880: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c2880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2884: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c2884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2888: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C2888u;
    SET_GPR_U32(ctx, 31, 0x1C2890u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C2888u, 0x1C2890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2890u;
label_1c2890:
    // 0x1c2890: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C2890u;
    {
        const bool branch_taken_0x1c2890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2890) {
            ctx->pc = 0x1C28C4u;
            goto label_1c28c4;
        }
    }
    ctx->pc = 0x1C2898u;
    // 0x1c2898: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c2898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c289c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c289cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c28a0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c28a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c28a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c28a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c28a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c28a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c28ac: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c28acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c28b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28b4: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c28b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c28b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c28b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c28bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c28bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28c0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c28c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c28c4:
    // 0x1c28c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28c8: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c28c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c28cc: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C28CCu;
    {
        const bool branch_taken_0x1c28cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c28cc) {
            ctx->pc = 0x1C2934u;
            goto label_1c2934;
        }
    }
    ctx->pc = 0x1C28D4u;
    // 0x1c28d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28d8: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c28d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c28dc: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C28DCu;
    {
        const bool branch_taken_0x1c28dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c28dc) {
            ctx->pc = 0x1C2934u;
            goto label_1c2934;
        }
    }
    ctx->pc = 0x1C28E4u;
    // 0x1c28e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c28e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c28e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c28e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c28ec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c28ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c28f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c28f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c28f4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C28F4u;
    {
        const bool branch_taken_0x1c28f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c28f4) {
            ctx->pc = 0x1C2934u;
            goto label_1c2934;
        }
    }
    ctx->pc = 0x1C28FCu;
    // 0x1c28fc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c28fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c2900: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2904: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c2904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c2908: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c2908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c290c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c290cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2910: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c2910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2914: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c2914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2918: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c2918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c291c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c291cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2920: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c2920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c2924: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c2924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c2928: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c2928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c292c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c292cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c2930: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c2930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c2934:
    // 0x1c2934: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c2934u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c293c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c293cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c2940: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2948u;
}
