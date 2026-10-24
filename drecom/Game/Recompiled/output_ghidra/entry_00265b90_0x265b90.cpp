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

// Function: entry_00265b90
// Address: 0x265b90 - 0x265bcc
void entry_00265b90_0x265b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265b90_0x265b90");
#endif

    ctx->pc = 0x265b90u;

    // 0x265b90: 0x92c30002  lbu         $v1, 0x2($s6)
    ctx->pc = 0x265b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x265b94: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x265b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x265b98: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x265b98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x265b9c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x265B9Cu;
    {
        const bool branch_taken_0x265b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x265b9c) {
            ctx->pc = 0x265B60u;
            return;
        }
    }
    ctx->pc = 0x265BA4u;
    // 0x265ba4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ba8: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x265ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x265bac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265bb0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x265bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x265bb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265bb8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x265bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x265bbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265bc0: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x265bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x265bc4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x265BC4u;
    {
        const bool branch_taken_0x265bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265bc4) {
            ctx->pc = 0x265D98u;
            return;
        }
    }
    ctx->pc = 0x265BCCu;
}
