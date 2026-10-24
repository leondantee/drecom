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

// Function: entry_00275628
// Address: 0x275628 - 0x2756f0
void entry_00275628_0x275628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275628_0x275628");
#endif

    switch (ctx->pc) {
        case 0x2756c4u: goto label_2756c4;
        case 0x2756d0u: goto label_2756d0;
        default: break;
    }

    ctx->pc = 0x275628u;

    // 0x275628: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x275628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x27562c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x27562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x275630: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x275630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x275634: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x275634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x275638: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x275638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x27563c: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x27563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275640: 0x90631b30  lbu         $v1, 0x1B30($v1)
    ctx->pc = 0x275640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6960)));
    // 0x275644: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x275644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x275648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27564c: 0x14830188  bne         $a0, $v1, . + 4 + (0x188 << 2)
    ctx->pc = 0x27564Cu;
    {
        const bool branch_taken_0x27564c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27564c) {
            ctx->pc = 0x275C70u;
            return;
        }
    }
    ctx->pc = 0x275654u;
    // 0x275654: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x275654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x275658: 0x30a40007  andi        $a0, $a1, 0x7
    ctx->pc = 0x275658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x27565c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x27565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x275660: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x275660u;
    {
        const bool branch_taken_0x275660 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x275660) {
            ctx->pc = 0x2756F0u;
            return;
        }
    }
    ctx->pc = 0x275668u;
    // 0x275668: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x275668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x27566c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x27566cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275670: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x275670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x275674: 0xe420d2dc  swc1        $f0, -0x2D24($at)
    ctx->pc = 0x275674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x38D2DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38D2DCu, _value); } while (0); }
    // 0x275678: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x27567c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x27567cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275680: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x275680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x275684: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x275684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x275688: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27568c: 0x8e2402d0  lw          $a0, 0x2D0($s1)
    ctx->pc = 0x27568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x275690: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275694: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x275694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x275698: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x275698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x27569c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x27569cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2756a0: 0x51c38  dsll        $v1, $a1, 16
    ctx->pc = 0x2756a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 16);
    // 0x2756a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2756a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2756a8: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x2756a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2756ac: 0x24040b1b  addiu       $a0, $zero, 0xB1B
    ctx->pc = 0x2756acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2843));
    // 0x2756b0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2756b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2756b4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2756b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2756b8: 0x2466d2d0  addiu       $a2, $v1, -0x2D30
    ctx->pc = 0x2756b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955728));
    // 0x2756bc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2756BCu;
    SET_GPR_U32(ctx, 31, 0x2756C4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2756BCu, 0x2756C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756C4u;
label_2756c4:
    // 0x2756c4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2756c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2756c8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2756C8u;
    SET_GPR_U32(ctx, 31, 0x2756D0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2756C8u, 0x2756D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2756D0u;
label_2756d0:
    // 0x2756d0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2756d0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2756d4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2756d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2756d8: 0x34640011  ori         $a0, $v1, 0x11
    ctx->pc = 0x2756d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2756dc: 0x12840004  beq         $s4, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2756DCu;
    {
        const bool branch_taken_0x2756dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x2756dc) {
            ctx->pc = 0x2756F0u;
            return;
        }
    }
    ctx->pc = 0x2756E4u;
    // 0x2756e4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2756e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2756e8: 0xae830100  sw          $v1, 0x100($s4)
    ctx->pc = 0x2756e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 256), GPR_U32(ctx, 3));
    // 0x2756ec: 0x0  nop
    ctx->pc = 0x2756ecu;
    // NOP
    ctx->pc = 0x2756f0u;
}
