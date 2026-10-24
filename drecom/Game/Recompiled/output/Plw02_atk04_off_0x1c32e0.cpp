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

// Function: Plw02_atk04_off
// Address: 0x1c32e0 - 0x1c3544
void Plw02_atk04_off_0x1c32e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw02_atk04_off_0x1c32e0");
#endif

    switch (ctx->pc) {
        case 0x1c336cu: goto label_1c336c;
        case 0x1c3394u: goto label_1c3394;
        case 0x1c33d4u: goto label_1c33d4;
        case 0x1c33fcu: goto label_1c33fc;
        case 0x1c341cu: goto label_1c341c;
        case 0x1c342cu: goto label_1c342c;
        case 0x1c344cu: goto label_1c344c;
        case 0x1c3458u: goto label_1c3458;
        case 0x1c346cu: goto label_1c346c;
        case 0x1c3478u: goto label_1c3478;
        case 0x1c348cu: goto label_1c348c;
        default: break;
    }

    ctx->pc = 0x1c32e0u;

    // 0x1c32e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c32e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c32e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c32e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c32e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c32e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c32ec: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c32ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c32f0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c32f4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c32f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c32f8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c32f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c32fc: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c32fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c3300: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3304: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c3304u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c3308: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c330c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c330cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3310: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c3310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c3314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c3314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c3318: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1C3318u;
    {
        const bool branch_taken_0x1c3318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3318) {
            ctx->pc = 0x1C343Cu;
            goto label_1c343c;
        }
    }
    ctx->pc = 0x1C3320u;
    // 0x1c3320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c3320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3324: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C3324u;
    {
        const bool branch_taken_0x1c3324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c3324) {
            ctx->pc = 0x1C33A4u;
            goto label_1c33a4;
        }
    }
    ctx->pc = 0x1C332Cu;
    // 0x1c332c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C332Cu;
    {
        const bool branch_taken_0x1c332c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c332c) {
            ctx->pc = 0x1C333Cu;
            goto label_1c333c;
        }
    }
    ctx->pc = 0x1C3334u;
    // 0x1c3334: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x1C3334u;
    {
        const bool branch_taken_0x1c3334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3334) {
            ctx->pc = 0x1C3530u;
            goto label_1c3530;
        }
    }
    ctx->pc = 0x1C333Cu;
label_1c333c:
    // 0x1c333c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c333cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3340: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c3340u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c3344: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3344u;
    {
        const bool branch_taken_0x1c3344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3344) {
            ctx->pc = 0x1C3374u;
            goto label_1c3374;
        }
    }
    ctx->pc = 0x1C334Cu;
    // 0x1c334c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c334cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3350: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3354: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c3354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3358: 0x2406141f  addiu       $a2, $zero, 0x141F
    ctx->pc = 0x1c3358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5151));
    // 0x1c335c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c335cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3360: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c3364: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C3364u;
    SET_GPR_U32(ctx, 31, 0x1C336Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C3364u, 0x1C336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C336Cu;
label_1c336c:
    // 0x1c336c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C336Cu;
    {
        const bool branch_taken_0x1c336c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c336c) {
            ctx->pc = 0x1C3394u;
            goto label_1c3394;
        }
    }
    ctx->pc = 0x1C3374u;
label_1c3374:
    // 0x1c3374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c3374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c337c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c337cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c3380: 0x24060a1f  addiu       $a2, $zero, 0xA1F
    ctx->pc = 0x1c3380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2591));
    // 0x1c3384: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c3384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3388: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c3388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c338c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C338Cu;
    SET_GPR_U32(ctx, 31, 0x1C3394u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C338Cu, 0x1C3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3394u;
label_1c3394:
    // 0x1c3394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3398: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c3398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c339c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c33a0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c33a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c33a4:
    // 0x1c33a4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c33a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c33a8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c33ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C33ACu;
    {
        const bool branch_taken_0x1c33ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c33ac) {
            ctx->pc = 0x1C33DCu;
            goto label_1c33dc;
        }
    }
    ctx->pc = 0x1C33B4u;
    // 0x1c33b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c33b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c33bc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c33bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c33c0: 0x2406141e  addiu       $a2, $zero, 0x141E
    ctx->pc = 0x1c33c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5150));
    // 0x1c33c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c33c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c33c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c33c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c33cc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C33CCu;
    SET_GPR_U32(ctx, 31, 0x1C33D4u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C33CCu, 0x1C33D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33D4u;
label_1c33d4:
    // 0x1c33d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C33D4u;
    {
        const bool branch_taken_0x1c33d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c33d4) {
            ctx->pc = 0x1C33FCu;
            goto label_1c33fc;
        }
    }
    ctx->pc = 0x1C33DCu;
label_1c33dc:
    // 0x1c33dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c33dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c33e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c33e4: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c33e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c33e8: 0x24060a1e  addiu       $a2, $zero, 0xA1E
    ctx->pc = 0x1c33e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2590));
    // 0x1c33ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c33ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c33f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c33f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c33f4: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C33F4u;
    SET_GPR_U32(ctx, 31, 0x1C33FCu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C33F4u, 0x1C33FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33FCu;
label_1c33fc:
    // 0x1c33fc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c33fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c3400: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c3400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c3404: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3408: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c340c: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3410: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c3410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c3414: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C3414u;
    SET_GPR_U32(ctx, 31, 0x1C341Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C3414u, 0x1C341Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C341Cu;
label_1c341c:
    // 0x1c341c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c341cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c3420: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c3420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3424: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C3424u;
    SET_GPR_U32(ctx, 31, 0x1C342Cu);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C3424u, 0x1C342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C342Cu;
label_1c342c:
    // 0x1c342c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3430: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c3430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c3434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c3434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c3438: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c3438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c343c:
    // 0x1c343c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3440: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3440u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3444: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C3444u;
    SET_GPR_U32(ctx, 31, 0x1C344Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C3444u, 0x1C344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C344Cu;
label_1c344c:
    // 0x1c344c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c344cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3450: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C3450u;
    SET_GPR_U32(ctx, 31, 0x1C3458u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C3450u, 0x1C3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3458u;
label_1c3458:
    // 0x1c3458: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c3458u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c345c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c345cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c3460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c3464: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C3464u;
    SET_GPR_U32(ctx, 31, 0x1C346Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C3464u, 0x1C346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C346Cu;
label_1c346c:
    // 0x1c346c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c346cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3470: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C3470u;
    SET_GPR_U32(ctx, 31, 0x1C3478u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C3470u, 0x1C3478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3478u;
label_1c3478:
    // 0x1c3478: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c3478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c347c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c347cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3480: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c3480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c3484: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C3484u;
    SET_GPR_U32(ctx, 31, 0x1C348Cu);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C3484u, 0x1C348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C348Cu;
label_1c348c:
    // 0x1c348c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1C348Cu;
    {
        const bool branch_taken_0x1c348c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c348c) {
            ctx->pc = 0x1C3518u;
            goto label_1c3518;
        }
    }
    ctx->pc = 0x1C3494u;
    // 0x1c3494: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c3494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c3498: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c3498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c349c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C349Cu;
    {
        const bool branch_taken_0x1c349c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c349c) {
            ctx->pc = 0x1C34E8u;
            goto label_1c34e8;
        }
    }
    ctx->pc = 0x1C34A4u;
    // 0x1c34a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c34a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c34a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c34a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c34ac: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c34acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c34b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c34b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c34b4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C34B4u;
    {
        const bool branch_taken_0x1c34b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34b4) {
            ctx->pc = 0x1C34E8u;
            goto label_1c34e8;
        }
    }
    ctx->pc = 0x1C34BCu;
    // 0x1c34bc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c34bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c34c0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c34c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c34c4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c34c8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c34c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c34cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c34ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c34d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c34d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c34d8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c34d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c34dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c34dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c34e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c34e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c34e4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c34e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c34e8:
    // 0x1c34e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c34e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c34ec: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c34ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c34f0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C34F0u;
    {
        const bool branch_taken_0x1c34f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c34f0) {
            ctx->pc = 0x1C3530u;
            goto label_1c3530;
        }
    }
    ctx->pc = 0x1C34F8u;
    // 0x1c34f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c34f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c34fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c34fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3500: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c3500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3504: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c3504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3508: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c3508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c350c: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c350cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c3510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3510u;
    {
        const bool branch_taken_0x1c3510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3510) {
            ctx->pc = 0x1C3530u;
            goto label_1c3530;
        }
    }
    ctx->pc = 0x1C3518u;
label_1c3518:
    // 0x1c3518: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c3518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c351c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c351cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c3520: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c3520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c3524: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c3524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c3528: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c3528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c352c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c352cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c3530:
    // 0x1c3530: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c3530u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c3534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3538: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c3538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c353c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C353Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C353Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3544u;
}
