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

// Function: entry_00360ef8
// Address: 0x360ef8 - 0x360f24
void entry_00360ef8_0x360ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360ef8_0x360ef8");
#endif

    ctx->pc = 0x360ef8u;

    // 0x360ef8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x360ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360efc: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x360efcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x360f00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x360f04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x360f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x360f08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x360F08u;
    {
        const bool branch_taken_0x360f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x360f08) {
            ctx->pc = 0x360F24u;
            return;
        }
    }
    ctx->pc = 0x360F10u;
    // 0x360f10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x360f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x360f14: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x360f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x360f18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x360f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x360f1c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x360f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x360f20: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x360f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    ctx->pc = 0x360f24u;
}
