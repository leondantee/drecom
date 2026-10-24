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

// Function: entry_001abaf8
// Address: 0x1abaf8 - 0x1abb90
void entry_001abaf8_0x1abaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001abaf8_0x1abaf8");
#endif

    ctx->pc = 0x1abaf8u;

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
    ctx->pc = 0x1abb90u;
}
