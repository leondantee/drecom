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

// Function: entry_00274840
// Address: 0x274840 - 0x2748a4
void entry_00274840_0x274840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274840_0x274840");
#endif

    ctx->pc = 0x274840u;

    // 0x274840: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274844: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274848: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x274848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27484c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27484cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274854: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x274854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274858: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x274858u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27485c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27485cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274860: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x274860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274864: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x274864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x274868: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x274868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27486c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274870: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x274870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x274874: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x274874u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x274878: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x274878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27487c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274880: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x274880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x274884: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x274884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274888: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274888u;
    {
        const bool branch_taken_0x274888 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x274888) {
            ctx->pc = 0x2748A4u;
            return;
        }
    }
    ctx->pc = 0x274890u;
    // 0x274890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274894: 0x0  nop
    ctx->pc = 0x274894u;
    // NOP
    // 0x274898: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x274898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27489c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27489Cu;
    {
        const bool branch_taken_0x27489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27489c) {
            ctx->pc = 0x2748C0u;
            return;
        }
    }
    ctx->pc = 0x2748A4u;
}
