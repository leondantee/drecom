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

// Function: entry_001f1890
// Address: 0x1f1890 - 0x1f1908
void entry_001f1890_0x1f1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1890_0x1f1890");
#endif

    ctx->pc = 0x1f1890u;

    // 0x1f1890: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1894: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1f1894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f1898: 0x14600059  bnez        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x1F1898u;
    {
        const bool branch_taken_0x1f1898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1898) {
            ctx->pc = 0x1F1A00u;
            return;
        }
    }
    ctx->pc = 0x1F18A0u;
    // 0x1f18a0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f18a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f18a4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f18a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f18a8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1f18a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f18ac: 0x30a31000  andi        $v1, $a1, 0x1000
    ctx->pc = 0x1f18acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x1f18b0: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F18B0u;
    {
        const bool branch_taken_0x1f18b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f18b0) {
            ctx->pc = 0x1F1960u;
            return;
        }
    }
    ctx->pc = 0x1F18B8u;
    // 0x1f18b8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f18b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f18bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f18c0: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f18c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f18c4: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x1f18c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x1f18c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f18c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f18cc: 0x0  nop
    ctx->pc = 0x1f18ccu;
    // NOP
    // 0x1f18d0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1f18d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f18d4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f18d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f18d8: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x1f18d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f18dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f18dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f18e0: 0x0  nop
    ctx->pc = 0x1f18e0u;
    // NOP
    // 0x1f18e4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F18E4u;
    {
        const bool branch_taken_0x1f18e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f18e4) {
            ctx->pc = 0x1F1908u;
            return;
        }
    }
    ctx->pc = 0x1F18ECu;
    // 0x1f18ec: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1f18ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f18f0: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1f18f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f18f4: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1f18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1f18f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f18f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f18fc: 0x0  nop
    ctx->pc = 0x1f18fcu;
    // NOP
    // 0x1f1900: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f1900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f1904: 0xe4a00124  swc1        $f0, 0x124($a1)
    ctx->pc = 0x1f1904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 292), bits); }
    ctx->pc = 0x1f1908u;
}
