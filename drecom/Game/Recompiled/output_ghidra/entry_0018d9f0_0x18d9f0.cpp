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

// Function: entry_0018d9f0
// Address: 0x18d9f0 - 0x18da40
void entry_0018d9f0_0x18d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d9f0_0x18d9f0");
#endif

    switch (ctx->pc) {
        case 0x18da14u: goto label_18da14;
        case 0x18da28u: goto label_18da28;
        default: break;
    }

    ctx->pc = 0x18d9f0u;

    // 0x18d9f0: 0x92020343  lbu         $v0, 0x343($s0)
    ctx->pc = 0x18d9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 835)));
    // 0x18d9f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18d9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18d9f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x18d9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x18d9fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18D9FCu;
    {
        const bool branch_taken_0x18d9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d9fc) {
            ctx->pc = 0x18DA40u;
            return;
        }
    }
    ctx->pc = 0x18DA04u;
    // 0x18da04: 0x26040380  addiu       $a0, $s0, 0x380
    ctx->pc = 0x18da04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    // 0x18da08: 0x8e050320  lw          $a1, 0x320($s0)
    ctx->pc = 0x18da08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x18da0c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x18DA0Cu;
    SET_GPR_U32(ctx, 31, 0x18DA14u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x18DA14u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18DA14u) { return; }
    ctx->pc = 0x18DA14u;
label_18da14:
    // 0x18da14: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x18da14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18da18: 0x26050380  addiu       $a1, $s0, 0x380
    ctx->pc = 0x18da18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    // 0x18da1c: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x18da1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18da20: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x18DA20u;
    SET_GPR_U32(ctx, 31, 0x18DA28u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x18DA28u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18DA28u) { return; }
    ctx->pc = 0x18DA28u;
label_18da28:
    // 0x18da28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18da28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18da2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18da2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18da30: 0x0  nop
    ctx->pc = 0x18da30u;
    // NOP
    // 0x18da34: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x18da34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x18da38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18DA38u;
    {
        const bool branch_taken_0x18da38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18da38) {
            ctx->pc = 0x18DA64u;
            return;
        }
    }
    ctx->pc = 0x18DA40u;
}
