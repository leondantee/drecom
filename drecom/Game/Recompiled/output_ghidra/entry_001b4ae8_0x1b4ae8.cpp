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

// Function: entry_001b4ae8
// Address: 0x1b4ae8 - 0x1b4b0c
void entry_001b4ae8_0x1b4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4ae8_0x1b4ae8");
#endif

    ctx->pc = 0x1b4ae8u;

    // 0x1b4ae8: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1b4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1b4aec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1b4aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1b4af0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4AF0u;
    {
        const bool branch_taken_0x1b4af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4af0) {
            ctx->pc = 0x1B4B0Cu;
            return;
        }
    }
    ctx->pc = 0x1B4AF8u;
    // 0x1b4af8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4afc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b4afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b4b00: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1b4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1b4b04: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b4b08: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1b4b0cu;
}
