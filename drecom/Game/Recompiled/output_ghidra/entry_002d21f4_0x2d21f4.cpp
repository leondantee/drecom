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

// Function: entry_002d21f4
// Address: 0x2d21f4 - 0x2d22ac
void entry_002d21f4_0x2d21f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d21f4_0x2d21f4");
#endif

    switch (ctx->pc) {
        case 0x2d2274u: goto label_2d2274;
        default: break;
    }

    ctx->pc = 0x2d21f4u;

    // 0x2d21f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d21f8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2d21f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d21fc: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x2d21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x2d2200: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2d2200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2d2204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2208: 0x0  nop
    ctx->pc = 0x2d2208u;
    // NOP
    // 0x2d220c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d220cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2210: 0x0  nop
    ctx->pc = 0x2d2210u;
    // NOP
    // 0x2d2214: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x2D2214u;
    {
        const bool branch_taken_0x2d2214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2214) {
            ctx->pc = 0x2D22ACu;
            return;
        }
    }
    ctx->pc = 0x2D221Cu;
    // 0x2d221c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d221cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2220: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x2d2220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2224: 0x3c0245bb  lui         $v0, 0x45BB
    ctx->pc = 0x2d2224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17851 << 16));
    // 0x2d2228: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2d2228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2d222c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d222cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2230: 0x0  nop
    ctx->pc = 0x2d2230u;
    // NOP
    // 0x2d2234: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d2234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2238: 0x0  nop
    ctx->pc = 0x2d2238u;
    // NOP
    // 0x2d223c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2D223Cu;
    {
        const bool branch_taken_0x2d223c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d223c) {
            ctx->pc = 0x2D22ACu;
            return;
        }
    }
    ctx->pc = 0x2D2244u;
    // 0x2d2244: 0x3c023ea0  lui         $v0, 0x3EA0
    ctx->pc = 0x2d2244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16032 << 16));
    // 0x2d2248: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x2d2248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x2d224c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2d224cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d2250: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2254: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2d2254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d2258: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d225c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x2d225cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d2260: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x2d2260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d2264: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d2264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d2268: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2d2268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2d226c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x2D226Cu;
    SET_GPR_U32(ctx, 31, 0x2D2274u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x2D226Cu, 0x2D2274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2274u;
label_2d2274:
    // 0x2d2274: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2274u;
    {
        const bool branch_taken_0x2d2274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2274) {
            ctx->pc = 0x2D22ACu;
            return;
        }
    }
    ctx->pc = 0x2D227Cu;
    // 0x2d227c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d227cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2280: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2284: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d2284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2288: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d2288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d228c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2290: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d2290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d2294: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d2294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2298: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d2298u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d229c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22a0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d22a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d22a4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d22a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d22a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d22acu;
}
