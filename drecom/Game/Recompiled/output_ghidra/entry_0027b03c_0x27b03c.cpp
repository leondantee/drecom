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

// Function: entry_0027b03c
// Address: 0x27b03c - 0x27b074
void entry_0027b03c_0x27b03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b03c_0x27b03c");
#endif

    switch (ctx->pc) {
        case 0x27b048u: goto label_27b048;
        case 0x27b05cu: goto label_27b05c;
        default: break;
    }

    ctx->pc = 0x27b03cu;

    // 0x27b03c: 0x240401fe  addiu       $a0, $zero, 0x1FE
    ctx->pc = 0x27b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
    // 0x27b040: 0xc084964  jal         func_212590
    ctx->pc = 0x27B040u;
    SET_GPR_U32(ctx, 31, 0x27B048u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27B040u, 0x27B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B048u;
label_27b048:
    // 0x27b048: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27b048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27b04c: 0x245395a0  addiu       $s3, $v0, -0x6A60
    ctx->pc = 0x27b04cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x27b050: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x27b050u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x27b054: 0xc09eacc  jal         func_27AB30
    ctx->pc = 0x27B054u;
    SET_GPR_U32(ctx, 31, 0x27B05Cu);
    ctx->pc = 0x27AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AB30u, 0x27B054u, 0x27B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B05Cu;
label_27b05c:
    // 0x27b05c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x27b05cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27b060: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27b064: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b068: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27B068u;
    {
        const bool branch_taken_0x27b068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b068) {
            ctx->pc = 0x27B074u;
            return;
        }
    }
    ctx->pc = 0x27B070u;
    // 0x27b070: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x27b070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->pc = 0x27b074u;
}
