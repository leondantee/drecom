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

// Function: entry_00195284
// Address: 0x195284 - 0x1952d0
void entry_00195284_0x195284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195284_0x195284");
#endif

    ctx->pc = 0x195284u;

    // 0x195284: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195288: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x195288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x19528c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x195290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x195290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195294: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x195294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x195298: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x195298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x19529c: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x19529cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1952a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1952a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1952a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1952a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1952a8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1952a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1952ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1952acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1952b0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1952b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1952b4: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1952b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1952b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1952b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1952bc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1952bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1952c0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1952c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1952c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1952c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1952c8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1952c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1952cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1952ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1952d0u;
}
