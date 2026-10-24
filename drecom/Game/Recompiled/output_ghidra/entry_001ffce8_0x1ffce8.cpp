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

// Function: entry_001ffce8
// Address: 0x1ffce8 - 0x1ffd1c
void entry_001ffce8_0x1ffce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffce8_0x1ffce8");
#endif

    ctx->pc = 0x1ffce8u;

    // 0x1ffce8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffcec: 0x90770abc  lbu         $s7, 0xABC($v1)
    ctx->pc = 0x1ffcecu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x1ffcf0: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x1ffcf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x1ffcf4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ffcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffcf8: 0x10a3006f  beq         $a1, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1FFCF8u;
    {
        const bool branch_taken_0x1ffcf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ffcf8) {
            ctx->pc = 0x1FFEB8u;
            return;
        }
    }
    ctx->pc = 0x1FFD00u;
    // 0x1ffd00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ffd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd04: 0x10a6003e  beq         $a1, $a2, . + 4 + (0x3E << 2)
    ctx->pc = 0x1FFD04u;
    {
        const bool branch_taken_0x1ffd04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1ffd04) {
            ctx->pc = 0x1FFE00u;
            return;
        }
    }
    ctx->pc = 0x1FFD0Cu;
    // 0x1ffd0c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFD0Cu;
    {
        const bool branch_taken_0x1ffd0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd0c) {
            ctx->pc = 0x1FFD1Cu;
            return;
        }
    }
    ctx->pc = 0x1FFD14u;
    // 0x1ffd14: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1FFD14u;
    {
        const bool branch_taken_0x1ffd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffd14) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFD1Cu;
}
