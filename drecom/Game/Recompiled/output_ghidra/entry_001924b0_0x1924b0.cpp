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

// Function: entry_001924b0
// Address: 0x1924b0 - 0x1924f0
void entry_001924b0_0x1924b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001924b0_0x1924b0");
#endif

    ctx->pc = 0x1924b0u;

    // 0x1924b0: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1924b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1924b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1924b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1924b8: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x1924b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1924bc: 0x1020fec3  beqz        $at, . + 4 + (-0x13D << 2)
    ctx->pc = 0x1924BCu;
    {
        const bool branch_taken_0x1924bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924bc) {
            ctx->pc = 0x191FCCu;
            return;
        }
    }
    ctx->pc = 0x1924C4u;
    // 0x1924c4: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x1924c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x1924c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1924c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1924cc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1924ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1924d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1924D0u;
    {
        const bool branch_taken_0x1924d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1924d0) {
            ctx->pc = 0x1924F0u;
            return;
        }
    }
    ctx->pc = 0x1924D8u;
    // 0x1924d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1924d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1924dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1924DCu;
    {
        const bool branch_taken_0x1924dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1924dc) {
            ctx->pc = 0x1924F0u;
            return;
        }
    }
    ctx->pc = 0x1924E4u;
    // 0x1924e4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1924e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1924e8: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x1924E8u;
    {
        const bool branch_taken_0x1924e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924e8) {
            ctx->pc = 0x19294Cu;
            return;
        }
    }
    ctx->pc = 0x1924F0u;
}
