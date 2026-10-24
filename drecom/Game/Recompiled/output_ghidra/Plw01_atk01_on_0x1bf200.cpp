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

// Function: Plw01_atk01_on
// Address: 0x1bf200 - 0x1bf4cc
void Plw01_atk01_on_0x1bf200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk01_on_0x1bf200");
#endif

    switch (ctx->pc) {
        case 0x1bf28cu: goto label_1bf28c;
        case 0x1bf2b4u: goto label_1bf2b4;
        case 0x1bf2f4u: goto label_1bf2f4;
        case 0x1bf31cu: goto label_1bf31c;
        case 0x1bf33cu: goto label_1bf33c;
        case 0x1bf354u: goto label_1bf354;
        case 0x1bf364u: goto label_1bf364;
        case 0x1bf384u: goto label_1bf384;
        case 0x1bf390u: goto label_1bf390;
        case 0x1bf3a4u: goto label_1bf3a4;
        case 0x1bf3b0u: goto label_1bf3b0;
        case 0x1bf400u: goto label_1bf400;
        default: break;
    }

    ctx->pc = 0x1bf200u;

    // 0x1bf200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bf200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bf204: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1bf204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1bf208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf20c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1bf20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1bf210: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1bf210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1bf214: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1bf214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1bf218: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1bf218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1bf21c: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1bf21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1bf220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf224: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1bf224u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1bf228: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf22c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bf22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf230: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bf230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bf234: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bf234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf238: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1BF238u;
    {
        const bool branch_taken_0x1bf238 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf238) {
            ctx->pc = 0x1BF374u;
            goto label_1bf374;
        }
    }
    ctx->pc = 0x1BF240u;
    // 0x1bf240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf244: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BF244u;
    {
        const bool branch_taken_0x1bf244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf244) {
            ctx->pc = 0x1BF2C4u;
            goto label_1bf2c4;
        }
    }
    ctx->pc = 0x1BF24Cu;
    // 0x1bf24c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF24Cu;
    {
        const bool branch_taken_0x1bf24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf24c) {
            ctx->pc = 0x1BF25Cu;
            goto label_1bf25c;
        }
    }
    ctx->pc = 0x1BF254u;
    // 0x1bf254: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x1BF254u;
    {
        const bool branch_taken_0x1bf254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf254) {
            ctx->pc = 0x1BF4B8u;
            goto label_1bf4b8;
        }
    }
    ctx->pc = 0x1BF25Cu;
label_1bf25c:
    // 0x1bf25c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf260: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bf260u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bf264: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BF264u;
    {
        const bool branch_taken_0x1bf264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf264) {
            ctx->pc = 0x1BF294u;
            goto label_1bf294;
        }
    }
    ctx->pc = 0x1BF26Cu;
    // 0x1bf26c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf270: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf274: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf278: 0x2406140d  addiu       $a2, $zero, 0x140D
    ctx->pc = 0x1bf278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5133));
    // 0x1bf27c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf280: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf284: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BF284u;
    SET_GPR_U32(ctx, 31, 0x1BF28Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BF284u, 0x1BF28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF28Cu;
label_1bf28c:
    // 0x1bf28c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF28Cu;
    {
        const bool branch_taken_0x1bf28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf28c) {
            ctx->pc = 0x1BF2B4u;
            goto label_1bf2b4;
        }
    }
    ctx->pc = 0x1BF294u;
label_1bf294:
    // 0x1bf294: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf298: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf29c: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf2a0: 0x24060a0d  addiu       $a2, $zero, 0xA0D
    ctx->pc = 0x1bf2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2573));
    // 0x1bf2a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf2a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf2ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1BF2ACu;
    SET_GPR_U32(ctx, 31, 0x1BF2B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1BF2ACu, 0x1BF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2B4u;
label_1bf2b4:
    // 0x1bf2b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf2b8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf2b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf2bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf2c0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bf2c4:
    // 0x1bf2c4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf2c8: 0x8c22b970  lw          $v0, -0x4690($at)
    ctx->pc = 0x1bf2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FB970u));
    // 0x1bf2cc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BF2CCu;
    {
        const bool branch_taken_0x1bf2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2cc) {
            ctx->pc = 0x1BF2FCu;
            goto label_1bf2fc;
        }
    }
    ctx->pc = 0x1BF2D4u;
    // 0x1bf2d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf2d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf2dc: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf2e0: 0x2406140d  addiu       $a2, $zero, 0x140D
    ctx->pc = 0x1bf2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5133));
    // 0x1bf2e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf2e8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf2e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf2ec: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF2ECu;
    SET_GPR_U32(ctx, 31, 0x1BF2F4u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF2ECu, 0x1BF2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF2F4u;
label_1bf2f4:
    // 0x1bf2f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BF2F4u;
    {
        const bool branch_taken_0x1bf2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2f4) {
            ctx->pc = 0x1BF31Cu;
            goto label_1bf31c;
        }
    }
    ctx->pc = 0x1BF2FCu;
label_1bf2fc:
    // 0x1bf2fc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf300: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf304: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1bf304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf308: 0x24060a0d  addiu       $a2, $zero, 0xA0D
    ctx->pc = 0x1bf308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2573));
    // 0x1bf30c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bf30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf310: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1bf310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf314: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1BF314u;
    SET_GPR_U32(ctx, 31, 0x1BF31Cu);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1BF314u, 0x1BF31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF31Cu;
label_1bf31c:
    // 0x1bf31c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1bf31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1bf320: 0xac20b970  sw          $zero, -0x4690($at)
    ctx->pc = 0x1bf320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FB970u, _value); } while (0);
    // 0x1bf324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf328: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1bf328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1bf32c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1bf32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bf330: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1bf330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bf334: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1BF334u;
    SET_GPR_U32(ctx, 31, 0x1BF33Cu);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1BF334u, 0x1BF33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF33Cu;
label_1bf33c:
    // 0x1bf33c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf340: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf344: 0xc46c137c  lwc1        $f12, 0x137C($v1)
    ctx->pc = 0x1bf344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf348: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1bf348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bf34c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BF34Cu;
    SET_GPR_U32(ctx, 31, 0x1BF354u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BF34Cu, 0x1BF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF354u;
label_1bf354:
    // 0x1bf354: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1bf354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1bf358: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1bf358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf35c: 0xc057374  jal         func_15CDD0
    ctx->pc = 0x1BF35Cu;
    SET_GPR_U32(ctx, 31, 0x1BF364u);
    ctx->pc = 0x15CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CDD0u, 0x1BF35Cu, 0x1BF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF364u;
label_1bf364:
    // 0x1bf364: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf368: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bf368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bf36c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bf36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bf370: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bf370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1bf374:
    // 0x1bf374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf378: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf37c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BF37Cu;
    SET_GPR_U32(ctx, 31, 0x1BF384u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BF37Cu, 0x1BF384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF384u;
label_1bf384:
    // 0x1bf384: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf388: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1BF388u;
    SET_GPR_U32(ctx, 31, 0x1BF390u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1BF388u, 0x1BF390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF390u;
label_1bf390:
    // 0x1bf390: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bf390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bf394: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf398: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1bf398u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bf39c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1BF39Cu;
    SET_GPR_U32(ctx, 31, 0x1BF3A4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1BF39Cu, 0x1BF3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3A4u;
label_1bf3a4:
    // 0x1bf3a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bf3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf3a8: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BF3A8u;
    SET_GPR_U32(ctx, 31, 0x1BF3B0u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BF3A8u, 0x1BF3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3B0u;
label_1bf3b0:
    // 0x1bf3b0: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1bf3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1bf3b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1bf3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1bf3b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF3B8u;
    {
        const bool branch_taken_0x1bf3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf3b8) {
            ctx->pc = 0x1BF3ECu;
            goto label_1bf3ec;
        }
    }
    ctx->pc = 0x1BF3C0u;
    // 0x1bf3c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf3c4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bf3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bf3c8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1bf3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1bf3cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1bf3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1bf3d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF3D0u;
    {
        const bool branch_taken_0x1bf3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf3d0) {
            ctx->pc = 0x1BF3ECu;
            goto label_1bf3ec;
        }
    }
    ctx->pc = 0x1BF3D8u;
    // 0x1bf3d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf3dc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bf3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bf3e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1bf3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf3e4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bf3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bf3e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1bf3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1bf3ec:
    // 0x1bf3ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1bf3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf3f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bf3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf3f4: 0xc44c1568  lwc1        $f12, 0x1568($v0)
    ctx->pc = 0x1bf3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bf3f8: 0xc058c14  jal         func_163050
    ctx->pc = 0x1BF3F8u;
    SET_GPR_U32(ctx, 31, 0x1BF400u);
    ctx->pc = 0x163050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163050u, 0x1BF3F8u, 0x1BF400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF400u;
label_1bf400:
    // 0x1bf400: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BF400u;
    {
        const bool branch_taken_0x1bf400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf400) {
            ctx->pc = 0x1BF434u;
            goto label_1bf434;
        }
    }
    ctx->pc = 0x1BF408u;
    // 0x1bf408: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf40c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf410: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bf410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bf414: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bf414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bf418: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf41c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf41cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1bf420: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf424: 0xa060156d  sb          $zero, 0x156D($v1)
    ctx->pc = 0x1bf424u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf428: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf42c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf430: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bf430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1bf434:
    // 0x1bf434: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf438: 0x90631084  lbu         $v1, 0x1084($v1)
    ctx->pc = 0x1bf438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4228)));
    // 0x1bf43c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bf43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bf440: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x1bf440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bf444: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BF444u;
    {
        const bool branch_taken_0x1bf444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf444) {
            ctx->pc = 0x1BF4B8u;
            goto label_1bf4b8;
        }
    }
    ctx->pc = 0x1BF44Cu;
    // 0x1bf44c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf450: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1bf450u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1bf454: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BF454u;
    {
        const bool branch_taken_0x1bf454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf454) {
            ctx->pc = 0x1BF4B8u;
            goto label_1bf4b8;
        }
    }
    ctx->pc = 0x1BF45Cu;
    // 0x1bf45c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf460: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bf460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bf464: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1bf464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1bf468: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf46c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BF46Cu;
    {
        const bool branch_taken_0x1bf46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf46c) {
            ctx->pc = 0x1BF4B8u;
            goto label_1bf4b8;
        }
    }
    ctx->pc = 0x1BF474u;
    // 0x1bf474: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bf474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf478: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf47c: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1bf47cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bf480: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bf484: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf488: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf488u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf48c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1bf48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf490: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf494: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x1bf494u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x1bf498: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf49c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bf49cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf4a0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1bf4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf4a4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1bf4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bf4a8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1bf4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1bf4ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1bf4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bf4b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bf4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bf4b4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1bf4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_1bf4b8:
    // 0x1bf4b8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1bf4b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf4bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf4c0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bf4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bf4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF4CCu;
}
