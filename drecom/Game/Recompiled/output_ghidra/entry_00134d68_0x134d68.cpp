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

// Function: entry_00134d68
// Address: 0x134d68 - 0x134de4
void entry_00134d68_0x134d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134d68_0x134d68");
#endif

    ctx->pc = 0x134d68u;

    // 0x134d68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134d6c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134d70: 0xc4610444  lwc1        $f1, 0x444($v1)
    ctx->pc = 0x134d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134d78: 0x0  nop
    ctx->pc = 0x134d78u;
    // NOP
    // 0x134d7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134d7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134d80: 0x0  nop
    ctx->pc = 0x134d80u;
    // NOP
    // 0x134d84: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x134D84u;
    {
        const bool branch_taken_0x134d84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134d84) {
            ctx->pc = 0x134DFCu;
            return;
        }
    }
    ctx->pc = 0x134D8Cu;
    // 0x134d8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134d90: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x134d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134d94: 0xc4610444  lwc1        $f1, 0x444($v1)
    ctx->pc = 0x134d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134d98: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134d9c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x134d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134da0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x134da0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134da4: 0x0  nop
    ctx->pc = 0x134da4u;
    // NOP
    // 0x134da8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x134da8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134dac: 0x0  nop
    ctx->pc = 0x134dacu;
    // NOP
    // 0x134db0: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x134DB0u;
    {
        const bool branch_taken_0x134db0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134db0) {
            ctx->pc = 0x134DE4u;
            return;
        }
    }
    ctx->pc = 0x134DB8u;
    // 0x134db8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x134db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x134dbc: 0x8c6502d0  lw          $a1, 0x2D0($v1)
    ctx->pc = 0x134dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x134dc0: 0xc4a10444  lwc1        $f1, 0x444($a1)
    ctx->pc = 0x134dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 1092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134dc4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x134dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x134dc8: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x134dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x134dcc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x134dccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134dd0: 0x0  nop
    ctx->pc = 0x134dd0u;
    // NOP
    // 0x134dd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x134dd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x134dd8: 0xe4a00444  swc1        $f0, 0x444($a1)
    ctx->pc = 0x134dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 1092), bits); }
    // 0x134ddc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x134DDCu;
    {
        const bool branch_taken_0x134ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ddc) {
            ctx->pc = 0x134E64u;
            return;
        }
    }
    ctx->pc = 0x134DE4u;
}
