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

// Function: entry_00321234
// Address: 0x321234 - 0x3212d0
void entry_00321234_0x321234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321234_0x321234");
#endif

    ctx->pc = 0x321234u;

    // 0x321234: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321234u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x321238: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x321238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x32123c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32123cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321240: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x321240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321244: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x321244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x321248: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x321248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32124c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x32124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321250: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x321250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x321254: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x321254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321258: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x321258u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32125c: 0x0  nop
    ctx->pc = 0x32125cu;
    // NOP
    // 0x321260: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x321260u;
    {
        const bool branch_taken_0x321260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x321260) {
            ctx->pc = 0x3212D0u;
            return;
        }
    }
    ctx->pc = 0x321268u;
    // 0x321268: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x321268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32126c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321270: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x321270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321274: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x321274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321278: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x321278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x32127c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32127cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x321280: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x321280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x321284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321288: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x321288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32128c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x32128cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x321290: 0x0  nop
    ctx->pc = 0x321290u;
    // NOP
    // 0x321294: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x321294u;
    {
        const bool branch_taken_0x321294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x321294) {
            ctx->pc = 0x3212D0u;
            return;
        }
    }
    ctx->pc = 0x32129Cu;
    // 0x32129c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32129cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3212a0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3212a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3212a4: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x3212a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3212a8: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3212a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3212ac: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x3212acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3212b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3212b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3212b4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3212b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3212b8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3212b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3212bc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3212bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3212c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3212c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3212c4: 0x0  nop
    ctx->pc = 0x3212c4u;
    // NOP
    // 0x3212c8: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x3212C8u;
    {
        const bool branch_taken_0x3212c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3212c8) {
            ctx->pc = 0x321368u;
            return;
        }
    }
    ctx->pc = 0x3212D0u;
}
