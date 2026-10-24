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

// Function: entry_0025a18c
// Address: 0x25a18c - 0x25a218
void entry_0025a18c_0x25a18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a18c_0x25a18c");
#endif

    ctx->pc = 0x25a18cu;

    // 0x25a18c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a190: 0x8c640a14  lw          $a0, 0xA14($v1)
    ctx->pc = 0x25a190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2580)));
    // 0x25a194: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x25a194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a198: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x25a198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a19c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x25a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a1a0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x25a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25a1a4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x25a1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a1a8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a1ac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a1b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a1b4: 0xac650a18  sw          $a1, 0xA18($v1)
    ctx->pc = 0x25a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2584), GPR_U32(ctx, 5));
    // 0x25a1b8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a1bc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a1c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a1c4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a1c8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a1cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a1d0: 0xa4600cb4  sh          $zero, 0xCB4($v1)
    ctx->pc = 0x25a1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3252), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a1d4: 0x3005ffff  andi        $a1, $zero, 0xFFFF
    ctx->pc = 0x25a1d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a1d8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a1dc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a1e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a1e4: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a1e8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a1ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a1f0: 0xa4650cb2  sh          $a1, 0xCB2($v1)
    ctx->pc = 0x25a1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3250), (uint16_t)GPR_U32(ctx, 5));
    // 0x25a1f4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x25a1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x25a1f8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x25a1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x25a1fc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a204: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x25a204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25a208: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25a20c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a210: 0xa4650cb0  sh          $a1, 0xCB0($v1)
    ctx->pc = 0x25a210u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3248), (uint16_t)GPR_U32(ctx, 5));
    // 0x25a214: 0x0  nop
    ctx->pc = 0x25a214u;
    // NOP
    ctx->pc = 0x25a218u;
}
