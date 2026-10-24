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

// Function: entry_001c6f60
// Address: 0x1c6f60 - 0x1c6fa4
void entry_001c6f60_0x1c6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6f60_0x1c6f60");
#endif

    ctx->pc = 0x1c6f60u;

    // 0x1c6f60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6f64: 0x94640a00  lhu         $a0, 0xA00($v1)
    ctx->pc = 0x1c6f64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x1c6f68: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x1c6f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1c6f6c: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x1c6f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x1c6f70: 0x146004fc  bnez        $v1, . + 4 + (0x4FC << 2)
    ctx->pc = 0x1C6F70u;
    {
        const bool branch_taken_0x1c6f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f70) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C6F78u;
    // 0x1c6f78: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1c6f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1c6f7c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x1c6f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x1c6f80: 0x106004f8  beqz        $v1, . + 4 + (0x4F8 << 2)
    ctx->pc = 0x1C6F80u;
    {
        const bool branch_taken_0x1c6f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f80) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C6F88u;
    // 0x1c6f88: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6f8c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c6f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c6f90: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1c6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1c6f94: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c6f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c6f98: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c6f9c: 0x100004f1  b           . + 4 + (0x4F1 << 2)
    ctx->pc = 0x1C6F9Cu;
    {
        const bool branch_taken_0x1c6f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6f9c) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C6FA4u;
}
