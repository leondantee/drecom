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

// Function: entry_001978a8
// Address: 0x1978a8 - 0x197934
void entry_001978a8_0x1978a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001978a8_0x1978a8");
#endif

    switch (ctx->pc) {
        case 0x1978c0u: goto label_1978c0;
        case 0x1978d8u: goto label_1978d8;
        default: break;
    }

    ctx->pc = 0x1978a8u;

    // 0x1978a8: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x1978a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1978ac: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x1978acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1978b0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1978b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1978b4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1978b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1978b8: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x1978B8u;
    SET_GPR_U32(ctx, 31, 0x1978C0u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x1978B8u, 0x1978C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978C0u;
label_1978c0:
    // 0x1978c0: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1978c0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1978c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1978c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1978c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1978c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1978cc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1978ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1978d0: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x1978D0u;
    SET_GPR_U32(ctx, 31, 0x1978D8u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x1978D0u, 0x1978D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978D8u;
label_1978d8:
    // 0x1978d8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1978D8u;
    {
        const bool branch_taken_0x1978d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1978d8) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x1978E0u;
    // 0x1978e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1978e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1978e4: 0x94850094  lhu         $a1, 0x94($a0)
    ctx->pc = 0x1978e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1978e8: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1978e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1978ec: 0xa4860094  sh          $a2, 0x94($a0)
    ctx->pc = 0x1978ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 6));
    // 0x1978f0: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x1978f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1978f4: 0x94e30094  lhu         $v1, 0x94($a3)
    ctx->pc = 0x1978f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 148)));
    // 0x1978f8: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x1978f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1978fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1978fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x197900: 0x10e3005d  beq         $a3, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x197900u;
    {
        const bool branch_taken_0x197900 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x197900) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x197908u;
    // 0x197908: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x197908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19790c: 0x10e40043  beq         $a3, $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x19790Cu;
    {
        const bool branch_taken_0x19790c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x19790c) {
            ctx->pc = 0x197A1Cu;
            return;
        }
    }
    ctx->pc = 0x197914u;
    // 0x197914: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x197914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197918: 0x10e50026  beq         $a3, $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x197918u;
    {
        const bool branch_taken_0x197918 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x197918) {
            ctx->pc = 0x1979B4u;
            return;
        }
    }
    ctx->pc = 0x197920u;
    // 0x197920: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197924: 0x10e60003  beq         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x197924u;
    {
        const bool branch_taken_0x197924 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        if (branch_taken_0x197924) {
            ctx->pc = 0x197934u;
            return;
        }
    }
    ctx->pc = 0x19792Cu;
    // 0x19792c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x19792Cu;
    {
        const bool branch_taken_0x19792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19792c) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x197934u;
}
