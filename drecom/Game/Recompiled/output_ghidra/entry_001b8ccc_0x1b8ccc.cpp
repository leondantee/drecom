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

// Function: entry_001b8ccc
// Address: 0x1b8ccc - 0x1b8d3c
void entry_001b8ccc_0x1b8ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8ccc_0x1b8ccc");
#endif

    ctx->pc = 0x1b8cccu;

    // 0x1b8ccc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8cd0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1b8cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b8cd4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1b8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1b8cd8: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x1b8cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b8cdc: 0x10a002ab  beqz        $a1, . + 4 + (0x2AB << 2)
    ctx->pc = 0x1B8CDCu;
    {
        const bool branch_taken_0x1b8cdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8cdc) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8CE4u;
    // 0x1b8ce4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b8ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8ce8: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1b8ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b8cec: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1b8cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1b8cf0: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x1b8cf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b8cf4: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x1b8cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1b8cf8: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1b8cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1b8cfc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8d00: 0x906413a6  lbu         $a0, 0x13A6($v1)
    ctx->pc = 0x1b8d00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1b8d04: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1b8d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b8d08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8d0c: 0x10a4000b  beq         $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B8D0Cu;
    {
        const bool branch_taken_0x1b8d0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b8d0c) {
            ctx->pc = 0x1B8D3Cu;
            return;
        }
    }
    ctx->pc = 0x1B8D14u;
    // 0x1b8d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b8d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8d18: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B8D18u;
    {
        const bool branch_taken_0x1b8d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b8d18) {
            ctx->pc = 0x1B8D3Cu;
            return;
        }
    }
    ctx->pc = 0x1B8D20u;
    // 0x1b8d20: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8d24: 0x10a40299  beq         $a1, $a0, . + 4 + (0x299 << 2)
    ctx->pc = 0x1B8D24u;
    {
        const bool branch_taken_0x1b8d24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1b8d24) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8D2Cu;
    // 0x1b8d2c: 0x10a00297  beqz        $a1, . + 4 + (0x297 << 2)
    ctx->pc = 0x1B8D2Cu;
    {
        const bool branch_taken_0x1b8d2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d2c) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8D34u;
    // 0x1b8d34: 0x10000295  b           . + 4 + (0x295 << 2)
    ctx->pc = 0x1B8D34u;
    {
        const bool branch_taken_0x1b8d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8d34) {
            ctx->pc = 0x1B978Cu;
            return;
        }
    }
    ctx->pc = 0x1B8D3Cu;
}
