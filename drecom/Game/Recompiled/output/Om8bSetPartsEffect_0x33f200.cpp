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

// Function: Om8bSetPartsEffect
// Address: 0x33f200 - 0x33f2e8
void Om8bSetPartsEffect_0x33f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8bSetPartsEffect_0x33f200");
#endif

    switch (ctx->pc) {
        case 0x33f258u: goto label_33f258;
        case 0x33f2b0u: goto label_33f2b0;
        case 0x33f2bcu: goto label_33f2bc;
        default: break;
    }

    ctx->pc = 0x33f200u;

    // 0x33f200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33f204: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x33f204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x33f208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f20c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x33f20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x33f210: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x33f210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x33f214: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x33f214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f218: 0x2c61000d  sltiu       $at, $v1, 0xD
    ctx->pc = 0x33f218u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x33f21c: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x33F21Cu;
    {
        const bool branch_taken_0x33f21c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f21c) {
            ctx->pc = 0x33F2D4u;
            goto label_33f2d4;
        }
    }
    ctx->pc = 0x33F224u;
    // 0x33f224: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x33f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f228: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x33F228u;
    {
        const bool branch_taken_0x33f228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f228) {
            ctx->pc = 0x33F2D4u;
            goto label_33f2d4;
        }
    }
    ctx->pc = 0x33F230u;
    // 0x33f230: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x33f230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f234: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f238: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x33f238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x33f23c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x33f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x33f240: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x33f240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f244: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x33f244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33f248: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x33f248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x33f24c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x33f24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33f250: 0xc06553c  jal         func_1954F0
    ctx->pc = 0x33F250u;
    SET_GPR_U32(ctx, 31, 0x33F258u);
    ctx->pc = 0x1954F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1954F0u, 0x33F250u, 0x33F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F258u;
label_33f258:
    // 0x33f258: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x33f258u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33f25c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x33f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x33f260: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x33f260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x33f264: 0x16030017  bne         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x33F264u;
    {
        const bool branch_taken_0x33f264 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x33f264) {
            ctx->pc = 0x33F2C4u;
            goto label_33f2c4;
        }
    }
    ctx->pc = 0x33F26Cu;
    // 0x33f26c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x33f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f270: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33f270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33f274: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x33f274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x33f278: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x33f278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x33f27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33f280: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x33f280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33f284: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33f284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x33f288: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33f288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33f28c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33f290: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33f290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33f294: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x33f294u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33f298: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x33f298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x33f29c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x33f29cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33f2a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x33f2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33f2a4: 0x24462950  addiu       $a2, $v0, 0x2950
    ctx->pc = 0x33f2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 10576));
    // 0x33f2a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x33F2A8u;
    SET_GPR_U32(ctx, 31, 0x33F2B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x33F2A8u, 0x33F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2B0u;
label_33f2b0:
    // 0x33f2b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x33f2b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x33f2b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x33F2B4u;
    SET_GPR_U32(ctx, 31, 0x33F2BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x33F2B4u, 0x33F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F2BCu;
label_33f2bc:
    // 0x33f2bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33F2BCu;
    {
        const bool branch_taken_0x33f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f2bc) {
            ctx->pc = 0x33F2D4u;
            goto label_33f2d4;
        }
    }
    ctx->pc = 0x33F2C4u;
label_33f2c4:
    // 0x33f2c4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x33f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x33f2c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33f2c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f2cc: 0x0  nop
    ctx->pc = 0x33f2ccu;
    // NOP
    // 0x33f2d0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x33f2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
label_33f2d4:
    // 0x33f2d4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x33f2d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f2dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33f2dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33f2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x33F2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F2E8u;
}
