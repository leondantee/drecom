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

// Function: entry_00226ca8
// Address: 0x226ca8 - 0x226d74
void entry_00226ca8_0x226ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226ca8_0x226ca8");
#endif

    switch (ctx->pc) {
        case 0x226ce4u: goto label_226ce4;
        case 0x226d38u: goto label_226d38;
        case 0x226d6cu: goto label_226d6c;
        default: break;
    }

    ctx->pc = 0x226ca8u;

    // 0x226ca8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x226ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226cac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x226cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x226cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x226cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x226cb4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x226cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x226cb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226cb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226cbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226cc0: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x226cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x226cc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226cc8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x226cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226ccc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x226cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x226cd0: 0x2406781e  addiu       $a2, $zero, 0x781E
    ctx->pc = 0x226cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30750));
    // 0x226cd4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x226cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226cd8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x226cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x226cdc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x226CDCu;
    SET_GPR_U32(ctx, 31, 0x226CE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x226CDCu, 0x226CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CE4u;
label_226ce4:
    // 0x226ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226ce8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226cec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226cf0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x226cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x226cf4: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x226cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x226cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226cfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226d00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226d04: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x226d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x226d08: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x226d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x226d0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226d10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226d14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226d18: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x226d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x226d1c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x226d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x226d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226d24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226d28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226d2c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x226d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x226d30: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226D30u;
    SET_GPR_U32(ctx, 31, 0x226D38u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226D30u, 0x226D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D38u;
label_226d38:
    // 0x226d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x226d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226d3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x226d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226d40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x226D40u;
    {
        const bool branch_taken_0x226d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226d40) {
            ctx->pc = 0x226D74u;
            return;
        }
    }
    ctx->pc = 0x226D48u;
    // 0x226d48: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x226d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x226d4c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x226d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x226d50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x226d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x226d54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x226d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226d58: 0x24040516  addiu       $a0, $zero, 0x516
    ctx->pc = 0x226d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1302));
    // 0x226d5c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x226d60: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x226d60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x226d64: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x226D64u;
    SET_GPR_U32(ctx, 31, 0x226D6Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x226D64u, 0x226D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D6Cu;
label_226d6c:
    // 0x226d6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x226D6Cu;
    {
        const bool branch_taken_0x226d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226d6c) {
            ctx->pc = 0x226D98u;
            return;
        }
    }
    ctx->pc = 0x226D74u;
}
