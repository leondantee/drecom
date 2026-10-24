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

// Function: entry_0029f7e0
// Address: 0x29f7e0 - 0x29f854
void entry_0029f7e0_0x29f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f7e0_0x29f7e0");
#endif

    ctx->pc = 0x29f7e0u;

    // 0x29f7e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7e4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f7e8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29f7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29f7ec: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29f7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29f7f0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x29F7F0u;
    {
        const bool branch_taken_0x29f7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f7f0) {
            ctx->pc = 0x29F854u;
            return;
        }
    }
    ctx->pc = 0x29F7F8u;
    // 0x29f7f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f7fc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f800: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x29f800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x29f804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29f804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f808: 0x0  nop
    ctx->pc = 0x29f808u;
    // NOP
    // 0x29f80c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29f80cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f810: 0x0  nop
    ctx->pc = 0x29f810u;
    // NOP
    // 0x29f814: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x29F814u;
    {
        const bool branch_taken_0x29f814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f814) {
            ctx->pc = 0x29F8A8u;
            return;
        }
    }
    ctx->pc = 0x29F81Cu;
    // 0x29f81c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f820: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f824: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f828: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29f828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f82c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f830: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f834: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f838: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f83c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f840: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f844: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x29f844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29f848: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f848u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x29f84c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29F84Cu;
    {
        const bool branch_taken_0x29f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f84c) {
            ctx->pc = 0x29F8A8u;
            return;
        }
    }
    ctx->pc = 0x29F854u;
}
