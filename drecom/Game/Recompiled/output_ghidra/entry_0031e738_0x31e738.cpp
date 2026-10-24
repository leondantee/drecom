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

// Function: entry_0031e738
// Address: 0x31e738 - 0x31e774
void entry_0031e738_0x31e738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e738_0x31e738");
#endif

    switch (ctx->pc) {
        case 0x31e748u: goto label_31e748;
        default: break;
    }

    ctx->pc = 0x31e738u;

label_31e738:
    // 0x31e738: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x31e738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31e73c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x31e73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31e740: 0xc099794  jal         func_265E50
    ctx->pc = 0x31E740u;
    SET_GPR_U32(ctx, 31, 0x31E748u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x31E740u, 0x31E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E748u;
label_31e748:
    // 0x31e748: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e74c: 0xac22af6c  sw          $v0, -0x5094($at)
    ctx->pc = 0x31e74cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x85AF6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF6Cu, _value); } while (0);
    // 0x31e750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31e750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31e754: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x31e754u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31e758: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31E758u;
    {
        const bool branch_taken_0x31e758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e758) {
            ctx->pc = 0x31E738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e738;
        }
    }
    ctx->pc = 0x31E760u;
    // 0x31e760: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x31e764: 0x9423af66  lhu         $v1, -0x509A($at)
    ctx->pc = 0x31e764u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x85AF66u));
    // 0x31e768: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x31e768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31e76c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x31e76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31e770: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x31e770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    ctx->pc = 0x31e774u;
}
