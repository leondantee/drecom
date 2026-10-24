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

// Function: Md_set_prim_db
// Address: 0x2583b0 - 0x2584bc
void Md_set_prim_db_0x2583b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_set_prim_db_0x2583b0");
#endif

    switch (ctx->pc) {
        case 0x2583e4u: goto label_2583e4;
        case 0x2583f0u: goto label_2583f0;
        case 0x258410u: goto label_258410;
        default: break;
    }

    ctx->pc = 0x2583b0u;

    // 0x2583b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2583b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2583b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2583b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2583b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2583b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2583bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2583bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2583c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2583c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2583c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2583c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2583c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2583c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2583cc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2583ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2583d0: 0xffa50070  sd          $a1, 0x70($sp)
    ctx->pc = 0x2583d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 5));
    // 0x2583d4: 0xa3a60078  sb          $a2, 0x78($sp)
    ctx->pc = 0x2583d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 6));
    // 0x2583d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2583d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2583dc: 0x8c730058  lw          $s3, 0x58($v1)
    ctx->pc = 0x2583dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2583e0: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2583e0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2583e4:
    // 0x2583e4: 0x8e720034  lw          $s2, 0x34($s3)
    ctx->pc = 0x2583e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2583e8: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2583e8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2583ec: 0x0  nop
    ctx->pc = 0x2583ecu;
    // NOP
label_2583f0:
    // 0x2583f0: 0x93a30078  lbu         $v1, 0x78($sp)
    ctx->pc = 0x2583f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2583f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2583f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2583f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2583f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2583fc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2583fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x258400: 0x8c700018  lw          $s0, 0x18($v1)
    ctx->pc = 0x258400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x258404: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x258404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x258408: 0x0  nop
    ctx->pc = 0x258408u;
    // NOP
    // 0x25840c: 0x0  nop
    ctx->pc = 0x25840cu;
    // NOP
label_258410:
    // 0x258410: 0xdfa40070  ld          $a0, 0x70($sp)
    ctx->pc = 0x258410u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x258414: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x258414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x258418: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x258418u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25841c: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x25841cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x258420: 0x433fc  dsll32      $a2, $a0, 15
    ctx->pc = 0x258420u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 15));
    // 0x258424: 0x3c04fc00  lui         $a0, 0xFC00
    ctx->pc = 0x258424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64512 << 16));
    // 0x258428: 0x34847fff  ori         $a0, $a0, 0x7FFF
    ctx->pc = 0x258428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x25842c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x25842cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x258430: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x258430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x258434: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x258434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x258438: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x258438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x25843c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x25843cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x258440: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x258440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x258444: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x258444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x258448: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x258448u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x25844c: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x25844cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x258450: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x258450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x258454: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x258454u;
    {
        const bool branch_taken_0x258454 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x258454) {
            ctx->pc = 0x258410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258410;
        }
    }
    ctx->pc = 0x25845Cu;
    // 0x25845c: 0x265200c0  addiu       $s2, $s2, 0xC0
    ctx->pc = 0x25845cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x258460: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x258460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x258464: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x258464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x258468: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x258468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25846c: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x25846cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258470: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x258470u;
    {
        const bool branch_taken_0x258470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258470) {
            ctx->pc = 0x2583F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2583f0;
        }
    }
    ctx->pc = 0x258478u;
    // 0x258478: 0x26730090  addiu       $s3, $s3, 0x90
    ctx->pc = 0x258478u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x25847c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x25847cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x258480: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x258480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x258484: 0x94630052  lhu         $v1, 0x52($v1)
    ctx->pc = 0x258484u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 82)));
    // 0x258488: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x258488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25848c: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x25848cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x258490: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x258490u;
    {
        const bool branch_taken_0x258490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x258490) {
            ctx->pc = 0x2583E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2583e4;
        }
    }
    ctx->pc = 0x258498u;
    // 0x258498: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x258498u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25849c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25849cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2584a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2584a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2584a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2584a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2584a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2584a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2584ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2584acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2584b0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2584b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2584b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2584B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2584B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2584BCu;
}
