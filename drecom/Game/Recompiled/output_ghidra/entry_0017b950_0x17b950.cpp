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

// Function: entry_0017b950
// Address: 0x17b950 - 0x17b988
void entry_0017b950_0x17b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b950_0x17b950");
#endif

    ctx->pc = 0x17b950u;

    // 0x17b950: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x17b950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17b954: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17b958: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x17B958u;
    {
        const bool branch_taken_0x17b958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b958) {
            ctx->pc = 0x17BB98u;
            return;
        }
    }
    ctx->pc = 0x17B960u;
    // 0x17b960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b964: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x17B964u;
    {
        const bool branch_taken_0x17b964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b964) {
            ctx->pc = 0x17BA70u;
            return;
        }
    }
    ctx->pc = 0x17B96Cu;
    // 0x17b96c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b970: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B970u;
    {
        const bool branch_taken_0x17b970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b970) {
            ctx->pc = 0x17B998u;
            return;
        }
    }
    ctx->pc = 0x17B978u;
    // 0x17b978: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B978u;
    {
        const bool branch_taken_0x17b978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b978) {
            ctx->pc = 0x17B988u;
            return;
        }
    }
    ctx->pc = 0x17B980u;
    // 0x17b980: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x17B980u;
    {
        const bool branch_taken_0x17b980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b980) {
            ctx->pc = 0x17BCC8u;
            return;
        }
    }
    ctx->pc = 0x17B988u;
}
