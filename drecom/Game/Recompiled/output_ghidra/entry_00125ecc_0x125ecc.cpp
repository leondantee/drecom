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

// Function: entry_00125ecc
// Address: 0x125ecc - 0x125f48
void entry_00125ecc_0x125ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125ecc_0x125ecc");
#endif

    ctx->pc = 0x125eccu;

    // 0x125ecc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125ed0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x125ed0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x125ed4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x125ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x125ed8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x125ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x125edc: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x125EDCu;
    {
        const bool branch_taken_0x125edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125edc) {
            ctx->pc = 0x126148u;
            return;
        }
    }
    ctx->pc = 0x125EE4u;
    // 0x125ee4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125ee8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x125ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125eec: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x125eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x125ef0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x125ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x125ef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x125ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125ef8: 0x0  nop
    ctx->pc = 0x125ef8u;
    // NOP
    // 0x125efc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125f00: 0x0  nop
    ctx->pc = 0x125f00u;
    // NOP
    // 0x125f04: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x125F04u;
    {
        const bool branch_taken_0x125f04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x125f04) {
            ctx->pc = 0x125F50u;
            return;
        }
    }
    ctx->pc = 0x125F0Cu;
    // 0x125f0c: 0x2e210002  sltiu       $at, $s1, 0x2
    ctx->pc = 0x125f0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x125f10: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x125F10u;
    {
        const bool branch_taken_0x125f10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x125f10) {
            ctx->pc = 0x125F48u;
            return;
        }
    }
    ctx->pc = 0x125F18u;
    // 0x125f18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125f1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125f20: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125f20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125f24: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x125f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x125f28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125f2c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125f30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125f34: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125f38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125f3c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125f40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125f44: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x125f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x125f48u;
}
