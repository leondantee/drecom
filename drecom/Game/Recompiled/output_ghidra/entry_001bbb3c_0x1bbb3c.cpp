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

// Function: entry_001bbb3c
// Address: 0x1bbb3c - 0x1bbb94
void entry_001bbb3c_0x1bbb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bbb3c_0x1bbb3c");
#endif

    ctx->pc = 0x1bbb3cu;

    // 0x1bbb3c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bbb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbb40: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bbb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bbb44: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bbb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bbb48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bbb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bbb4c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BBB4Cu;
    {
        const bool branch_taken_0x1bbb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb4c) {
            ctx->pc = 0x1BBBA0u;
            return;
        }
    }
    ctx->pc = 0x1BBB54u;
    // 0x1bbb54: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1bbb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bbb58: 0x908313a6  lbu         $v1, 0x13A6($a0)
    ctx->pc = 0x1bbb58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5030)));
    // 0x1bbb5c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1bbb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bbb60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbb64: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BBB64u;
    {
        const bool branch_taken_0x1bbb64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bbb64) {
            ctx->pc = 0x1BBB94u;
            return;
        }
    }
    ctx->pc = 0x1BBB6Cu;
    // 0x1bbb6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bbb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbb70: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBB70u;
    {
        const bool branch_taken_0x1bbb70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bbb70) {
            ctx->pc = 0x1BBB94u;
            return;
        }
    }
    ctx->pc = 0x1BBB78u;
    // 0x1bbb78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bbb7c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBB7Cu;
    {
        const bool branch_taken_0x1bbb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bbb7c) {
            ctx->pc = 0x1BBBA0u;
            return;
        }
    }
    ctx->pc = 0x1BBB84u;
    // 0x1bbb84: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBB84u;
    {
        const bool branch_taken_0x1bbb84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb84) {
            ctx->pc = 0x1BBBA0u;
            return;
        }
    }
    ctx->pc = 0x1BBB8Cu;
    // 0x1bbb8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBB8Cu;
    {
        const bool branch_taken_0x1bbb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb8c) {
            ctx->pc = 0x1BBBA0u;
            return;
        }
    }
    ctx->pc = 0x1BBB94u;
}
