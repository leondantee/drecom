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

// Function: ectrl12_init00_t00
// Address: 0x251130 - 0x2513f8
void ectrl12_init00_t00_0x251130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl12_init00_t00_0x251130");
#endif

    switch (ctx->pc) {
        case 0x251220u: goto label_251220;
        case 0x25122cu: goto label_25122c;
        case 0x251260u: goto label_251260;
        case 0x25126cu: goto label_25126c;
        case 0x2512a0u: goto label_2512a0;
        case 0x2512acu: goto label_2512ac;
        case 0x2512e0u: goto label_2512e0;
        case 0x2512ecu: goto label_2512ec;
        case 0x251320u: goto label_251320;
        case 0x25132cu: goto label_25132c;
        case 0x251360u: goto label_251360;
        case 0x25136cu: goto label_25136c;
        case 0x2513dcu: goto label_2513dc;
        case 0x2513e8u: goto label_2513e8;
        default: break;
    }

    ctx->pc = 0x251130u;

    // 0x251130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x251130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x251134: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x251134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x251138: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x251138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x25113c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251140: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x251140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x251144: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x251144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x251148: 0x1083008f  beq         $a0, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x251148u;
    {
        const bool branch_taken_0x251148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251148) {
            ctx->pc = 0x251388u;
            goto label_251388;
        }
    }
    ctx->pc = 0x251150u;
    // 0x251150: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x251150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x251154: 0x1083008c  beq         $a0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x251154u;
    {
        const bool branch_taken_0x251154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251154) {
            ctx->pc = 0x251388u;
            goto label_251388;
        }
    }
    ctx->pc = 0x25115Cu;
    // 0x25115c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x25115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x251160: 0x10830089  beq         $a0, $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x251160u;
    {
        const bool branch_taken_0x251160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251160) {
            ctx->pc = 0x251388u;
            goto label_251388;
        }
    }
    ctx->pc = 0x251168u;
    // 0x251168: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x251168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25116c: 0x10830086  beq         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x25116Cu;
    {
        const bool branch_taken_0x25116c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25116c) {
            ctx->pc = 0x251388u;
            goto label_251388;
        }
    }
    ctx->pc = 0x251174u;
    // 0x251174: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x251174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x251178: 0x10830083  beq         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x251178u;
    {
        const bool branch_taken_0x251178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251178) {
            ctx->pc = 0x251388u;
            goto label_251388;
        }
    }
    ctx->pc = 0x251180u;
    // 0x251180: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x251180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x251184: 0x10830080  beq         $a0, $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x251184u;
    {
        const bool branch_taken_0x251184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251184) {
            ctx->pc = 0x251388u;
            goto label_251388;
        }
    }
    ctx->pc = 0x25118Cu;
    // 0x25118c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x25118cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x251190: 0x1083007d  beq         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x251190u;
    {
        const bool branch_taken_0x251190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x251190) {
            ctx->pc = 0x251388u;
            goto label_251388;
        }
    }
    ctx->pc = 0x251198u;
    // 0x251198: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x251198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25119c: 0x1083007a  beq         $a0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x25119Cu;
    {
        const bool branch_taken_0x25119c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25119c) {
            ctx->pc = 0x251388u;
            goto label_251388;
        }
    }
    ctx->pc = 0x2511A4u;
    // 0x2511a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2511a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2511a8: 0x10830077  beq         $a0, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x2511A8u;
    {
        const bool branch_taken_0x2511a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2511a8) {
            ctx->pc = 0x251388u;
            goto label_251388;
        }
    }
    ctx->pc = 0x2511B0u;
    // 0x2511b0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2511b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2511b4: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x2511B4u;
    {
        const bool branch_taken_0x2511b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2511b4) {
            ctx->pc = 0x251374u;
            goto label_251374;
        }
    }
    ctx->pc = 0x2511BCu;
    // 0x2511bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2511BCu;
    {
        const bool branch_taken_0x2511bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2511bc) {
            ctx->pc = 0x2511CCu;
            goto label_2511cc;
        }
    }
    ctx->pc = 0x2511C4u;
    // 0x2511c4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2511C4u;
    {
        const bool branch_taken_0x2511c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2511c4) {
            ctx->pc = 0x2513E8u;
            goto label_2513e8;
        }
    }
    ctx->pc = 0x2511CCu;
label_2511cc:
    // 0x2511cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2511ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2511d0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x2511d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2511d4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2511d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2511d8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2511d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2511dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2511dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2511e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2511e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2511e4: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x2511e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2511e8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2511e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2511ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2511ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2511f0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2511f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2511f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2511f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2511f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2511f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2511fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2511fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251200: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251204: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251208: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251208u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25120c: 0x24046100  addiu       $a0, $zero, 0x6100
    ctx->pc = 0x25120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24832));
    // 0x251210: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251210u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251214: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251218: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251218u;
    SET_GPR_U32(ctx, 31, 0x251220u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251218u, 0x251220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251220u;
label_251220:
    // 0x251220: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251220u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251224: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251224u;
    SET_GPR_U32(ctx, 31, 0x25122Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251224u, 0x25122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25122Cu;
label_25122c:
    // 0x25122c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251230: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251234: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251238: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25123c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251240: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251244: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251248: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25124c: 0x24046200  addiu       $a0, $zero, 0x6200
    ctx->pc = 0x25124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x251250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251254: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251258: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251258u;
    SET_GPR_U32(ctx, 31, 0x251260u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251258u, 0x251260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251260u;
label_251260:
    // 0x251260: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251260u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251264: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251264u;
    SET_GPR_U32(ctx, 31, 0x25126Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251264u, 0x25126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25126Cu;
label_25126c:
    // 0x25126c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25126cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251270: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251274: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251278: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25127c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25127cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251280: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251284: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251288: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25128c: 0x24045800  addiu       $a0, $zero, 0x5800
    ctx->pc = 0x25128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22528));
    // 0x251290: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251290u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251294: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251298: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251298u;
    SET_GPR_U32(ctx, 31, 0x2512A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251298u, 0x2512A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512A0u;
label_2512a0:
    // 0x2512a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2512a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2512a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2512A4u;
    SET_GPR_U32(ctx, 31, 0x2512ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2512A4u, 0x2512ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512ACu;
label_2512ac:
    // 0x2512ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2512acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2512b0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2512b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2512b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2512b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2512b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2512b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2512bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2512bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2512c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2512c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2512c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2512c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2512c8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2512c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2512cc: 0x24045801  addiu       $a0, $zero, 0x5801
    ctx->pc = 0x2512ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22529));
    // 0x2512d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2512d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2512d4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2512d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2512d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2512D8u;
    SET_GPR_U32(ctx, 31, 0x2512E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2512D8u, 0x2512E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512E0u;
label_2512e0:
    // 0x2512e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2512e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2512e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2512E4u;
    SET_GPR_U32(ctx, 31, 0x2512ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2512E4u, 0x2512ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512ECu;
label_2512ec:
    // 0x2512ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2512ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2512f0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2512f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2512f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2512f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2512f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2512f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2512fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2512fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251300: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251304: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251308: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251308u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25130c: 0x24045802  addiu       $a0, $zero, 0x5802
    ctx->pc = 0x25130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22530));
    // 0x251310: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251310u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251314: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251318: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251318u;
    SET_GPR_U32(ctx, 31, 0x251320u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251318u, 0x251320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251320u;
label_251320:
    // 0x251320: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251320u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251324: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251324u;
    SET_GPR_U32(ctx, 31, 0x25132Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251324u, 0x25132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25132Cu;
label_25132c:
    // 0x25132c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251330: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251334: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251338: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25133c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25133cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251340: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251344: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251348: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251348u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25134c: 0x24045803  addiu       $a0, $zero, 0x5803
    ctx->pc = 0x25134cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22531));
    // 0x251350: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251350u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251354: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251358: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251358u;
    SET_GPR_U32(ctx, 31, 0x251360u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251358u, 0x251360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251360u;
label_251360:
    // 0x251360: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251360u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251364: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251364u;
    SET_GPR_U32(ctx, 31, 0x25136Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251364u, 0x25136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25136Cu;
label_25136c:
    // 0x25136c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25136Cu;
    {
        const bool branch_taken_0x25136c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25136c) {
            ctx->pc = 0x2513E8u;
            goto label_2513e8;
        }
    }
    ctx->pc = 0x251374u;
label_251374:
    // 0x251374: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251378: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x251378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25137c: 0x38430010  xori        $v1, $v0, 0x10
    ctx->pc = 0x25137cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x251380: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251384: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x251384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_251388:
    // 0x251388: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25138c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x25138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x251390: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x251390u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251394: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x251394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251398: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x251398u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x25139c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25139cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2513a0: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x2513a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2513a4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2513a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2513a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2513a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2513ac: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2513acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2513b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2513b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2513b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2513b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2513b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2513b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2513bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2513bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2513c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2513c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2513c4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2513c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2513c8: 0x24045800  addiu       $a0, $zero, 0x5800
    ctx->pc = 0x2513c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22528));
    // 0x2513cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2513ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2513d0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2513d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2513d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2513D4u;
    SET_GPR_U32(ctx, 31, 0x2513DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2513D4u, 0x2513DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2513DCu;
label_2513dc:
    // 0x2513dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2513dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2513e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2513E0u;
    SET_GPR_U32(ctx, 31, 0x2513E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2513E0u, 0x2513E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2513E8u;
label_2513e8:
    // 0x2513e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2513e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2513ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2513ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2513f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2513F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2513F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2513F8u;
}
