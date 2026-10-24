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

// Function: entry_00229fc8
// Address: 0x229fc8 - 0x22a028
void entry_00229fc8_0x229fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229fc8_0x229fc8");
#endif

    ctx->pc = 0x229fc8u;

    // 0x229fc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229fcc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x229fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229fd0: 0xc4810098  lwc1        $f1, 0x98($a0)
    ctx->pc = 0x229fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229fd4: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x229fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x229fd8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x229fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x229fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229fe0: 0x0  nop
    ctx->pc = 0x229fe0u;
    // NOP
    // 0x229fe4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x229fe4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229fe8: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x229fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x229fec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229ff0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229ff4: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x229ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229ff8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x229ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x229ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22a000: 0x0  nop
    ctx->pc = 0x22a000u;
    // NOP
    // 0x22a004: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22a004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22a008: 0x0  nop
    ctx->pc = 0x22a008u;
    // NOP
    // 0x22a00c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x22A00Cu;
    {
        const bool branch_taken_0x22a00c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a00c) {
            ctx->pc = 0x22A028u;
            return;
        }
    }
    ctx->pc = 0x22A014u;
    // 0x22a014: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22a014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22a018: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x22a018u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a01c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22a020: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22a024: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x22a024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    ctx->pc = 0x22a028u;
}
