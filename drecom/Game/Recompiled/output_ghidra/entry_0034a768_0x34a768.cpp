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

// Function: entry_0034a768
// Address: 0x34a768 - 0x34a7fc
void entry_0034a768_0x34a768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a768_0x34a768");
#endif

    ctx->pc = 0x34a768u;

    // 0x34a768: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a76c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x34a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a770: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x34a770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34a774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a778: 0x0  nop
    ctx->pc = 0x34a778u;
    // NOP
    // 0x34a77c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a77cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a780: 0x0  nop
    ctx->pc = 0x34a780u;
    // NOP
    // 0x34a784: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x34A784u;
    {
        const bool branch_taken_0x34a784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a784) {
            ctx->pc = 0x34A7FCu;
            return;
        }
    }
    ctx->pc = 0x34A78Cu;
    // 0x34a78c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a790: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34a790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34a794: 0x84630034  lh          $v1, 0x34($v1)
    ctx->pc = 0x34a794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x34a798: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x34A798u;
    {
        const bool branch_taken_0x34a798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a798) {
            ctx->pc = 0x34A7FCu;
            return;
        }
    }
    ctx->pc = 0x34A7A0u;
    // 0x34a7a0: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x34a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34a7a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7a8: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x34a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a7ac: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x34a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x34a7b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a7b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a7b4: 0x0  nop
    ctx->pc = 0x34a7b4u;
    // NOP
    // 0x34a7b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34a7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34a7bc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x34a7bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a7c0: 0x0  nop
    ctx->pc = 0x34a7c0u;
    // NOP
    // 0x34a7c4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x34A7C4u;
    {
        const bool branch_taken_0x34a7c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a7c4) {
            ctx->pc = 0x34A7FCu;
            return;
        }
    }
    ctx->pc = 0x34A7CCu;
    // 0x34a7cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a7d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a7d8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34a7dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7e0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a7e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a7ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a7f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a7f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x34a7fcu;
}
