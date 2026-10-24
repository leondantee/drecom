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

// Function: entry_003213bc
// Address: 0x3213bc - 0x321458
void entry_003213bc_0x3213bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003213bc_0x3213bc");
#endif

    ctx->pc = 0x3213bcu;

    // 0x3213bc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3213bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3213c0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3213c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3213c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3213c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3213c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3213c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3213cc: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3213ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3213d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3213d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3213d4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x3213d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3213d8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3213d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3213dc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3213dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3213e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3213e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3213e4: 0x0  nop
    ctx->pc = 0x3213e4u;
    // NOP
    // 0x3213e8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x3213E8u;
    {
        const bool branch_taken_0x3213e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3213e8) {
            ctx->pc = 0x321458u;
            return;
        }
    }
    ctx->pc = 0x3213F0u;
    // 0x3213f0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3213f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3213f4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3213f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3213f8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3213f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3213fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3213fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321400: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x321400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321404: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x321404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x321408: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32140c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321410: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x321410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321414: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x321414u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x321418: 0x0  nop
    ctx->pc = 0x321418u;
    // NOP
    // 0x32141c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x32141Cu;
    {
        const bool branch_taken_0x32141c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32141c) {
            ctx->pc = 0x321458u;
            return;
        }
    }
    ctx->pc = 0x321424u;
    // 0x321424: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321428: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x321428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32142c: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x32142cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x321430: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x321430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321434: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x321434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321438: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x321438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32143c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x32143cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321440: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x321440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x321444: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x321444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321448: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x321448u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32144c: 0x0  nop
    ctx->pc = 0x32144cu;
    // NOP
    // 0x321450: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x321450u;
    {
        const bool branch_taken_0x321450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x321450) {
            ctx->pc = 0x3214B0u;
            return;
        }
    }
    ctx->pc = 0x321458u;
}
