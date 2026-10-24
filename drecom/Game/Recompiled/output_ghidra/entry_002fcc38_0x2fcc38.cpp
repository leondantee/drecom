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

// Function: entry_002fcc38
// Address: 0x2fcc38 - 0x2fcc84
void entry_002fcc38_0x2fcc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fcc38_0x2fcc38");
#endif

    ctx->pc = 0x2fcc38u;

    // 0x2fcc38: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc3c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2fcc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2fcc40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2fcc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2fcc44: 0x14a30035  bne         $a1, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FCC44u;
    {
        const bool branch_taken_0x2fcc44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fcc44) {
            ctx->pc = 0x2FCD1Cu;
            return;
        }
    }
    ctx->pc = 0x2FCC4Cu;
    // 0x2fcc4c: 0x8fa80178  lw          $t0, 0x178($sp)
    ctx->pc = 0x2fcc4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc50: 0x8d070008  lw          $a3, 0x8($t0)
    ctx->pc = 0x2fcc50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2fcc54: 0x14e0000b  bnez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCC54u;
    {
        const bool branch_taken_0x2fcc54 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcc54) {
            ctx->pc = 0x2FCC84u;
            return;
        }
    }
    ctx->pc = 0x2FCC5Cu;
    // 0x2fcc5c: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2fcc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc60: 0x8c6500d4  lw          $a1, 0xD4($v1)
    ctx->pc = 0x2fcc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x2fcc64: 0x28a1000e  slti        $at, $a1, 0xE
    ctx->pc = 0x2fcc64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2fcc68: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FCC68u;
    {
        const bool branch_taken_0x2fcc68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcc68) {
            ctx->pc = 0x2FCC84u;
            return;
        }
    }
    ctx->pc = 0x2FCC70u;
    // 0x2fcc70: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2fcc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fcc74: 0x8cc400d4  lw          $a0, 0xD4($a2)
    ctx->pc = 0x2fcc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
    // 0x2fcc78: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x2fcc78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2fcc7c: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FCC7Cu;
    {
        const bool branch_taken_0x2fcc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcc7c) {
            ctx->pc = 0x2FCCFCu;
            return;
        }
    }
    ctx->pc = 0x2FCC84u;
}
