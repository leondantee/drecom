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

// Function: entry_0022bffc
// Address: 0x22bffc - 0x22c054
void entry_0022bffc_0x22bffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022bffc_0x22bffc");
#endif

    ctx->pc = 0x22bffcu;

    // 0x22bffc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c000: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22c000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c004: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c008: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22c008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22c00c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22c00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22c010: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22c010u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c014: 0x0  nop
    ctx->pc = 0x22c014u;
    // NOP
    // 0x22c018: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22c018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22c01c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22c01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22c020: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c024: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c028: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22c028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c02c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c02cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c030: 0x0  nop
    ctx->pc = 0x22c030u;
    // NOP
    // 0x22c034: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22c034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c038: 0x0  nop
    ctx->pc = 0x22c038u;
    // NOP
    // 0x22c03c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22C03Cu;
    {
        const bool branch_taken_0x22c03c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c03c) {
            ctx->pc = 0x22C054u;
            return;
        }
    }
    ctx->pc = 0x22C044u;
    // 0x22c044: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22c044u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22c048: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22c048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22c04c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22c04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22c050: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22c050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x22c054u;
}
