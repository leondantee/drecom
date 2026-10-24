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

// Function: entry_001979b4
// Address: 0x1979b4 - 0x197a1c
void entry_001979b4_0x1979b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001979b4_0x1979b4");
#endif

    switch (ctx->pc) {
        case 0x1979ecu: goto label_1979ec;
        case 0x197a10u: goto label_197a10;
        default: break;
    }

    ctx->pc = 0x1979b4u;

    // 0x1979b4: 0x3c043e19  lui         $a0, 0x3E19
    ctx->pc = 0x1979b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15897 << 16));
    // 0x1979b8: 0x3482999a  ori         $v0, $a0, 0x999A
    ctx->pc = 0x1979b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x1979bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1979bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1979c0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1979c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1979c4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1979c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1979c8: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1979c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1979cc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1979ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1979d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1979d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1979d4: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1979d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1979d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1979d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1979dc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1979dcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1979e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1979e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1979e4: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x1979E4u;
    SET_GPR_U32(ctx, 31, 0x1979ECu);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x1979E4u, 0x1979ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1979ECu;
label_1979ec:
    // 0x1979ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1979ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1979f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1979f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1979f4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1979f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1979f8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1979f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1979fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1979fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197a04: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197a04u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197a08: 0xc06c130  jal         func_1B04C0
    ctx->pc = 0x197A08u;
    SET_GPR_U32(ctx, 31, 0x197A10u);
    ctx->pc = 0x1B04C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B04C0u, 0x197A08u, 0x197A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A10u;
label_197a10:
    // 0x197a10: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x197a10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197a14: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x197A14u;
    {
        const bool branch_taken_0x197a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197a14) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x197A1Cu;
}
