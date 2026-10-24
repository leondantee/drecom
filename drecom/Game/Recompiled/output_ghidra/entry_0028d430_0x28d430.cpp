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

// Function: entry_0028d430
// Address: 0x28d430 - 0x28d528
void entry_0028d430_0x28d430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d430_0x28d430");
#endif

    switch (ctx->pc) {
        case 0x28d4c4u: goto label_28d4c4;
        case 0x28d524u: goto label_28d524;
        default: break;
    }

    ctx->pc = 0x28d430u;

    // 0x28d430: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d434: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x28d434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d438: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d43c: 0x1483003a  bne         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x28D43Cu;
    {
        const bool branch_taken_0x28d43c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28d43c) {
            ctx->pc = 0x28D528u;
            return;
        }
    }
    ctx->pc = 0x28D444u;
    // 0x28d444: 0x82065dea  lb          $a2, 0x5DEA($s0)
    ctx->pc = 0x28d444u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28d448: 0x6263c  dsll32      $a0, $a2, 24
    ctx->pc = 0x28d448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 24));
    // 0x28d44c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x28d44cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x28d450: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x28d450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28d454: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x28d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x28d458: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x28d458u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x28d45c: 0xa2025de9  sb          $v0, 0x5DE9($s0)
    ctx->pc = 0x28d45cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24041), (uint8_t)GPR_U32(ctx, 2));
    // 0x28d460: 0x26020520  addiu       $v0, $s0, 0x520
    ctx->pc = 0x28d460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x28d464: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x28d464u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d468: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x28d468u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28d46c: 0x82035de9  lb          $v1, 0x5DE9($s0)
    ctx->pc = 0x28d46cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24041)));
    // 0x28d470: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x28d470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28d474: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28d474u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x28d478: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d47c: 0xac232998  sw          $v1, 0x2998($at)
    ctx->pc = 0x28d47cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622998u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622998u, _value); } while (0);
    // 0x28d480: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d484: 0x8c232998  lw          $v1, 0x2998($at)
    ctx->pc = 0x28d484u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622998u));
    // 0x28d488: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x28d488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28d48c: 0x34630087  ori         $v1, $v1, 0x87
    ctx->pc = 0x28d48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)135);
    // 0x28d490: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d494: 0xac2329a0  sw          $v1, 0x29A0($at)
    ctx->pc = 0x28d494u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6229A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6229A0u, _value); } while (0);
    // 0x28d498: 0x8eb40000  lw          $s4, 0x0($s5)
    ctx->pc = 0x28d498u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28d49c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d4a0: 0x8c2329a0  lw          $v1, 0x29A0($at)
    ctx->pc = 0x28d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6229A0u));
    // 0x28d4a4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28d4a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d4a8: 0x3c110002  lui         $s1, 0x2
    ctx->pc = 0x28d4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)2 << 16));
    // 0x28d4ac: 0x36234000  ori         $v1, $s1, 0x4000
    ctx->pc = 0x28d4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x28d4b0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x28d4b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d4b4: 0x72803628  paddub      $a2, $s4, $zero
    ctx->pc = 0x28d4b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28d4b8: 0x24070081  addiu       $a3, $zero, 0x81
    ctx->pc = 0x28d4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x28d4bc: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28D4BCu;
    SET_GPR_U32(ctx, 31, 0x28D4C4u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28D4BCu, 0x28D4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D4C4u;
label_28d4c4:
    // 0x28d4c4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28d4c4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28d4c8: 0xafa30174  sw          $v1, 0x174($sp)
    ctx->pc = 0x28d4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 3));
    // 0x28d4cc: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x28d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x28d4d0: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x28d4d0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d4d4: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x28d4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28d4d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28d4dc: 0x10c30012  beq         $a2, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x28D4DCu;
    {
        const bool branch_taken_0x28d4dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x28d4dc) {
            ctx->pc = 0x28D528u;
            return;
        }
    }
    ctx->pc = 0x28D4E4u;
    // 0x28d4e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d4e8: 0xac2020f8  sw          $zero, 0x20F8($at)
    ctx->pc = 0x28d4e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28d4ec: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x28d4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x28d4f0: 0xac2062e0  sw          $zero, 0x62E0($at)
    ctx->pc = 0x28d4f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3962E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3962E0u, _value); } while (0);
    // 0x28d4f4: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x28d4f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28d4fc: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x28d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    // 0x28d500: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28d500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28d504: 0xac2020d8  sw          $zero, 0x20D8($at)
    ctx->pc = 0x28d504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6220D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220D8u, _value); } while (0);
    // 0x28d508: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28d508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28d50c: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x28d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x28d510: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28d510u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28d514: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28d514u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d518: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x28d518u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28d51c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x28D51Cu;
    SET_GPR_U32(ctx, 31, 0x28D524u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x28D51Cu, 0x28D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D524u;
label_28d524:
    // 0x28d524: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28d524u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28d528u;
}
