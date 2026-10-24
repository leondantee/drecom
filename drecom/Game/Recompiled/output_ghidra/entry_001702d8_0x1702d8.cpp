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

// Function: entry_001702d8
// Address: 0x1702d8 - 0x170324
void entry_001702d8_0x1702d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001702d8_0x1702d8");
#endif

    ctx->pc = 0x1702d8u;

label_1702d8:
    // 0x1702d8: 0x97a7017e  lhu         $a3, 0x17E($sp)
    ctx->pc = 0x1702d8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1702dc: 0x30e3ffff  andi        $v1, $a3, 0xFFFF
    ctx->pc = 0x1702dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1702e0: 0xaea3006c  sw          $v1, 0x6C($s5)
    ctx->pc = 0x1702e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 3));
    // 0x1702e4: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x1702e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x1702e8: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x1702e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1702ec: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x1702ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1702f0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1702F0u;
    {
        const bool branch_taken_0x1702f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1702f0) {
            ctx->pc = 0x1702D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1702d8;
        }
    }
    ctx->pc = 0x1702F8u;
    // 0x1702f8: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1702f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1702fc: 0x72808e28  paddub      $s1, $s4, $zero
    ctx->pc = 0x1702fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x170300: 0x72809628  paddub      $s2, $s4, $zero
    ctx->pc = 0x170300u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x170304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170308: 0x0  nop
    ctx->pc = 0x170308u;
    // NOP
    // 0x17030c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x17030cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x170310: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x170310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x170314: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x170318: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x170318u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17031c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x17031Cu;
    {
        const bool branch_taken_0x17031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17031c) {
            ctx->pc = 0x170518u;
            return;
        }
    }
    ctx->pc = 0x170324u;
}
