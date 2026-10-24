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

// Function: entry_00194378
// Address: 0x194378 - 0x1943e8
void entry_00194378_0x194378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194378_0x194378");
#endif

    ctx->pc = 0x194378u;

    // 0x194378: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x194378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x19437c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19437cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x194380: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x194380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x194384: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x194384u;
    {
        const bool branch_taken_0x194384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194384) {
            ctx->pc = 0x194440u;
            return;
        }
    }
    ctx->pc = 0x19438Cu;
    // 0x19438c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x194390: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x194390u;
    {
        const bool branch_taken_0x194390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194390) {
            ctx->pc = 0x1943E8u;
            return;
        }
    }
    ctx->pc = 0x194398u;
    // 0x194398: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19439c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x19439cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1943a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1943a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1943a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1943a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1943a8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1943a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1943ac: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x1943acu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1943b0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1943b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1943b4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1943b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1943b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1943b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1943bc: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1943bcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1943c0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1943c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1943c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1943c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1943c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1943c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1943cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1943ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1943d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1943d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1943d4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1943d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1943d8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1943d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1943dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1943dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1943e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1943E0u;
    {
        const bool branch_taken_0x1943e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1943e0) {
            ctx->pc = 0x194434u;
            return;
        }
    }
    ctx->pc = 0x1943E8u;
}
