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

// Function: entry_001c9b38
// Address: 0x1c9b38 - 0x1c9b68
void entry_001c9b38_0x1c9b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9b38_0x1c9b38");
#endif

    ctx->pc = 0x1c9b38u;

    // 0x1c9b38: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9b3c: 0x906209db  lbu         $v0, 0x9DB($v1)
    ctx->pc = 0x1c9b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1c9b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c9b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c9b44: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c9b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1c9b48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9B48u;
    {
        const bool branch_taken_0x1c9b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b48) {
            ctx->pc = 0x1C9B68u;
            return;
        }
    }
    ctx->pc = 0x1C9B50u;
    // 0x1c9b50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9b54: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c9b58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1c9b5c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c9b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c9b60: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c9b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c9b64: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1c9b64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    ctx->pc = 0x1c9b68u;
}
