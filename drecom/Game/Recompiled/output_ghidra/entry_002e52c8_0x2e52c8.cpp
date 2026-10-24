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

// Function: entry_002e52c8
// Address: 0x2e52c8 - 0x2e5368
void entry_002e52c8_0x2e52c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e52c8_0x2e52c8");
#endif

    ctx->pc = 0x2e52c8u;

    // 0x2e52c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e52c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e52cc: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x2e52ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x2e52d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e52d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e52d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e52d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e52d8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e52d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e52dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2e52dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e52e0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e52e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e52e4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2e52e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e52e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e52e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e52ec: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e52f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2e52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e52f4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e52f8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e52f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e52fc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2e52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2e5300: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2e5300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e5304: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5308: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x2e5308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e530c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5310: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5314: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2e5314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5318: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e5318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e531c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e531cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5320: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2e5320u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e5324: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5328: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2e5328u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e532c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5330: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2e5330u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5334: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5338: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2e5338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2e533c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2e533cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5340: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2e5340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2e5344: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2e5344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2e5348: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e5348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e534c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2e534cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2e5350: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e5350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5354: 0x247210b0  addiu       $s2, $v1, 0x10B0
    ctx->pc = 0x2e5354u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2e5358: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x2e5358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2e535c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e535cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2e5360: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e5360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e5364: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x2e5364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    ctx->pc = 0x2e5368u;
}
