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

// Function: entry_003494a8
// Address: 0x3494a8 - 0x349544
void entry_003494a8_0x3494a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003494a8_0x3494a8");
#endif

    ctx->pc = 0x3494a8u;

    // 0x3494a8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3494a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3494ac: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x3494acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3494b0: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x3494b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x3494b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3494b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3494b8: 0x0  nop
    ctx->pc = 0x3494b8u;
    // NOP
    // 0x3494bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3494bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3494c0: 0x0  nop
    ctx->pc = 0x3494c0u;
    // NOP
    // 0x3494c4: 0x4500008e  bc1f        . + 4 + (0x8E << 2)
    ctx->pc = 0x3494C4u;
    {
        const bool branch_taken_0x3494c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3494c4) {
            ctx->pc = 0x349700u;
            return;
        }
    }
    ctx->pc = 0x3494CCu;
    // 0x3494cc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3494ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3494d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3494d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3494d4: 0x846300c0  lh          $v1, 0xC0($v1)
    ctx->pc = 0x3494d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3494d8: 0x14600089  bnez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x3494D8u;
    {
        const bool branch_taken_0x3494d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3494d8) {
            ctx->pc = 0x349700u;
            return;
        }
    }
    ctx->pc = 0x3494E0u;
    // 0x3494e0: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x3494e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3494e4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3494e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x3494e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3494e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3494ec: 0x0  nop
    ctx->pc = 0x3494ecu;
    // NOP
    // 0x3494f0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3494f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3494f4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x3494f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3494f8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x3494f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3494fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3494fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349500: 0x0  nop
    ctx->pc = 0x349500u;
    // NOP
    // 0x349504: 0x4500007e  bc1f        . + 4 + (0x7E << 2)
    ctx->pc = 0x349504u;
    {
        const bool branch_taken_0x349504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349504) {
            ctx->pc = 0x349700u;
            return;
        }
    }
    ctx->pc = 0x34950Cu;
    // 0x34950c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34950cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349510: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349514: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x349514u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x349518: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x349518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x34951c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349520: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x349520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x349524: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349528: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x349528u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34952c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349530: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x349530u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x349534: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x349534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349538: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x349538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34953c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x34953Cu;
    {
        const bool branch_taken_0x34953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34953c) {
            ctx->pc = 0x349700u;
            return;
        }
    }
    ctx->pc = 0x349544u;
}
