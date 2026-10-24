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

// Function: entry_002fce64
// Address: 0x2fce64 - 0x2fce8c
void entry_002fce64_0x2fce64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fce64_0x2fce64");
#endif

    ctx->pc = 0x2fce64u;

    // 0x2fce64: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fce64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce68: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2fce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fce6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2fce6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fce70: 0x14870010  bne         $a0, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FCE70u;
    {
        const bool branch_taken_0x2fce70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x2fce70) {
            ctx->pc = 0x2FCEB4u;
            return;
        }
    }
    ctx->pc = 0x2FCE78u;
    // 0x2fce78: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fce78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fce7c: 0x8cc600d4  lw          $a2, 0xD4($a2)
    ctx->pc = 0x2fce7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fce80: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x2fce80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2fce84: 0x14c4000b  bne         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCE84u;
    {
        const bool branch_taken_0x2fce84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fce84) {
            ctx->pc = 0x2FCEB4u;
            return;
        }
    }
    ctx->pc = 0x2FCE8Cu;
}
