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

// Function: entry_002306c0
// Address: 0x2306c0 - 0x230728
void entry_002306c0_0x2306c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002306c0_0x2306c0");
#endif

    ctx->pc = 0x2306c0u;

    // 0x2306c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2306c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2306c4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2306c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2306c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2306c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2306cc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x2306ccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2306d0: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x2306d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
    // 0x2306d4: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x2306d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x2306d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2306d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2306dc: 0x0  nop
    ctx->pc = 0x2306dcu;
    // NOP
    // 0x2306e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2306e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2306e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2306e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2306e8: 0x0  nop
    ctx->pc = 0x2306e8u;
    // NOP
    // 0x2306ec: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x2306ECu;
    {
        const bool branch_taken_0x2306ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2306ec) {
            ctx->pc = 0x230794u;
            return;
        }
    }
    ctx->pc = 0x2306F4u;
    // 0x2306f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2306f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2306f8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x2306f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2306fc: 0xa0c50002  sb          $a1, 0x2($a2)
    ctx->pc = 0x2306fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x230700: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x230700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x230704: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x230704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230708: 0xa5071278  sh          $a3, 0x1278($t0)
    ctx->pc = 0x230708u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4728), (uint16_t)GPR_U32(ctx, 7));
    // 0x23070c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x23070cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x230710: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x230710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x230714: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x230714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x230718: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x230718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23071c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x23071cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x230720: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x230720u;
    {
        const bool branch_taken_0x230720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230720) {
            ctx->pc = 0x230794u;
            return;
        }
    }
    ctx->pc = 0x230728u;
}
