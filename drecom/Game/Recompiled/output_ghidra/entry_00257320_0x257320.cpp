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

// Function: entry_00257320
// Address: 0x257320 - 0x257350
void entry_00257320_0x257320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257320_0x257320");
#endif

    ctx->pc = 0x257320u;

    // 0x257320: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x257320u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x257324: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257328: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257328u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25732c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x25732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257330: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x257330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x257334: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x257334u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x257338: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x257338u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x25733c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25733cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257344: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257348: 0x8c720018  lw          $s2, 0x18($v1)
    ctx->pc = 0x257348u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x25734c: 0x0  nop
    ctx->pc = 0x25734cu;
    // NOP
    ctx->pc = 0x257350u;
}
