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

// Function: Plw02_atk04_on
// Address: 0x1c3550 - 0x1c3808
void Plw02_atk04_on_0x1c3550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk04_on_0x1c3550");
#endif

    switch (ctx->pc) {
        case 0x1c35dcu: goto label_1c35dc;
        case 0x1c3604u: goto label_1c3604;
        case 0x1c3644u: goto label_1c3644;
        case 0x1c366cu: goto label_1c366c;
        case 0x1c368cu: goto label_1c368c;
        case 0x1c36a4u: goto label_1c36a4;
        case 0x1c36b4u: goto label_1c36b4;
        case 0x1c36d4u: goto label_1c36d4;
        case 0x1c36e0u: goto label_1c36e0;
        case 0x1c36f4u: goto label_1c36f4;
        case 0x1c3700u: goto label_1c3700;
        case 0x1c3750u: goto label_1c3750;
        default: break;
    }

    ctx->pc = 0x1c3550u;

    // 0x1c3550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3554: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c3554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c3558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c355c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c355cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c3560: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c3560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c3564: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c3564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c3568: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c3568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c356c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c356cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c3570: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3574: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c3574u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c3578: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c357c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c357cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3580: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c3580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3584: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c3584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3588: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C3588u;
    {
        const bool branch_taken_0x1c3588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3588) {
            ctx->pc = 0x1C36C4u;
            goto label_1c36c4;
        }
    }
    ctx->pc = 0x1C3590u;
    // 0x1c3590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c3590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3594: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C3594u;
    {
        const bool branch_taken_0x1c3594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3594) {
            ctx->pc = 0x1C3614u;
            goto label_1c3614;
        }
    }
    ctx->pc = 0x1C359Cu;
    // 0x1c359c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C359Cu;
    {
        const bool branch_taken_0x1c359c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c359c) {
            ctx->pc = 0x1C35ACu;
            goto label_1c35ac;
        }
    }
    ctx->pc = 0x1C35A4u;
    // 0x1c35a4: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1C35A4u;
    {
        const bool branch_taken_0x1c35a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c35a4) {
            ctx->pc = 0x1C37F4u;
            goto label_1c37f4;
        }
    }
    ctx->pc = 0x1C35ACu;
label_1c35ac:
    // 0x1c35ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c35acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c35b0: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c35b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c35b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C35B4u;
    {
        const bool branch_taken_0x1c35b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c35b4) {
            ctx->pc = 0x1C35E4u;
            goto label_1c35e4;
        }
    }
    ctx->pc = 0x1C35BCu;
    // 0x1c35bc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c35bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c35c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c35c4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c35c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c35c8: 0x2406141f  addiu       $a2, $zero, 0x141F
    ctx->pc = 0x1c35c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5151));
    // 0x1c35cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c35ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c35d0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c35d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c35d4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C35D4u;
    SET_GPR_U32(ctx, 31, 0x1C35DCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C35D4u, 0x1C35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35DCu;
label_1c35dc:
    // 0x1c35dc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C35DCu;
    {
        const bool branch_taken_0x1c35dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c35dc) {
            ctx->pc = 0x1C3604u;
            goto label_1c3604;
        }
    }
    ctx->pc = 0x1C35E4u;
label_1c35e4:
    // 0x1c35e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c35e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c35e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c35ec: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c35ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c35f0: 0x24060a1f  addiu       $a2, $zero, 0xA1F
    ctx->pc = 0x1c35f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2591));
    // 0x1c35f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c35f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c35f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c35f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c35fc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C35FCu;
    SET_GPR_U32(ctx, 31, 0x1C3604u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C35FCu, 0x1C3604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3604u;
label_1c3604:
    // 0x1c3604: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3608: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c3608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c360c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3610: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c3610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c3614:
    // 0x1c3614: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c3614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3618: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c3618u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c361c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C361Cu;
    {
        const bool branch_taken_0x1c361c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c361c) {
            ctx->pc = 0x1C364Cu;
            goto label_1c364c;
        }
    }
    ctx->pc = 0x1C3624u;
    // 0x1c3624: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3628: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c362c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c362cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3630: 0x2406141f  addiu       $a2, $zero, 0x141F
    ctx->pc = 0x1c3630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5151));
    // 0x1c3634: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3638: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c363c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C363Cu;
    SET_GPR_U32(ctx, 31, 0x1C3644u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C363Cu, 0x1C3644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3644u;
label_1c3644:
    // 0x1c3644: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3644u;
    {
        const bool branch_taken_0x1c3644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3644) {
            ctx->pc = 0x1C366Cu;
            goto label_1c366c;
        }
    }
    ctx->pc = 0x1C364Cu;
label_1c364c:
    // 0x1c364c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3650: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3654: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3658: 0x24060a1f  addiu       $a2, $zero, 0xA1F
    ctx->pc = 0x1c3658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2591));
    // 0x1c365c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c365cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3660: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3664: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C3664u;
    SET_GPR_U32(ctx, 31, 0x1C366Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C3664u, 0x1C366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C366Cu;
label_1c366c:
    // 0x1c366c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3670: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c3670u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c3674: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3678: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c3678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c367c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c367cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c3680: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1c3680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1c3684: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C3684u;
    SET_GPR_U32(ctx, 31, 0x1C368Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C3684u, 0x1C368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C368Cu;
label_1c368c:
    // 0x1c368c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c368cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3690: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3694: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c3694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3698: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c3698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c369c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C369Cu;
    SET_GPR_U32(ctx, 31, 0x1C36A4u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C369Cu, 0x1C36A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36A4u;
label_1c36a4:
    // 0x1c36a4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c36a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c36a8: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c36a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c36ac: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C36ACu;
    SET_GPR_U32(ctx, 31, 0x1C36B4u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C36ACu, 0x1C36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36B4u;
label_1c36b4:
    // 0x1c36b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c36b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c36b8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c36b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c36bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c36c0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c36c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c36c4:
    // 0x1c36c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c36c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c36c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c36cc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C36CCu;
    SET_GPR_U32(ctx, 31, 0x1C36D4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C36CCu, 0x1C36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36D4u;
label_1c36d4:
    // 0x1c36d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c36d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c36d8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C36D8u;
    SET_GPR_U32(ctx, 31, 0x1C36E0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C36D8u, 0x1C36E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36E0u;
label_1c36e0:
    // 0x1c36e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c36e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c36e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c36e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c36e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c36ec: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C36ECu;
    SET_GPR_U32(ctx, 31, 0x1C36F4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C36ECu, 0x1C36F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36F4u;
label_1c36f4:
    // 0x1c36f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c36f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c36f8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C36F8u;
    SET_GPR_U32(ctx, 31, 0x1C3700u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C36F8u, 0x1C3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3700u;
label_1c3700:
    // 0x1c3700: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1c3700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3704: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c3704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c3708: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3708u;
    {
        const bool branch_taken_0x1c3708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3708) {
            ctx->pc = 0x1C373Cu;
            goto label_1c373c;
        }
    }
    ctx->pc = 0x1C3710u;
    // 0x1c3710: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3714: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c3714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c3718: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c3718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c371c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c371cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c3720: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3720u;
    {
        const bool branch_taken_0x1c3720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3720) {
            ctx->pc = 0x1C373Cu;
            goto label_1c373c;
        }
    }
    ctx->pc = 0x1C3728u;
    // 0x1c3728: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c372c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c372cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c3730: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c3730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3734: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c3734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c3738: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c3738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c373c:
    // 0x1c373c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3740: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3744: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c3744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3748: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C3748u;
    SET_GPR_U32(ctx, 31, 0x1C3750u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C3748u, 0x1C3750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3750u;
label_1c3750:
    // 0x1c3750: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C3750u;
    {
        const bool branch_taken_0x1c3750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3750) {
            ctx->pc = 0x1C3784u;
            goto label_1c3784;
        }
    }
    ctx->pc = 0x1C3758u;
    // 0x1c3758: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c3758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c375c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c375cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3760: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3764: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3768: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c376c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c376cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c3770: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3774: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c3774u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3778: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c377c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3780: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c3780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c3784:
    // 0x1c3784: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3788: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c3788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c378c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C378Cu;
    {
        const bool branch_taken_0x1c378c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c378c) {
            ctx->pc = 0x1C37F4u;
            goto label_1c37f4;
        }
    }
    ctx->pc = 0x1C3794u;
    // 0x1c3794: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3798: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c3798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c379c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C379Cu;
    {
        const bool branch_taken_0x1c379c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c379c) {
            ctx->pc = 0x1C37F4u;
            goto label_1c37f4;
        }
    }
    ctx->pc = 0x1C37A4u;
    // 0x1c37a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c37a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c37a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c37ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c37acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c37b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c37b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c37b4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C37B4u;
    {
        const bool branch_taken_0x1c37b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c37b4) {
            ctx->pc = 0x1C37F4u;
            goto label_1c37f4;
        }
    }
    ctx->pc = 0x1C37BCu;
    // 0x1c37bc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c37bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c37c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c37c4: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c37c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c37c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c37c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c37cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c37d0: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c37d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c37d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c37d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c37d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c37d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c37dc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c37dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c37e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c37e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c37e4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c37e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c37e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c37e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c37ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c37ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c37f0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c37f4:
    // 0x1c37f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c37f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c37f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c37f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c37fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c37fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c3800: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3808u;
}
