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

// Function: entry_00294a58
// Address: 0x294a58 - 0x294abc
void entry_00294a58_0x294a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294a58_0x294a58");
#endif

    ctx->pc = 0x294a58u;

    // 0x294a58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294a5c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294a60: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294a64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294a64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294a68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294a6c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294a70: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x294a70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x294a74: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294a78: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x294a78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x294a7c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x294a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x294a80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x294a84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294a88: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x294a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x294a8c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x294a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x294a90: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x294a94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x294a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x294a98: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x294a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x294a9c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x294a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x294aa0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x294AA0u;
    {
        const bool branch_taken_0x294aa0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x294aa0) {
            ctx->pc = 0x294ABCu;
            return;
        }
    }
    ctx->pc = 0x294AA8u;
    // 0x294aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294aac: 0x0  nop
    ctx->pc = 0x294aacu;
    // NOP
    // 0x294ab0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x294ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x294ab4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x294AB4u;
    {
        const bool branch_taken_0x294ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294ab4) {
            ctx->pc = 0x294AD8u;
            return;
        }
    }
    ctx->pc = 0x294ABCu;
}
