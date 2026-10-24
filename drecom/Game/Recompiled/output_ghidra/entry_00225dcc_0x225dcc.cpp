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

// Function: entry_00225dcc
// Address: 0x225dcc - 0x225e98
void entry_00225dcc_0x225dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225dcc_0x225dcc");
#endif

    switch (ctx->pc) {
        case 0x225df8u: goto label_225df8;
        case 0x225e14u: goto label_225e14;
        case 0x225e2cu: goto label_225e2c;
        case 0x225e38u: goto label_225e38;
        case 0x225e90u: goto label_225e90;
        default: break;
    }

    ctx->pc = 0x225dccu;

    // 0x225dcc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225dd0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x225dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225dd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225dd8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x225dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225ddc: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x225ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x225de0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x225de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x225de4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x225de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x225de8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x225de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x225dec: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x225decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x225df0: 0xc05c848  jal         func_172120
    ctx->pc = 0x225DF0u;
    SET_GPR_U32(ctx, 31, 0x225DF8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x225DF0u, 0x225DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DF8u;
label_225df8:
    // 0x225df8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x225df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x225dfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e00: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x225e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225e04: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x225e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e08: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x225e08u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x225e0c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x225E0Cu;
    SET_GPR_U32(ctx, 31, 0x225E14u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x225E0Cu, 0x225E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E14u;
label_225e14:
    // 0x225e14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e18: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x225e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x225e1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e20: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x225e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x225e24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x225E24u;
    SET_GPR_U32(ctx, 31, 0x225E2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x225E24u, 0x225E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E2Cu;
label_225e2c:
    // 0x225e2c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e30: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x225E30u;
    SET_GPR_U32(ctx, 31, 0x225E38u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x225E30u, 0x225E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E38u;
label_225e38:
    // 0x225e38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e3c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x225e3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x225e40: 0x106000f1  beqz        $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x225E40u;
    {
        const bool branch_taken_0x225e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x225e40) {
            ctx->pc = 0x226208u;
            return;
        }
    }
    ctx->pc = 0x225E48u;
    // 0x225e48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e4c: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x225e4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x225e50: 0x146000ed  bnez        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x225E50u;
    {
        const bool branch_taken_0x225e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225e50) {
            ctx->pc = 0x226208u;
            return;
        }
    }
    ctx->pc = 0x225E58u;
    // 0x225e58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e5c: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x225e5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x225e60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x225e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x225e64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x225e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x225e68: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x225E68u;
    {
        const bool branch_taken_0x225e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225e68) {
            ctx->pc = 0x225E98u;
            return;
        }
    }
    ctx->pc = 0x225E70u;
    // 0x225e70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e74: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x225e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225e78: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x225e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x225e7c: 0x24067809  addiu       $a2, $zero, 0x7809
    ctx->pc = 0x225e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30729));
    // 0x225e80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x225e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225e84: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x225e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x225e88: 0xc0965d0  jal         func_259740
    ctx->pc = 0x225E88u;
    SET_GPR_U32(ctx, 31, 0x225E90u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x225E88u, 0x225E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E90u;
label_225e90:
    // 0x225e90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x225E90u;
    {
        const bool branch_taken_0x225e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225e90) {
            ctx->pc = 0x225EB8u;
            return;
        }
    }
    ctx->pc = 0x225E98u;
}
