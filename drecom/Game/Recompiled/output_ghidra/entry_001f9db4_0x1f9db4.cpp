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

// Function: entry_001f9db4
// Address: 0x1f9db4 - 0x1f9e7c
void entry_001f9db4_0x1f9db4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9db4_0x1f9db4");
#endif

    ctx->pc = 0x1f9db4u;

    // 0x1f9db4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1f9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f9db8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9dbc: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1f9dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f9dc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9dc4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9dc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9dcc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9dd0: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x1f9dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9dd4: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f9dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9dd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f9dd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f9ddc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9de0: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x1f9de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9de4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9de8: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1f9de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1f9dec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9df0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9df4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9df8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9dfc: 0xc481008c  lwc1        $f1, 0x8C($a0)
    ctx->pc = 0x1f9dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9e00: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x1f9e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9e04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f9e04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f9e08: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e0c: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x1f9e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9e10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f9e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9e14: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x1f9e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x1f9e18: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e1c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9e20: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1f9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1f9e24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9e24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9e28: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x1f9e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9e2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9e30: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x1f9e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x1f9e34: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e38: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9e3c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1f9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1f9e40: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1f9e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1f9e44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9e48: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x1f9e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9e4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9e50: 0xe4800084  swc1        $f0, 0x84($a0)
    ctx->pc = 0x1f9e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x1f9e54: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9e58: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f9e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f9e5c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1f9e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1f9e60: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1f9e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1f9e64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f9e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f9e68: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f9e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9e6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f9e6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9e70: 0xe480008c  swc1        $f0, 0x8C($a0)
    ctx->pc = 0x1f9e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x1f9e74: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1F9E74u;
    {
        const bool branch_taken_0x1f9e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9e74) {
            ctx->pc = 0x1FA090u;
            return;
        }
    }
    ctx->pc = 0x1F9E7Cu;
}
