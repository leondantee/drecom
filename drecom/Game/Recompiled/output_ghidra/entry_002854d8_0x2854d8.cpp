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

// Function: entry_002854d8
// Address: 0x2854d8 - 0x285544
void entry_002854d8_0x2854d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002854d8_0x2854d8");
#endif

    switch (ctx->pc) {
        case 0x28550cu: goto label_28550c;
        default: break;
    }

    ctx->pc = 0x2854d8u;

    // 0x2854d8: 0x82025de8  lb          $v0, 0x5DE8($s0)
    ctx->pc = 0x2854d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x2854dc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2854dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2854e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2854e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2854e4: 0x2457ffff  addiu       $s7, $v0, -0x1
    ctx->pc = 0x2854e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2854e8: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x2854e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x2854ec: 0x3455008c  ori         $s5, $v0, 0x8C
    ctx->pc = 0x2854ecu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)140);
    // 0x2854f0: 0x8e0665a0  lw          $a2, 0x65A0($s0)
    ctx->pc = 0x2854f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26016)));
    // 0x2854f4: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x2854f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x2854f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2854f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2854fc: 0x3445b000  ori         $a1, $v0, 0xB000
    ctx->pc = 0x2854fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x285500: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x285500u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x285504: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x285504u;
    SET_GPR_U32(ctx, 31, 0x28550Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x285504u, 0x28550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28550Cu;
label_28550c:
    // 0x28550c: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x28550cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x285510: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x285510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x285514: 0x12630052  beq         $s3, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x285514u;
    {
        const bool branch_taken_0x285514 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x285514) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x28551Cu;
    // 0x28551c: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x285520: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x285520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x285524: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x285524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x285528: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28552c: 0x8c231b98  lw          $v1, 0x1B98($at)
    ctx->pc = 0x28552cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B98u));
    // 0x285530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x285530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x285534: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x285534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x285538: 0xac231b98  sw          $v1, 0x1B98($at)
    ctx->pc = 0x285538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B98u, _value); } while (0);
    // 0x28553c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x28553Cu;
    {
        const bool branch_taken_0x28553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28553c) {
            ctx->pc = 0x285660u;
            return;
        }
    }
    ctx->pc = 0x285544u;
}
