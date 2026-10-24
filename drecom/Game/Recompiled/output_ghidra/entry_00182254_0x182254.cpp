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

// Function: entry_00182254
// Address: 0x182254 - 0x1822b8
void entry_00182254_0x182254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182254_0x182254");
#endif

    ctx->pc = 0x182254u;

    // 0x182254: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182258: 0x8c23f1e8  lw          $v1, -0xE18($at)
    ctx->pc = 0x182258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47F1E8u));
    // 0x18225c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18225Cu;
    {
        const bool branch_taken_0x18225c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18225c) {
            ctx->pc = 0x1822B8u;
            return;
        }
    }
    ctx->pc = 0x182264u;
    // 0x182264: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182268: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18226c: 0xc420f1f8  lwc1        $f0, -0xE08($at)
    ctx->pc = 0x18226cu;
    { uint32_t bits = FAST_READ32(0x47F1F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182270: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x182270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182274: 0x0  nop
    ctx->pc = 0x182274u;
    // NOP
    // 0x182278: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x182278u;
    {
        const bool branch_taken_0x182278 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x182278) {
            ctx->pc = 0x1822E0u;
            return;
        }
    }
    ctx->pc = 0x182280u;
    // 0x182280: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182284: 0xc420f200  lwc1        $f0, -0xE00($at)
    ctx->pc = 0x182284u;
    { uint32_t bits = FAST_READ32(0x47F200u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182288: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x182288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
    // 0x18228c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18228cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182290: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x182290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x182294: 0xac660088  sw          $a2, 0x88($v1)
    ctx->pc = 0x182294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 6));
    // 0x182298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x182298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18229c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x18229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1822a0: 0xac660094  sw          $a2, 0x94($v1)
    ctx->pc = 0x1822a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 6));
    // 0x1822a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1822a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1822a8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1822a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1822ac: 0xac6600b8  sw          $a2, 0xB8($v1)
    ctx->pc = 0x1822acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 6));
    // 0x1822b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1822B0u;
    {
        const bool branch_taken_0x1822b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1822b0) {
            ctx->pc = 0x1822E0u;
            return;
        }
    }
    ctx->pc = 0x1822B8u;
}
