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

// Function: set_eff_denki_hit
// Address: 0x2f5220 - 0x2f52f8
void set_eff_denki_hit_0x2f5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_denki_hit_0x2f5220");
#endif

    switch (ctx->pc) {
        case 0x2f5264u: goto label_2f5264;
        case 0x2f5270u: goto label_2f5270;
        case 0x2f52a0u: goto label_2f52a0;
        case 0x2f52acu: goto label_2f52ac;
        case 0x2f52dcu: goto label_2f52dc;
        case 0x2f52e8u: goto label_2f52e8;
        default: break;
    }

    ctx->pc = 0x2f5220u;

    // 0x2f5220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f5220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f5224: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2f5224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2f5228: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2f5228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2f522c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2f522cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2f5230: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x2f5230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x2f5234: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f5234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f5238: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f5238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f523c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f523cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f5240: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f5240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f5244: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f5244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f5248: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f524c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f524cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f5250: 0x24047802  addiu       $a0, $zero, 0x7802
    ctx->pc = 0x2f5250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x2f5254: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2f5254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f5258: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2f5258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f525c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F525Cu;
    SET_GPR_U32(ctx, 31, 0x2F5264u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F525Cu, 0x2F5264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5264u;
label_2f5264:
    // 0x2f5264: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f5264u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f5268: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F5268u;
    SET_GPR_U32(ctx, 31, 0x2F5270u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F5268u, 0x2F5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5270u;
label_2f5270:
    // 0x2f5270: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f5270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f5274: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f5274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f5278: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f5278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f527c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f5280: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f5280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f5284: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f5284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f5288: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f5288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f528c: 0x24046702  addiu       $a0, $zero, 0x6702
    ctx->pc = 0x2f528cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26370));
    // 0x2f5290: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2f5290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f5294: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2f5294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5298: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F5298u;
    SET_GPR_U32(ctx, 31, 0x2F52A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F5298u, 0x2F52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52A0u;
label_2f52a0:
    // 0x2f52a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f52a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f52a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F52A4u;
    SET_GPR_U32(ctx, 31, 0x2F52ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F52A4u, 0x2F52ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52ACu;
label_2f52ac:
    // 0x2f52ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2f52acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f52b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f52b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f52b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f52b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f52b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f52b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f52bc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f52bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f52c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f52c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f52c4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f52c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f52c8: 0x24046209  addiu       $a0, $zero, 0x6209
    ctx->pc = 0x2f52c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25097));
    // 0x2f52cc: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2f52ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f52d0: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x2f52d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f52d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F52D4u;
    SET_GPR_U32(ctx, 31, 0x2F52DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F52D4u, 0x2F52DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52DCu;
label_2f52dc:
    // 0x2f52dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2f52dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f52e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F52E0u;
    SET_GPR_U32(ctx, 31, 0x2F52E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F52E0u, 0x2F52E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F52E8u;
label_2f52e8:
    // 0x2f52e8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2f52e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f52ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2f52ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f52f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F52F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F52F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F52F8u;
}
