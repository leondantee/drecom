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

// Function: entry_0035a178
// Address: 0x35a178 - 0x35a1a4
void entry_0035a178_0x35a178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035a178_0x35a178");
#endif

    ctx->pc = 0x35a178u;

    // 0x35a178: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a17c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x35a17cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x35a180: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35a184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35a188: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35A188u;
    {
        const bool branch_taken_0x35a188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35a188) {
            ctx->pc = 0x35A1A4u;
            return;
        }
    }
    ctx->pc = 0x35A190u;
    // 0x35a190: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x35a190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35a194: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x35a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x35a198: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x35a198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35a19c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x35a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35a1a0: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x35a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
    ctx->pc = 0x35a1a4u;
}
