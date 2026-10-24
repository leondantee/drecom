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

// Function: entry_001b2c44
// Address: 0x1b2c44 - 0x1b2c88
void entry_001b2c44_0x1b2c44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2c44_0x1b2c44");
#endif

    ctx->pc = 0x1b2c44u;

    // 0x1b2c44: 0x92440012  lbu         $a0, 0x12($s2)
    ctx->pc = 0x1b2c44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1b2c48: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1b2c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b2c4c: 0x30a60080  andi        $a2, $a1, 0x80
    ctx->pc = 0x1b2c4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1b2c50: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1B2C50u;
    {
        const bool branch_taken_0x1b2c50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c50) {
            ctx->pc = 0x1B2C88u;
            return;
        }
    }
    ctx->pc = 0x1B2C58u;
    // 0x1b2c58: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2c5c: 0x90440014  lbu         $a0, 0x14($v0)
    ctx->pc = 0x1b2c5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b2c60: 0xa24411ef  sb          $a0, 0x11EF($s2)
    ctx->pc = 0x1b2c60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4591), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b2c64: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2c68: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b2c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b2c6c: 0xa64411f2  sh          $a0, 0x11F2($s2)
    ctx->pc = 0x1b2c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4594), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b2c70: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x1b2c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2c74: 0x90a20012  lbu         $v0, 0x12($a1)
    ctx->pc = 0x1b2c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x1b2c78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b2c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b2c7c: 0xa64211f6  sh          $v0, 0x11F6($s2)
    ctx->pc = 0x1b2c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4598), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2c80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B2C80u;
    {
        const bool branch_taken_0x1b2c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c80) {
            ctx->pc = 0x1B2CE0u;
            return;
        }
    }
    ctx->pc = 0x1B2C88u;
}
