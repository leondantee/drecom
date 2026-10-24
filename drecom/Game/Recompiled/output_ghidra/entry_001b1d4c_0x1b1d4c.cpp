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

// Function: entry_001b1d4c
// Address: 0x1b1d4c - 0x1b1d98
void entry_001b1d4c_0x1b1d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1d4c_0x1b1d4c");
#endif

    ctx->pc = 0x1b1d4cu;

    // 0x1b1d4c: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x1b1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1b1d50: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1b1d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1b1d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1d58: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1b1d58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1d5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b1d60: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x1b1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
    // 0x1b1d64: 0x8ea21228  lw          $v0, 0x1228($s5)
    ctx->pc = 0x1b1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4648)));
    // 0x1b1d68: 0x2450ffe0  addiu       $s0, $v0, -0x20
    ctx->pc = 0x1b1d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b1d6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b1d70: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x1b1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x1b1d74: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b1d78: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b1d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b1d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1d80: 0x0  nop
    ctx->pc = 0x1b1d80u;
    // NOP
    // 0x1b1d84: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1b1d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1b1d88: 0x8eb6121c  lw          $s6, 0x121C($s5)
    ctx->pc = 0x1b1d88u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4636)));
    // 0x1b1d8c: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b1d8cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b1d90: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1B1D90u;
    {
        const bool branch_taken_0x1b1d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d90) {
            ctx->pc = 0x1B1FB8u;
            return;
        }
    }
    ctx->pc = 0x1B1D98u;
}
