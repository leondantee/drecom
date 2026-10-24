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

// Function: entry_001257ec
// Address: 0x1257ec - 0x125868
void entry_001257ec_0x1257ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001257ec_0x1257ec");
#endif

    ctx->pc = 0x1257ecu;

    // 0x1257ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1257ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1257f0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1257f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1257f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1257f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1257f8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1257f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1257fc: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x1257FCu;
    {
        const bool branch_taken_0x1257fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1257fc) {
            ctx->pc = 0x125A68u;
            return;
        }
    }
    ctx->pc = 0x125804u;
    // 0x125804: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125808: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12580c: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x12580cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x125810: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x125810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x125814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125818: 0x0  nop
    ctx->pc = 0x125818u;
    // NOP
    // 0x12581c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12581cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125820: 0x0  nop
    ctx->pc = 0x125820u;
    // NOP
    // 0x125824: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x125824u;
    {
        const bool branch_taken_0x125824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125824) {
            ctx->pc = 0x125870u;
            return;
        }
    }
    ctx->pc = 0x12582Cu;
    // 0x12582c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12582cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125830: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x125830u;
    {
        const bool branch_taken_0x125830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125830) {
            ctx->pc = 0x125868u;
            return;
        }
    }
    ctx->pc = 0x125838u;
    // 0x125838: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12583c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125840: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125844: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x125844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125848: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12584c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12584cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125854: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125858: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12585c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12585cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125860: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125864: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x125868u;
}
