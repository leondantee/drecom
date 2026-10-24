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

// Function: entry_002cf880
// Address: 0x2cf880 - 0x2cf8c8
void entry_002cf880_0x2cf880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf880_0x2cf880");
#endif

    ctx->pc = 0x2cf880u;

    // 0x2cf880: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf884: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2cf884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf888: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2cf888u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf88c: 0x8e0301c4  lw          $v1, 0x1C4($s0)
    ctx->pc = 0x2cf88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x2cf890: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cf890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cf894: 0xae0301c4  sw          $v1, 0x1C4($s0)
    ctx->pc = 0x2cf894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 3));
    // 0x2cf898: 0x1c60000b  bgtz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CF898u;
    {
        const bool branch_taken_0x2cf898 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2cf898) {
            ctx->pc = 0x2CF8C8u;
            return;
        }
    }
    ctx->pc = 0x2CF8A0u;
    // 0x2cf8a0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2cf8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2cf8a4: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf8a8: 0x2464134c  addiu       $a0, $v1, 0x134C
    ctx->pc = 0x2cf8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf8ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf8b0: 0xac6501c4  sw          $a1, 0x1C4($v1)
    ctx->pc = 0x2cf8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 452), GPR_U32(ctx, 5));
    // 0x2cf8b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cf8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf8b8: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cf8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf8bc: 0x24a3134c  addiu       $v1, $a1, 0x134C
    ctx->pc = 0x2cf8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4940));
    // 0x2cf8c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cf8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cf8c4: 0xac6401c8  sw          $a0, 0x1C8($v1)
    ctx->pc = 0x2cf8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 456), GPR_U32(ctx, 4));
    ctx->pc = 0x2cf8c8u;
}
