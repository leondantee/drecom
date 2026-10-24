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

// Function: entry_002653f0
// Address: 0x2653f0 - 0x26545c
void entry_002653f0_0x2653f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002653f0_0x2653f0");
#endif

    ctx->pc = 0x2653f0u;

    // 0x2653f0: 0x8e04133c  lw          $a0, 0x133C($s0)
    ctx->pc = 0x2653f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x2653f4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2653f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2653f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2653f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2653fc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2653FCu;
    {
        const bool branch_taken_0x2653fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2653fc) {
            ctx->pc = 0x265478u;
            return;
        }
    }
    ctx->pc = 0x265404u;
    // 0x265404: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x265404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x265408: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x265408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26540c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x26540cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x265410: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x265410u;
    {
        const bool branch_taken_0x265410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x265410) {
            ctx->pc = 0x265478u;
            return;
        }
    }
    ctx->pc = 0x265418u;
    // 0x265418: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x265418u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x26541c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x26541cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x265420: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x265420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x265424: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x265424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x265428: 0x832806  srlv        $a1, $v1, $a0
    ctx->pc = 0x265428u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x26542c: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x26542cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x265430: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x265430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x265434: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x265434u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x265438: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x265438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26543c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x26543cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x265440: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x265440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x265444: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x265444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x265448: 0x8c831a84  lw          $v1, 0x1A84($a0)
    ctx->pc = 0x265448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6788)));
    // 0x26544c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x26544cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x265450: 0xac831a84  sw          $v1, 0x1A84($a0)
    ctx->pc = 0x265450u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6788), GPR_U32(ctx, 3));
    // 0x265454: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x265454u;
    {
        const bool branch_taken_0x265454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265454) {
            ctx->pc = 0x265478u;
            return;
        }
    }
    ctx->pc = 0x26545Cu;
}
