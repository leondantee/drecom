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

// Function: entry_00375ce8
// Address: 0x375ce8 - 0x375df0
void entry_00375ce8_0x375ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00375ce8_0x375ce8");
#endif

    switch (ctx->pc) {
        case 0x375d54u: goto label_375d54;
        case 0x375d8cu: goto label_375d8c;
        case 0x375dacu: goto label_375dac;
        default: break;
    }

    ctx->pc = 0x375ce8u;

    // 0x375ce8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375cec: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375cecu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375cf0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x375cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375cf8: 0x0  nop
    ctx->pc = 0x375cf8u;
    // NOP
    // 0x375cfc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375d00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375d04: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375d08: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x375d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x375d0c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x375d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x375d10: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x375d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x375d14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d18: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x375d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x375d1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x375d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d24: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x375d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x375d28: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x375d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x375d2c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x375d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x375d30: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x375d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x375d34: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x375d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375d38: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x375d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x375d3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x375d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x375d40: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x375d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x375d44: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x375d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x375d48: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x375d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x375d4c: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x375D4Cu;
    SET_GPR_U32(ctx, 31, 0x375D54u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x375D4Cu, 0x375D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D54u;
label_375d54:
    // 0x375d54: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375d58: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375d58u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375d5c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x375d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375d60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375d64: 0x0  nop
    ctx->pc = 0x375d64u;
    // NOP
    // 0x375d68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375d68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375d6c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375d70: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375d74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d78: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x375d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375d7c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x375d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375d80: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375d80u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375d84: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375D84u;
    SET_GPR_U32(ctx, 31, 0x375D8Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375D84u, 0x375D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D8Cu;
label_375d8c:
    // 0x375d8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d90: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x375d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x375d94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375d98: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375d9c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x375d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375da0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375da0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375da4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375DA4u;
    SET_GPR_U32(ctx, 31, 0x375DACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375DA4u, 0x375DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DACu;
label_375dac:
    // 0x375dac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375db0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x375db4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375db8: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375dbc: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x375dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x375dc0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375dc8: 0x0  nop
    ctx->pc = 0x375dc8u;
    // NOP
    // 0x375dcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x375dccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375dd0: 0x0  nop
    ctx->pc = 0x375dd0u;
    // NOP
    // 0x375dd4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x375DD4u;
    {
        const bool branch_taken_0x375dd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375dd4) {
            ctx->pc = 0x375DF0u;
            return;
        }
    }
    ctx->pc = 0x375DDCu;
    // 0x375ddc: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x375ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x375de0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375de8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375dec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x375df0u;
}
