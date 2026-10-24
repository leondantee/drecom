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

// Function: entry_001dd3fc
// Address: 0x1dd3fc - 0x1dd458
void entry_001dd3fc_0x1dd3fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd3fc_0x1dd3fc");
#endif

    ctx->pc = 0x1dd3fcu;

    // 0x1dd3fc: 0x92c40000  lbu         $a0, 0x0($s6)
    ctx->pc = 0x1dd3fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1dd400: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1dd400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1dd404: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1dd404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1dd408: 0x10600131  beqz        $v1, . + 4 + (0x131 << 2)
    ctx->pc = 0x1DD408u;
    {
        const bool branch_taken_0x1dd408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd408) {
            ctx->pc = 0x1DD8D0u;
            return;
        }
    }
    ctx->pc = 0x1DD410u;
    // 0x1dd410: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1dd410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1dd414: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1dd414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1dd418: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1dd418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd41c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1dd41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1dd420: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1dd420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dd424: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x1dd424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x1dd428: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dd428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd42c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1dd42cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd430: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1dd430u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd434: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1dd434u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1dd438: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dd438u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dd43c: 0x0  nop
    ctx->pc = 0x1dd43cu;
    // NOP
    // 0x1dd440: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1dd440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1dd444: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1dd444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1dd448: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1dd448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1dd44c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1dd44cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dd450: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1DD450u;
    {
        const bool branch_taken_0x1dd450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd450) {
            ctx->pc = 0x1DD5F0u;
            return;
        }
    }
    ctx->pc = 0x1DD458u;
}
