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

// Function: entry_001981d0
// Address: 0x1981d0 - 0x19825c
void entry_001981d0_0x1981d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001981d0_0x1981d0");
#endif

    ctx->pc = 0x1981d0u;

    // 0x1981d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981d4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1981d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1981d8: 0x3c034548  lui         $v1, 0x4548
    ctx->pc = 0x1981d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17736 << 16));
    // 0x1981dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1981dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1981e0: 0x0  nop
    ctx->pc = 0x1981e0u;
    // NOP
    // 0x1981e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1981e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1981e8: 0x0  nop
    ctx->pc = 0x1981e8u;
    // NOP
    // 0x1981ec: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1981ECu;
    {
        const bool branch_taken_0x1981ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1981ec) {
            ctx->pc = 0x19825Cu;
            return;
        }
    }
    ctx->pc = 0x1981F4u;
    // 0x1981f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981f8: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1981f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1981fc: 0x3c034567  lui         $v1, 0x4567
    ctx->pc = 0x1981fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17767 << 16));
    // 0x198200: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x198200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x198204: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198208: 0x0  nop
    ctx->pc = 0x198208u;
    // NOP
    // 0x19820c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19820cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198210: 0x0  nop
    ctx->pc = 0x198210u;
    // NOP
    // 0x198214: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x198214u;
    {
        const bool branch_taken_0x198214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198214) {
            ctx->pc = 0x19825Cu;
            return;
        }
    }
    ctx->pc = 0x19821Cu;
    // 0x19821c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198220: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x198220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x198224: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x198224u;
    {
        const bool branch_taken_0x198224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198224) {
            ctx->pc = 0x19825Cu;
            return;
        }
    }
    ctx->pc = 0x19822Cu;
    // 0x19822c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198230: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198234: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x198234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x198238: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x198238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x19823c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198240: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x198240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x198244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198248: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x198248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19824c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198250: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x198250u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x198254: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198258: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x198258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x19825cu;
}
