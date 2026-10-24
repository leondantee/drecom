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

// Function: entry_00371b68
// Address: 0x371b68 - 0x371c08
void entry_00371b68_0x371b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371b68_0x371b68");
#endif

    ctx->pc = 0x371b68u;

    // 0x371b68: 0x3c03c743  lui         $v1, 0xC743
    ctx->pc = 0x371b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51011 << 16));
    // 0x371b6c: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x371b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x371b70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x371b70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x371b74: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x371b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371b78: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x371b78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371b7c: 0x0  nop
    ctx->pc = 0x371b7cu;
    // NOP
    // 0x371b80: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x371B80u;
    {
        const bool branch_taken_0x371b80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371b80) {
            ctx->pc = 0x371C58u;
            return;
        }
    }
    ctx->pc = 0x371B88u;
    // 0x371b88: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x371b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371b8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x371b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x371b90: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x371b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371b94: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x371b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371b98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x371b98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x371b9c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x371b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x371ba0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x371ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x371ba4: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x371ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x371ba8: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x371ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x371bac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x371bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x371bb0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x371bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371bb4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x371bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371bb8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x371bb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x371bbc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x371bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x371bc0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x371bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x371bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371bc8: 0x0  nop
    ctx->pc = 0x371bc8u;
    // NOP
    // 0x371bcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x371bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x371bd0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x371bd4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x371bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371bd8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x371bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x371bdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371bdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371be0: 0x0  nop
    ctx->pc = 0x371be0u;
    // NOP
    // 0x371be4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x371be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371be8: 0x0  nop
    ctx->pc = 0x371be8u;
    // NOP
    // 0x371bec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x371BECu;
    {
        const bool branch_taken_0x371bec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x371bec) {
            ctx->pc = 0x371C08u;
            return;
        }
    }
    ctx->pc = 0x371BF4u;
    // 0x371bf4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x371bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x371bf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371bfc: 0x0  nop
    ctx->pc = 0x371bfcu;
    // NOP
    // 0x371c00: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x371c04: 0x0  nop
    ctx->pc = 0x371c04u;
    // NOP
    ctx->pc = 0x371c08u;
}
