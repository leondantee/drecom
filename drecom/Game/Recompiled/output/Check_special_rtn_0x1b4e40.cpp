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

// Function: Check_special_rtn
// Address: 0x1b4e40 - 0x1b50e8
void Check_special_rtn_0x1b4e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_special_rtn_0x1b4e40");
#endif

    switch (ctx->pc) {
        case 0x1b4e40u: goto label_1b4e40;
        case 0x1b4e44u: goto label_1b4e44;
        case 0x1b4e48u: goto label_1b4e48;
        case 0x1b4e4cu: goto label_1b4e4c;
        case 0x1b4e50u: goto label_1b4e50;
        case 0x1b4e54u: goto label_1b4e54;
        case 0x1b4e58u: goto label_1b4e58;
        case 0x1b4e5cu: goto label_1b4e5c;
        case 0x1b4e60u: goto label_1b4e60;
        case 0x1b4e64u: goto label_1b4e64;
        case 0x1b4e68u: goto label_1b4e68;
        case 0x1b4e6cu: goto label_1b4e6c;
        case 0x1b4e70u: goto label_1b4e70;
        case 0x1b4e74u: goto label_1b4e74;
        case 0x1b4e78u: goto label_1b4e78;
        case 0x1b4e7cu: goto label_1b4e7c;
        case 0x1b4e80u: goto label_1b4e80;
        case 0x1b4e84u: goto label_1b4e84;
        case 0x1b4e88u: goto label_1b4e88;
        case 0x1b4e8cu: goto label_1b4e8c;
        case 0x1b4e90u: goto label_1b4e90;
        case 0x1b4e94u: goto label_1b4e94;
        case 0x1b4e98u: goto label_1b4e98;
        case 0x1b4e9cu: goto label_1b4e9c;
        case 0x1b4ea0u: goto label_1b4ea0;
        case 0x1b4ea4u: goto label_1b4ea4;
        case 0x1b4ea8u: goto label_1b4ea8;
        case 0x1b4eacu: goto label_1b4eac;
        case 0x1b4eb0u: goto label_1b4eb0;
        case 0x1b4eb4u: goto label_1b4eb4;
        case 0x1b4eb8u: goto label_1b4eb8;
        case 0x1b4ebcu: goto label_1b4ebc;
        case 0x1b4ec0u: goto label_1b4ec0;
        case 0x1b4ec4u: goto label_1b4ec4;
        case 0x1b4ec8u: goto label_1b4ec8;
        case 0x1b4eccu: goto label_1b4ecc;
        case 0x1b4ed0u: goto label_1b4ed0;
        case 0x1b4ed4u: goto label_1b4ed4;
        case 0x1b4ed8u: goto label_1b4ed8;
        case 0x1b4edcu: goto label_1b4edc;
        case 0x1b4ee0u: goto label_1b4ee0;
        case 0x1b4ee4u: goto label_1b4ee4;
        case 0x1b4ee8u: goto label_1b4ee8;
        case 0x1b4eecu: goto label_1b4eec;
        case 0x1b4ef0u: goto label_1b4ef0;
        case 0x1b4ef4u: goto label_1b4ef4;
        case 0x1b4ef8u: goto label_1b4ef8;
        case 0x1b4efcu: goto label_1b4efc;
        case 0x1b4f00u: goto label_1b4f00;
        case 0x1b4f04u: goto label_1b4f04;
        case 0x1b4f08u: goto label_1b4f08;
        case 0x1b4f0cu: goto label_1b4f0c;
        case 0x1b4f10u: goto label_1b4f10;
        case 0x1b4f14u: goto label_1b4f14;
        case 0x1b4f18u: goto label_1b4f18;
        case 0x1b4f1cu: goto label_1b4f1c;
        case 0x1b4f20u: goto label_1b4f20;
        case 0x1b4f24u: goto label_1b4f24;
        case 0x1b4f28u: goto label_1b4f28;
        case 0x1b4f2cu: goto label_1b4f2c;
        case 0x1b4f30u: goto label_1b4f30;
        case 0x1b4f34u: goto label_1b4f34;
        case 0x1b4f38u: goto label_1b4f38;
        case 0x1b4f3cu: goto label_1b4f3c;
        case 0x1b4f40u: goto label_1b4f40;
        case 0x1b4f44u: goto label_1b4f44;
        case 0x1b4f48u: goto label_1b4f48;
        case 0x1b4f4cu: goto label_1b4f4c;
        case 0x1b4f50u: goto label_1b4f50;
        case 0x1b4f54u: goto label_1b4f54;
        case 0x1b4f58u: goto label_1b4f58;
        case 0x1b4f5cu: goto label_1b4f5c;
        case 0x1b4f60u: goto label_1b4f60;
        case 0x1b4f64u: goto label_1b4f64;
        case 0x1b4f68u: goto label_1b4f68;
        case 0x1b4f6cu: goto label_1b4f6c;
        case 0x1b4f70u: goto label_1b4f70;
        case 0x1b4f74u: goto label_1b4f74;
        case 0x1b4f78u: goto label_1b4f78;
        case 0x1b4f7cu: goto label_1b4f7c;
        case 0x1b4f80u: goto label_1b4f80;
        case 0x1b4f84u: goto label_1b4f84;
        case 0x1b4f88u: goto label_1b4f88;
        case 0x1b4f8cu: goto label_1b4f8c;
        case 0x1b4f90u: goto label_1b4f90;
        case 0x1b4f94u: goto label_1b4f94;
        case 0x1b4f98u: goto label_1b4f98;
        case 0x1b4f9cu: goto label_1b4f9c;
        case 0x1b4fa0u: goto label_1b4fa0;
        case 0x1b4fa4u: goto label_1b4fa4;
        case 0x1b4fa8u: goto label_1b4fa8;
        case 0x1b4facu: goto label_1b4fac;
        case 0x1b4fb0u: goto label_1b4fb0;
        case 0x1b4fb4u: goto label_1b4fb4;
        case 0x1b4fb8u: goto label_1b4fb8;
        case 0x1b4fbcu: goto label_1b4fbc;
        case 0x1b4fc0u: goto label_1b4fc0;
        case 0x1b4fc4u: goto label_1b4fc4;
        case 0x1b4fc8u: goto label_1b4fc8;
        case 0x1b4fccu: goto label_1b4fcc;
        case 0x1b4fd0u: goto label_1b4fd0;
        case 0x1b4fd4u: goto label_1b4fd4;
        case 0x1b4fd8u: goto label_1b4fd8;
        case 0x1b4fdcu: goto label_1b4fdc;
        case 0x1b4fe0u: goto label_1b4fe0;
        case 0x1b4fe4u: goto label_1b4fe4;
        case 0x1b4fe8u: goto label_1b4fe8;
        case 0x1b4fecu: goto label_1b4fec;
        case 0x1b4ff0u: goto label_1b4ff0;
        case 0x1b4ff4u: goto label_1b4ff4;
        case 0x1b4ff8u: goto label_1b4ff8;
        case 0x1b4ffcu: goto label_1b4ffc;
        case 0x1b5000u: goto label_1b5000;
        case 0x1b5004u: goto label_1b5004;
        case 0x1b5008u: goto label_1b5008;
        case 0x1b500cu: goto label_1b500c;
        case 0x1b5010u: goto label_1b5010;
        case 0x1b5014u: goto label_1b5014;
        case 0x1b5018u: goto label_1b5018;
        case 0x1b501cu: goto label_1b501c;
        case 0x1b5020u: goto label_1b5020;
        case 0x1b5024u: goto label_1b5024;
        case 0x1b5028u: goto label_1b5028;
        case 0x1b502cu: goto label_1b502c;
        case 0x1b5030u: goto label_1b5030;
        case 0x1b5034u: goto label_1b5034;
        case 0x1b5038u: goto label_1b5038;
        case 0x1b503cu: goto label_1b503c;
        case 0x1b5040u: goto label_1b5040;
        case 0x1b5044u: goto label_1b5044;
        case 0x1b5048u: goto label_1b5048;
        case 0x1b504cu: goto label_1b504c;
        case 0x1b5050u: goto label_1b5050;
        case 0x1b5054u: goto label_1b5054;
        case 0x1b5058u: goto label_1b5058;
        case 0x1b505cu: goto label_1b505c;
        case 0x1b5060u: goto label_1b5060;
        case 0x1b5064u: goto label_1b5064;
        case 0x1b5068u: goto label_1b5068;
        case 0x1b506cu: goto label_1b506c;
        case 0x1b5070u: goto label_1b5070;
        case 0x1b5074u: goto label_1b5074;
        case 0x1b5078u: goto label_1b5078;
        case 0x1b507cu: goto label_1b507c;
        case 0x1b5080u: goto label_1b5080;
        case 0x1b5084u: goto label_1b5084;
        case 0x1b5088u: goto label_1b5088;
        case 0x1b508cu: goto label_1b508c;
        case 0x1b5090u: goto label_1b5090;
        case 0x1b5094u: goto label_1b5094;
        case 0x1b5098u: goto label_1b5098;
        case 0x1b509cu: goto label_1b509c;
        case 0x1b50a0u: goto label_1b50a0;
        case 0x1b50a4u: goto label_1b50a4;
        case 0x1b50a8u: goto label_1b50a8;
        case 0x1b50acu: goto label_1b50ac;
        case 0x1b50b0u: goto label_1b50b0;
        case 0x1b50b4u: goto label_1b50b4;
        case 0x1b50b8u: goto label_1b50b8;
        case 0x1b50bcu: goto label_1b50bc;
        case 0x1b50c0u: goto label_1b50c0;
        case 0x1b50c4u: goto label_1b50c4;
        case 0x1b50c8u: goto label_1b50c8;
        case 0x1b50ccu: goto label_1b50cc;
        case 0x1b50d0u: goto label_1b50d0;
        case 0x1b50d4u: goto label_1b50d4;
        case 0x1b50d8u: goto label_1b50d8;
        case 0x1b50dcu: goto label_1b50dc;
        case 0x1b50e0u: goto label_1b50e0;
        case 0x1b50e4u: goto label_1b50e4;
        default: break;
    }

    ctx->pc = 0x1b4e40u;

label_1b4e40:
    // 0x1b4e40: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b4e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b4e44:
    // 0x1b4e44: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1b4e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
label_1b4e48:
    // 0x1b4e48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b4e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b4e4c:
    // 0x1b4e4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b4e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b4e50:
    // 0x1b4e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b4e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b4e54:
    // 0x1b4e54: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1b4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1b4e58:
    // 0x1b4e58: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x1b4e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_1b4e5c:
    // 0x1b4e5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b4e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b4e60:
    // 0x1b4e60: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1b4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_1b4e64:
    // 0x1b4e64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b4e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b4e68:
    // 0x1b4e68: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
label_1b4e6c:
    if (ctx->pc == 0x1B4E6Cu) {
        ctx->pc = 0x1B4E70u;
        goto label_1b4e70;
    }
    ctx->pc = 0x1B4E68u;
    {
        const bool branch_taken_0x1b4e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e68) {
            ctx->pc = 0x1B50ACu;
            goto label_1b50ac;
        }
    }
    ctx->pc = 0x1B4E70u;
label_1b4e70:
    // 0x1b4e70: 0xc6011b5c  lwc1        $f1, 0x1B5C($s0)
    ctx->pc = 0x1b4e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4e74:
    // 0x1b4e74: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b4e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1b4e78:
    // 0x1b4e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4e7c:
    // 0x1b4e7c: 0x0  nop
    ctx->pc = 0x1b4e7cu;
    // NOP
label_1b4e80:
    // 0x1b4e80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b4e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b4e84:
    // 0x1b4e84: 0x0  nop
    ctx->pc = 0x1b4e84u;
    // NOP
label_1b4e88:
    // 0x1b4e88: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_1b4e8c:
    if (ctx->pc == 0x1B4E8Cu) {
        ctx->pc = 0x1B4E90u;
        goto label_1b4e90;
    }
    ctx->pc = 0x1B4E88u;
    {
        const bool branch_taken_0x1b4e88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b4e88) {
            ctx->pc = 0x1B4EB0u;
            goto label_1b4eb0;
        }
    }
    ctx->pc = 0x1B4E90u;
label_1b4e90:
    // 0x1b4e90: 0xc60c1380  lwc1        $f12, 0x1380($s0)
    ctx->pc = 0x1b4e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b4e94:
    // 0x1b4e94: 0xc60d1568  lwc1        $f13, 0x1568($s0)
    ctx->pc = 0x1b4e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b4e98:
    // 0x1b4e98: 0x9204156c  lbu         $a0, 0x156C($s0)
    ctx->pc = 0x1b4e98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5484)));
label_1b4e9c:
    // 0x1b4e9c: 0xc058978  jal         func_1625E0
label_1b4ea0:
    if (ctx->pc == 0x1B4EA0u) {
        ctx->pc = 0x1B4EA4u;
        goto label_1b4ea4;
    }
    ctx->pc = 0x1B4E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B4EA4u);
    ctx->pc = 0x1625E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1625E0u, 0x1B4E9Cu, 0x1B4EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EA4u;
label_1b4ea4:
    // 0x1b4ea4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1b4ea4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b4ea8:
    // 0x1b4ea8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b4eac:
    if (ctx->pc == 0x1B4EACu) {
        ctx->pc = 0x1B4EB0u;
        goto label_1b4eb0;
    }
    ctx->pc = 0x1B4EA8u;
    {
        const bool branch_taken_0x1b4ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4ea8) {
            ctx->pc = 0x1B4EB4u;
            goto label_1b4eb4;
        }
    }
    ctx->pc = 0x1B4EB0u;
label_1b4eb0:
    // 0x1b4eb0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1b4eb0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
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
            goto label_1b5088;
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
        goto label_1b4f84;
    }
    ctx->pc = 0x1B4F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4F7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B4F84u;
label_1b4f84:
    // 0x1b4f84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b4f88:
    // 0x1b4f88: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b4f88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b4f8c:
    // 0x1b4f8c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b4f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4f90:
    // 0x1b4f90: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b4f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_1b4f94:
    // 0x1b4f94: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1b4f98:
    if (ctx->pc == 0x1B4F98u) {
        ctx->pc = 0x1B4F9Cu;
        goto label_1b4f9c;
    }
    ctx->pc = 0x1B4F94u;
    {
        const bool branch_taken_0x1b4f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4f94) {
            ctx->pc = 0x1B5088u;
            goto label_1b5088;
        }
    }
    ctx->pc = 0x1B4F9Cu;
label_1b4f9c:
    // 0x1b4f9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b4fa0:
    // 0x1b4fa0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b4fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b4fa4:
    // 0x1b4fa4: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x1b4fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4fa8:
    // 0x1b4fa8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b4fac:
    // 0x1b4fac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b4facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1b4fb0:
    // 0x1b4fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b4fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4fb4:
    // 0x1b4fb4: 0x0  nop
    ctx->pc = 0x1b4fb4u;
    // NOP
label_1b4fb8:
    // 0x1b4fb8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b4fb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b4fbc:
    // 0x1b4fbc: 0xc058fec  jal         func_163FB0
label_1b4fc0:
    if (ctx->pc == 0x1B4FC0u) {
        ctx->pc = 0x1B4FC4u;
        goto label_1b4fc4;
    }
    ctx->pc = 0x1B4FBCu;
    SET_GPR_U32(ctx, 31, 0x1B4FC4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B4FBCu, 0x1B4FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FC4u;
label_1b4fc4:
    // 0x1b4fc4: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b4fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_1b4fc8:
    // 0x1b4fc8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1b4fcc:
    if (ctx->pc == 0x1B4FCCu) {
        ctx->pc = 0x1B4FD0u;
        goto label_1b4fd0;
    }
    ctx->pc = 0x1B4FC8u;
    {
        const bool branch_taken_0x1b4fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4fc8) {
            ctx->pc = 0x1B5088u;
            goto label_1b5088;
        }
    }
    ctx->pc = 0x1B4FD0u;
label_1b4fd0:
    // 0x1b4fd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b4fd4:
    // 0x1b4fd4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b4fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b4fd8:
    // 0x1b4fd8: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x1b4fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4fdc:
    // 0x1b4fdc: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b4fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_1b4fe0:
    // 0x1b4fe0: 0x10000029  b           . + 4 + (0x29 << 2)
label_1b4fe4:
    if (ctx->pc == 0x1B4FE4u) {
        ctx->pc = 0x1B4FE8u;
        goto label_1b4fe8;
    }
    ctx->pc = 0x1B4FE0u;
    {
        const bool branch_taken_0x1b4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4fe0) {
            ctx->pc = 0x1B5088u;
            goto label_1b5088;
        }
    }
    ctx->pc = 0x1B4FE8u;
label_1b4fe8:
    // 0x1b4fe8: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_1b4fec:
    if (ctx->pc == 0x1B4FECu) {
        ctx->pc = 0x1B4FF0u;
        goto label_1b4ff0;
    }
    ctx->pc = 0x1B4FE8u;
    {
        const bool branch_taken_0x1b4fe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4fe8) {
            ctx->pc = 0x1B5024u;
            goto label_1b5024;
        }
    }
    ctx->pc = 0x1B4FF0u;
label_1b4ff0:
    // 0x1b4ff0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b4ff4:
    // 0x1b4ff4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b4ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b4ff8:
    // 0x1b4ff8: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x1b4ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b4ffc:
    // 0x1b4ffc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1b5000:
    // 0x1b5000: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1b5004:
    // 0x1b5004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b5008:
    // 0x1b5008: 0x0  nop
    ctx->pc = 0x1b5008u;
    // NOP
label_1b500c:
    // 0x1b500c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b500cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b5010:
    // 0x1b5010: 0xc058fec  jal         func_163FB0
label_1b5014:
    if (ctx->pc == 0x1B5014u) {
        ctx->pc = 0x1B5018u;
        goto label_1b5018;
    }
    ctx->pc = 0x1B5010u;
    SET_GPR_U32(ctx, 31, 0x1B5018u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B5010u, 0x1B5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5018u;
label_1b5018:
    // 0x1b5018: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b5018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_1b501c:
    // 0x1b501c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1b5020:
    if (ctx->pc == 0x1B5020u) {
        ctx->pc = 0x1B5024u;
        goto label_1b5024;
    }
    ctx->pc = 0x1B501Cu;
    {
        const bool branch_taken_0x1b501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b501c) {
            ctx->pc = 0x1B5088u;
            goto label_1b5088;
        }
    }
    ctx->pc = 0x1B5024u;
label_1b5024:
    // 0x1b5024: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b5028:
    // 0x1b5028: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b5028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b502c:
    // 0x1b502c: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x1b502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5030:
    // 0x1b5030: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b5030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_1b5034:
    // 0x1b5034: 0x10000014  b           . + 4 + (0x14 << 2)
label_1b5038:
    if (ctx->pc == 0x1B5038u) {
        ctx->pc = 0x1B503Cu;
        goto label_1b503c;
    }
    ctx->pc = 0x1B5034u;
    {
        const bool branch_taken_0x1b5034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5034) {
            ctx->pc = 0x1B5088u;
            goto label_1b5088;
        }
    }
    ctx->pc = 0x1B503Cu;
label_1b503c:
    // 0x1b503c: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_1b5040:
    if (ctx->pc == 0x1B5040u) {
        ctx->pc = 0x1B5044u;
        goto label_1b5044;
    }
    ctx->pc = 0x1B503Cu;
    {
        const bool branch_taken_0x1b503c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b503c) {
            ctx->pc = 0x1B5078u;
            goto label_1b5078;
        }
    }
    ctx->pc = 0x1B5044u;
label_1b5044:
    // 0x1b5044: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b5048:
    // 0x1b5048: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b5048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b504c:
    // 0x1b504c: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x1b504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b5050:
    // 0x1b5050: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b5050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_1b5054:
    // 0x1b5054: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1b5058:
    // 0x1b5058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b505c:
    // 0x1b505c: 0x0  nop
    ctx->pc = 0x1b505cu;
    // NOP
label_1b5060:
    // 0x1b5060: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b5060u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b5064:
    // 0x1b5064: 0xc058fec  jal         func_163FB0
label_1b5068:
    if (ctx->pc == 0x1B5068u) {
        ctx->pc = 0x1B506Cu;
        goto label_1b506c;
    }
    ctx->pc = 0x1B5064u;
    SET_GPR_U32(ctx, 31, 0x1B506Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B5064u, 0x1B506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B506Cu;
label_1b506c:
    // 0x1b506c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b506cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_1b5070:
    // 0x1b5070: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b5074:
    if (ctx->pc == 0x1B5074u) {
        ctx->pc = 0x1B5078u;
        goto label_1b5078;
    }
    ctx->pc = 0x1B5070u;
    {
        const bool branch_taken_0x1b5070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5070) {
            ctx->pc = 0x1B5088u;
            goto label_1b5088;
        }
    }
    ctx->pc = 0x1B5078u;
label_1b5078:
    // 0x1b5078: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b507c:
    // 0x1b507c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b507cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b5080:
    // 0x1b5080: 0xc6001380  lwc1        $f0, 0x1380($s0)
    ctx->pc = 0x1b5080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5084:
    // 0x1b5084: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b5084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
label_1b5088:
    // 0x1b5088: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x1b5088u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b508c:
    // 0x1b508c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b5090:
    // 0x1b5090: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x1b5090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
label_1b5094:
    // 0x1b5094: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5098:
    // 0x1b5098: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b5098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b509c:
    // 0x1b509c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b509cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1b50a0:
    // 0x1b50a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b50a4:
    // 0x1b50a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b50a8:
    if (ctx->pc == 0x1B50A8u) {
        ctx->pc = 0x1B50ACu;
        goto label_1b50ac;
    }
    ctx->pc = 0x1B50A4u;
    {
        const bool branch_taken_0x1b50a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50a4) {
            ctx->pc = 0x1B50CCu;
            goto label_1b50cc;
        }
    }
    ctx->pc = 0x1B50ACu;
label_1b50ac:
    // 0x1b50ac: 0xc058294  jal         func_160A50
label_1b50b0:
    if (ctx->pc == 0x1B50B0u) {
        ctx->pc = 0x1B50B4u;
        goto label_1b50b4;
    }
    ctx->pc = 0x1B50ACu;
    SET_GPR_U32(ctx, 31, 0x1B50B4u);
    ctx->pc = 0x160A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160A50u, 0x1B50ACu, 0x1B50B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50B4u;
label_1b50b4:
    // 0x1b50b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b50b8:
    if (ctx->pc == 0x1B50B8u) {
        ctx->pc = 0x1B50BCu;
        goto label_1b50bc;
    }
    ctx->pc = 0x1B50B4u;
    {
        const bool branch_taken_0x1b50b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50b4) {
            ctx->pc = 0x1B50C8u;
            goto label_1b50c8;
        }
    }
    ctx->pc = 0x1B50BCu;
label_1b50bc:
    // 0x1b50bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b50c0:
    // 0x1b50c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b50c4:
    if (ctx->pc == 0x1B50C4u) {
        ctx->pc = 0x1B50C8u;
        goto label_1b50c8;
    }
    ctx->pc = 0x1B50C0u;
    {
        const bool branch_taken_0x1b50c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50c0) {
            ctx->pc = 0x1B50CCu;
            goto label_1b50cc;
        }
    }
    ctx->pc = 0x1B50C8u;
label_1b50c8:
    // 0x1b50c8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b50c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b50cc:
    // 0x1b50cc: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1b50ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b50d0:
    // 0x1b50d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b50d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b50d4:
    // 0x1b50d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b50d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b50d8:
    // 0x1b50d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b50d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b50dc:
    // 0x1b50dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1b50dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1b50e0:
    // 0x1b50e0: 0x3e00008  jr          $ra
label_1b50e4:
    if (ctx->pc == 0x1B50E4u) {
        ctx->pc = 0x1B50E8u;
        goto label_fallthrough_0x1b50e0;
    }
    ctx->pc = 0x1B50E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B50E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b50e0:
    ctx->pc = 0x1B50E8u;
}
