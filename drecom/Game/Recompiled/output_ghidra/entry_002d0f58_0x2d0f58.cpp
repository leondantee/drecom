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

// Function: entry_002d0f58
// Address: 0x2d0f58 - 0x2d1000
void entry_002d0f58_0x2d0f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d0f58_0x2d0f58");
#endif

    ctx->pc = 0x2d0f58u;

    // 0x2d0f58: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0f5c: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0f60: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0f64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0f68: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0f6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0f74: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d0f78: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2d0f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0f7c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d0f80: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2d0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2d0f84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0f88: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x2d0f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x2d0f8c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0f90: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0f94: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0f98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0f9c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0fa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0fa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0fa8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d0fac: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x2d0facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0fb0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2d0fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d0fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0fb8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0fbc: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2d0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2d0fc0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2d0fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0fc4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2d0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x2d0fc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2d0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d0fcc: 0x2444134c  addiu       $a0, $v0, 0x134C
    ctx->pc = 0x2d0fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d0fd0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2d0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0fd4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2d0fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2d0fd8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2d0fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d0fdc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0fe4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2d0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2d0fe8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2d0fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2d0fec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d0ff0: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2d0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2d0ff4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d0ff8: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x2d0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
    // 0x2d0ffc: 0x0  nop
    ctx->pc = 0x2d0ffcu;
    // NOP
    ctx->pc = 0x2d1000u;
}
