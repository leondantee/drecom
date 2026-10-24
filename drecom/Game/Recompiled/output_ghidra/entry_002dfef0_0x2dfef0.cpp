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

// Function: entry_002dfef0
// Address: 0x2dfef0 - 0x2dff34
void entry_002dfef0_0x2dfef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dfef0_0x2dfef0");
#endif

    ctx->pc = 0x2dfef0u;

    // 0x2dfef0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2dfef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfef4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2dfef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2dfef8: 0x2403fff5  addiu       $v1, $zero, -0xB
    ctx->pc = 0x2dfef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    // 0x2dfefc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2dfefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2dff00: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2dff00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2dff04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dff08: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2dff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dff0c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x2dff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2dff10: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2dff10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2dff14: 0x8e3000ac  lw          $s0, 0xAC($s1)
    ctx->pc = 0x2dff14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x2dff18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dff18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2dff1c: 0x8c24efa8  lw          $a0, -0x1058($at)
    ctx->pc = 0x2dff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x2dff20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dff24: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFF24u;
    {
        const bool branch_taken_0x2dff24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dff24) {
            ctx->pc = 0x2DFF34u;
            return;
        }
    }
    ctx->pc = 0x2DFF2Cu;
    // 0x2dff2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2dff2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2dff30: 0xac30efa8  sw          $s0, -0x1058($at)
    ctx->pc = 0x2dff30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3EEFA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFA8u, _value); } while (0);
    ctx->pc = 0x2dff34u;
}
