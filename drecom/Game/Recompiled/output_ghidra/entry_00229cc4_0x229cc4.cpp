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

// Function: entry_00229cc4
// Address: 0x229cc4 - 0x229dbc
void entry_00229cc4_0x229cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229cc4_0x229cc4");
#endif

    switch (ctx->pc) {
        case 0x229cecu: goto label_229cec;
        default: break;
    }

    ctx->pc = 0x229cc4u;

    // 0x229cc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x229cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229cc8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x229cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x229ccc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x229cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229cd0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x229cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x229cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x229cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229cd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229cdc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229ce0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x229ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x229ce4: 0xc067654  jal         func_19D950
    ctx->pc = 0x229CE4u;
    SET_GPR_U32(ctx, 31, 0x229CECu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x229CE4u, 0x229CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CECu;
label_229cec:
    // 0x229cec: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x229cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x229cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x229cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229cf4: 0x0  nop
    ctx->pc = 0x229cf4u;
    // NOP
    // 0x229cf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x229cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x229cfc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x229cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x229d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d04: 0x0  nop
    ctx->pc = 0x229d04u;
    // NOP
    // 0x229d08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229d08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229d0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d14: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x229d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x229d18: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x229d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x229d1c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x229d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x229d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d24: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d28: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d2c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x229d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x229d30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x229d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x229d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d40: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x229d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x229d44: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x229d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x229d48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x229d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x229d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d54: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d58: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x229d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x229d5c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x229d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x229d60: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x229d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x229d64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d68: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d70: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x229d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x229d74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d78: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x229d78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x229d7c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x229d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x229d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x229d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229d84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229d8c: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x229d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x229d90: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x229d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x229d94: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x229d94u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229d98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x229d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x229d9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x229d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x229da0: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x229da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x229da4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229da8: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x229da8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x229dac: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x229dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x229db0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x229db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x229db4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x229db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x229db8: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x229db8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x229dbcu;
}
