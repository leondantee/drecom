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

// Function: caseD_4
// Address: 0x208e60 - 0x208f0c
void caseD_4_0x208e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x208e60");
#endif

    ctx->pc = 0x208e60u;

    // 0x208e60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x208e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208e64: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x208e64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x208e68: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x208E68u;
    {
        const bool branch_taken_0x208e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e68) {
            ctx->pc = 0x208F90u;
            return;
        }
    }
    ctx->pc = 0x208E70u;
    // 0x208e70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x208e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208e74: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x208e74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x208e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208e7c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x208e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x208e80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x208e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x208e84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x208e84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x208e88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x208e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x208e8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x208e8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x208e90: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x208e94: 0x14200066  bnez        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x208E94u;
    {
        const bool branch_taken_0x208e94 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x208e94) {
            ctx->pc = 0x209030u;
            return;
        }
    }
    ctx->pc = 0x208E9Cu;
    // 0x208e9c: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208ea4: 0x0  nop
    ctx->pc = 0x208ea4u;
    // NOP
    // 0x208ea8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x208ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208eac: 0x0  nop
    ctx->pc = 0x208eacu;
    // NOP
    // 0x208eb0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x208EB0u;
    {
        const bool branch_taken_0x208eb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x208eb0) {
            ctx->pc = 0x208F0Cu;
            return;
        }
    }
    ctx->pc = 0x208EB8u;
    // 0x208eb8: 0xc60101a0  lwc1        $f1, 0x1A0($s0)
    ctx->pc = 0x208eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208ebc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x208ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x208ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208ec4: 0x0  nop
    ctx->pc = 0x208ec4u;
    // NOP
    // 0x208ec8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x208ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x208ecc: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x208eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x208ed0: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x208ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208ed4: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x208ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x208ed8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x208ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x208edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208ee0: 0x0  nop
    ctx->pc = 0x208ee0u;
    // NOP
    // 0x208ee4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x208ee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x208ee8: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x208ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x208eec: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x208eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208ef0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x208ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x208ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x208ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x208ef8: 0x0  nop
    ctx->pc = 0x208ef8u;
    // NOP
    // 0x208efc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x208efcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x208f00: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x208f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x208f04: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x208F04u;
    {
        const bool branch_taken_0x208f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208f04) {
            ctx->pc = 0x209030u;
            return;
        }
    }
    ctx->pc = 0x208F0Cu;
}
