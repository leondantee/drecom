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

// Function: entry_001ca4ac
// Address: 0x1ca4ac - 0x1ca4ec
void entry_001ca4ac_0x1ca4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca4ac_0x1ca4ac");
#endif

    ctx->pc = 0x1ca4acu;

    // 0x1ca4ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca4b0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ca4b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ca4b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca4b8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ca4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ca4bc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA4BCu;
    {
        const bool branch_taken_0x1ca4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4bc) {
            ctx->pc = 0x1CA4ECu;
            return;
        }
    }
    ctx->pc = 0x1CA4C4u;
    // 0x1ca4c4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca4c8: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1ca4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ca4cc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA4CCu;
    {
        const bool branch_taken_0x1ca4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4cc) {
            ctx->pc = 0x1CA4ECu;
            return;
        }
    }
    ctx->pc = 0x1CA4D4u;
    // 0x1ca4d4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1ca4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca4d8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1ca4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ca4dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ca4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ca4e0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1ca4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca4e4: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x1CA4E4u;
    {
        const bool branch_taken_0x1ca4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4e4) {
            ctx->pc = 0x1CA8E8u;
            return;
        }
    }
    ctx->pc = 0x1CA4ECu;
}
