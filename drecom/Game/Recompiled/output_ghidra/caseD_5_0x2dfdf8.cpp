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

// Function: caseD_5
// Address: 0x2dfdf8 - 0x2dfe4c
void caseD_5_0x2dfdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2dfdf8");
#endif

    ctx->pc = 0x2dfdf8u;

    // 0x2dfdf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfdfc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2dfdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2dfe00: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2dfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2dfe04: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2dfe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dfe08: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2dfe0c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dfe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfe10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2dfe10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2dfe14: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2dfe14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2dfe18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2dfe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dfe1c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dfe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2dfe20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2dfe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dfe24: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2dfe24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2dfe28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2dfe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2dfe2c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2dfe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2dfe30: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DFE30u;
    {
        const bool branch_taken_0x2dfe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfe30) {
            ctx->pc = 0x2DFE4Cu;
            return;
        }
    }
    ctx->pc = 0x2DFE38u;
    // 0x2dfe38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2dfe38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2dfe3c: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x2dfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x2dfe40: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2dfe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2dfe44: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2dfe44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2dfe48: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x2dfe48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    ctx->pc = 0x2dfe4cu;
}
