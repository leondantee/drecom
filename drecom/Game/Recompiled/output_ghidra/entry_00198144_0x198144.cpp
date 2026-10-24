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

// Function: entry_00198144
// Address: 0x198144 - 0x1981d0
void entry_00198144_0x198144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198144_0x198144");
#endif

    ctx->pc = 0x198144u;

    // 0x198144: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198148: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x198148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19814c: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x19814cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x198150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198154: 0x0  nop
    ctx->pc = 0x198154u;
    // NOP
    // 0x198158: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x198158u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19815c: 0x0  nop
    ctx->pc = 0x19815cu;
    // NOP
    // 0x198160: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x198160u;
    {
        const bool branch_taken_0x198160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x198160) {
            ctx->pc = 0x1981D0u;
            return;
        }
    }
    ctx->pc = 0x198168u;
    // 0x198168: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19816c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x19816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x198170: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x198170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x198174: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x198174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x198178: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x198178u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19817c: 0x0  nop
    ctx->pc = 0x19817cu;
    // NOP
    // 0x198180: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198184: 0x0  nop
    ctx->pc = 0x198184u;
    // NOP
    // 0x198188: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x198188u;
    {
        const bool branch_taken_0x198188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x198188) {
            ctx->pc = 0x1981D0u;
            return;
        }
    }
    ctx->pc = 0x198190u;
    // 0x198190: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x198190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198194: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x198194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x198198: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x198198u;
    {
        const bool branch_taken_0x198198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198198) {
            ctx->pc = 0x1981D0u;
            return;
        }
    }
    ctx->pc = 0x1981A0u;
    // 0x1981a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1981a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1981a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1981a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1981ac: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1981acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1981b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981b4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1981b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1981b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981bc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1981bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1981c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981c4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1981c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1981c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1981c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1981cc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1981ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1981d0u;
}
