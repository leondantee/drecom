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

// Function: entry_0035bc30
// Address: 0x35bc30 - 0x35bc5c
void entry_0035bc30_0x35bc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035bc30_0x35bc30");
#endif

    ctx->pc = 0x35bc30u;

    // 0x35bc30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc34: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35bc34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35bc38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35bc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35bc3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35bc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35bc40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35BC40u;
    {
        const bool branch_taken_0x35bc40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35bc40) {
            ctx->pc = 0x35BC5Cu;
            return;
        }
    }
    ctx->pc = 0x35BC48u;
    // 0x35bc48: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35bc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35bc4c: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35bc50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35bc54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35bc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35bc58: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35bc58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    ctx->pc = 0x35bc5cu;
}
