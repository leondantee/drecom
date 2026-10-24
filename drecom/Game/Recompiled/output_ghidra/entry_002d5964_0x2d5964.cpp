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

// Function: entry_002d5964
// Address: 0x2d5964 - 0x2d59a8
void entry_002d5964_0x2d5964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5964_0x2d5964");
#endif

    ctx->pc = 0x2d5964u;

    // 0x2d5964: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5968: 0x8c831348  lw          $v1, 0x1348($a0)
    ctx->pc = 0x2d5968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
    // 0x2d596c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5970: 0xac831348  sw          $v1, 0x1348($a0)
    ctx->pc = 0x2d5970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4936), GPR_U32(ctx, 3));
    // 0x2d5974: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2d5974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5978: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d5978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d597c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5980: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d5980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d5984: 0x3063007a  andi        $v1, $v1, 0x7A
    ctx->pc = 0x2d5984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)122);
    // 0x2d5988: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5988u;
    {
        const bool branch_taken_0x2d5988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5988) {
            ctx->pc = 0x2D59A8u;
            return;
        }
    }
    ctx->pc = 0x2D5990u;
    // 0x2d5990: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2d5990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d5994: 0x8c831348  lw          $v1, 0x1348($a0)
    ctx->pc = 0x2d5994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
    // 0x2d5998: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2d5998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2d599c: 0xac831348  sw          $v1, 0x1348($a0)
    ctx->pc = 0x2d599cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4936), GPR_U32(ctx, 3));
    // 0x2d59a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D59A0u;
    {
        const bool branch_taken_0x2d59a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d59a0) {
            ctx->pc = 0x2D59B8u;
            return;
        }
    }
    ctx->pc = 0x2D59A8u;
}
