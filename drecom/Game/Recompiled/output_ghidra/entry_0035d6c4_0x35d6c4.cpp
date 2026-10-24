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

// Function: entry_0035d6c4
// Address: 0x35d6c4 - 0x35d710
void entry_0035d6c4_0x35d6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035d6c4_0x35d6c4");
#endif

    ctx->pc = 0x35d6c4u;

    // 0x35d6c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d6c8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x35d6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x35d6cc: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x35d6ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x35d6d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35d6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35d6d4: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x35d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x35d6d8: 0x30740001  andi        $s4, $v1, 0x1
    ctx->pc = 0x35d6d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x35d6dc: 0x941026  xor         $v0, $a0, $s4
    ctx->pc = 0x35d6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 20));
    // 0x35d6e0: 0x144000dd  bnez        $v0, . + 4 + (0xDD << 2)
    ctx->pc = 0x35D6E0u;
    {
        const bool branch_taken_0x35d6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d6e0) {
            ctx->pc = 0x35DA58u;
            return;
        }
    }
    ctx->pc = 0x35D6E8u;
    // 0x35d6e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d6ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35d6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35d6f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D6F0u;
    {
        const bool branch_taken_0x35d6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d6f0) {
            ctx->pc = 0x35D710u;
            return;
        }
    }
    ctx->pc = 0x35D6F8u;
    // 0x35d6f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d6fc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x35d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x35d700: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x35d700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35d704: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x35d704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x35d708: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x35D708u;
    {
        const bool branch_taken_0x35d708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d708) {
            ctx->pc = 0x35DA58u;
            return;
        }
    }
    ctx->pc = 0x35D710u;
}
