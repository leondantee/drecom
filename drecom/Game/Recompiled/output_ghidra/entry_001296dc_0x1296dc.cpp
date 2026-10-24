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

// Function: entry_001296dc
// Address: 0x1296dc - 0x129758
void entry_001296dc_0x1296dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001296dc_0x1296dc");
#endif

    ctx->pc = 0x1296dcu;

    // 0x1296dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1296dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1296e0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1296e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1296e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1296e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1296e8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1296e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1296ec: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x1296ECu;
    {
        const bool branch_taken_0x1296ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1296ec) {
            ctx->pc = 0x12999Cu;
            return;
        }
    }
    ctx->pc = 0x1296F4u;
    // 0x1296f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1296f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1296f8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1296f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1296fc: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x1296fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x129700: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x129700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x129704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x129704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129708: 0x0  nop
    ctx->pc = 0x129708u;
    // NOP
    // 0x12970c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12970cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x129710: 0x0  nop
    ctx->pc = 0x129710u;
    // NOP
    // 0x129714: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x129714u;
    {
        const bool branch_taken_0x129714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x129714) {
            ctx->pc = 0x129760u;
            return;
        }
    }
    ctx->pc = 0x12971Cu;
    // 0x12971c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x12971cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x129720: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x129720u;
    {
        const bool branch_taken_0x129720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x129720) {
            ctx->pc = 0x129758u;
            return;
        }
    }
    ctx->pc = 0x129728u;
    // 0x129728: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12972c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129730: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129730u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129734: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x129734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129738: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12973c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12973cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129740: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129744: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129748: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12974c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12974cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129750: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129754: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x129758u;
}
