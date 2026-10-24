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

// Function: entry_001ff198
// Address: 0x1ff198 - 0x1ff204
void entry_001ff198_0x1ff198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff198_0x1ff198");
#endif

    switch (ctx->pc) {
        case 0x1ff1f8u: goto label_1ff1f8;
        default: break;
    }

    ctx->pc = 0x1ff198u;

    // 0x1ff198: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff19c: 0x8ca302ac  lw          $v1, 0x2AC($a1)
    ctx->pc = 0x1ff19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 684)));
    // 0x1ff1a0: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FF1A0u;
    {
        const bool branch_taken_0x1ff1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff1a0) {
            ctx->pc = 0x1FF22Cu;
            return;
        }
    }
    ctx->pc = 0x1FF1A8u;
    // 0x1ff1a8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff1ac: 0x8c7702ac  lw          $s7, 0x2AC($v1)
    ctx->pc = 0x1ff1acu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 684)));
    // 0x1ff1b0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff1b4: 0x90a302a9  lbu         $v1, 0x2A9($a1)
    ctx->pc = 0x1ff1b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 681)));
    // 0x1ff1b8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1ff1b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff1bc: 0x92e50345  lbu         $a1, 0x345($s7)
    ctx->pc = 0x1ff1bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 837)));
    // 0x1ff1c0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ff1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ff1c4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1ff1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1ff1c8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x1ff1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
    // 0x1ff1cc: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1ff1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1ff1d0: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FF1D0u;
    {
        const bool branch_taken_0x1ff1d0 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x1ff1d0) {
            ctx->pc = 0x1FF204u;
            return;
        }
    }
    ctx->pc = 0x1FF1D8u;
    // 0x1ff1d8: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x1ff1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1ff1dc: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x1ff1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1ff1e0: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1ff1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1ff1e4: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff1e8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1ff1e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1ff1ec: 0x24650480  addiu       $a1, $v1, 0x480
    ctx->pc = 0x1ff1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1ff1f0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1FF1F0u;
    SET_GPR_U32(ctx, 31, 0x1FF1F8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1FF1F8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FF1F8u) { return; }
    ctx->pc = 0x1FF1F8u;
label_1ff1f8:
    // 0x1ff1f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff1f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff1fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FF1FCu;
    {
        const bool branch_taken_0x1ff1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff1fc) {
            ctx->pc = 0x1FF22Cu;
            return;
        }
    }
    ctx->pc = 0x1FF204u;
}
