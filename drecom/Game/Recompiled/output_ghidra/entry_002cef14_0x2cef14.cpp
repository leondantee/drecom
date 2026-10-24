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

// Function: entry_002cef14
// Address: 0x2cef14 - 0x2cef98
void entry_002cef14_0x2cef14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cef14_0x2cef14");
#endif

    ctx->pc = 0x2cef14u;

    // 0x2cef14: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2cef14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2cef18: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x2cef18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x2cef1c: 0x24a38550  addiu       $v1, $a1, -0x7AB0
    ctx->pc = 0x2cef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935888));
    // 0x2cef20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cef20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cef24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cef24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cef28: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2cef28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2cef2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cef30: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2cef30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2cef34: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cef38: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2cef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2cef3c: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x2cef3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cef40: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cef40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cef44: 0x2486134c  addiu       $a2, $a0, 0x134C
    ctx->pc = 0x2cef44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cef48: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cef48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cef4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cef50: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x2cef50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cef54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cef54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cef58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cef58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cef5c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2cef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2cef60: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2cef60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2cef64: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CEF64u;
    {
        const bool branch_taken_0x2cef64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef64) {
            ctx->pc = 0x2CEF98u;
            return;
        }
    }
    ctx->pc = 0x2CEF6Cu;
    // 0x2cef6c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x2cef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2cef70: 0x24a3ffe0  addiu       $v1, $a1, -0x20
    ctx->pc = 0x2cef70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x2cef74: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x2cef74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x2cef78: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x2cef78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2cef7c: 0x2464ffe8  addiu       $a0, $v1, -0x18
    ctx->pc = 0x2cef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x2cef80: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x2cef80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
    // 0x2cef84: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2cef84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2cef88: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x2cef88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x2cef8c: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2cef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x2cef90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CEF90u;
    {
        const bool branch_taken_0x2cef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef90) {
            ctx->pc = 0x2CEFC0u;
            return;
        }
    }
    ctx->pc = 0x2CEF98u;
}
