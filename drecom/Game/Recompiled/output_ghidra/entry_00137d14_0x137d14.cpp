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

// Function: entry_00137d14
// Address: 0x137d14 - 0x137df0
void entry_00137d14_0x137d14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137d14_0x137d14");
#endif

    switch (ctx->pc) {
        case 0x137d5cu: goto label_137d5c;
        case 0x137d74u: goto label_137d74;
        case 0x137d90u: goto label_137d90;
        case 0x137da4u: goto label_137da4;
        case 0x137db8u: goto label_137db8;
        default: break;
    }

    ctx->pc = 0x137d14u;

    // 0x137d14: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137d18: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x137d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x137d1c: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x137d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x137d20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x137d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x137d24: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x137d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137d28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137d2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137d30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x137d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137d34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137d38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x137d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x137d3c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x137d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x137d40: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x137d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x137d44: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x137d44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137d48: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x137d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137d4c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137d50: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x137d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137d54: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x137D54u;
    SET_GPR_U32(ctx, 31, 0x137D5Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x137D54u, 0x137D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D5Cu;
label_137d5c:
    // 0x137d5c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x137d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137d60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137d64: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137d68: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x137d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x137d6c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x137D6Cu;
    SET_GPR_U32(ctx, 31, 0x137D74u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137D6Cu, 0x137D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D74u;
label_137d74:
    // 0x137d74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137d74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137d78: 0x0  nop
    ctx->pc = 0x137d78u;
    // NOP
    // 0x137d7c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x137d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x137d80: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137d84: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137d88: 0xc040c24  jal         func_103090
    ctx->pc = 0x137D88u;
    SET_GPR_U32(ctx, 31, 0x137D90u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x137D90u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137D90u) { return; }
    ctx->pc = 0x137D90u;
label_137d90:
    // 0x137d90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137d94: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137d98: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x137d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x137d9c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x137D9Cu;
    SET_GPR_U32(ctx, 31, 0x137DA4u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x137DA4u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137DA4u) { return; }
    ctx->pc = 0x137DA4u;
label_137da4:
    // 0x137da4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x137da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137da8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137dac: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x137dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137db0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x137DB0u;
    SET_GPR_U32(ctx, 31, 0x137DB8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x137DB0u, 0x137DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137DB8u;
label_137db8:
    // 0x137db8: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x137db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137dbc: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x137dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137dc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x137dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x137dc4: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x137dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x137dc8: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x137dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137dcc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137dd0: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x137dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137dd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137dd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137dd8: 0x0  nop
    ctx->pc = 0x137dd8u;
    // NOP
    // 0x137ddc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x137DDCu;
    {
        const bool branch_taken_0x137ddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x137ddc) {
            ctx->pc = 0x137DF0u;
            return;
        }
    }
    ctx->pc = 0x137DE4u;
    // 0x137de4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137de8: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x137de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137dec: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x137decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    ctx->pc = 0x137df0u;
}
