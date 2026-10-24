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

// Function: entry_001961f8
// Address: 0x1961f8 - 0x196240
void entry_001961f8_0x1961f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001961f8_0x1961f8");
#endif

    ctx->pc = 0x1961f8u;

    // 0x1961f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1961f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1961fc: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1961fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x196200: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x196200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x196204: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x196204u;
    {
        const bool branch_taken_0x196204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196204) {
            ctx->pc = 0x1961A8u;
            return;
        }
    }
    ctx->pc = 0x19620Cu;
    // 0x19620c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x19620cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196210: 0x8fb600c0  lw          $s6, 0xC0($sp)
    ctx->pc = 0x196210u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x196214: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x196214u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196218: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x196218u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19621c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19621cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196220: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x196220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x196224: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196228: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x196228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x19622c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196230: 0x2c32014  dsllv       $a0, $v1, $s6
    ctx->pc = 0x196230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (GPR_U32(ctx, 22) & 0x3F));
    // 0x196234: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x196234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x196238: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x19623c: 0xfc642208  sd          $a0, 0x2208($v1)
    ctx->pc = 0x19623cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8712), GPR_U64(ctx, 4));
    ctx->pc = 0x196240u;
}
