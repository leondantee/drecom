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

// Function: entry_0036d374
// Address: 0x36d374 - 0x36d3a8
void entry_0036d374_0x36d374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d374_0x36d374");
#endif

    ctx->pc = 0x36d374u;

    // 0x36d374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36d374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d378: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36d378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36d37c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x36d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x36d380: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x36d380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36d384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x36d384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36d388: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36d388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36d38c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x36d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x36d390: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x36d390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36d394: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x36d394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x36d398: 0x3042ffdf  andi        $v0, $v0, 0xFFDF
    ctx->pc = 0x36d398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x36d39c: 0xa6220140  sh          $v0, 0x140($s1)
    ctx->pc = 0x36d39cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x36d3a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36d3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36d3a4: 0x0  nop
    ctx->pc = 0x36d3a4u;
    // NOP
    ctx->pc = 0x36d3a8u;
}
