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

// Function: entry_001b4eb4
// Address: 0x1b4eb4 - 0x1b4f84
void entry_001b4eb4_0x1b4eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4eb4_0x1b4eb4");
#endif

    switch (ctx->pc) {
        case 0x1b4ec4u: goto label_1b4ec4;
        case 0x1b4ed4u: goto label_1b4ed4;
        case 0x1b4f38u: goto label_1b4f38;
        case 0x1b4f54u: goto label_1b4f54;
        default: break;
    }

    ctx->pc = 0x1b4eb4u;

label_1b4eb4:
    // 0x1b4eb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b4eb8:
    // 0x1b4eb8: 0xc60c1380  lwc1        $f12, 0x1380($s0)
    ctx->pc = 0x1b4eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b4ebc:
    // 0x1b4ebc: 0xc067844  jal         func_19E110
label_1b4ec0:
    if (ctx->pc == 0x1B4EC0u) {
        ctx->pc = 0x1B4EC4u;
        goto label_1b4ec4;
    }
    ctx->pc = 0x1B4EBCu;
    SET_GPR_U32(ctx, 31, 0x1B4EC4u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x1B4EBCu, 0x1B4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EC4u;
label_1b4ec4:
    // 0x1b4ec4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b4ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b4ec8:
    // 0x1b4ec8: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1b4ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_1b4ecc:
    // 0x1b4ecc: 0xc040c9e  jal         func_103278
label_1b4ed0:
    if (ctx->pc == 0x1B4ED0u) {
        ctx->pc = 0x1B4ED4u;
        goto label_1b4ed4;
    }
    ctx->pc = 0x1B4ECCu;
    SET_GPR_U32(ctx, 31, 0x1B4ED4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B4ED4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B4ED4u) { return; }
    ctx->pc = 0x1B4ED4u;
label_1b4ed4:
    // 0x1b4ed4: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x1b4ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4ed8:
    // 0x1b4ed8: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x1b4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
label_1b4edc:
    // 0x1b4edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4ee0:
    // 0x1b4ee0: 0x0  nop
    ctx->pc = 0x1b4ee0u;
    // NOP
label_1b4ee4:
    // 0x1b4ee4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b4ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b4ee8:
    // 0x1b4ee8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1b4ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1b4eec:
    // 0x1b4eec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4ef0:
    // 0x1b4ef0: 0x0  nop
    ctx->pc = 0x1b4ef0u;
    // NOP
label_1b4ef4:
    // 0x1b4ef4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1b4ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1b4ef8:
    // 0x1b4ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4efc:
    // 0x1b4efc: 0x0  nop
    ctx->pc = 0x1b4efcu;
    // NOP
label_1b4f00:
    // 0x1b4f00: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1b4f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1b4f04:
    // 0x1b4f04: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1b4f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_1b4f08:
    // 0x1b4f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4f0c:
    // 0x1b4f0c: 0x0  nop
    ctx->pc = 0x1b4f0cu;
    // NOP
label_1b4f10:
    // 0x1b4f10: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1b4f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1b4f14:
    // 0x1b4f14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b4f18:
    // 0x1b4f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4f1c:
    // 0x1b4f1c: 0x0  nop
    ctx->pc = 0x1b4f1cu;
    // NOP
label_1b4f20:
    // 0x1b4f20: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1b4f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1b4f24:
    // 0x1b4f24: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1b4f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1b4f28:
    // 0x1b4f28: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b4f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b4f2c:
    // 0x1b4f2c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1b4f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1b4f30:
    // 0x1b4f30: 0xc040bf4  jal         func_102FD0
label_1b4f34:
    if (ctx->pc == 0x1B4F34u) {
        ctx->pc = 0x1B4F38u;
        goto label_1b4f38;
    }
    ctx->pc = 0x1B4F30u;
    SET_GPR_U32(ctx, 31, 0x1B4F38u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B4F38u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B4F38u) { return; }
    ctx->pc = 0x1B4F38u;
label_1b4f38:
    // 0x1b4f38: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1b4f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1b4f3c:
    // 0x1b4f3c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1b4f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1b4f40:
    // 0x1b4f40: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1b4f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1b4f44:
    // 0x1b4f44: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1b4f48:
    // 0x1b4f48: 0x34470007  ori         $a3, $v0, 0x7
    ctx->pc = 0x1b4f48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_1b4f4c:
    // 0x1b4f4c: 0xc059e1c  jal         func_167870
label_1b4f50:
    if (ctx->pc == 0x1B4F50u) {
        ctx->pc = 0x1B4F54u;
        goto label_1b4f54;
    }
    ctx->pc = 0x1B4F4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4F54u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x1B4F4Cu, 0x1B4F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F54u;
label_1b4f54:
    // 0x1b4f54: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1b4f54u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1b4f58:
    // 0x1b4f58: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x1b4f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1b4f5c:
    // 0x1b4f5c: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x1b4f5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1b4f60:
    // 0x1b4f60: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
label_1b4f64:
    if (ctx->pc == 0x1B4F64u) {
        ctx->pc = 0x1B4F68u;
        goto label_1b4f68;
    }
    ctx->pc = 0x1B4F60u;
    {
        const bool branch_taken_0x1b4f60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4f60) {
            ctx->pc = 0x1B5088u;
            return;
        }
    }
    ctx->pc = 0x1B4F68u;
label_1b4f68:
    // 0x1b4f68: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1b4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1b4f6c:
    // 0x1b4f6c: 0x2443f280  addiu       $v1, $v0, -0xD80
    ctx->pc = 0x1b4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963840));
label_1b4f70:
    // 0x1b4f70: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1b4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b4f74:
    // 0x1b4f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b4f78:
    // 0x1b4f78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b4f7c:
    // 0x1b4f7c: 0x400008  jr          $v0
label_1b4f80:
    if (ctx->pc == 0x1B4F80u) {
        ctx->pc = 0x1B4F84u;
        goto label_fallthrough_0x1b4f7c;
    }
    ctx->pc = 0x1B4F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1b4f7c:
    ctx->pc = 0x1B4F84u;
}
