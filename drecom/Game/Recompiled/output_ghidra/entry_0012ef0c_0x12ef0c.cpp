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

// Function: entry_0012ef0c
// Address: 0x12ef0c - 0x12ef80
void entry_0012ef0c_0x12ef0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ef0c_0x12ef0c");
#endif

    ctx->pc = 0x12ef0cu;

    // 0x12ef0c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef10: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x12ef10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x12ef14: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12ef14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12ef18: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x12ef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x12ef1c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x12EF1Cu;
    {
        const bool branch_taken_0x12ef1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef1c) {
            ctx->pc = 0x12EF80u;
            return;
        }
    }
    ctx->pc = 0x12EF24u;
    // 0x12ef24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef28: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12ef28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ef2c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x12ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x12ef30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12ef30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ef34: 0x0  nop
    ctx->pc = 0x12ef34u;
    // NOP
    // 0x12ef38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12ef38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12ef3c: 0x0  nop
    ctx->pc = 0x12ef3cu;
    // NOP
    // 0x12ef40: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x12EF40u;
    {
        const bool branch_taken_0x12ef40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12ef40) {
            ctx->pc = 0x12EF80u;
            return;
        }
    }
    ctx->pc = 0x12EF48u;
    // 0x12ef48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ef4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef50: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12ef50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ef54: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x12ef54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12ef58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef5c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12ef5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12ef60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12ef64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ef68: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12ef6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ef70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x12ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ef74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12ef78: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12EF78u;
    {
        const bool branch_taken_0x12ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef78) {
            ctx->pc = 0x12EF80u;
            return;
        }
    }
    ctx->pc = 0x12EF80u;
}
