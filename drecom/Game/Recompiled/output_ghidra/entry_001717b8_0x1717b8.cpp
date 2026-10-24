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

// Function: entry_001717b8
// Address: 0x1717b8 - 0x171828
void entry_001717b8_0x1717b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001717b8_0x1717b8");
#endif

    ctx->pc = 0x1717b8u;

    // 0x1717b8: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x1717b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1717bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1717bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1717c0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1717c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1717c4: 0x106001aa  beqz        $v1, . + 4 + (0x1AA << 2)
    ctx->pc = 0x1717C4u;
    {
        const bool branch_taken_0x1717c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1717c4) {
            ctx->pc = 0x171E70u;
            return;
        }
    }
    ctx->pc = 0x1717CCu;
    // 0x1717cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1717ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1717d0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1717d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1717d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1717d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1717d8: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x1717d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1717dc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1717dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1717e0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1717e0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1717e4: 0x96c40002  lhu         $a0, 0x2($s6)
    ctx->pc = 0x1717e4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1717e8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1717e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1717ec: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1717ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1717f0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1717f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1717f4: 0x3077ffff  andi        $s7, $v1, 0xFFFF
    ctx->pc = 0x1717f4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1717f8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1717f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1717fc: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x1717fcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x171800: 0x72008e28  paddub      $s1, $s0, $zero
    ctx->pc = 0x171800u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x171804: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x171804u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x171808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17180c: 0x0  nop
    ctx->pc = 0x17180cu;
    // NOP
    // 0x171810: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x171810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x171814: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x171814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x171818: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x171818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x17181c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17181cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x171820: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x171820u;
    {
        const bool branch_taken_0x171820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171820) {
            ctx->pc = 0x171A20u;
            return;
        }
    }
    ctx->pc = 0x171828u;
}
