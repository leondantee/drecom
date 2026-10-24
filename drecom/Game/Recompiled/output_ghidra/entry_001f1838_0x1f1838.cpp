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

// Function: entry_001f1838
// Address: 0x1f1838 - 0x1f1890
void entry_001f1838_0x1f1838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1838_0x1f1838");
#endif

    ctx->pc = 0x1f1838u;

    // 0x1f1838: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f183c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f183cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1840: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f1840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1844: 0x3c053d49  lui         $a1, 0x3D49
    ctx->pc = 0x1f1844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15689 << 16));
    // 0x1f1848: 0x34a40fdb  ori         $a0, $a1, 0xFDB
    ctx->pc = 0x1f1848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1f184c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f184cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1850: 0x0  nop
    ctx->pc = 0x1f1850u;
    // NOP
    // 0x1f1854: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f1854u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f1858: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f1858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f185c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1860: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f1864: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1f1864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f1868: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f186c: 0x0  nop
    ctx->pc = 0x1f186cu;
    // NOP
    // 0x1f1870: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1f1870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1874: 0x0  nop
    ctx->pc = 0x1f1874u;
    // NOP
    // 0x1f1878: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1878u;
    {
        const bool branch_taken_0x1f1878 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1878) {
            ctx->pc = 0x1F1890u;
            return;
        }
    }
    ctx->pc = 0x1F1880u;
    // 0x1f1880: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1880u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1884: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1888: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f1888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f188c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f188cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x1f1890u;
}
