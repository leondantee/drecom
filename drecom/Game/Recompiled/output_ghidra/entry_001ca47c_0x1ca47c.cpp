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

// Function: entry_001ca47c
// Address: 0x1ca47c - 0x1ca4ac
void entry_001ca47c_0x1ca47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca47c_0x1ca47c");
#endif

    ctx->pc = 0x1ca47cu;

    // 0x1ca47c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca480: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1ca480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ca484: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ca484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca488: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1ca488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1ca48c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA48Cu;
    {
        const bool branch_taken_0x1ca48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca48c) {
            ctx->pc = 0x1CA4ACu;
            return;
        }
    }
    ctx->pc = 0x1CA494u;
    // 0x1ca494: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1ca494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1ca498: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1ca498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1ca49c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA49Cu;
    {
        const bool branch_taken_0x1ca49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca49c) {
            ctx->pc = 0x1CA4ACu;
            return;
        }
    }
    ctx->pc = 0x1CA4A4u;
    // 0x1ca4a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca4a8: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1ca4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    ctx->pc = 0x1ca4acu;
}
