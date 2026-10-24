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

// Function: entry_001c6dec
// Address: 0x1c6dec - 0x1c6e4c
void entry_001c6dec_0x1c6dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6dec_0x1c6dec");
#endif

    ctx->pc = 0x1c6decu;

    // 0x1c6dec: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c6decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6df0: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x1c6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
    // 0x1c6df4: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1c6df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c6df8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c6df8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6dfc: 0x0  nop
    ctx->pc = 0x1c6dfcu;
    // NOP
    // 0x1c6e00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6e00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6e04: 0x0  nop
    ctx->pc = 0x1c6e04u;
    // NOP
    // 0x1c6e08: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x1C6E08u;
    {
        const bool branch_taken_0x1c6e08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6e08) {
            ctx->pc = 0x1C6F08u;
            return;
        }
    }
    ctx->pc = 0x1C6E10u;
    // 0x1c6e10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6e14: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6e18: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x1c6e18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6e1c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1c6e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c6e20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6e24: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1c6e24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c6e28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6e2c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1c6e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6e30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6e34: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c6e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6e3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6e40: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1c6e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1c6e44: 0x10000547  b           . + 4 + (0x547 << 2)
    ctx->pc = 0x1C6E44u;
    {
        const bool branch_taken_0x1c6e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e44) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C6E4Cu;
}
