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

// Function: entry_0012d478
// Address: 0x12d478 - 0x12d504
void entry_0012d478_0x12d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d478_0x12d478");
#endif

    switch (ctx->pc) {
        case 0x12d49cu: goto label_12d49c;
        case 0x12d4e0u: goto label_12d4e0;
        case 0x12d4f0u: goto label_12d4f0;
        default: break;
    }

    ctx->pc = 0x12d478u;

    // 0x12d478: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d47c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x12d47cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x12d480: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12d480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12d484: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x12d484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x12d488: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x12D488u;
    {
        const bool branch_taken_0x12d488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d488) {
            ctx->pc = 0x12D504u;
            return;
        }
    }
    ctx->pc = 0x12D490u;
    // 0x12d490: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12d490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12d494: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12D494u;
    SET_GPR_U32(ctx, 31, 0x12D49Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12D494u, 0x12D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D49Cu;
label_12d49c:
    // 0x12d49c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d4a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12d4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d4a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12d4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12d4a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d4ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12d4b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12d4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d4b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12d4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12d4b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d4bc: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12d4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12d4c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d4c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12d4c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12d4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12d4cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d4ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d4d0: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x12d4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12d4d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12d4d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d4d8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12D4D8u;
    SET_GPR_U32(ctx, 31, 0x12D4E0u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12D4D8u, 0x12D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4E0u;
label_12d4e0:
    // 0x12d4e0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x12d4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x12d4e4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12d4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x12d4e8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D4E8u;
    SET_GPR_U32(ctx, 31, 0x12D4F0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D4E8u, 0x12D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D4F0u;
label_12d4f0:
    // 0x12d4f0: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x12d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x12d4f4: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x12d4f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x12d4f8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x12d4fc: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D4FCu;
    SET_GPR_U32(ctx, 31, 0x12D504u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D4FCu, 0x12D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D504u;
}
