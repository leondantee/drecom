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

// Function: entry_001bc6b8
// Address: 0x1bc6b8 - 0x1bc764
void entry_001bc6b8_0x1bc6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc6b8_0x1bc6b8");
#endif

    ctx->pc = 0x1bc6b8u;

    // 0x1bc6b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bc6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc6bc: 0xc4611b5c  lwc1        $f1, 0x1B5C($v1)
    ctx->pc = 0x1bc6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc6c0: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x1bc6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x1bc6c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc6c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc6c8: 0x0  nop
    ctx->pc = 0x1bc6c8u;
    // NOP
    // 0x1bc6cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc6ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc6d0: 0x0  nop
    ctx->pc = 0x1bc6d0u;
    // NOP
    // 0x1bc6d4: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1BC6D4u;
    {
        const bool branch_taken_0x1bc6d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc6d4) {
            ctx->pc = 0x1BC7B8u;
            return;
        }
    }
    ctx->pc = 0x1BC6DCu;
    // 0x1bc6dc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1bc6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc6e0: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1bc6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1bc6e4: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1bc6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1bc6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bc6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc6ec: 0x0  nop
    ctx->pc = 0x1bc6ecu;
    // NOP
    // 0x1bc6f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc6f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc6f4: 0x0  nop
    ctx->pc = 0x1bc6f4u;
    // NOP
    // 0x1bc6f8: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1BC6F8u;
    {
        const bool branch_taken_0x1bc6f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc6f8) {
            ctx->pc = 0x1BC764u;
            return;
        }
    }
    ctx->pc = 0x1BC700u;
    // 0x1bc700: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bc700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc704: 0xc4a11b50  lwc1        $f1, 0x1B50($a1)
    ctx->pc = 0x1bc704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc708: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1bc708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1bc70c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1bc70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1bc710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bc710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc714: 0x0  nop
    ctx->pc = 0x1bc714u;
    // NOP
    // 0x1bc718: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bc718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bc71c: 0xe4a01b50  swc1        $f0, 0x1B50($a1)
    ctx->pc = 0x1bc71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 6992), bits); }
    // 0x1bc720: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1bc720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc724: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x1bc724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bc728: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x1bc728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x1bc72c: 0x34656666  ori         $a1, $v1, 0x6666
    ctx->pc = 0x1bc72cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1bc730: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1bc730u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc734: 0x0  nop
    ctx->pc = 0x1bc734u;
    // NOP
    // 0x1bc738: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bc738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bc73c: 0x0  nop
    ctx->pc = 0x1bc73cu;
    // NOP
    // 0x1bc740: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1BC740u;
    {
        const bool branch_taken_0x1bc740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc740) {
            ctx->pc = 0x1BC7B8u;
            return;
        }
    }
    ctx->pc = 0x1BC748u;
    // 0x1bc748: 0x3c053fa6  lui         $a1, 0x3FA6
    ctx->pc = 0x1bc748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16294 << 16));
    // 0x1bc74c: 0x34a46666  ori         $a0, $a1, 0x6666
    ctx->pc = 0x1bc74cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26214);
    // 0x1bc750: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1bc750u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc754: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bc754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bc758: 0xe4c01b50  swc1        $f0, 0x1B50($a2)
    ctx->pc = 0x1bc758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 6992), bits); }
    // 0x1bc75c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1BC75Cu;
    {
        const bool branch_taken_0x1bc75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc75c) {
            ctx->pc = 0x1BC7B8u;
            return;
        }
    }
    ctx->pc = 0x1BC764u;
}
