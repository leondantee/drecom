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

// Function: entry_002e601c
// Address: 0x2e601c - 0x2e6074
void entry_002e601c_0x2e601c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e601c_0x2e601c");
#endif

    ctx->pc = 0x2e601cu;

    // 0x2e601c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e6020: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e6020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e6024: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e6024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e6028: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2e6028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2e602c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E602Cu;
    {
        const bool branch_taken_0x2e602c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e602c) {
            ctx->pc = 0x2E60B8u;
            return;
        }
    }
    ctx->pc = 0x2E6034u;
    // 0x2e6034: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x2e6034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6038: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e6038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e603c: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x2e603cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
    // 0x2e6040: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2e6040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2e6044: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e6044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e6048: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x2e6048u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x2e604c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E604Cu;
    {
        const bool branch_taken_0x2e604c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e604c) {
            ctx->pc = 0x2E6074u;
            return;
        }
    }
    ctx->pc = 0x2E6054u;
    // 0x2e6054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6058: 0xa2020083  sb          $v0, 0x83($s0)
    ctx->pc = 0x2e6058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e605c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6060: 0xa2020084  sb          $v0, 0x84($s0)
    ctx->pc = 0x2e6060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e6064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e6064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6068: 0xa2020085  sb          $v0, 0x85($s0)
    ctx->pc = 0x2e6068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 133), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e606c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E606Cu;
    {
        const bool branch_taken_0x2e606c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e606c) {
            ctx->pc = 0x2E60B0u;
            return;
        }
    }
    ctx->pc = 0x2E6074u;
}
