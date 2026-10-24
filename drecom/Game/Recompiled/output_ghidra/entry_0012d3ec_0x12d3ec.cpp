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

// Function: entry_0012d3ec
// Address: 0x12d3ec - 0x12d478
void entry_0012d3ec_0x12d3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d3ec_0x12d3ec");
#endif

    switch (ctx->pc) {
        case 0x12d410u: goto label_12d410;
        case 0x12d454u: goto label_12d454;
        case 0x12d464u: goto label_12d464;
        default: break;
    }

    ctx->pc = 0x12d3ecu;

    // 0x12d3ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d3f0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x12d3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x12d3f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12d3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12d3f8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x12d3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x12d3fc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x12D3FCu;
    {
        const bool branch_taken_0x12d3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d3fc) {
            ctx->pc = 0x12D478u;
            return;
        }
    }
    ctx->pc = 0x12D404u;
    // 0x12d404: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12d404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d408: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12D408u;
    SET_GPR_U32(ctx, 31, 0x12D410u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12D408u, 0x12D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D410u;
label_12d410:
    // 0x12d410: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12d410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d414: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12d414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d418: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12d418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12d41c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d420: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12d420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12d424: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12d424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12d428: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12d42c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d430: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12d430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12d434: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12d438: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12d438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12d43c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12d440: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d440u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d444: 0x24470580  addiu       $a3, $v0, 0x580
    ctx->pc = 0x12d444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x12d448: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12d448u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d44c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12D44Cu;
    SET_GPR_U32(ctx, 31, 0x12D454u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12D44Cu, 0x12D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D454u;
label_12d454:
    // 0x12d454: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x12d454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x12d458: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x12d458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x12d45c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D45Cu;
    SET_GPR_U32(ctx, 31, 0x12D464u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D45Cu, 0x12D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D464u;
label_12d464:
    // 0x12d464: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x12d464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x12d468: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x12d468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x12d46c: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x12d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x12d470: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x12D470u;
    SET_GPR_U32(ctx, 31, 0x12D478u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x12D470u, 0x12D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D478u;
}
