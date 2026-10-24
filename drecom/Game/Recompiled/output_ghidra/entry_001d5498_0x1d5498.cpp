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

// Function: entry_001d5498
// Address: 0x1d5498 - 0x1d5530
void entry_001d5498_0x1d5498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5498_0x1d5498");
#endif

    ctx->pc = 0x1d5498u;

    // 0x1d5498: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d5498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d549c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d549cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d54a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d54a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d54a4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d54a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d54ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d54acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d54b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d54b4: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x1d54b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
    // 0x1d54b8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d54bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d54c0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1d54c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1d54c4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x1d54c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1d54c8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d54cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d54d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d54d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d54d8: 0xac430094  sw          $v1, 0x94($v0)
    ctx->pc = 0x1d54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 3));
    // 0x1d54dc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d54e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d54e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d54e4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d54e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d54e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d54ec: 0x21c02  srl         $v1, $v0, 16
    ctx->pc = 0x1d54ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d54f0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d54f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d54f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d54f8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d54fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5500: 0xac430098  sw          $v1, 0x98($v0)
    ctx->pc = 0x1d5500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 3));
    // 0x1d5504: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d5504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d5508: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d5508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d550c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1d550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1d5510: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5514: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x1d5514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1d5518: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1d5518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1d551c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d5520: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d5520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d5524: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d5524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d5528: 0xac43009c  sw          $v1, 0x9C($v0)
    ctx->pc = 0x1d5528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 3));
    // 0x1d552c: 0x0  nop
    ctx->pc = 0x1d552cu;
    // NOP
    ctx->pc = 0x1d5530u;
}
