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

// Function: entry_001ba6ec
// Address: 0x1ba6ec - 0x1ba790
void entry_001ba6ec_0x1ba6ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba6ec_0x1ba6ec");
#endif

    ctx->pc = 0x1ba6ecu;

    // 0x1ba6ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba6f0: 0xc4411b5c  lwc1        $f1, 0x1B5C($v0)
    ctx->pc = 0x1ba6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba6f4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1ba6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1ba6f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba6f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6fc: 0x0  nop
    ctx->pc = 0x1ba6fcu;
    // NOP
    // 0x1ba700: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba700u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba704: 0x0  nop
    ctx->pc = 0x1ba704u;
    // NOP
    // 0x1ba708: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1BA708u;
    {
        const bool branch_taken_0x1ba708 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba708) {
            ctx->pc = 0x1BA7ECu;
            return;
        }
    }
    ctx->pc = 0x1BA710u;
    // 0x1ba710: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ba710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba714: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1ba714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1ba718: 0x34820fdb  ori         $v0, $a0, 0xFDB
    ctx->pc = 0x1ba718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1ba71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba720: 0x0  nop
    ctx->pc = 0x1ba720u;
    // NOP
    // 0x1ba724: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ba724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba728: 0x0  nop
    ctx->pc = 0x1ba728u;
    // NOP
    // 0x1ba72c: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1BA72Cu;
    {
        const bool branch_taken_0x1ba72c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba72c) {
            ctx->pc = 0x1BA790u;
            return;
        }
    }
    ctx->pc = 0x1BA734u;
    // 0x1ba734: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba738: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x1ba738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba73c: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x1ba73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x1ba740: 0x3482cccd  ori         $v0, $a0, 0xCCCD
    ctx->pc = 0x1ba740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x1ba744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ba744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba748: 0x0  nop
    ctx->pc = 0x1ba748u;
    // NOP
    // 0x1ba74c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ba74cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ba750: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x1ba750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x1ba754: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba758: 0xc4811b50  lwc1        $f1, 0x1B50($a0)
    ctx->pc = 0x1ba758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba75c: 0x3c103f00  lui         $s0, 0x3F00
    ctx->pc = 0x1ba75cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba760: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1ba760u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba764: 0x0  nop
    ctx->pc = 0x1ba764u;
    // NOP
    // 0x1ba768: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba76c: 0x0  nop
    ctx->pc = 0x1ba76cu;
    // NOP
    // 0x1ba770: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x1BA770u;
    {
        const bool branch_taken_0x1ba770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba770) {
            ctx->pc = 0x1BA7ECu;
            return;
        }
    }
    ctx->pc = 0x1BA778u;
    // 0x1ba778: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1ba778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba77c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ba77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba780: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x1ba780u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba784: 0xe6601b50  swc1        $f0, 0x1B50($s3)
    ctx->pc = 0x1ba784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 6992), bits); }
    // 0x1ba788: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1BA788u;
    {
        const bool branch_taken_0x1ba788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba788) {
            ctx->pc = 0x1BA7ECu;
            return;
        }
    }
    ctx->pc = 0x1BA790u;
}
