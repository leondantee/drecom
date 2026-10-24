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

// Function: entry_0034c2c4
// Address: 0x34c2c4 - 0x34c32c
void entry_0034c2c4_0x34c2c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c2c4_0x34c2c4");
#endif

    ctx->pc = 0x34c2c4u;

    // 0x34c2c4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c2c8: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x34c2c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x34c2cc: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x34c2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34c2d0: 0xa465127a  sh          $a1, 0x127A($v1)
    ctx->pc = 0x34c2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 5));
    // 0x34c2d4: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x34c2d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x34c2d8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x34c2d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x34c2dc: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x34c2dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x34c2e0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x34c2e0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x34c2e4: 0x28e1001a  slti        $at, $a3, 0x1A
    ctx->pc = 0x34c2e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x34c2e8: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x34C2E8u;
    {
        const bool branch_taken_0x34c2e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34c2e8) {
            ctx->pc = 0x34C32Cu;
            return;
        }
    }
    ctx->pc = 0x34C2F0u;
    // 0x34c2f0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c2f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34c2f8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34c2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c2fc: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x34c2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c300: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x34c300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x34c304: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34c304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x34c308: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x34c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c30c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34c310: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c314: 0x3c043da3  lui         $a0, 0x3DA3
    ctx->pc = 0x34c314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15779 << 16));
    // 0x34c318: 0x3490d70a  ori         $s0, $a0, 0xD70A
    ctx->pc = 0x34c318u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x34c31c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x34c31cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c320: 0x0  nop
    ctx->pc = 0x34c320u;
    // NOP
    // 0x34c324: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34c324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34c328: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x34c328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    ctx->pc = 0x34c32cu;
}
