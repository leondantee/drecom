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

// Function: entry_001da7e0
// Address: 0x1da7e0 - 0x1da818
void entry_001da7e0_0x1da7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da7e0_0x1da7e0");
#endif

    ctx->pc = 0x1da7e0u;

    // 0x1da7e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1da7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1da7e4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1da7e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1da7e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da7ec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1da7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1da7f0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DA7F0u;
    {
        const bool branch_taken_0x1da7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da7f0) {
            ctx->pc = 0x1DA828u;
            return;
        }
    }
    ctx->pc = 0x1DA7F8u;
    // 0x1da7f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1da7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1da7fc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1da7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1da800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA800u;
    {
        const bool branch_taken_0x1da800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da800) {
            ctx->pc = 0x1DA818u;
            return;
        }
    }
    ctx->pc = 0x1DA808u;
    // 0x1da808: 0x2402025c  addiu       $v0, $zero, 0x25C
    ctx->pc = 0x1da808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 604));
    // 0x1da80c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da80cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da810: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1DA810u;
    {
        const bool branch_taken_0x1da810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da810) {
            ctx->pc = 0x1DA850u;
            return;
        }
    }
    ctx->pc = 0x1DA818u;
}
