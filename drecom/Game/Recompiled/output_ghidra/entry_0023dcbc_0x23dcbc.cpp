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

// Function: entry_0023dcbc
// Address: 0x23dcbc - 0x23dd74
void entry_0023dcbc_0x23dcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023dcbc_0x23dcbc");
#endif

    switch (ctx->pc) {
        case 0x23dcf0u: goto label_23dcf0;
        case 0x23dd24u: goto label_23dd24;
        case 0x23dd4cu: goto label_23dd4c;
        case 0x23dd6cu: goto label_23dd6c;
        default: break;
    }

    ctx->pc = 0x23dcbcu;

    // 0x23dcbc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dcc0: 0x8442127c  lh          $v0, 0x127C($v0)
    ctx->pc = 0x23dcc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4732)));
    // 0x23dcc4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x23DCC4u;
    {
        const bool branch_taken_0x23dcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dcc4) {
            ctx->pc = 0x23DD74u;
            return;
        }
    }
    ctx->pc = 0x23DCCCu;
    // 0x23dccc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dcd0: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23dcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dcd4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x23dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x23dcd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23dcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23dcdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dcdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dce0: 0x0  nop
    ctx->pc = 0x23dce0u;
    // NOP
    // 0x23dce4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x23dce4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23dce8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23DCE8u;
    SET_GPR_U32(ctx, 31, 0x23DCF0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23DCE8u, 0x23DCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DCF0u;
label_23dcf0:
    // 0x23dcf0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dcf4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23dcf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23dcf8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dcfc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x23dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd04: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23dd08: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23dd0c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23dd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23dd10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23dd14: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23dd18: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x23dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23dd1c: 0xc05c848  jal         func_172120
    ctx->pc = 0x23DD1Cu;
    SET_GPR_U32(ctx, 31, 0x23DD24u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23DD1Cu, 0x23DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD24u;
label_23dd24:
    // 0x23dd24: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x23dd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x23dd28: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd2c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23dd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dd30: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x23dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x23dd34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23dd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23dd38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23dd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23dd3c: 0x0  nop
    ctx->pc = 0x23dd3cu;
    // NOP
    // 0x23dd40: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x23dd40u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23dd44: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23DD44u;
    SET_GPR_U32(ctx, 31, 0x23DD4Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23DD44u, 0x23DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD4Cu;
label_23dd4c:
    // 0x23dd4c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd50: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23dd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23dd54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd58: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dd5c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x23dd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dd60: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23dd60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23dd64: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23DD64u;
    SET_GPR_U32(ctx, 31, 0x23DD6Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23DD64u, 0x23DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DD6Cu;
label_23dd6c:
    // 0x23dd6c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dd70: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23dd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x23dd74u;
}
