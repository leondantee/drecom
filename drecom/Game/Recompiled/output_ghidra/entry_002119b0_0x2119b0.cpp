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

// Function: entry_002119b0
// Address: 0x2119b0 - 0x2119f4
void entry_002119b0_0x2119b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002119b0_0x2119b0");
#endif

    ctx->pc = 0x2119b0u;

    // 0x2119b0: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2119b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2119b4: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x2119b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x2119b8: 0x2483e650  addiu       $v1, $a0, -0x19B0
    ctx->pc = 0x2119b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960720));
    // 0x2119bc: 0x65f021  addu        $fp, $v1, $a1
    ctx->pc = 0x2119bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2119c0: 0x8fd01390  lw          $s0, 0x1390($fp)
    ctx->pc = 0x2119c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 5008)));
    // 0x2119c4: 0x960710a4  lhu         $a3, 0x10A4($s0)
    ctx->pc = 0x2119c4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4260)));
    // 0x2119c8: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x2119c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2119cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2119ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2119d0: 0x10a40025  beq         $a1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2119D0u;
    {
        const bool branch_taken_0x2119d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2119d0) {
            ctx->pc = 0x211A68u;
            return;
        }
    }
    ctx->pc = 0x2119D8u;
    // 0x2119d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2119d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2119dc: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2119DCu;
    {
        const bool branch_taken_0x2119dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2119dc) {
            ctx->pc = 0x211A2Cu;
            return;
        }
    }
    ctx->pc = 0x2119E4u;
    // 0x2119e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2119E4u;
    {
        const bool branch_taken_0x2119e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119e4) {
            ctx->pc = 0x2119F4u;
            return;
        }
    }
    ctx->pc = 0x2119ECu;
    // 0x2119ec: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2119ECu;
    {
        const bool branch_taken_0x2119ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2119ec) {
            ctx->pc = 0x211AA0u;
            return;
        }
    }
    ctx->pc = 0x2119F4u;
}
