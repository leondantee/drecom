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

// Function: entry_001711d4
// Address: 0x1711d4 - 0x171230
void entry_001711d4_0x1711d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001711d4_0x1711d4");
#endif

    ctx->pc = 0x1711d4u;

label_1711d4:
    // 0x1711d4: 0x97a3017e  lhu         $v1, 0x17E($sp)
    ctx->pc = 0x1711d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x1711d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1711d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1711dc: 0xaec3006c  sw          $v1, 0x6C($s6)
    ctx->pc = 0x1711dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 3));
    // 0x1711e0: 0x26c20090  addiu       $v0, $s6, 0x90
    ctx->pc = 0x1711e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x1711e4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1711e4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1711e8: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x1711e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x1711ec: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x1711ecu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1711f0: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x1711f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x1711f4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1711f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1711f8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1711F8u;
    {
        const bool branch_taken_0x1711f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1711f8) {
            ctx->pc = 0x1711D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1711d4;
        }
    }
    ctx->pc = 0x171200u;
    // 0x171200: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x171200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x171204: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x171204u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x171208: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x171208u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x17120c: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x17120cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x171210: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171214: 0x0  nop
    ctx->pc = 0x171214u;
    // NOP
    // 0x171218: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x171218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x17121c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x17121cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x171220: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x171220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x171224: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x171224u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x171228: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x171228u;
    {
        const bool branch_taken_0x171228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171228) {
            ctx->pc = 0x171428u;
            return;
        }
    }
    ctx->pc = 0x171230u;
}
