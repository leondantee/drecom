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

// Function: entry_001a867c
// Address: 0x1a867c - 0x1a86c0
void entry_001a867c_0x1a867c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a867c_0x1a867c");
#endif

    ctx->pc = 0x1a867cu;

    // 0x1a867c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a867cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a8680: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x1a8680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1a8684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a8688: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1a8688u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a868c: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a868cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a8690: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a8690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a8694: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a8694u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a8698: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a869c: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1a869cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1a86a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1a86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1a86a4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1a86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1a86a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1a86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a86ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a86acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1a86b0: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x1a86b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1a86b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a86b8: 0x24423cb0  addiu       $v0, $v0, 0x3CB0
    ctx->pc = 0x1a86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15536));
    // 0x1a86bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a86bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D3CB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CB0u, _value); } while (0);
    ctx->pc = 0x1a86c0u;
}
