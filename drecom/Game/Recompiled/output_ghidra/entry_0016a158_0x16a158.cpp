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

// Function: entry_0016a158
// Address: 0x16a158 - 0x16a290
void entry_0016a158_0x16a158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a158_0x16a158");
#endif

    switch (ctx->pc) {
        case 0x16a210u: goto label_16a210;
        case 0x16a220u: goto label_16a220;
        case 0x16a240u: goto label_16a240;
        case 0x16a278u: goto label_16a278;
        default: break;
    }

    ctx->pc = 0x16a158u;

    // 0x16a158: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a15c: 0x84420010  lh          $v0, 0x10($v0)
    ctx->pc = 0x16a15cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x16a160: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a164: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a164u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a168: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16a16c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a170: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x16a170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x16a174: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a178: 0x84420012  lh          $v0, 0x12($v0)
    ctx->pc = 0x16a178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x16a17c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a180: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a180u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a184: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16a188: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a18c: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x16a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x16a190: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a194: 0x84420014  lh          $v0, 0x14($v0)
    ctx->pc = 0x16a194u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16a198: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a19c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a19cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a1a0: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16a1a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a1a8: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x16a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x16a1ac: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a1b0: 0x84420016  lh          $v0, 0x16($v0)
    ctx->pc = 0x16a1b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x16a1b4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a1b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a1b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a1bc: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x16a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x16a1c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a1c4: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x16a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x16a1c8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a1cc: 0x84420018  lh          $v0, 0x18($v0)
    ctx->pc = 0x16a1ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x16a1d0: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a1d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a1d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a1d8: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x16a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x16a1dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a1e0: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x16a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x16a1e4: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x16a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x16a1e8: 0x8442001a  lh          $v0, 0x1A($v0)
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x16a1ec: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16a1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16a1f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16a1f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16a1f4: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x16a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x16a1f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a1fc: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x16a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x16a200: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16a200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16a204: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x16a204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x16a208: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16A208u;
    SET_GPR_U32(ctx, 31, 0x16A210u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16A210u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A210u) { return; }
    ctx->pc = 0x16A210u;
label_16a210:
    // 0x16a210: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x16a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x16a214: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x16a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x16a218: 0xc040cb8  jal         func_1032E0
    ctx->pc = 0x16A218u;
    SET_GPR_U32(ctx, 31, 0x16A220u);
    ctx->pc = 0x1032E0u;
    {
        ctx->pc = 0x16A220u;
        ps2_stubs::sceVu0ITOF0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16A220u) { return; }
    ctx->pc = 0x16A220u;
label_16a220:
    // 0x16a220: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x16a224: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a228: 0x24455750  addiu       $a1, $v0, 0x5750
    ctx->pc = 0x16a228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22352));
    // 0x16a22c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a230: 0x2446aad0  addiu       $a2, $v0, -0x5530
    ctx->pc = 0x16a230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
    // 0x16a234: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x16a234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a238: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A238u;
    SET_GPR_U32(ctx, 31, 0x16A240u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A238u, 0x16A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A240u;
label_16a240:
    // 0x16a240: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16a240u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a244: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x16A244u;
    {
        const bool branch_taken_0x16a244 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a244) {
            ctx->pc = 0x16A368u;
            return;
        }
    }
    ctx->pc = 0x16A24Cu;
    // 0x16a24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a250: 0x1642000f  bne         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16A250u;
    {
        const bool branch_taken_0x16a250 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a250) {
            ctx->pc = 0x16A290u;
            return;
        }
    }
    ctx->pc = 0x16A258u;
    // 0x16a258: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16a258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16a25c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x16a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x16a260: 0x24455760  addiu       $a1, $v0, 0x5760
    ctx->pc = 0x16a260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22368));
    // 0x16a264: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16a264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16a268: 0x2446aae0  addiu       $a2, $v0, -0x5520
    ctx->pc = 0x16a268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
    // 0x16a26c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x16a26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16a270: 0xc059c84  jal         func_167210
    ctx->pc = 0x16A270u;
    SET_GPR_U32(ctx, 31, 0x16A278u);
    ctx->pc = 0x167210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167210u, 0x16A270u, 0x16A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A278u;
label_16a278:
    // 0x16a278: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x16a278u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16a27c: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x16a27cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16a280: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x16A280u;
    {
        const bool branch_taken_0x16a280 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a280) {
            ctx->pc = 0x16A368u;
            return;
        }
    }
    ctx->pc = 0x16A288u;
    // 0x16a288: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16A288u;
    {
        const bool branch_taken_0x16a288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a288) {
            ctx->pc = 0x16A2E8u;
            return;
        }
    }
    ctx->pc = 0x16A290u;
}
