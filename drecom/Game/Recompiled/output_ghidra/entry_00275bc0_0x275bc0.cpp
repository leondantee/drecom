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

// Function: entry_00275bc0
// Address: 0x275bc0 - 0x275c1c
void entry_00275bc0_0x275bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275bc0_0x275bc0");
#endif

    ctx->pc = 0x275bc0u;

    // 0x275bc0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x275bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275bc4: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275bc8: 0x90a021  addu        $s4, $a0, $s0
    ctx->pc = 0x275bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275bcc: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x275bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x275bd0: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275bd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275bd8: 0xac660060  sw          $a2, 0x60($v1)
    ctx->pc = 0x275bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 6));
    // 0x275bdc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x275bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275be0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275be4: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x275be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275be8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x275be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275bec: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x275becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275bf0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275bf4: 0xac650064  sw          $a1, 0x64($v1)
    ctx->pc = 0x275bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 5));
    // 0x275bf8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x275bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x275bfc: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x275bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x275c00: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x275c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x275c04: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x275c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x275c08: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x275c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x275c0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275c10: 0xac660068  sw          $a2, 0x68($v1)
    ctx->pc = 0x275c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
    // 0x275c14: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x275C14u;
    {
        const bool branch_taken_0x275c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c14) {
            ctx->pc = 0x275C70u;
            return;
        }
    }
    ctx->pc = 0x275C1Cu;
}
