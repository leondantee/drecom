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

// Function: H_ot_init
// Address: 0x1abac0 - 0x1abbe0
void H_ot_init_0x1abac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("H_ot_init_0x1abac0");
#endif

    switch (ctx->pc) {
        case 0x1abaf8u: goto label_1abaf8;
        case 0x1abb90u: goto label_1abb90;
        default: break;
    }

    ctx->pc = 0x1abac0u;

    // 0x1abac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1abac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1abac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abacc: 0xa3a40028  sb          $a0, 0x28($sp)
    ctx->pc = 0x1abaccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x1abad0: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x1abad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1abad4: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x1abad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abad8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1abad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1abadc: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x1abadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1abae0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abae4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1abae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abae8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1abae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1abaec: 0x2463cf80  addiu       $v1, $v1, -0x3080
    ctx->pc = 0x1abaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954880));
    // 0x1abaf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abaf4: 0x24704000  addiu       $s0, $v1, 0x4000
    ctx->pc = 0x1abaf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_1abaf8:
    // 0x1abaf8: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1abaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abafc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abb00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abb04: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abb08: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abb0c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abb10: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abb10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abb14: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abb14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abb18: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1abb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abb1c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1abb1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1abb20: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ABB20u;
    {
        const bool branch_taken_0x1abb20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abb20) {
            ctx->pc = 0x1ABAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abaf8;
        }
    }
    ctx->pc = 0x1ABB28u;
    // 0x1abb28: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x1abb28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abb2c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1abb2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1abb30: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x1abb30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1abb34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abb38: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1abb38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abb3c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1abb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1abb40: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x1abb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
    // 0x1abb44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abb48: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1abb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x1abb4c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abb50: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abb54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abb54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abb58: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abb5c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abb60: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abb60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abb64: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abb64u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abb68: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x1abb68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1abb6c: 0x93a30028  lbu         $v1, 0x28($sp)
    ctx->pc = 0x1abb6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1abb70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1abb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1abb74: 0x41a80  sll         $v1, $a0, 10
    ctx->pc = 0x1abb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 10));
    // 0x1abb78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abb7c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1abb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1abb80: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1abb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1abb84: 0x24634f60  addiu       $v1, $v1, 0x4F60
    ctx->pc = 0x1abb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
    // 0x1abb88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1abb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abb8c: 0x24704000  addiu       $s0, $v1, 0x4000
    ctx->pc = 0x1abb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
label_1abb90:
    // 0x1abb90: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1abb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abb94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abb98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abb9c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1abb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abba0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1abba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1abba4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abba8: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abba8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abbac: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abbacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abbb0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1abbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1abbb4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1abbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1abbb8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1ABBB8u;
    {
        const bool branch_taken_0x1abbb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1abbb8) {
            ctx->pc = 0x1ABB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abb90;
        }
    }
    ctx->pc = 0x1ABBC0u;
    // 0x1abbc0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1abbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1abbc4: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1abbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1abbc8: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x1abbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x1abbcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1abbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abbd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1abbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abbd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1abbd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1abbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABBE0u;
}
