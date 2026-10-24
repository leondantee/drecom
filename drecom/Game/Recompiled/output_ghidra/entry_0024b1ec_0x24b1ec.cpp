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

// Function: entry_0024b1ec
// Address: 0x24b1ec - 0x24b4bc
void entry_0024b1ec_0x24b1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024b1ec_0x24b1ec");
#endif

    switch (ctx->pc) {
        case 0x24b22cu: goto label_24b22c;
        case 0x24b244u: goto label_24b244;
        case 0x24b264u: goto label_24b264;
        case 0x24b278u: goto label_24b278;
        case 0x24b290u: goto label_24b290;
        case 0x24b2a8u: goto label_24b2a8;
        case 0x24b2f0u: goto label_24b2f0;
        case 0x24b32cu: goto label_24b32c;
        case 0x24b348u: goto label_24b348;
        case 0x24b360u: goto label_24b360;
        case 0x24b394u: goto label_24b394;
        case 0x24b3c4u: goto label_24b3c4;
        case 0x24b3dcu: goto label_24b3dc;
        case 0x24b410u: goto label_24b410;
        case 0x24b424u: goto label_24b424;
        case 0x24b434u: goto label_24b434;
        case 0x24b464u: goto label_24b464;
        case 0x24b4b4u: goto label_24b4b4;
        default: break;
    }

    ctx->pc = 0x24b1ecu;

    // 0x24b1ec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1f0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b1f4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x24b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x24b1f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24b1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24b1fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x24b1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x24b200: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x24b200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x24b204: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x24b204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24b208: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x24b208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x24b20c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x24b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24b210: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x24b210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24b214: 0xc46d000c  lwc1        $f13, 0xC($v1)
    ctx->pc = 0x24b214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24b218: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x24b218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x24b21c: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x24b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x24b220: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x24b220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x24b224: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x24B224u;
    SET_GPR_U32(ctx, 31, 0x24B22Cu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x24B224u, 0x24B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B22Cu;
label_24b22c:
    // 0x24b22c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b230: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24b230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b234: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x24b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b238: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24b238u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b23c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24B23Cu;
    SET_GPR_U32(ctx, 31, 0x24B244u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24B23Cu, 0x24B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B244u;
label_24b244:
    // 0x24b244: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b248: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x24b248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24b24c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b250: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x24b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b254: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x24b254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b258: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x24b258u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b25c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24B25Cu;
    SET_GPR_U32(ctx, 31, 0x24B264u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24B25Cu, 0x24B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B264u;
label_24b264:
    // 0x24b264: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b268: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x24b268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x24b26c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b270: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24B270u;
    SET_GPR_U32(ctx, 31, 0x24B278u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24B278u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B278u) { return; }
    ctx->pc = 0x24B278u;
label_24b278:
    // 0x24b278: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b27c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b280: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b284: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x24b284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24b288: 0xc040d0e  jal         func_103438
    ctx->pc = 0x24B288u;
    SET_GPR_U32(ctx, 31, 0x24B290u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x24B290u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B290u) { return; }
    ctx->pc = 0x24B290u;
label_24b290:
    // 0x24b290: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b294: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b298: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b29c: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x24b29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24b2a0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24B2A0u;
    SET_GPR_U32(ctx, 31, 0x24B2A8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24B2A8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B2A8u) { return; }
    ctx->pc = 0x24B2A8u;
label_24b2a8:
    // 0x24b2a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24b2a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b2ac: 0x0  nop
    ctx->pc = 0x24b2acu;
    // NOP
    // 0x24b2b0: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24b2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24b2b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24b2b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b2b8: 0x0  nop
    ctx->pc = 0x24b2b8u;
    // NOP
    // 0x24b2bc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24b2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24b2c0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b2c4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x24b2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b2c8: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24b2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24b2cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x24b2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b2d4: 0x0  nop
    ctx->pc = 0x24b2d4u;
    // NOP
    // 0x24b2d8: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24b2dc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x24b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24b2e0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b2e4: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x24b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24b2e8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x24B2E8u;
    SET_GPR_U32(ctx, 31, 0x24B2F0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x24B2F0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B2F0u) { return; }
    ctx->pc = 0x24B2F0u;
label_24b2f0:
    // 0x24b2f0: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x24b2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b2f4: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x24b2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b2f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24b2f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b2fc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x24b2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x24b300: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x24b300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b304: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x24b304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b308: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24b308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b30c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x24b30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x24b310: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x24b310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b314: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x24b314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b318: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24b318u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24b31c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x24b31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x24b320: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b324: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24B324u;
    SET_GPR_U32(ctx, 31, 0x24B32Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24B32Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B32Cu) { return; }
    ctx->pc = 0x24B32Cu;
label_24b32c:
    // 0x24b32c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b330: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24b330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24b334: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24b334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b338: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24b338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b33c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x24b33cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24b340: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24B340u;
    SET_GPR_U32(ctx, 31, 0x24B348u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24B340u, 0x24B348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B348u;
label_24b348:
    // 0x24b348: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x24b348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x24b34c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b350: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b354: 0xc7ac0158  lwc1        $f12, 0x158($sp)
    ctx->pc = 0x24b354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24b358: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24B358u;
    SET_GPR_U32(ctx, 31, 0x24B360u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24B360u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B360u) { return; }
    ctx->pc = 0x24B360u;
label_24b360:
    // 0x24b360: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x24b360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b364: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24b364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24b368: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b36c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24b36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24b370: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x24b370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b374: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24b374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24b378: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x24b378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b37c: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24b380: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x24b380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b384: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b388: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24b388u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b38c: 0xc040c00  jal         func_103000
    ctx->pc = 0x24B38Cu;
    SET_GPR_U32(ctx, 31, 0x24B394u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24B394u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B394u) { return; }
    ctx->pc = 0x24B394u;
label_24b394:
    // 0x24b394: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x24b394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b398: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x24b398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x24b39c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x24b39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b3a0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x24b3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x24b3a4: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x24b3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b3a8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x24b3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x24b3ac: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x24b3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24b3b0: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x24b3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x24b3b4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x24b3b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x24b3b8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b3bc: 0xc040ca2  jal         func_103288
    ctx->pc = 0x24B3BCu;
    SET_GPR_U32(ctx, 31, 0x24B3C4u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24B3C4u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B3C4u) { return; }
    ctx->pc = 0x24B3C4u;
label_24b3c4:
    // 0x24b3c4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x24b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x24b3c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x24b3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24b3cc: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x24b3ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x24b3d0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24b3d4: 0xc05cad8  jal         func_172B60
    ctx->pc = 0x24B3D4u;
    SET_GPR_U32(ctx, 31, 0x24B3DCu);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x24B3D4u, 0x24B3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B3DCu;
label_24b3dc:
    // 0x24b3dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24b3dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b3e0: 0x0  nop
    ctx->pc = 0x24b3e0u;
    // NOP
    // 0x24b3e4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x24b3e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b3e8: 0x0  nop
    ctx->pc = 0x24b3e8u;
    // NOP
    // 0x24b3ec: 0x45000061  bc1f        . + 4 + (0x61 << 2)
    ctx->pc = 0x24B3ECu;
    {
        const bool branch_taken_0x24b3ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24b3ec) {
            ctx->pc = 0x24B574u;
            return;
        }
    }
    ctx->pc = 0x24B3F4u;
    // 0x24b3f4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x24b3f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x24b3f8: 0x3042ff5b  andi        $v0, $v0, 0xFF5B
    ctx->pc = 0x24b3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65371);
    // 0x24b3fc: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x24b3fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x24b400: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24b400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24b404: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x24b404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x24b408: 0xc040c44  jal         func_103110
    ctx->pc = 0x24B408u;
    SET_GPR_U32(ctx, 31, 0x24B410u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x24B410u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B410u) { return; }
    ctx->pc = 0x24B410u;
label_24b410:
    // 0x24b410: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24b410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b414: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x24b414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24b418: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24b418u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b41c: 0xc040c00  jal         func_103000
    ctx->pc = 0x24B41Cu;
    SET_GPR_U32(ctx, 31, 0x24B424u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24B424u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B424u) { return; }
    ctx->pc = 0x24B424u;
label_24b424:
    // 0x24b424: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x24b424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x24b428: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24b428u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b42c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x24B42Cu;
    SET_GPR_U32(ctx, 31, 0x24B434u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24B434u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B434u) { return; }
    ctx->pc = 0x24B434u;
label_24b434:
    // 0x24b434: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24b434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24b438: 0x94620020  lhu         $v0, 0x20($v1)
    ctx->pc = 0x24b438u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x24b43c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x24b43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x24b440: 0xa4620020  sh          $v0, 0x20($v1)
    ctx->pc = 0x24b440u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x24b444: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x24b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x24b448: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x24b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24b44c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x24b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x24b450: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x24b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x24b454: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x24b454u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x24b458: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x24b458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24b45c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24B45Cu;
    SET_GPR_U32(ctx, 31, 0x24B464u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24B464u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B464u) { return; }
    ctx->pc = 0x24B464u;
label_24b464:
    // 0x24b464: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x24b464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x24b468: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x24b468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x24b46c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b470: 0x0  nop
    ctx->pc = 0x24b470u;
    // NOP
    // 0x24b474: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x24b474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x24b478: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x24b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x24b47c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x24b47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x24b480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b484: 0x0  nop
    ctx->pc = 0x24b484u;
    // NOP
    // 0x24b488: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x24b488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x24b48c: 0x3c023f2a  lui         $v0, 0x3F2A
    ctx->pc = 0x24b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16170 << 16));
    // 0x24b490: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x24b490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x24b494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b498: 0x0  nop
    ctx->pc = 0x24b498u;
    // NOP
    // 0x24b49c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x24b49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x24b4a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24b4a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b4a4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24b4a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24b4a8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x24b4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24b4ac: 0xc040c00  jal         func_103000
    ctx->pc = 0x24B4ACu;
    SET_GPR_U32(ctx, 31, 0x24B4B4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24B4B4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24B4B4u) { return; }
    ctx->pc = 0x24B4B4u;
label_24b4b4:
    // 0x24b4b4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x24B4B4u;
    {
        const bool branch_taken_0x24b4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b4b4) {
            ctx->pc = 0x24B574u;
            return;
        }
    }
    ctx->pc = 0x24B4BCu;
}
