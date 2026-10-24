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

// Function: entry_001d6f58
// Address: 0x1d6f58 - 0x1d6f98
void entry_001d6f58_0x1d6f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6f58_0x1d6f58");
#endif

    ctx->pc = 0x1d6f58u;

    // 0x1d6f58: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x1d6f58u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d6f5c: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1d6f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d6f60: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1d6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d6f64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6f68: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1d6f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1d6f6c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1d6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1d6f70: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1d6f70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x1d6f74: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d6f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d6f78: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1d6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1d6f7c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d6f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1d6f80: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1d6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d6f84: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1d6f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d6f88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6F88u;
    {
        const bool branch_taken_0x1d6f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f88) {
            ctx->pc = 0x1D6F98u;
            return;
        }
    }
    ctx->pc = 0x1D6F90u;
    // 0x1d6f90: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d6f94: 0x0  nop
    ctx->pc = 0x1d6f94u;
    // NOP
    ctx->pc = 0x1d6f98u;
}
