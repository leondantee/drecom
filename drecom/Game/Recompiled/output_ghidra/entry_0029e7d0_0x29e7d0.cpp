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

// Function: entry_0029e7d0
// Address: 0x29e7d0 - 0x29e844
void entry_0029e7d0_0x29e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e7d0_0x29e7d0");
#endif

    ctx->pc = 0x29e7d0u;

    // 0x29e7d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7d4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29e7d8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29e7dc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29e7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29e7e0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x29E7E0u;
    {
        const bool branch_taken_0x29e7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e7e0) {
            ctx->pc = 0x29E844u;
            return;
        }
    }
    ctx->pc = 0x29E7E8u;
    // 0x29e7e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e7ec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29e7f0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29e7f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29e7f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e7f8: 0x0  nop
    ctx->pc = 0x29e7f8u;
    // NOP
    // 0x29e7fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29e7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29e800: 0x0  nop
    ctx->pc = 0x29e800u;
    // NOP
    // 0x29e804: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x29E804u;
    {
        const bool branch_taken_0x29e804 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29e804) {
            ctx->pc = 0x29E89Cu;
            return;
        }
    }
    ctx->pc = 0x29E80Cu;
    // 0x29e80c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29e80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29e810: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e814: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29e814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e818: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29e818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e81c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e820: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29e820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29e824: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e828: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29e828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e82c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e830: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29e830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29e834: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x29e834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e838: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29e838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29e83c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29E83Cu;
    {
        const bool branch_taken_0x29e83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e83c) {
            ctx->pc = 0x29E89Cu;
            return;
        }
    }
    ctx->pc = 0x29E844u;
}
