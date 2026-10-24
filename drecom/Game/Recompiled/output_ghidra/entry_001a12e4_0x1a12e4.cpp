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

// Function: entry_001a12e4
// Address: 0x1a12e4 - 0x1a1340
void entry_001a12e4_0x1a12e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a12e4_0x1a12e4");
#endif

    ctx->pc = 0x1a12e4u;

    // 0x1a12e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a12e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a12e8: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a12ec: 0x601827  not         $v1, $v1
    ctx->pc = 0x1a12ecu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1a12f0: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a12f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a12f4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a12f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a12f8: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x1a12f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1a12fc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1a12fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1a1300: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x1a1300u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1304: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1308: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a130c: 0xa0600016  sb          $zero, 0x16($v1)
    ctx->pc = 0x1a130cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1310: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1314: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a1314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1318: 0x601827  not         $v1, $v1
    ctx->pc = 0x1a1318u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1a131c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a131cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1320: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a1320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1324: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x1a1324u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a1328: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1a1328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1a132c: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x1a132cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1330: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1334: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1338: 0xa0600026  sb          $zero, 0x26($v1)
    ctx->pc = 0x1a1338u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a133c: 0x0  nop
    ctx->pc = 0x1a133cu;
    // NOP
    ctx->pc = 0x1a1340u;
}
