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

// Function: entry_001284fc
// Address: 0x1284fc - 0x128578
void entry_001284fc_0x1284fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001284fc_0x1284fc");
#endif

    ctx->pc = 0x1284fcu;

    // 0x1284fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1284fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128500: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x128500u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x128504: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x128504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x128508: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x128508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x12850c: 0x10600130  beqz        $v1, . + 4 + (0x130 << 2)
    ctx->pc = 0x12850Cu;
    {
        const bool branch_taken_0x12850c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12850c) {
            ctx->pc = 0x1289D0u;
            return;
        }
    }
    ctx->pc = 0x128514u;
    // 0x128514: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128518: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x128518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12851c: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x12851cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x128520: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x128520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x128524: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x128524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x128528: 0x0  nop
    ctx->pc = 0x128528u;
    // NOP
    // 0x12852c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12852cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x128530: 0x0  nop
    ctx->pc = 0x128530u;
    // NOP
    // 0x128534: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x128534u;
    {
        const bool branch_taken_0x128534 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x128534) {
            ctx->pc = 0x128580u;
            return;
        }
    }
    ctx->pc = 0x12853Cu;
    // 0x12853c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12853cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x128540: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x128540u;
    {
        const bool branch_taken_0x128540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x128540) {
            ctx->pc = 0x128578u;
            return;
        }
    }
    ctx->pc = 0x128548u;
    // 0x128548: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x128548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12854c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128550: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x128550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x128554: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x128554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x128558: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12855c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12855cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x128560: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128564: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x128564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x128568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12856c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12856cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x128570: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x128570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x128574: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x128574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x128578u;
}
