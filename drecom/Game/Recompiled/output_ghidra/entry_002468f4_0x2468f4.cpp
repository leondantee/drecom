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

// Function: entry_002468f4
// Address: 0x2468f4 - 0x24694c
void entry_002468f4_0x2468f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002468f4_0x2468f4");
#endif

    ctx->pc = 0x2468f4u;

    // 0x2468f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2468f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2468f8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2468f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2468fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2468fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246900: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x246900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x246904: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x246904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x246908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24690c: 0x0  nop
    ctx->pc = 0x24690cu;
    // NOP
    // 0x246910: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x246910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x246914: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x246914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x246918: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x24691c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x24691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246920: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x246920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246924: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x246924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246928: 0x0  nop
    ctx->pc = 0x246928u;
    // NOP
    // 0x24692c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24692cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246930: 0x0  nop
    ctx->pc = 0x246930u;
    // NOP
    // 0x246934: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x246934u;
    {
        const bool branch_taken_0x246934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246934) {
            ctx->pc = 0x24694Cu;
            return;
        }
    }
    ctx->pc = 0x24693Cu;
    // 0x24693c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24693cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246940: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x246940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x246944: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246948: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x246948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x24694cu;
}
