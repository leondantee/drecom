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

// Function: entry_00104d48
// Address: 0x104d48 - 0x104db4
void entry_00104d48_0x104d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104d48_0x104d48");
#endif

    ctx->pc = 0x104d48u;

label_104d48:
    // 0x104d48: 0xdca80000  ld          $t0, 0x0($a1)
    ctx->pc = 0x104d48u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104d4c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x104d4cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x104d50: 0x71284389  pcpyld      $t0, $t1, $t0
    ctx->pc = 0x104d50u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x104d54: 0x71084ee8  qfsrv       $t1, $t0, $t0
    ctx->pc = 0x104d54u;
    SET_GPR_VEC(ctx, 9, PS2_QFSRV(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8), ctx->sa & 0x7F));
    // 0x104d58: 0x70094688  pextlb      $t0, $zero, $t1
    ctx->pc = 0x104d58u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x104d5c: 0x7dc80000  sq          $t0, 0x0($t6)
    ctx->pc = 0x104d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 8));
    // 0x104d60: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x104d60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x104d64: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x104d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x104d68: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x104d68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x104d6c: 0x1ce0fff6  bgtz        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x104D6Cu;
    {
        const bool branch_taken_0x104d6c = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x104D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D6Cu;
        // 0x104d70: 0xcc3021  addu        $a2, $a2, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d6c) {
            ctx->pc = 0x104D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104d48;
        }
    }
    ctx->pc = 0x104D74u;
    // 0x104d74: 0x24a50140  addiu       $a1, $a1, 0x140
    ctx->pc = 0x104d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    // 0x104d78: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x104d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x104d7c: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x104d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x104d80: 0x1e75024  and         $t2, $t7, $a3
    ctx->pc = 0x104d80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) & GPR_U64(ctx, 7));
    // 0x104d84: 0x1540fff0  bnez        $t2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x104D84u;
    {
        const bool branch_taken_0x104d84 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x104D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D84u;
        // 0x104d88: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d84) {
            ctx->pc = 0x104D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104d48;
        }
    }
    ctx->pc = 0x104D8Cu;
    // 0x104d8c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x104d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x104d90: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x104d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x104d94: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x104d94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104d98: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x104d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x104d9c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x104d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x104da0: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x104da0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x104da4: 0x1700ffe6  bnez        $t8, . + 4 + (-0x1A << 2)
    ctx->pc = 0x104DA4u;
    {
        const bool branch_taken_0x104da4 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x104DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DA4u;
        // 0x104da8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104da4) {
            ctx->pc = 0x104D40u;
            return;
        }
    }
    ctx->pc = 0x104DACu;
    // 0x104dac: 0x3e00008  jr          $ra
    ctx->pc = 0x104DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104DB4u;
}
