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

// Function: entry_002ce4b4
// Address: 0x2ce4b4 - 0x2ce53c
void entry_002ce4b4_0x2ce4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce4b4_0x2ce4b4");
#endif

    ctx->pc = 0x2ce4b4u;

label_2ce4b4:
    // 0x2ce4b4: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x2ce4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ce4b8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce4bc: 0x24638200  addiu       $v1, $v1, -0x7E00
    ctx->pc = 0x2ce4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935040));
    // 0x2ce4c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce4c4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2ce4c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce4c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2ce4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ce4cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ce4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ce4d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ce4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce4d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ce4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ce4d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ce4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ce4dc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2ce4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2ce4e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2ce4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ce4e4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2ce4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2ce4e8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2ce4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce4ec: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce4f0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2ce4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce4f4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce4f8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2ce4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce4fc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce500: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x2ce500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce504: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce508: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x2ce508u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce50c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce510: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x2ce510u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce514: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ce514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ce518: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x2ce518u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x2ce51c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2ce51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2ce520: 0x1620ffe4  bnez        $s1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2CE520u;
    {
        const bool branch_taken_0x2ce520 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce520) {
            ctx->pc = 0x2CE4B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce4b4;
        }
    }
    ctx->pc = 0x2CE528u;
    // 0x2ce528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce52c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce530: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ce530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ce534: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE53Cu;
}
