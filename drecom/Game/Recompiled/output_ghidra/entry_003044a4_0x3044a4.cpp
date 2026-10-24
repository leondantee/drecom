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

// Function: entry_003044a4
// Address: 0x3044a4 - 0x3044d4
void entry_003044a4_0x3044a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003044a4_0x3044a4");
#endif

    ctx->pc = 0x3044a4u;

    // 0x3044a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3044a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3044a8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3044a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3044ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3044acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3044b0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3044b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3044b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3044B4u;
    {
        const bool branch_taken_0x3044b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3044b4) {
            ctx->pc = 0x3044D4u;
            return;
        }
    }
    ctx->pc = 0x3044BCu;
    // 0x3044bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3044bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3044c0: 0x8c621338  lw          $v0, 0x1338($v1)
    ctx->pc = 0x3044c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x3044c4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x3044c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x3044c8: 0xac621338  sw          $v0, 0x1338($v1)
    ctx->pc = 0x3044c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4920), GPR_U32(ctx, 2));
    // 0x3044cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3044CCu;
    {
        const bool branch_taken_0x3044cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3044cc) {
            ctx->pc = 0x3044E8u;
            return;
        }
    }
    ctx->pc = 0x3044D4u;
}
