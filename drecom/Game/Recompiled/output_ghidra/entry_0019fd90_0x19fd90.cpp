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

// Function: entry_0019fd90
// Address: 0x19fd90 - 0x19fdc8
void entry_0019fd90_0x19fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fd90_0x19fd90");
#endif

    ctx->pc = 0x19fd90u;

    // 0x19fd90: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x19fd90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x19fd94: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x19fd94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19fd98: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19fd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19fd9c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x19FD9Cu;
    {
        const bool branch_taken_0x19fd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fd9c) {
            ctx->pc = 0x19FE28u;
            return;
        }
    }
    ctx->pc = 0x19FDA4u;
    // 0x19fda4: 0x92030081  lbu         $v1, 0x81($s0)
    ctx->pc = 0x19fda4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 129)));
    // 0x19fda8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19fda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19fdac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19fdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fdb0: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19FDB0u;
    {
        const bool branch_taken_0x19fdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19fdb0) {
            ctx->pc = 0x19FDF4u;
            return;
        }
    }
    ctx->pc = 0x19FDB8u;
    // 0x19fdb8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FDB8u;
    {
        const bool branch_taken_0x19fdb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fdb8) {
            ctx->pc = 0x19FDC8u;
            return;
        }
    }
    ctx->pc = 0x19FDC0u;
    // 0x19fdc0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19FDC0u;
    {
        const bool branch_taken_0x19fdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fdc0) {
            ctx->pc = 0x19FE28u;
            return;
        }
    }
    ctx->pc = 0x19FDC8u;
}
