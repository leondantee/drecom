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

// Function: Plw03_atk01_on
// Address: 0x1c5110 - 0x1c53c8
void Plw03_atk01_on_0x1c5110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_atk01_on_0x1c5110");
#endif

    switch (ctx->pc) {
        case 0x1c519cu: goto label_1c519c;
        case 0x1c51c4u: goto label_1c51c4;
        case 0x1c5204u: goto label_1c5204;
        case 0x1c522cu: goto label_1c522c;
        case 0x1c524cu: goto label_1c524c;
        case 0x1c5264u: goto label_1c5264;
        case 0x1c5274u: goto label_1c5274;
        case 0x1c5294u: goto label_1c5294;
        case 0x1c52a0u: goto label_1c52a0;
        case 0x1c52b4u: goto label_1c52b4;
        case 0x1c52c0u: goto label_1c52c0;
        case 0x1c5310u: goto label_1c5310;
        default: break;
    }

    ctx->pc = 0x1c5110u;

    // 0x1c5110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c5110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c5114: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c5114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c5118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c5118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c511c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1c511cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1c5120: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c5120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c5124: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c5124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c5128: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c5128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c512c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c512cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c5130: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5134: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c5134u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c5138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c513c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c513cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c5140: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c5140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c5144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c5144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5148: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1C5148u;
    {
        const bool branch_taken_0x1c5148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5148) {
            ctx->pc = 0x1C5284u;
            goto label_1c5284;
        }
    }
    ctx->pc = 0x1C5150u;
    // 0x1c5150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5154: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C5154u;
    {
        const bool branch_taken_0x1c5154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c5154) {
            ctx->pc = 0x1C51D4u;
            goto label_1c51d4;
        }
    }
    ctx->pc = 0x1C515Cu;
    // 0x1c515c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C515Cu;
    {
        const bool branch_taken_0x1c515c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c515c) {
            ctx->pc = 0x1C516Cu;
            goto label_1c516c;
        }
    }
    ctx->pc = 0x1C5164u;
    // 0x1c5164: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1C5164u;
    {
        const bool branch_taken_0x1c5164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5164) {
            ctx->pc = 0x1C53B4u;
            goto label_1c53b4;
        }
    }
    ctx->pc = 0x1C516Cu;
label_1c516c:
    // 0x1c516c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c516cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5170: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c5170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c5174: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5174u;
    {
        const bool branch_taken_0x1c5174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5174) {
            ctx->pc = 0x1C51A4u;
            goto label_1c51a4;
        }
    }
    ctx->pc = 0x1C517Cu;
    // 0x1c517c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5180: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5184: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5188: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x1c5188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x1c518c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c518cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5190: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5194: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C5194u;
    SET_GPR_U32(ctx, 31, 0x1C519Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C5194u, 0x1C519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C519Cu;
label_1c519c:
    // 0x1c519c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C519Cu;
    {
        const bool branch_taken_0x1c519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c519c) {
            ctx->pc = 0x1C51C4u;
            goto label_1c51c4;
        }
    }
    ctx->pc = 0x1C51A4u;
label_1c51a4:
    // 0x1c51a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c51a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c51a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c51ac: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c51acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c51b0: 0x24060a0a  addiu       $a2, $zero, 0xA0A
    ctx->pc = 0x1c51b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    // 0x1c51b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c51b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c51b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c51bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C51BCu;
    SET_GPR_U32(ctx, 31, 0x1C51C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C51BCu, 0x1C51C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51C4u;
label_1c51c4:
    // 0x1c51c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c51c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c51c8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c51c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c51cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c51ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c51d0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c51d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c51d4:
    // 0x1c51d4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c51d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c51d8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1c51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1c51dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C51DCu;
    {
        const bool branch_taken_0x1c51dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c51dc) {
            ctx->pc = 0x1C520Cu;
            goto label_1c520c;
        }
    }
    ctx->pc = 0x1C51E4u;
    // 0x1c51e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c51e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c51e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c51ec: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c51ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c51f0: 0x2406140a  addiu       $a2, $zero, 0x140A
    ctx->pc = 0x1c51f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5130));
    // 0x1c51f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c51f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51f8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c51f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c51fc: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C51FCu;
    SET_GPR_U32(ctx, 31, 0x1C5204u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C51FCu, 0x1C5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5204u;
label_1c5204:
    // 0x1c5204: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5204u;
    {
        const bool branch_taken_0x1c5204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5204) {
            ctx->pc = 0x1C522Cu;
            goto label_1c522c;
        }
    }
    ctx->pc = 0x1C520Cu;
label_1c520c:
    // 0x1c520c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c520cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5210: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5214: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c5214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c5218: 0x24060a0a  addiu       $a2, $zero, 0xA0A
    ctx->pc = 0x1c5218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
    // 0x1c521c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c521cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5220: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c5220u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c5224: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C5224u;
    SET_GPR_U32(ctx, 31, 0x1C522Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C5224u, 0x1C522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C522Cu;
label_1c522c:
    // 0x1c522c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c522cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1c5230: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1c5230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1c5234: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5238: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c5238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c523c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c523cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c5240: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1c5240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c5244: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C5244u;
    SET_GPR_U32(ctx, 31, 0x1C524Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C5244u, 0x1C524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C524Cu;
label_1c524c:
    // 0x1c524c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5250: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c5250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5254: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1c5254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5258: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1c5258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c525c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C525Cu;
    SET_GPR_U32(ctx, 31, 0x1C5264u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C525Cu, 0x1C5264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5264u;
label_1c5264:
    // 0x1c5264: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1c5264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1c5268: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1c5268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c526c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1C526Cu;
    SET_GPR_U32(ctx, 31, 0x1C5274u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1C526Cu, 0x1C5274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5274u;
label_1c5274:
    // 0x1c5274: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5278: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c5278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c527c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c5280: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c5280u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c5284:
    // 0x1c5284: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5288: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c5288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c528c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C528Cu;
    SET_GPR_U32(ctx, 31, 0x1C5294u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C528Cu, 0x1C5294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5294u;
label_1c5294:
    // 0x1c5294: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5298: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C5298u;
    SET_GPR_U32(ctx, 31, 0x1C52A0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C5298u, 0x1C52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52A0u;
label_1c52a0:
    // 0x1c52a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c52a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c52a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c52a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c52a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c52a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c52ac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C52ACu;
    SET_GPR_U32(ctx, 31, 0x1C52B4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C52ACu, 0x1C52B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52B4u;
label_1c52b4:
    // 0x1c52b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c52b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c52b8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C52B8u;
    SET_GPR_U32(ctx, 31, 0x1C52C0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C52B8u, 0x1C52C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52C0u;
label_1c52c0:
    // 0x1c52c0: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1c52c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c52c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c52c8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C52C8u;
    {
        const bool branch_taken_0x1c52c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c52c8) {
            ctx->pc = 0x1C52FCu;
            goto label_1c52fc;
        }
    }
    ctx->pc = 0x1C52D0u;
    // 0x1c52d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c52d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c52d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c52d8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1c52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1c52dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c52dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c52e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C52E0u;
    {
        const bool branch_taken_0x1c52e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c52e0) {
            ctx->pc = 0x1C52FCu;
            goto label_1c52fc;
        }
    }
    ctx->pc = 0x1C52E8u;
    // 0x1c52e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c52e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c52ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c52ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c52f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c52f4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c52f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c52f8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c52f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c52fc:
    // 0x1c52fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1c52fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5300: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1c5300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5304: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1c5304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5308: 0xc058c14  jal         func_163050
    ctx->pc = 0x1C5308u;
    SET_GPR_U32(ctx, 31, 0x1C5310u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1C5308u, 0x1C5310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5310u;
label_1c5310:
    // 0x1c5310: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C5310u;
    {
        const bool branch_taken_0x1c5310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5310) {
            ctx->pc = 0x1C5344u;
            goto label_1c5344;
        }
    }
    ctx->pc = 0x1C5318u;
    // 0x1c5318: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c5318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c531c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c531cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c5320: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c5320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c5324: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c5324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c5328: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c532c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c532cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c5330: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5334: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1c5334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c5338: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c5338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c533c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5340: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c5340u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c5344:
    // 0x1c5344: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5348: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1c5348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1c534c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C534Cu;
    {
        const bool branch_taken_0x1c534c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c534c) {
            ctx->pc = 0x1C53B4u;
            goto label_1c53b4;
        }
    }
    ctx->pc = 0x1C5354u;
    // 0x1c5354: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5358: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c5358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c535c: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C535Cu;
    {
        const bool branch_taken_0x1c535c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c535c) {
            ctx->pc = 0x1C53B4u;
            goto label_1c53b4;
        }
    }
    ctx->pc = 0x1C5364u;
    // 0x1c5364: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5368: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c5368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c536c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c536cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c5370: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c5370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c5374: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C5374u;
    {
        const bool branch_taken_0x1c5374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5374) {
            ctx->pc = 0x1C53B4u;
            goto label_1c53b4;
        }
    }
    ctx->pc = 0x1C537Cu;
    // 0x1c537c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c5380: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5384: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c5384u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c5388: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c5388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c538c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5390: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c5390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c5394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c5394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c5398: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c5398u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c539c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1c539cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c53a0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c53a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c53a4: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c53a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c53a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c53a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c53ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c53acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c53b0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1c53b4:
    // 0x1c53b4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c53b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c53b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c53b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c53bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1c53bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c53c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C53C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C53C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C53C8u;
}
