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

// Function: ectrl06_move00_t00
// Address: 0x24f1a0 - 0x24f560
void ectrl06_move00_t00_0x24f1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl06_move00_t00_0x24f1a0");
#endif

    switch (ctx->pc) {
        case 0x24f2dcu: goto label_24f2dc;
        case 0x24f300u: goto label_24f300;
        case 0x24f33cu: goto label_24f33c;
        case 0x24f348u: goto label_24f348;
        case 0x24f384u: goto label_24f384;
        case 0x24f390u: goto label_24f390;
        case 0x24f490u: goto label_24f490;
        case 0x24f4bcu: goto label_24f4bc;
        case 0x24f4f8u: goto label_24f4f8;
        case 0x24f504u: goto label_24f504;
        case 0x24f540u: goto label_24f540;
        case 0x24f54cu: goto label_24f54c;
        default: break;
    }

    ctx->pc = 0x24f1a0u;

    // 0x24f1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24f1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24f1a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x24f1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x24f1a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24f1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24f1ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x24f1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x24f1b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f1b4: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x24f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24f1b8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x24f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x24f1bc: 0x10830076  beq         $a0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x24F1BCu;
    {
        const bool branch_taken_0x24f1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f1bc) {
            ctx->pc = 0x24F398u;
            goto label_24f398;
        }
    }
    ctx->pc = 0x24F1C4u;
    // 0x24f1c4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x24f1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x24f1c8: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24F1C8u;
    {
        const bool branch_taken_0x24f1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f1c8) {
            ctx->pc = 0x24F1F8u;
            goto label_24f1f8;
        }
    }
    ctx->pc = 0x24F1D0u;
    // 0x24f1d0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x24f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x24f1d4: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F1D4u;
    {
        const bool branch_taken_0x24f1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f1d4) {
            ctx->pc = 0x24F1F8u;
            goto label_24f1f8;
        }
    }
    ctx->pc = 0x24F1DCu;
    // 0x24f1dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x24f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24f1e0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F1E0u;
    {
        const bool branch_taken_0x24f1e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f1e0) {
            ctx->pc = 0x24F1F8u;
            goto label_24f1f8;
        }
    }
    ctx->pc = 0x24F1E8u;
    // 0x24f1e8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F1E8u;
    {
        const bool branch_taken_0x24f1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f1e8) {
            ctx->pc = 0x24F1F8u;
            goto label_24f1f8;
        }
    }
    ctx->pc = 0x24F1F0u;
    // 0x24f1f0: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x24F1F0u;
    {
        const bool branch_taken_0x24f1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f1f0) {
            ctx->pc = 0x24F54Cu;
            goto label_24f54c;
        }
    }
    ctx->pc = 0x24F1F8u;
label_24f1f8:
    // 0x24f1f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f1fc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f200: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f204: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f208: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f20c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f210: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f214: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f218: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f21c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f220: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f224: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f228: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f22c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f230: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f234: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f238: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f23c: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24f23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f240: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f244: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f248: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f24c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f250: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f254: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f258: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f25c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f260: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f264: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f268: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f26c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f270: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f274: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f278: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f27c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f280: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f284: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24f284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f288: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f28c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f290: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f294: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f298: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f29c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f2a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f2a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f2a8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f2ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f2b0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f2b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f2b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f2bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f2c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f2c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f2c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f2cc: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24f2ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f2d0: 0x24040701  addiu       $a0, $zero, 0x701
    ctx->pc = 0x24f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x24f2d4: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24F2D4u;
    SET_GPR_U32(ctx, 31, 0x24F2DCu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24F2D4u, 0x24F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F2DCu;
label_24f2dc:
    // 0x24f2dc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24f2dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f2e0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f2e4: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24f2e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24f2e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f2ec: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x24f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x24f2f0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24f2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24f2f4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24f2f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24f2f8: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24F2F8u;
    SET_GPR_U32(ctx, 31, 0x24F300u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24F2F8u, 0x24F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F300u;
label_24f300:
    // 0x24f300: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f304: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f308: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f30c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f310: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f314: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f318: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f31c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f320: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f324: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f324u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f328: 0x24041604  addiu       $a0, $zero, 0x1604
    ctx->pc = 0x24f328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5636));
    // 0x24f32c: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f330: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f334: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F334u;
    SET_GPR_U32(ctx, 31, 0x24F33Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F334u, 0x24F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F33Cu;
label_24f33c:
    // 0x24f33c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f33cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f340: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F340u;
    SET_GPR_U32(ctx, 31, 0x24F348u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F340u, 0x24F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F348u;
label_24f348:
    // 0x24f348: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f34c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f350: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f354: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f358: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f35c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f360: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f364: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f368: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f36c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f36cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f370: 0x24042800  addiu       $a0, $zero, 0x2800
    ctx->pc = 0x24f370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x24f374: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f378: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f37c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F37Cu;
    SET_GPR_U32(ctx, 31, 0x24F384u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F37Cu, 0x24F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F384u;
label_24f384:
    // 0x24f384: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f384u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f388: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F388u;
    SET_GPR_U32(ctx, 31, 0x24F390u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F388u, 0x24F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F390u;
label_24f390:
    // 0x24f390: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x24F390u;
    {
        const bool branch_taken_0x24f390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f390) {
            ctx->pc = 0x24F54Cu;
            goto label_24f54c;
        }
    }
    ctx->pc = 0x24F398u;
label_24f398:
    // 0x24f398: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f39c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f3a0: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24f3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24f3a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f3a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24f3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24f3ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f3b0: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f3b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f3b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f3bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f3c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f3c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f3c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f3cc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f3d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f3d4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24f3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24f3d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f3dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f3e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f3e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f3e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f3ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f3f0: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24f3f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f3f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f3f8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f3fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f400: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f404: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f408: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f40c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f410: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f414: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f418: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f41c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24f420: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f424: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f428: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f42c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f430: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f434: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f438: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24f438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f43c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f440: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f444: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f448: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f44c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f450: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f454: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f458: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f45c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24f45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f460: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f464: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f468: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f46c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f470: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f474: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f478: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f47c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f480: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24f480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24f484: 0x24040701  addiu       $a0, $zero, 0x701
    ctx->pc = 0x24f484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x24f488: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24F488u;
    SET_GPR_U32(ctx, 31, 0x24F490u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24F488u, 0x24F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F490u;
label_24f490:
    // 0x24f490: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24f490u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f494: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f498: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24f498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24f49c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24f49cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f4a0: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x24f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x24f4a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24f4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24f4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f4ac: 0xa2020270  sb          $v0, 0x270($s0)
    ctx->pc = 0x24f4acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 624), (uint8_t)GPR_U32(ctx, 2));
    // 0x24f4b0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24f4b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24f4b4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24F4B4u;
    SET_GPR_U32(ctx, 31, 0x24F4BCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24F4B4u, 0x24F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4BCu;
label_24f4bc:
    // 0x24f4bc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f4c0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f4c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f4c8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f4cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f4d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f4d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f4d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f4dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f4e0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f4e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f4e4: 0x24041604  addiu       $a0, $zero, 0x1604
    ctx->pc = 0x24f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5636));
    // 0x24f4e8: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f4ec: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f4f0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F4F0u;
    SET_GPR_U32(ctx, 31, 0x24F4F8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F4F0u, 0x24F4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4F8u;
label_24f4f8:
    // 0x24f4f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f4f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f4fc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F4FCu;
    SET_GPR_U32(ctx, 31, 0x24F504u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F4FCu, 0x24F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F504u;
label_24f504:
    // 0x24f504: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24f504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f508: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24f508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f50c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24f510: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24f514: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24f514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24f518: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24f518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24f51c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24f51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24f520: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24f524: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24f524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24f528: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24f528u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24f52c: 0x24042800  addiu       $a0, $zero, 0x2800
    ctx->pc = 0x24f52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x24f530: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24f530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24f534: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24f534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24f538: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24F538u;
    SET_GPR_U32(ctx, 31, 0x24F540u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24F538u, 0x24F540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F540u;
label_24f540:
    // 0x24f540: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24f540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24f544: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24F544u;
    SET_GPR_U32(ctx, 31, 0x24F54Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24F544u, 0x24F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F54Cu;
label_24f54c:
    // 0x24f54c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24f54cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f554: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24f554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24f558: 0x3e00008  jr          $ra
    ctx->pc = 0x24F558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F560u;
}
