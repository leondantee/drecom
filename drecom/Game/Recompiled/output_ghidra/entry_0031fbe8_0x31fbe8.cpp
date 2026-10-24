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

// Function: entry_0031fbe8
// Address: 0x31fbe8 - 0x31fc20
void entry_0031fbe8_0x31fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fbe8_0x31fbe8");
#endif

    ctx->pc = 0x31fbe8u;

    // 0x31fbe8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fbec: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x31fbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x31fbf0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31fbf4: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x31fbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fbf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fbfc: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x31fbfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x31fc00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31fc04: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x31fc04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x31fc08: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fc0c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31fc0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31fc10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fc14: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31fc14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x31fc18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31FC18u;
    {
        const bool branch_taken_0x31fc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fc18) {
            ctx->pc = 0x31FC30u;
            return;
        }
    }
    ctx->pc = 0x31FC20u;
}
