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

// Function: entry_001d16f8
// Address: 0x1d16f8 - 0x1d1788
void entry_001d16f8_0x1d16f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d16f8_0x1d16f8");
#endif

    ctx->pc = 0x1d16f8u;

    // 0x1d16f8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d16f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d16fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1700: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d1700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d1704: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d1704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1708: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d1708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d170c: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x1d170cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
    // 0x1d1710: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x1d1710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x1d1714: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d1714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1718: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d1718u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d171c: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1d171cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d1720: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x1d1720u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x1d1724: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d1724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d1728: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d172c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d172cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d1730: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d1730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d1734: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1d1734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d1738: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d1738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d173c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d173cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d1740: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d1740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d1744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d1744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1748: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1d1748u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d174c: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1d174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1d1750: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d1750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d1754: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d1754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d1758: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1d1758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d175c: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x1d175cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d1760: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d1760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d1764: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1d1764u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d1768: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1d1768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1d176c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d176cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1770: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1d1770u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d1774: 0x920211ee  lbu         $v0, 0x11EE($s0)
    ctx->pc = 0x1d1774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4590)));
    // 0x1d1778: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1d1778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1d177c: 0xa20211ee  sb          $v0, 0x11EE($s0)
    ctx->pc = 0x1d177cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4590), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d1780: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1D1780u;
    {
        const bool branch_taken_0x1d1780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1780) {
            ctx->pc = 0x1D1810u;
            return;
        }
    }
    ctx->pc = 0x1D1788u;
}
