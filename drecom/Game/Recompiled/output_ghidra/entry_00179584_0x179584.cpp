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

// Function: entry_00179584
// Address: 0x179584 - 0x1795c0
void entry_00179584_0x179584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179584_0x179584");
#endif

    ctx->pc = 0x179584u;

    // 0x179584: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x179584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x179588: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x179588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x17958c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x179590: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x179590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x179594: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x179594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x179598: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x179598u;
    {
        const bool branch_taken_0x179598 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x179598) {
            ctx->pc = 0x1795C0u;
            return;
        }
    }
    ctx->pc = 0x1795A0u;
    // 0x1795a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1795a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1795a4: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1795a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1795a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1795a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1795ac: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1795acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1795b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1795b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1795b4: 0x39903  sra         $s3, $v1, 4
    ctx->pc = 0x1795b4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1795b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1795B8u;
    {
        const bool branch_taken_0x1795b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1795b8) {
            ctx->pc = 0x1795C8u;
            return;
        }
    }
    ctx->pc = 0x1795C0u;
}
