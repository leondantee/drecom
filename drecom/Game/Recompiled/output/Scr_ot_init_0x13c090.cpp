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

// Function: Scr_ot_init
// Address: 0x13c090 - 0x13c14c
void Scr_ot_init_0x13c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_ot_init_0x13c090");
#endif

    switch (ctx->pc) {
        case 0x13c0c8u: goto label_13c0c8;
        default: break;
    }

    ctx->pc = 0x13c090u;

    // 0x13c090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c09c: 0xa3a40028  sb          $a0, 0x28($sp)
    ctx->pc = 0x13c09cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x13c0a0: 0x24110100  addiu       $s1, $zero, 0x100
    ctx->pc = 0x13c0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13c0a4: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x13c0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13c0a8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13c0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13c0ac: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x13c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x13c0b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c0b4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13c0b8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x13c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x13c0bc: 0x24636eb0  addiu       $v1, $v1, 0x6EB0
    ctx->pc = 0x13c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28336));
    // 0x13c0c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c0c4: 0x24701000  addiu       $s0, $v1, 0x1000
    ctx->pc = 0x13c0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
label_13c0c8:
    // 0x13c0c8: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x13c0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13c0cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13c0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c0d0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13c0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13c0d4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13c0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c0d8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x13c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x13c0dc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13c0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13c0e0: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x13c0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x13c0e4: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x13c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x13c0e8: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x13c0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x13c0ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x13c0ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x13c0f0: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x13C0F0u;
    {
        const bool branch_taken_0x13c0f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c0f0) {
            ctx->pc = 0x13C0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c0c8;
        }
    }
    ctx->pc = 0x13C0F8u;
    // 0x13c0f8: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x13c0f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13c0fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x13c0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13c100: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x13c100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x13c104: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c108: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x13c108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13c10c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x13c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x13c110: 0x24634fa0  addiu       $v1, $v1, 0x4FA0
    ctx->pc = 0x13c110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20384));
    // 0x13c114: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c118: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x13c118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x13c11c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13c11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c120: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x13c120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x13c124: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x13c124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13c128: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x13c128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x13c12c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13c12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13c130: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x13c130u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x13c134: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x13c134u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x13c138: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c13c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c140: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c144: 0x3e00008  jr          $ra
    ctx->pc = 0x13C144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C14Cu;
}
