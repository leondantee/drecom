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

// Function: entry_001dcd74
// Address: 0x1dcd74 - 0x1dcdc0
void entry_001dcd74_0x1dcd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dcd74_0x1dcd74");
#endif

    ctx->pc = 0x1dcd74u;

label_1dcd74:
    // 0x1dcd74: 0x97a4017e  lhu         $a0, 0x17E($sp)
    ctx->pc = 0x1dcd74u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1dcd78: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1dcd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1dcd7c: 0xaec5006c  sw          $a1, 0x6C($s6)
    ctx->pc = 0x1dcd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 5));
    // 0x1dcd80: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x1dcd80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x1dcd84: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1dcd84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1dcd88: 0x2fe102b  sltu        $v0, $s7, $fp
    ctx->pc = 0x1dcd88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1dcd8c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DCD8Cu;
    {
        const bool branch_taken_0x1dcd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcd8c) {
            ctx->pc = 0x1DCD74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcd74;
        }
    }
    ctx->pc = 0x1DCD94u;
    // 0x1dcd94: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1dcd94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcd98: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1dcd98u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dcd9c: 0x72809628  paddub      $s2, $s4, $zero
    ctx->pc = 0x1dcd9cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1dcda0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dcda0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcda4: 0x0  nop
    ctx->pc = 0x1dcda4u;
    // NOP
    // 0x1dcda8: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dcda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1dcdac: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dcdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dcdb0: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dcdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dcdb4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1dcdb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dcdb8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1DCDB8u;
    {
        const bool branch_taken_0x1dcdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcdb8) {
            ctx->pc = 0x1DCF58u;
            return;
        }
    }
    ctx->pc = 0x1DCDC0u;
}
