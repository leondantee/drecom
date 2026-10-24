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

// Function: entry_001244b8
// Address: 0x1244b8 - 0x124550
void entry_001244b8_0x1244b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001244b8_0x1244b8");
#endif

    ctx->pc = 0x1244b8u;

    // 0x1244b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1244b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1244bc: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x1244bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1244c0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x1244c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1244c4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1244c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1244c8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1244C8u;
    {
        const bool branch_taken_0x1244c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1244c8) {
            ctx->pc = 0x124550u;
            return;
        }
    }
    ctx->pc = 0x1244D0u;
    // 0x1244d0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1244d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1244d4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1244d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1244d8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1244d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1244dc: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1244dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1244e0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1244e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1244e4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1244e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1244e8: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x1244e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1244ec: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1244ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1244f0: 0x28500010  slti        $s0, $v0, 0x10
    ctx->pc = 0x1244f0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1244f4: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1244F4u;
    {
        const bool branch_taken_0x1244f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1244f4) {
            ctx->pc = 0x124550u;
            return;
        }
    }
    ctx->pc = 0x1244FCu;
    // 0x1244fc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1244fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124500: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x124500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x124504: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x124504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x124508: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x124508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x12450c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x12450Cu;
    {
        const bool branch_taken_0x12450c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12450c) {
            ctx->pc = 0x124550u;
            return;
        }
    }
    ctx->pc = 0x124514u;
    // 0x124514: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124518: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x124518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x12451c: 0xa0800fc0  sb          $zero, 0xFC0($a0)
    ctx->pc = 0x12451cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4032), (uint8_t)GPR_U32(ctx, 0));
    // 0x124520: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x124520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124524: 0x8ca60058  lw          $a2, 0x58($a1)
    ctx->pc = 0x124524u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x124528: 0xa0c00cf0  sb          $zero, 0xCF0($a2)
    ctx->pc = 0x124528u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3312), (uint8_t)GPR_U32(ctx, 0));
    // 0x12452c: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x12452cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124530: 0x8ce80058  lw          $t0, 0x58($a3)
    ctx->pc = 0x124530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x124534: 0xa1000c60  sb          $zero, 0xC60($t0)
    ctx->pc = 0x124534u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3168), (uint8_t)GPR_U32(ctx, 0));
    // 0x124538: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x124538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12453c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x12453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x124540: 0xa0800e10  sb          $zero, 0xE10($a0)
    ctx->pc = 0x124540u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3600), (uint8_t)GPR_U32(ctx, 0));
    // 0x124544: 0x8fb10078  lw          $s1, 0x78($sp)
    ctx->pc = 0x124544u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124548: 0x8e320058  lw          $s2, 0x58($s1)
    ctx->pc = 0x124548u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x12454c: 0xa2400d80  sb          $zero, 0xD80($s2)
    ctx->pc = 0x12454cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3456), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x124550u;
}
