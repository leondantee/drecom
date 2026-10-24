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

// Function: entry_0026f080
// Address: 0x26f080 - 0x26f0c8
void entry_0026f080_0x26f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026f080_0x26f080");
#endif

    ctx->pc = 0x26f080u;

    // 0x26f080: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f084: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26f084u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26f088: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x26F088u;
    {
        const bool branch_taken_0x26f088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f088) {
            ctx->pc = 0x26F2B8u;
            return;
        }
    }
    ctx->pc = 0x26F090u;
    // 0x26f090: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f094: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x26f094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x26f098: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26f098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26f09c: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x26f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    // 0x26f0a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f0a4: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x26f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x26f0a8: 0x14600083  bnez        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x26F0A8u;
    {
        const bool branch_taken_0x26f0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f0a8) {
            ctx->pc = 0x26F2B8u;
            return;
        }
    }
    ctx->pc = 0x26F0B0u;
    // 0x26f0b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26f0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26f0b4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x26f0b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x26f0b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x26f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x26f0bc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x26f0bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f0c0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x26F0C0u;
    {
        const bool branch_taken_0x26f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f0c0) {
            ctx->pc = 0x26F2B8u;
            return;
        }
    }
    ctx->pc = 0x26F0C8u;
}
