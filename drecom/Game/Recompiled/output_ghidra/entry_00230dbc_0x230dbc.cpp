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

// Function: entry_00230dbc
// Address: 0x230dbc - 0x230e88
void entry_00230dbc_0x230dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230dbc_0x230dbc");
#endif

    switch (ctx->pc) {
        case 0x230ddcu: goto label_230ddc;
        default: break;
    }

    ctx->pc = 0x230dbcu;

    // 0x230dbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230dc0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230dc4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x230dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230dc8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230dcc: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x230dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230dd0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x230dd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x230dd4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x230DD4u;
    SET_GPR_U32(ctx, 31, 0x230DDCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x230DD4u, 0x230DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DDCu;
label_230ddc:
    // 0x230ddc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230de0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x230de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x230de4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230de8: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x230de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230dec: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x230decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x230df0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x230df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x230df4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230df8: 0x0  nop
    ctx->pc = 0x230df8u;
    // NOP
    // 0x230dfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230dfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230e00: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x230e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x230e04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e08: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x230e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e0c: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x230e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x230e10: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x230e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x230e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230e18: 0x0  nop
    ctx->pc = 0x230e18u;
    // NOP
    // 0x230e1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230e20: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x230e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x230e24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e28: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x230e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e2c: 0x3c023b75  lui         $v0, 0x3B75
    ctx->pc = 0x230e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15221 << 16));
    // 0x230e30: 0x3442c290  ori         $v0, $v0, 0xC290
    ctx->pc = 0x230e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49808);
    // 0x230e34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230e38: 0x0  nop
    ctx->pc = 0x230e38u;
    // NOP
    // 0x230e3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230e3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230e40: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x230e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x230e44: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x230e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e48: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x230e48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x230e4c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x230e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x230e50: 0xa4821278  sh          $v0, 0x1278($a0)
    ctx->pc = 0x230e50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x230e54: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x230E54u;
    {
        const bool branch_taken_0x230e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x230e54) {
            ctx->pc = 0x230E88u;
            return;
        }
    }
    ctx->pc = 0x230E5Cu;
    // 0x230e5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x230e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230e60: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e64: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x230e64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x230e68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e6c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x230e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x230e70: 0x3c023d81  lui         $v0, 0x3D81
    ctx->pc = 0x230e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15745 << 16));
    // 0x230e74: 0x3442fabc  ori         $v0, $v0, 0xFABC
    ctx->pc = 0x230e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64188);
    // 0x230e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230e7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230e80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x230e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x230e84: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x230e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    ctx->pc = 0x230e88u;
}
