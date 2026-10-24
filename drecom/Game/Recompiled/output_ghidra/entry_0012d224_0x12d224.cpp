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

// Function: entry_0012d224
// Address: 0x12d224 - 0x12d2c0
void entry_0012d224_0x12d224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d224_0x12d224");
#endif

    switch (ctx->pc) {
        case 0x12d24cu: goto label_12d24c;
        case 0x12d29cu: goto label_12d29c;
        case 0x12d2b0u: goto label_12d2b0;
        default: break;
    }

    ctx->pc = 0x12d224u;

    // 0x12d224: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d228: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x12d228u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x12d22c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x12d22cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12d230: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x12d230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x12d234: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x12D234u;
    {
        const bool branch_taken_0x12d234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d234) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12D23Cu;
    // 0x12d23c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x12d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12d240: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d240u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d244: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12D244u;
    SET_GPR_U32(ctx, 31, 0x12D24Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12D244u, 0x12D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D24Cu;
label_12d24c:
    // 0x12d24c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d24cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d250: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12d250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d254: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x12d254u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12d258: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x12d258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x12d25c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d260: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12d264: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d268: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x12d268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x12d26c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x12d26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12d270: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12d270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12d274: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d278: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x12d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x12d27c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x12d27cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12d280: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x12d280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x12d284: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d284u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d288: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x12d288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12d28c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x12d28cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d290: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12d290u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d294: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12D294u;
    SET_GPR_U32(ctx, 31, 0x12D29Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12D294u, 0x12D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D29Cu;
label_12d29c:
    // 0x12d29c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12d29cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d2a0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x12d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x12d2a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x12d2a8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D2A8u;
    SET_GPR_U32(ctx, 31, 0x12D2B0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D2A8u, 0x12D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2B0u;
label_12d2b0:
    // 0x12d2b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12d2b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d2b4: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x12d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x12d2b8: 0x3464ff80  ori         $a0, $v1, 0xFF80
    ctx->pc = 0x12d2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x12d2bc: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    ctx->pc = 0x12d2c0u;
}
