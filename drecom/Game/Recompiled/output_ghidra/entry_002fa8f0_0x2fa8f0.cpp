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

// Function: entry_002fa8f0
// Address: 0x2fa8f0 - 0x2fa99c
void entry_002fa8f0_0x2fa8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fa8f0_0x2fa8f0");
#endif

    switch (ctx->pc) {
        case 0x2fa984u: goto label_2fa984;
        case 0x2fa990u: goto label_2fa990;
        default: break;
    }

    ctx->pc = 0x2fa8f0u;

    // 0x2fa8f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fa8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa8f4: 0x8ca700d4  lw          $a3, 0xD4($a1)
    ctx->pc = 0x2fa8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fa8f8: 0x28e10007  slti        $at, $a3, 0x7
    ctx->pc = 0x2fa8f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2fa8fc: 0x14200042  bnez        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x2FA8FCu;
    {
        const bool branch_taken_0x2fa8fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa8fc) {
            ctx->pc = 0x2FAA08u;
            return;
        }
    }
    ctx->pc = 0x2FA904u;
    // 0x2fa904: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fa904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa908: 0x8ca500d4  lw          $a1, 0xD4($a1)
    ctx->pc = 0x2fa908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 212)));
    // 0x2fa90c: 0x28a10016  slti        $at, $a1, 0x16
    ctx->pc = 0x2fa90cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x2fa910: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x2FA910u;
    {
        const bool branch_taken_0x2fa910 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa910) {
            ctx->pc = 0x2FAA08u;
            return;
        }
    }
    ctx->pc = 0x2FA918u;
    // 0x2fa918: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2fa918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa91c: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x2fa91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2fa920: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2FA920u;
    {
        const bool branch_taken_0x2fa920 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa920) {
            ctx->pc = 0x2FA99Cu;
            return;
        }
    }
    ctx->pc = 0x2FA928u;
    // 0x2fa928: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x2fa928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2fa92c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x2fa92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2fa930: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2fa930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2fa934: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa938: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fa938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fa93c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2fa93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2fa940: 0x34420300  ori         $v0, $v0, 0x300
    ctx->pc = 0x2fa940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)768);
    // 0x2fa944: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fa944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fa948: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fa948u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fa94c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2fa94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fa950: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2fa950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2fa954: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2fa954u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2fa958: 0x244506c0  addiu       $a1, $v0, 0x6C0
    ctx->pc = 0x2fa958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x2fa95c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2fa95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2fa960: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2fa960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2fa964: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fa964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fa968: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2fa968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2fa96c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2fa96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2fa970: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2fa970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa974: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2fa974u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fa978: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fa978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa97c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2FA97Cu;
    SET_GPR_U32(ctx, 31, 0x2FA984u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2FA97Cu, 0x2FA984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA984u;
label_2fa984:
    // 0x2fa984: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fa984u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa988: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2FA988u;
    SET_GPR_U32(ctx, 31, 0x2FA990u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2FA988u, 0x2FA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA990u;
label_2fa990:
    // 0x2fa990: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fa990u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fa994: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2FA994u;
    {
        const bool branch_taken_0x2fa994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa994) {
            ctx->pc = 0x2FAA08u;
            return;
        }
    }
    ctx->pc = 0x2FA99Cu;
}
