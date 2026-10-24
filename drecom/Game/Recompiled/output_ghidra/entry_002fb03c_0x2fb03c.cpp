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

// Function: entry_002fb03c
// Address: 0x2fb03c - 0x2fb064
void entry_002fb03c_0x2fb03c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fb03c_0x2fb03c");
#endif

    ctx->pc = 0x2fb03cu;

    // 0x2fb03c: 0x8fb70178  lw          $s7, 0x178($sp)
    ctx->pc = 0x2fb03cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb040: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x2fb040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2fb044: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fb044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb048: 0x1483023f  bne         $a0, $v1, . + 4 + (0x23F << 2)
    ctx->pc = 0x2FB048u;
    {
        const bool branch_taken_0x2fb048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb048) {
            ctx->pc = 0x2FB948u;
            return;
        }
    }
    ctx->pc = 0x2FB050u;
    // 0x2fb050: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2fb050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2fb054: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x2fb054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2fb058: 0x24170007  addiu       $s7, $zero, 0x7
    ctx->pc = 0x2fb058u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2fb05c: 0x1477023a  bne         $v1, $s7, . + 4 + (0x23A << 2)
    ctx->pc = 0x2FB05Cu;
    {
        const bool branch_taken_0x2fb05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x2fb05c) {
            ctx->pc = 0x2FB948u;
            return;
        }
    }
    ctx->pc = 0x2FB064u;
}
