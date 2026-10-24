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

// Function: entry_001709e0
// Address: 0x1709e0 - 0x170a48
void entry_001709e0_0x1709e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001709e0_0x1709e0");
#endif

    ctx->pc = 0x1709e0u;

    // 0x1709e0: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1709e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1709e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1709e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1709e8: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1709e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1709ec: 0x10600152  beqz        $v1, . + 4 + (0x152 << 2)
    ctx->pc = 0x1709ECu;
    {
        const bool branch_taken_0x1709ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1709ec) {
            ctx->pc = 0x170F38u;
            return;
        }
    }
    ctx->pc = 0x1709F4u;
    // 0x1709f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1709f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1709f8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1709f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1709fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1709fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x170a00: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x170a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x170a04: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x170a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x170a08: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x170a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x170a0c: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x170a0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x170a10: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x170a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170a14: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x170a14u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170a18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x170a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x170a1c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x170a1cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170a20: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x170a20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170a24: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x170a24u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x170a28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170a2c: 0x0  nop
    ctx->pc = 0x170a2cu;
    // NOP
    // 0x170a30: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x170a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x170a34: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x170a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x170a38: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x170a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x170a3c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x170a3cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x170a40: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x170A40u;
    {
        const bool branch_taken_0x170a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170a40) {
            ctx->pc = 0x170C50u;
            return;
        }
    }
    ctx->pc = 0x170A48u;
}
