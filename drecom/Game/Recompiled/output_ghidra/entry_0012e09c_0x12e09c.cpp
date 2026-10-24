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

// Function: entry_0012e09c
// Address: 0x12e09c - 0x12e158
void entry_0012e09c_0x12e09c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e09c_0x12e09c");
#endif

    switch (ctx->pc) {
        case 0x12e0ccu: goto label_12e0cc;
        case 0x12e0e0u: goto label_12e0e0;
        case 0x12e128u: goto label_12e128;
        case 0x12e154u: goto label_12e154;
        default: break;
    }

    ctx->pc = 0x12e09cu;

    // 0x12e09c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e0a0: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x12e0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x12e0a4: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x12e0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e0a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x12e0a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x12e0ac: 0x24a70300  addiu       $a3, $a1, 0x300
    ctx->pc = 0x12e0acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
    // 0x12e0b0: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x12e0b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x12e0b4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x12e0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12e0b8: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x12e0b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x12e0bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12e0c0: 0x24478d8c  addiu       $a3, $v0, -0x7274
    ctx->pc = 0x12e0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937996));
    // 0x12e0c4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x12E0C4u;
    SET_GPR_U32(ctx, 31, 0x12E0CCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12E0C4u, 0x12E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0CCu;
label_12e0cc:
    // 0x12e0cc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x12E0CCu;
    {
        const bool branch_taken_0x12e0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e0cc) {
            ctx->pc = 0x12E158u;
            return;
        }
    }
    ctx->pc = 0x12E0D4u;
    // 0x12e0d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x12e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12e0d8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12E0D8u;
    SET_GPR_U32(ctx, 31, 0x12E0E0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12E0D8u, 0x12E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E0E0u;
label_12e0e0:
    // 0x12e0e0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e0e4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x12e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12e0e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12e0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12e0ec: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x12e0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12e0f0: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x12e0f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x12e0f4: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x12e0f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x12e0f8: 0x463824  and         $a3, $v0, $a2
    ctx->pc = 0x12e0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x12e0fc: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x12e0fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x12e100: 0x35020106  ori         $v0, $t0, 0x106
    ctx->pc = 0x12e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)262);
    // 0x12e104: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12e104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e108: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x12e108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x12e10c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12e10cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12e110: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x12e110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12e114: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12e114u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e118: 0x24670300  addiu       $a3, $v1, 0x300
    ctx->pc = 0x12e118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 768));
    // 0x12e11c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12e11cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e120: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12E120u;
    SET_GPR_U32(ctx, 31, 0x12E128u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12E120u, 0x12E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E128u;
label_12e128:
    // 0x12e128: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x12e128u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12e12c: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x12e12cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12e130: 0x8d020130  lw          $v0, 0x130($t0)
    ctx->pc = 0x12e130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
    // 0x12e134: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x12e134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x12e138: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x12e138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x12e13c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x12e13cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12e140: 0x24040516  addiu       $a0, $zero, 0x516
    ctx->pc = 0x12e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
    // 0x12e144: 0x244505b0  addiu       $a1, $v0, 0x5B0
    ctx->pc = 0x12e144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x12e148: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12e148u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12e14c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12E14Cu;
    SET_GPR_U32(ctx, 31, 0x12E154u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12E14Cu, 0x12E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E154u;
label_12e154:
    // 0x12e154: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12e154u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x12e158u;
}
