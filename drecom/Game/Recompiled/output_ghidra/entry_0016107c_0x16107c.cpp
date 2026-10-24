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

// Function: entry_0016107c
// Address: 0x16107c - 0x1610c8
void entry_0016107c_0x16107c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016107c_0x16107c");
#endif

    ctx->pc = 0x16107cu;

    // 0x16107c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x16107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x161080: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x161080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x161084: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x161084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x161088: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x161088u;
    {
        const bool branch_taken_0x161088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161088) {
            ctx->pc = 0x1610C8u;
            return;
        }
    }
    ctx->pc = 0x161090u;
    // 0x161090: 0x920213f8  lbu         $v0, 0x13F8($s0)
    ctx->pc = 0x161090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5112)));
    // 0x161094: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x161094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x161098: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x161098u;
    {
        const bool branch_taken_0x161098 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x161098) {
            ctx->pc = 0x1610C8u;
            return;
        }
    }
    ctx->pc = 0x1610A0u;
    // 0x1610a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1610a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1610a4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1610a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1610a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1610a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1610ac: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1610acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1610b0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1610b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1610b4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1610b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1610b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1610b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1610bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1610bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1610c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1610C0u;
    {
        const bool branch_taken_0x1610c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1610c0) {
            ctx->pc = 0x1610CCu;
            return;
        }
    }
    ctx->pc = 0x1610C8u;
}
