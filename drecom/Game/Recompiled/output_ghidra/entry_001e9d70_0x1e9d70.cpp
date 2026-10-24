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

// Function: entry_001e9d70
// Address: 0x1e9d70 - 0x1e9dc4
void entry_001e9d70_0x1e9d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9d70_0x1e9d70");
#endif

    ctx->pc = 0x1e9d70u;

    // 0x1e9d70: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1e9d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1e9d74: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E9D74u;
    {
        const bool branch_taken_0x1e9d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d74) {
            ctx->pc = 0x1E9DF0u;
            return;
        }
    }
    ctx->pc = 0x1E9D7Cu;
    // 0x1e9d7c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e9d80: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1e9d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1e9d84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e9d88: 0x904310a8  lbu         $v1, 0x10A8($v0)
    ctx->pc = 0x1e9d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4264)));
    // 0x1e9d8c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e9d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e9d90: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1e9d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1e9d94: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E9D94u;
    {
        const bool branch_taken_0x1e9d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d94) {
            ctx->pc = 0x1E9DF0u;
            return;
        }
    }
    ctx->pc = 0x1E9D9Cu;
    // 0x1e9d9c: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9D9Cu;
    {
        const bool branch_taken_0x1e9d9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d9c) {
            ctx->pc = 0x1E9DC4u;
            return;
        }
    }
    ctx->pc = 0x1E9DA4u;
    // 0x1e9da4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1e9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e9da8: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x1e9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e9dac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9db0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9db4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1e9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1e9db8: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x1e9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1e9dbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E9DBCu;
    {
        const bool branch_taken_0x1e9dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9dbc) {
            ctx->pc = 0x1E9DE0u;
            return;
        }
    }
    ctx->pc = 0x1E9DC4u;
}
