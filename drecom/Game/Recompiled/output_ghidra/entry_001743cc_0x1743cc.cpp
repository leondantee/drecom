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

// Function: entry_001743cc
// Address: 0x1743cc - 0x174454
void entry_001743cc_0x1743cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001743cc_0x1743cc");
#endif

    ctx->pc = 0x1743ccu;

    // 0x1743cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1743ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1743d0: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1743d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1743d4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1743d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1743d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1743d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1743dc: 0x0  nop
    ctx->pc = 0x1743dcu;
    // NOP
    // 0x1743e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1743e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1743e4: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x1743e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    // 0x1743e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1743e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1743ec: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x1743ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1743f0: 0x3c033dc9  lui         $v1, 0x3DC9
    ctx->pc = 0x1743f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15817 << 16));
    // 0x1743f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1743f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1743f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1743f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1743fc: 0x0  nop
    ctx->pc = 0x1743fcu;
    // NOP
    // 0x174400: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x174400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x174404: 0xe48000d0  swc1        $f0, 0xD0($a0)
    ctx->pc = 0x174404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 208), bits); }
    // 0x174408: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x174408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x17440c: 0x8c631210  lw          $v1, 0x1210($v1)
    ctx->pc = 0x17440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x174410: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x174410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x174414: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x174414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174418: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x174418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x17441c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x17441cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174420: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x174420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174424: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x174424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x174428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x174428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17442c: 0x0  nop
    ctx->pc = 0x17442cu;
    // NOP
    // 0x174430: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x174430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174434: 0x0  nop
    ctx->pc = 0x174434u;
    // NOP
    // 0x174438: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x174438u;
    {
        const bool branch_taken_0x174438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x174438) {
            ctx->pc = 0x174454u;
            return;
        }
    }
    ctx->pc = 0x174440u;
    // 0x174440: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x174440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174444: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x174444u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174448: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x174448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17444c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x17444cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x174450: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x174450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x174454u;
}
