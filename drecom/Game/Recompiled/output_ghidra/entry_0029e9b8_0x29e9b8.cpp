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

// Function: entry_0029e9b8
// Address: 0x29e9b8 - 0x29ea28
void entry_0029e9b8_0x29e9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e9b8_0x29e9b8");
#endif

    ctx->pc = 0x29e9b8u;

    // 0x29e9b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e9c0: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x29e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e9c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9c8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x29e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e9cc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29e9ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e9d0: 0x0  nop
    ctx->pc = 0x29e9d0u;
    // NOP
    // 0x29e9d4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x29E9D4u;
    {
        const bool branch_taken_0x29e9d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e9d4) {
            ctx->pc = 0x29EA28u;
            return;
        }
    }
    ctx->pc = 0x29E9DCu;
    // 0x29e9dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e9e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e9e4: 0x94630048  lhu         $v1, 0x48($v1)
    ctx->pc = 0x29e9e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x29e9e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29e9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29e9ec: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x29e9ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x29e9f0: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29E9F0u;
    {
        const bool branch_taken_0x29e9f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e9f0) {
            ctx->pc = 0x29EA28u;
            return;
        }
    }
    ctx->pc = 0x29E9F8u;
    // 0x29e9f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e9fc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ea00: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29ea00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ea04: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29ea08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ea0c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29ea0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ea10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ea14: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29ea14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ea18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ea1c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29ea1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ea20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ea24: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29ea24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29ea28u;
}
