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

// Function: entry_002dce78
// Address: 0x2dce78 - 0x2dceb0
void entry_002dce78_0x2dce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dce78_0x2dce78");
#endif

    ctx->pc = 0x2dce78u;

    // 0x2dce78: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2dce78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2dce7c: 0x24538e20  addiu       $s3, $v0, -0x71E0
    ctx->pc = 0x2dce7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938144));
    // 0x2dce80: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2dce80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dce84: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2dce84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388E20u, _value); } while (0);
    // 0x2dce88: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2dce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dce8c: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2dce8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388E24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388E24u, _value); } while (0);
    // 0x2dce90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dce90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2dce94: 0x9022edae  lbu         $v0, -0x1252($at)
    ctx->pc = 0x2dce94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3EEDAEu));
    // 0x2dce98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DCE98u;
    {
        const bool branch_taken_0x2dce98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce98) {
            ctx->pc = 0x2DCEB0u;
            return;
        }
    }
    ctx->pc = 0x2DCEA0u;
    // 0x2dcea0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dcea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcea4: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2dcea4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dcea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DCEA8u;
    {
        const bool branch_taken_0x2dcea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcea8) {
            ctx->pc = 0x2DCEBCu;
            return;
        }
    }
    ctx->pc = 0x2DCEB0u;
}
