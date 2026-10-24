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

// Function: entry_002fb9bc
// Address: 0x2fb9bc - 0x2fb9f8
void entry_002fb9bc_0x2fb9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb9bc_0x2fb9bc");
#endif

    ctx->pc = 0x2fb9bcu;

    // 0x2fb9bc: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb9c0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2fb9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fb9c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fb9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb9c8: 0x14a4023d  bne         $a1, $a0, . + 4 + (0x23D << 2)
    ctx->pc = 0x2FB9C8u;
    {
        const bool branch_taken_0x2fb9c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fb9c8) {
            ctx->pc = 0x2FC2C0u;
            return;
        }
    }
    ctx->pc = 0x2FB9D0u;
    // 0x2fb9d0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb9d4: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x2fb9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb9d8: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x2fb9d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2fb9dc: 0x14200238  bnez        $at, . + 4 + (0x238 << 2)
    ctx->pc = 0x2FB9DCu;
    {
        const bool branch_taken_0x2fb9dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9dc) {
            ctx->pc = 0x2FC2C0u;
            return;
        }
    }
    ctx->pc = 0x2FB9E4u;
    // 0x2fb9e4: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb9e8: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fb9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fb9ec: 0x28a10011  slti        $at, $a1, 0x11
    ctx->pc = 0x2fb9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2fb9f0: 0x10200233  beqz        $at, . + 4 + (0x233 << 2)
    ctx->pc = 0x2FB9F0u;
    {
        const bool branch_taken_0x2fb9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb9f0) {
            ctx->pc = 0x2FC2C0u;
            return;
        }
    }
    ctx->pc = 0x2FB9F8u;
}
