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

// Function: entry_0018b304
// Address: 0x18b304 - 0x18b348
void entry_0018b304_0x18b304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b304_0x18b304");
#endif

    ctx->pc = 0x18b304u;

    // 0x18b304: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b308: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b30c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b310: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x18b310u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x18b314: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b318: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x18b318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x18b31c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b320: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x18b320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b324: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b328: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b32c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b330: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x18b330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18b334: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B334u;
    {
        const bool branch_taken_0x18b334 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b334) {
            ctx->pc = 0x18B348u;
            return;
        }
    }
    ctx->pc = 0x18B33Cu;
    // 0x18b33c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B33Cu;
    {
        const bool branch_taken_0x18b33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b33c) {
            ctx->pc = 0x18B348u;
            return;
        }
    }
    ctx->pc = 0x18B344u;
    // 0x18b344: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x18b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->pc = 0x18b348u;
}
