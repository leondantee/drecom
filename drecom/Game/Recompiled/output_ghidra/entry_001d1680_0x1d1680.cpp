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

// Function: entry_001d1680
// Address: 0x1d1680 - 0x1d16f8
void entry_001d1680_0x1d1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1680_0x1d1680");
#endif

    ctx->pc = 0x1d1680u;

    // 0x1d1680: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d1680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d1684: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1688: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d1688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d168c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1690: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d1694: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1d1694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1d1698: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d1698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d169c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d169cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d16a0: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1d16a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d16a4: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x1d16a4u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x1d16a8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d16a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d16ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d16acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d16b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d16b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d16b4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d16b8: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1d16b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d16bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d16bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d16c0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d16c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d16c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d16c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d16c8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1d16c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d16cc: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d16ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d16d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d16d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d16d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d16d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d16d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d16dc: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d16dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d16e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d16e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d16e4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d16e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d16e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d16e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d16ec: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1d16ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d16f0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1D16F0u;
    {
        const bool branch_taken_0x1d16f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d16f0) {
            ctx->pc = 0x1D1810u;
            return;
        }
    }
    ctx->pc = 0x1D16F8u;
}
