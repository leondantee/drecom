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

// Function: entry_001c216c
// Address: 0x1c216c - 0x1c21dc
void entry_001c216c_0x1c216c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c216c_0x1c216c");
#endif

    ctx->pc = 0x1c216cu;

    // 0x1c216c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2170: 0x906309e6  lbu         $v1, 0x9E6($v1)
    ctx->pc = 0x1c2170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2534)));
    // 0x1c2174: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C2174u;
    {
        const bool branch_taken_0x1c2174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2174) {
            ctx->pc = 0x1C21DCu;
            return;
        }
    }
    ctx->pc = 0x1C217Cu;
    // 0x1c217c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2180: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1c2180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1c2184: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C2184u;
    {
        const bool branch_taken_0x1c2184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2184) {
            ctx->pc = 0x1C21DCu;
            return;
        }
    }
    ctx->pc = 0x1C218Cu;
    // 0x1c218c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c2190: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c2190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c2194: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1c2194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2198: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c2198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c219c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C219Cu;
    {
        const bool branch_taken_0x1c219c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c219c) {
            ctx->pc = 0x1C21DCu;
            return;
        }
    }
    ctx->pc = 0x1C21A4u;
    // 0x1c21a4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1c21a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c21a8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c21ac: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1c21acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c21b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21b4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c21b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c21b8: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c21b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c21bc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1c21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c21c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c21c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c21c4: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1c21c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1c21c8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c21c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c21cc: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1c21ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x1c21d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c21d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c21d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c21d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c21d8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x1c21dcu;
}
