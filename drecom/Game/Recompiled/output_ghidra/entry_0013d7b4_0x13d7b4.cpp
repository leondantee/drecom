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

// Function: entry_0013d7b4
// Address: 0x13d7b4 - 0x13d808
void entry_0013d7b4_0x13d7b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d7b4_0x13d7b4");
#endif

    ctx->pc = 0x13d7b4u;

    // 0x13d7b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d7b8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x13d7b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13d7bc: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13d7bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d7c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d7c4: 0x94630014  lhu         $v1, 0x14($v1)
    ctx->pc = 0x13d7c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x13d7c8: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x13d7c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d7cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d7d0: 0x94630012  lhu         $v1, 0x12($v1)
    ctx->pc = 0x13d7d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x13d7d4: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x13d7d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d7d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13d7dc: 0x94630016  lhu         $v1, 0x16($v1)
    ctx->pc = 0x13d7dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x13d7e0: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x13d7e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13d7e4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13d7e8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x13d7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x13d7ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13d7f0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D7F0u;
    {
        const bool branch_taken_0x13d7f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13d7f0) {
            ctx->pc = 0x13D808u;
            return;
        }
    }
    ctx->pc = 0x13D7F8u;
    // 0x13d7f8: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x13d7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x13d7fc: 0x118842  srl         $s1, $s1, 1
    ctx->pc = 0x13d7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x13d800: 0x129042  srl         $s2, $s2, 1
    ctx->pc = 0x13d800u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x13d804: 0x139842  srl         $s3, $s3, 1
    ctx->pc = 0x13d804u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x13d808u;
}
