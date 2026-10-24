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

// Function: entry_0023130c
// Address: 0x23130c - 0x231358
void entry_0023130c_0x23130c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023130c_0x23130c");
#endif

    ctx->pc = 0x23130cu;

    // 0x23130c: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x23130cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231310: 0x94e5002e  lhu         $a1, 0x2E($a3)
    ctx->pc = 0x231310u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 46)));
    // 0x231314: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x231314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x231318: 0x30660008  andi        $a2, $v1, 0x8
    ctx->pc = 0x231318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x23131c: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x23131Cu;
    {
        const bool branch_taken_0x23131c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23131c) {
            ctx->pc = 0x2313C8u;
            return;
        }
    }
    ctx->pc = 0x231324u;
    // 0x231324: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231328: 0x9483002e  lhu         $v1, 0x2E($a0)
    ctx->pc = 0x231328u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x23132c: 0x3065fff7  andi        $a1, $v1, 0xFFF7
    ctx->pc = 0x23132cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x231330: 0xa485002e  sh          $a1, 0x2E($a0)
    ctx->pc = 0x231330u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x231334: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231338: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x231338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x23133c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23133Cu;
    {
        const bool branch_taken_0x23133c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23133c) {
            ctx->pc = 0x231358u;
            return;
        }
    }
    ctx->pc = 0x231344u;
    // 0x231344: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x231344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x231348: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23134c: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x23134cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x231350: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x231350u;
    {
        const bool branch_taken_0x231350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231350) {
            ctx->pc = 0x2313C8u;
            return;
        }
    }
    ctx->pc = 0x231358u;
}
