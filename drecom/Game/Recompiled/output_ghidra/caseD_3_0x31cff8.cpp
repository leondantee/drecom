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

// Function: caseD_3
// Address: 0x31cff8 - 0x31d020
void caseD_3_0x31cff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x31cff8");
#endif

    ctx->pc = 0x31cff8u;

    // 0x31cff8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cffc: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x31cffcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x31d000: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x31d000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x31d004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d008: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x31D008u;
    {
        const bool branch_taken_0x31d008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31d008) {
            ctx->pc = 0x31D180u;
            return;
        }
    }
    ctx->pc = 0x31D010u;
    // 0x31d010: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D010u;
    {
        const bool branch_taken_0x31d010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d010) {
            ctx->pc = 0x31D020u;
            return;
        }
    }
    ctx->pc = 0x31D018u;
    // 0x31d018: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x31D018u;
    {
        const bool branch_taken_0x31d018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d018) {
            ctx->pc = 0x31D258u;
            return;
        }
    }
    ctx->pc = 0x31D020u;
}
