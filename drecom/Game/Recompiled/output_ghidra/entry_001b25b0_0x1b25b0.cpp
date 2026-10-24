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

// Function: entry_001b25b0
// Address: 0x1b25b0 - 0x1b25f8
void entry_001b25b0_0x1b25b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b25b0_0x1b25b0");
#endif

    ctx->pc = 0x1b25b0u;

    // 0x1b25b0: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x1b25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1b25b4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1b25b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b25b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b25bc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1b25bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b25c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1b25c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1b25c4: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x1b25c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x1b25c8: 0x8e421228  lw          $v0, 0x1228($s2)
    ctx->pc = 0x1b25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4648)));
    // 0x1b25cc: 0x2451ffe0  addiu       $s1, $v0, -0x20
    ctx->pc = 0x1b25ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1b25d0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1b25d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b25d4: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b25d8: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1b25d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b25dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b25dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b25e0: 0x0  nop
    ctx->pc = 0x1b25e0u;
    // NOP
    // 0x1b25e4: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1b25e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1b25e8: 0x8e56121c  lw          $s6, 0x121C($s2)
    ctx->pc = 0x1b25e8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4636)));
    // 0x1b25ec: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b25ecu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b25f0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1B25F0u;
    {
        const bool branch_taken_0x1b25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b25f0) {
            ctx->pc = 0x1B27A8u;
            return;
        }
    }
    ctx->pc = 0x1B25F8u;
}
