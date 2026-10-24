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

// Function: entry_001ffdc8
// Address: 0x1ffdc8 - 0x1ffe00
void entry_001ffdc8_0x1ffdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffdc8_0x1ffdc8");
#endif

    ctx->pc = 0x1ffdc8u;

    // 0x1ffdc8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffdcc: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1ffdccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1ffdd0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ffdd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ffdd4: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffdd8: 0x90a60346  lbu         $a2, 0x346($a1)
    ctx->pc = 0x1ffdd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x1ffddc: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1ffddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ffde0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1ffde0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ffde4: 0x14200066  bnez        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x1FFDE4u;
    {
        const bool branch_taken_0x1ffde4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffde4) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFDECu;
    // 0x1ffdec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ffdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffdf0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffdf4: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1ffdf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ffdf8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1FFDF8u;
    {
        const bool branch_taken_0x1ffdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffdf8) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFE00u;
}
