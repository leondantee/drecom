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

// Function: _clearOnce
// Address: 0x10ab78 - 0x10abc4
void _clearOnce_0x10ab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_clearOnce_0x10ab78");
#endif

    switch (ctx->pc) {
        case 0x10ab88u: goto label_10ab88;
        default: break;
    }

    ctx->pc = 0x10ab78u;

    // 0x10ab78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ab78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ab7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ab80: 0xc04169e  jal         func_105A78
    ctx->pc = 0x10AB80u;
    SET_GPR_U32(ctx, 31, 0x10AB88u);
    ctx->pc = 0x10AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB80u;
    // 0x10ab84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A78u, 0x10AB80u, 0x10AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB88u;
label_10ab88:
    // 0x10ab88: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x10ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10ab8c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x10ab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x10ab90: 0x8c823be8  lw          $v0, 0x3BE8($a0)
    ctx->pc = 0x10ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383BE8u));
    // 0x10ab94: 0x24c341f8  addiu       $v1, $a2, 0x41F8
    ctx->pc = 0x10ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16888));
    // 0x10ab98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ab98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ab9c: 0x24473300  addiu       $a3, $v0, 0x3300
    ctx->pc = 0x10ab9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x10aba0: 0x24441800  addiu       $a0, $v0, 0x1800
    ctx->pc = 0x10aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6144));
    // 0x10aba4: 0x24451b00  addiu       $a1, $v0, 0x1B00
    ctx->pc = 0x10aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6912));
    // 0x10aba8: 0xacc241f8  sw          $v0, 0x41F8($a2)
    ctx->pc = 0x10aba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3841F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3841F8u, _value); } while (0);
    // 0x10abac: 0xac600280  sw          $zero, 0x280($v1)
    ctx->pc = 0x10abacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x384478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x384478u, _value); } while (0);
    // 0x10abb0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x10abb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3841FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3841FCu, _value); } while (0);
    // 0x10abb4: 0xac650140  sw          $a1, 0x140($v1)
    ctx->pc = 0x10abb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x384338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x384338u, _value); } while (0);
    // 0x10abb8: 0xac670144  sw          $a3, 0x144($v1)
    ctx->pc = 0x10abb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x38433Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x38433Cu, _value); } while (0);
    // 0x10abbc: 0x3e00008  jr          $ra
    ctx->pc = 0x10ABBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABBCu;
        // 0x10abc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ABBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ABC4u;
}
