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

// Function: entry_001ce01c
// Address: 0x1ce01c - 0x1ce06c
void entry_001ce01c_0x1ce01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce01c_0x1ce01c");
#endif

    ctx->pc = 0x1ce01cu;

    // 0x1ce01c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce020: 0x906409df  lbu         $a0, 0x9DF($v1)
    ctx->pc = 0x1ce020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1ce024: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ce024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ce028: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x1ce028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ce02c: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CE02Cu;
    {
        const bool branch_taken_0x1ce02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce02c) {
            ctx->pc = 0x1CE0C8u;
            return;
        }
    }
    ctx->pc = 0x1CE034u;
    // 0x1ce034: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce038: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ce038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ce03c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ce03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ce040: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ce040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ce044: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CE044u;
    {
        const bool branch_taken_0x1ce044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce044) {
            ctx->pc = 0x1CE0B4u;
            return;
        }
    }
    ctx->pc = 0x1CE04Cu;
    // 0x1ce04c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce050: 0x8c641b60  lw          $a0, 0x1B60($v1)
    ctx->pc = 0x1ce050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1ce054: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE054u;
    {
        const bool branch_taken_0x1ce054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce054) {
            ctx->pc = 0x1CE06Cu;
            return;
        }
    }
    ctx->pc = 0x1CE05Cu;
    // 0x1ce05c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ce05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ce060: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ce060u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ce064: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x1CE064u;
    {
        const bool branch_taken_0x1ce064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce064) {
            ctx->pc = 0x1CE8B0u;
            return;
        }
    }
    ctx->pc = 0x1CE06Cu;
}
