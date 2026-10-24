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

// Function: entry_0034caf0
// Address: 0x34caf0 - 0x34cb68
void entry_0034caf0_0x34caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034caf0_0x34caf0");
#endif

    ctx->pc = 0x34caf0u;

    // 0x34caf0: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x34caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34caf4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x34caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x34caf8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x34caf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x34cafc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cafcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cb00: 0x0  nop
    ctx->pc = 0x34cb00u;
    // NOP
    // 0x34cb04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34cb04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34cb08: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34cb0c: 0xc601012c  lwc1        $f1, 0x12C($s0)
    ctx->pc = 0x34cb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cb10: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x34cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x34cb14: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x34cb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x34cb18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34cb18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cb1c: 0x0  nop
    ctx->pc = 0x34cb1cu;
    // NOP
    // 0x34cb20: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34cb20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34cb24: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34cb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34cb28: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x34cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cb2c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x34cb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x34cb30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x34cb30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cb34: 0x0  nop
    ctx->pc = 0x34cb34u;
    // NOP
    // 0x34cb38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34cb38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cb3c: 0x0  nop
    ctx->pc = 0x34cb3cu;
    // NOP
    // 0x34cb40: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x34CB40u;
    {
        const bool branch_taken_0x34cb40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34cb40) {
            ctx->pc = 0x34CB68u;
            return;
        }
    }
    ctx->pc = 0x34CB48u;
    // 0x34cb48: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x34cb48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x34cb4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x34cb4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cb50: 0x0  nop
    ctx->pc = 0x34cb50u;
    // NOP
    // 0x34cb54: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34cb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34cb58: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x34cb58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x34cb5c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x34cb5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34cb60: 0x0  nop
    ctx->pc = 0x34cb60u;
    // NOP
    // 0x34cb64: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34cb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    ctx->pc = 0x34cb68u;
}
