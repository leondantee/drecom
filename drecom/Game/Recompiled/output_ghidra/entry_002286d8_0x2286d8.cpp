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

// Function: entry_002286d8
// Address: 0x2286d8 - 0x228730
void entry_002286d8_0x2286d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002286d8_0x2286d8");
#endif

    ctx->pc = 0x2286d8u;

    // 0x2286d8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2286d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2286dc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2286dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2286e0: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2286e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2286e4: 0x3c043cc9  lui         $a0, 0x3CC9
    ctx->pc = 0x2286e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15561 << 16));
    // 0x2286e8: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x2286e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2286ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2286ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2286f0: 0x0  nop
    ctx->pc = 0x2286f0u;
    // NOP
    // 0x2286f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2286f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2286f8: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2286f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2286fc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2286fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228700: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x228704: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x228704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x228708: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22870c: 0x0  nop
    ctx->pc = 0x22870cu;
    // NOP
    // 0x228710: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x228710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x228714: 0x0  nop
    ctx->pc = 0x228714u;
    // NOP
    // 0x228718: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x228718u;
    {
        const bool branch_taken_0x228718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x228718) {
            ctx->pc = 0x228730u;
            return;
        }
    }
    ctx->pc = 0x228720u;
    // 0x228720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x228724: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x228724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x228728: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x228728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22872c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22872cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x228730u;
}
