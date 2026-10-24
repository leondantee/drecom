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

// Function: entry_00210d3c
// Address: 0x210d3c - 0x2110d0
void entry_00210d3c_0x210d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210d3c_0x210d3c");
#endif

    switch (ctx->pc) {
        case 0x210d58u: goto label_210d58;
        case 0x210d70u: goto label_210d70;
        case 0x210d90u: goto label_210d90;
        case 0x210da8u: goto label_210da8;
        case 0x210dc0u: goto label_210dc0;
        case 0x210de0u: goto label_210de0;
        case 0x210e20u: goto label_210e20;
        case 0x210e48u: goto label_210e48;
        case 0x210e54u: goto label_210e54;
        case 0x210e80u: goto label_210e80;
        case 0x210e9cu: goto label_210e9c;
        case 0x210eb4u: goto label_210eb4;
        case 0x210f0cu: goto label_210f0c;
        case 0x210f50u: goto label_210f50;
        case 0x210f6cu: goto label_210f6c;
        case 0x210f80u: goto label_210f80;
        case 0x210f8cu: goto label_210f8c;
        case 0x210fb0u: goto label_210fb0;
        case 0x210fd0u: goto label_210fd0;
        case 0x21100cu: goto label_21100c;
        case 0x21102cu: goto label_21102c;
        case 0x211050u: goto label_211050;
        case 0x21107cu: goto label_21107c;
        case 0x2110ccu: goto label_2110cc;
        default: break;
    }

    ctx->pc = 0x210d3cu;

    // 0x210d3c: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x210d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x210d40: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x210d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x210d44: 0x27a30380  addiu       $v1, $sp, 0x380
    ctx->pc = 0x210d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x210d48: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x210d48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x210d4c: 0xc7ac0514  lwc1        $f12, 0x514($sp)
    ctx->pc = 0x210d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210d50: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x210D50u;
    SET_GPR_U32(ctx, 31, 0x210D58u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x210D58u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210D58u) { return; }
    ctx->pc = 0x210D58u;
label_210d58:
    // 0x210d58: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210d58u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210d5c: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x210d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x210d60: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x210d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210d64: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x210d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x210d68: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x210D68u;
    SET_GPR_U32(ctx, 31, 0x210D70u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210D70u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210D70u) { return; }
    ctx->pc = 0x210D70u;
label_210d70:
    // 0x210d70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210d70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210d74: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x210d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x210d78: 0x27a70380  addiu       $a3, $sp, 0x380
    ctx->pc = 0x210d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x210d7c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x210d7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x210d80: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x210d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x210d84: 0x24669250  addiu       $a2, $v1, -0x6DB0
    ctx->pc = 0x210d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939216));
    // 0x210d88: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x210D88u;
    SET_GPR_U32(ctx, 31, 0x210D90u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x210D88u, 0x210D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D90u;
label_210d90:
    // 0x210d90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210d90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210d94: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x210d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x210d98: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x210d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x210d9c: 0xc7ac0514  lwc1        $f12, 0x514($sp)
    ctx->pc = 0x210d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210da0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x210DA0u;
    SET_GPR_U32(ctx, 31, 0x210DA8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x210DA8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210DA8u) { return; }
    ctx->pc = 0x210DA8u;
label_210da8:
    // 0x210da8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210da8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210dac: 0x27a40390  addiu       $a0, $sp, 0x390
    ctx->pc = 0x210dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x210db0: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x210db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210db4: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x210db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x210db8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x210DB8u;
    SET_GPR_U32(ctx, 31, 0x210DC0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210DC0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210DC0u) { return; }
    ctx->pc = 0x210DC0u;
label_210dc0:
    // 0x210dc0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210dc0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210dc4: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x210dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x210dc8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x210dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x210dcc: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x210dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x210dd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x210dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x210dd4: 0x24669250  addiu       $a2, $v1, -0x6DB0
    ctx->pc = 0x210dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939216));
    // 0x210dd8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x210DD8u;
    SET_GPR_U32(ctx, 31, 0x210DE0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x210DD8u, 0x210DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210DE0u;
label_210de0:
    // 0x210de0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x210de0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210de8: 0x0  nop
    ctx->pc = 0x210de8u;
    // NOP
    // 0x210dec: 0xe7a003a0  swc1        $f0, 0x3A0($sp)
    ctx->pc = 0x210decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
    // 0x210df0: 0x3c064296  lui         $a2, 0x4296
    ctx->pc = 0x210df0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17046 << 16));
    // 0x210df4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x210df4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210df8: 0xc7a00514  lwc1        $f0, 0x514($sp)
    ctx->pc = 0x210df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210dfc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210e00: 0xe7a003a4  swc1        $f0, 0x3A4($sp)
    ctx->pc = 0x210e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
    // 0x210e04: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x210e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x210e08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210e0c: 0xc7a00514  lwc1        $f0, 0x514($sp)
    ctx->pc = 0x210e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210e10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210e14: 0xe7a003a8  swc1        $f0, 0x3A8($sp)
    ctx->pc = 0x210e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
    // 0x210e18: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210E18u;
    SET_GPR_U32(ctx, 31, 0x210E20u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210E18u, 0x210E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E20u;
label_210e20:
    // 0x210e20: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x210e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x210e24: 0x34730fdb  ori         $s3, $v1, 0xFDB
    ctx->pc = 0x210e24u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x210e28: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x210e28u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210e2c: 0x0  nop
    ctx->pc = 0x210e2cu;
    // NOP
    // 0x210e30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210e34: 0xe7a00510  swc1        $f0, 0x510($sp)
    ctx->pc = 0x210e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
    // 0x210e38: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x210e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x210e3c: 0xc7ac0510  lwc1        $f12, 0x510($sp)
    ctx->pc = 0x210e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210e40: 0xc067844  jal         func_19E110
    ctx->pc = 0x210E40u;
    SET_GPR_U32(ctx, 31, 0x210E48u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x210E40u, 0x210E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E48u;
label_210e48:
    // 0x210e48: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x210e48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210e4c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210E4Cu;
    SET_GPR_U32(ctx, 31, 0x210E54u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210E4Cu, 0x210E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E54u;
label_210e54:
    // 0x210e54: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x210e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x210e58: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x210e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x210e5c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210e5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210e60: 0x0  nop
    ctx->pc = 0x210e60u;
    // NOP
    // 0x210e64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210e68: 0xe7a00510  swc1        $f0, 0x510($sp)
    ctx->pc = 0x210e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
    // 0x210e6c: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x210e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x210e70: 0x27a50400  addiu       $a1, $sp, 0x400
    ctx->pc = 0x210e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x210e74: 0xc7ac0510  lwc1        $f12, 0x510($sp)
    ctx->pc = 0x210e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210e78: 0xc040ce4  jal         func_103390
    ctx->pc = 0x210E78u;
    SET_GPR_U32(ctx, 31, 0x210E80u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x210E80u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210E80u) { return; }
    ctx->pc = 0x210E80u;
label_210e80:
    // 0x210e80: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210e80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210e84: 0x27a303c0  addiu       $v1, $sp, 0x3C0
    ctx->pc = 0x210e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210e88: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x210e88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x210e8c: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x210e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210e90: 0x27a60400  addiu       $a2, $sp, 0x400
    ctx->pc = 0x210e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x210e94: 0xc040c00  jal         func_103000
    ctx->pc = 0x210E94u;
    SET_GPR_U32(ctx, 31, 0x210E9Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x210E9Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210E9Cu) { return; }
    ctx->pc = 0x210E9Cu;
label_210e9c:
    // 0x210e9c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210e9cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210ea0: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x210ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x210ea4: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x210ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210ea8: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x210ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x210eac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x210EACu;
    SET_GPR_U32(ctx, 31, 0x210EB4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210EB4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210EB4u) { return; }
    ctx->pc = 0x210EB4u;
label_210eb4:
    // 0x210eb4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210eb4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210eb8: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x210eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x210ebc: 0x44847000  mtc1        $a0, $f14
    ctx->pc = 0x210ebcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x210ec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x210ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210ec4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x210ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x210ec8: 0x3c05437a  lui         $a1, 0x437A
    ctx->pc = 0x210ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17274 << 16));
    // 0x210ecc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x210eccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210ed0: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x210ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x210ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210ed8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x210ed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210edc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x210edcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210ee0: 0x27a80390  addiu       $t0, $sp, 0x390
    ctx->pc = 0x210ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x210ee4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x210ee4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x210ee8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x210ee8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210eec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x210eecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210ef0: 0x27a90380  addiu       $t1, $sp, 0x380
    ctx->pc = 0x210ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x210ef4: 0x46007346  mov.s       $f13, $f14
    ctx->pc = 0x210ef4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[14]);
    // 0x210ef8: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x210ef8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x210efc: 0x27aa03a0  addiu       $t2, $sp, 0x3A0
    ctx->pc = 0x210efcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x210f00: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x210f00u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210f04: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x210F04u;
    SET_GPR_U32(ctx, 31, 0x210F0Cu);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x210F04u, 0x210F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F0Cu;
label_210f0c:
    // 0x210f0c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210f0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210f10: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x210f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x210f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210f18: 0x0  nop
    ctx->pc = 0x210f18u;
    // NOP
    // 0x210f1c: 0xe7a00514  swc1        $f0, 0x514($sp)
    ctx->pc = 0x210f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1300), bits); }
    // 0x210f20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210f24: 0x0  nop
    ctx->pc = 0x210f24u;
    // NOP
    // 0x210f28: 0xe7a003a0  swc1        $f0, 0x3A0($sp)
    ctx->pc = 0x210f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
    // 0x210f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210f30: 0x0  nop
    ctx->pc = 0x210f30u;
    // NOP
    // 0x210f34: 0xe7a003a4  swc1        $f0, 0x3A4($sp)
    ctx->pc = 0x210f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 932), bits); }
    // 0x210f38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x210f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210f3c: 0x0  nop
    ctx->pc = 0x210f3cu;
    // NOP
    // 0x210f40: 0xe7ac03a8  swc1        $f12, 0x3A8($sp)
    ctx->pc = 0x210f40u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 936), bits); }
    // 0x210f44: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x210f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210f48: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x210F48u;
    SET_GPR_U32(ctx, 31, 0x210F50u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x210F50u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210F50u) { return; }
    ctx->pc = 0x210F50u;
label_210f50:
    // 0x210f50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x210f50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210f54: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x210f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210f58: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x210f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x210f5c: 0x27a30490  addiu       $v1, $sp, 0x490
    ctx->pc = 0x210f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
    // 0x210f60: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x210f60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x210f64: 0xc040d62  jal         func_103588
    ctx->pc = 0x210F64u;
    SET_GPR_U32(ctx, 31, 0x210F6Cu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x210F6Cu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210F6Cu) { return; }
    ctx->pc = 0x210F6Cu;
label_210f6c:
    // 0x210f6c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210f6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210f70: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x210f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x210f74: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x210f74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x210f78: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x210F78u;
    SET_GPR_U32(ctx, 31, 0x210F80u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x210F80u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210F80u) { return; }
    ctx->pc = 0x210F80u;
label_210f80:
    // 0x210f80: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x210f80u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210f84: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210F84u;
    SET_GPR_U32(ctx, 31, 0x210F8Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210F84u, 0x210F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F8Cu;
label_210f8c:
    // 0x210f8c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x210f8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x210f90: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x210f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x210f94: 0x348a0fdb  ori         $t2, $a0, 0xFDB
    ctx->pc = 0x210f94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x210f98: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x210f98u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210f9c: 0x0  nop
    ctx->pc = 0x210f9cu;
    // NOP
    // 0x210fa0: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x210fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x210fa4: 0xe7a10480  swc1        $f1, 0x480($sp)
    ctx->pc = 0x210fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
    // 0x210fa8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210FA8u;
    SET_GPR_U32(ctx, 31, 0x210FB0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210FA8u, 0x210FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210FB0u;
label_210fb0:
    // 0x210fb0: 0x3c064049  lui         $a2, 0x4049
    ctx->pc = 0x210fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16457 << 16));
    // 0x210fb4: 0x34c50fdb  ori         $a1, $a2, 0xFDB
    ctx->pc = 0x210fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
    // 0x210fb8: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x210fb8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x210fbc: 0x0  nop
    ctx->pc = 0x210fbcu;
    // NOP
    // 0x210fc0: 0x46007302  mul.s       $f12, $f14, $f0
    ctx->pc = 0x210fc0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x210fc4: 0xe7ac0484  swc1        $f12, 0x484($sp)
    ctx->pc = 0x210fc4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1156), bits); }
    // 0x210fc8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210FC8u;
    SET_GPR_U32(ctx, 31, 0x210FD0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210FC8u, 0x210FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210FD0u;
label_210fd0:
    // 0x210fd0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x210fd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x210fd4: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x210fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x210fd8: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x210fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x210fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210fe0: 0x0  nop
    ctx->pc = 0x210fe0u;
    // NOP
    // 0x210fe4: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x210fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x210fe8: 0xe7a00488  swc1        $f0, 0x488($sp)
    ctx->pc = 0x210fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
    // 0x210fec: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x210fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x210ff0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x210ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x210ff4: 0x27a90440  addiu       $t1, $sp, 0x440
    ctx->pc = 0x210ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x210ff8: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x210ff8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x210ffc: 0x27aa0480  addiu       $t2, $sp, 0x480
    ctx->pc = 0x210ffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x211000: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x211000u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x211004: 0xc040d62  jal         func_103588
    ctx->pc = 0x211004u;
    SET_GPR_U32(ctx, 31, 0x21100Cu);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x21100Cu;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21100Cu) { return; }
    ctx->pc = 0x21100Cu;
label_21100c:
    // 0x21100c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21100cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x211010: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x211010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x211014: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x211014u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x211018: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x211018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
    // 0x21101c: 0x27a303c0  addiu       $v1, $sp, 0x3C0
    ctx->pc = 0x21101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x211020: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x211020u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x211024: 0xc040c00  jal         func_103000
    ctx->pc = 0x211024u;
    SET_GPR_U32(ctx, 31, 0x21102Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x21102Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21102Cu) { return; }
    ctx->pc = 0x21102Cu;
label_21102c:
    // 0x21102c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x21102cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x211030: 0x27a703b0  addiu       $a3, $sp, 0x3B0
    ctx->pc = 0x211030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x211034: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x211034u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x211038: 0x27a903c0  addiu       $t1, $sp, 0x3C0
    ctx->pc = 0x211038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
    // 0x21103c: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x21103cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x211040: 0x27aa03b0  addiu       $t2, $sp, 0x3B0
    ctx->pc = 0x211040u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x211044: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x211044u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x211048: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x211048u;
    SET_GPR_U32(ctx, 31, 0x211050u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x211050u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x211050u) { return; }
    ctx->pc = 0x211050u;
label_211050:
    // 0x211050: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x211050u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x211054: 0x8faa0528  lw          $t2, 0x528($sp)
    ctx->pc = 0x211054u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x211058: 0x8d470130  lw          $a3, 0x130($t2)
    ctx->pc = 0x211058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 304)));
    // 0x21105c: 0x27a303b0  addiu       $v1, $sp, 0x3B0
    ctx->pc = 0x21105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x211060: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x211060u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x211064: 0x27a603b0  addiu       $a2, $sp, 0x3B0
    ctx->pc = 0x211064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x211068: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x211068u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x21106c: 0x24e30070  addiu       $v1, $a3, 0x70
    ctx->pc = 0x21106cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x211070: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x211070u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x211074: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x211074u;
    SET_GPR_U32(ctx, 31, 0x21107Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x211074u, 0x21107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21107Cu;
label_21107c:
    // 0x21107c: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x21107cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x211080: 0x3c0a42f0  lui         $t2, 0x42F0
    ctx->pc = 0x211080u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17136 << 16));
    // 0x211084: 0x448a7000  mtc1        $t2, $f14
    ctx->pc = 0x211084u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x211088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x211088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21108c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x21108cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x211090: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x211090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x211094: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x211094u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211098: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x211098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x21109c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x21109cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2110a0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2110a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2110a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2110a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2110a8: 0x27a603b0  addiu       $a2, $sp, 0x3B0
    ctx->pc = 0x2110a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
    // 0x2110ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2110acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2110b0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2110b0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2110b4: 0x27a90380  addiu       $t1, $sp, 0x380
    ctx->pc = 0x2110b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x2110b8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2110b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2110bc: 0x27aa03a0  addiu       $t2, $sp, 0x3A0
    ctx->pc = 0x2110bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x2110c0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2110c0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2110c4: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x2110C4u;
    SET_GPR_U32(ctx, 31, 0x2110CCu);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x2110C4u, 0x2110CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2110CCu;
label_2110cc:
    // 0x2110cc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2110ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2110d0u;
}
