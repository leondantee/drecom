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

// Function: entry_001d1788
// Address: 0x1d1788 - 0x1d1810
void entry_001d1788_0x1d1788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1788_0x1d1788");
#endif

    ctx->pc = 0x1d1788u;

    // 0x1d1788: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d1788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d178c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1790: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d1790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d1794: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d1794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1798: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d179c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x1d179cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x1d17a0: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1d17a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1d17a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d17a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d17a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d17a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d17ac: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1d17acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d17b0: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x1d17b0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x1d17b4: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d17b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d17b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d17bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d17bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d17c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d17c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d17c4: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1d17c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d17c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d17c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d17cc: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1d17ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1d17d0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d17d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d17d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d17d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d17d8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1d17d8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d17dc: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d17dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d17e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d17e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d17e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d17e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d17e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d17ec: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d17ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d17f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d17f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d17f4: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x1d17f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x1d17f8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d17f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d17fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d17fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1800: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1d1800u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1804: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1d1804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1d1808: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1d1808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1d180c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1d180cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1d1810u;
}
