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

// Function: ectrl20_init00
// Address: 0x254240 - 0x254314
void ectrl20_init00_0x254240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl20_init00_0x254240");
#endif

    switch (ctx->pc) {
        case 0x2542f8u: goto label_2542f8;
        case 0x254304u: goto label_254304;
        default: break;
    }

    ctx->pc = 0x254240u;

    // 0x254240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254244: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x254244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x254248: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x254248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x25424c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254250: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x254250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x254254: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x254254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x254258: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x254258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25425c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x25425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x254260: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x254260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x254264: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x254264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x254268: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x254268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25426c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x25426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x254270: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x254270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x254274: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x254274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254278: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x254278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x25427c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x254280: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x254280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x254284: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x254284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x254288: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x254288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25428c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25428cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x254290: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x254290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x254294: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x254294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x254298: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x254298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25429c: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x25429cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2542a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2542a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2542a4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x2542a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2542a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2542a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2542ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2542acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2542b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2542b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2542b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2542b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2542b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2542b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2542bc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2542bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2542c0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2542c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2542c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2542c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2542c8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x2542c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x2542cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2542ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2542d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2542d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2542d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2542d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2542d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2542d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2542dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2542dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2542e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2542e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2542e4: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x2542e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2542e8: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x2542e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2542ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2542ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2542f0: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x2542F0u;
    SET_GPR_U32(ctx, 31, 0x2542F8u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x2542F0u, 0x2542F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542F8u;
label_2542f8:
    // 0x2542f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2542f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2542fc: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x2542FCu;
    SET_GPR_U32(ctx, 31, 0x254304u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x2542FCu, 0x254304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254304u;
label_254304:
    // 0x254304: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x254304u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254308: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x254308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25430c: 0x3e00008  jr          $ra
    ctx->pc = 0x25430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25430Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254314u;
}
