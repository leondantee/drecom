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

// Function: entry_00209070
// Address: 0x209070 - 0x209214
void entry_00209070_0x209070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00209070_0x209070");
#endif

    switch (ctx->pc) {
        case 0x20907cu: goto label_20907c;
        case 0x20908cu: goto label_20908c;
        case 0x209098u: goto label_209098;
        case 0x20911cu: goto label_20911c;
        case 0x209128u: goto label_209128;
        case 0x20915cu: goto label_20915c;
        case 0x20919cu: goto label_20919c;
        case 0x2091b8u: goto label_2091b8;
        case 0x2091e4u: goto label_2091e4;
        case 0x20920cu: goto label_20920c;
        default: break;
    }

    ctx->pc = 0x209070u;

    // 0x209070: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209074: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x209074u;
    SET_GPR_U32(ctx, 31, 0x20907Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x209074u, 0x20907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20907Cu;
label_20907c:
    // 0x20907c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20907cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209080: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x209080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x209084: 0xc080f60  jal         func_203D80
    ctx->pc = 0x209084u;
    SET_GPR_U32(ctx, 31, 0x20908Cu);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x209084u, 0x20908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20908Cu;
label_20908c:
    // 0x20908c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20908cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x209090: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x209090u;
    SET_GPR_U32(ctx, 31, 0x209098u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x209090u, 0x209098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209098u;
label_209098:
    // 0x209098: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x209098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20909c: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x20909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x2090a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2090a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2090a4: 0xac831344  sw          $v1, 0x1344($a0)
    ctx->pc = 0x2090a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 3));
    // 0x2090a8: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x2090a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2090ac: 0x142000fc  bnez        $at, . + 4 + (0xFC << 2)
    ctx->pc = 0x2090ACu;
    {
        const bool branch_taken_0x2090ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2090ac) {
            ctx->pc = 0x2094A0u;
            return;
        }
    }
    ctx->pc = 0x2090B4u;
    // 0x2090b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2090b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2090b8: 0xac401344  sw          $zero, 0x1344($v0)
    ctx->pc = 0x2090b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 0));
    // 0x2090bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2090bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2090c0: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2090c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2090c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2090c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2090c8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2090c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2090cc: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x2090ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2090d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2090d0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x2090d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2090d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2090d8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2090d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2090dc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2090dcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2090e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2090e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2090e4: 0x244292d0  addiu       $v0, $v0, -0x6D30
    ctx->pc = 0x2090e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
    // 0x2090e8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2090e8u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192D0u, _value); } while (0);
    // 0x2090ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2090ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2090f0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2090f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2090f4: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x2090f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192C4u, _value); } while (0); }
    // 0x2090f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2090f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2090fc: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2090fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x209100: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x209100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x209104: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x209104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x209108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20910c: 0x0  nop
    ctx->pc = 0x20910cu;
    // NOP
    // 0x209110: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x209110u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209114: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x209114u;
    SET_GPR_U32(ctx, 31, 0x20911Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x209114u, 0x20911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20911Cu;
label_20911c:
    // 0x20911c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x20911cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x209120: 0xc06765c  jal         func_19D970
    ctx->pc = 0x209120u;
    SET_GPR_U32(ctx, 31, 0x209128u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x209120u, 0x209128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209128u;
label_209128:
    // 0x209128: 0x3c023e06  lui         $v0, 0x3E06
    ctx->pc = 0x209128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15878 << 16));
    // 0x20912c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x20912cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x209130: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x209130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209134: 0x0  nop
    ctx->pc = 0x209134u;
    // NOP
    // 0x209138: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x209138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20913c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x20913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209140: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x209140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x209144: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x209144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x209148: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20914c: 0x24449280  addiu       $a0, $v0, -0x6D80
    ctx->pc = 0x20914cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x209150: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x209150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x209154: 0xc067844  jal         func_19E110
    ctx->pc = 0x209154u;
    SET_GPR_U32(ctx, 31, 0x20915Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x209154u, 0x20915Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20915Cu;
label_20915c:
    // 0x20915c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20915cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209160: 0x0  nop
    ctx->pc = 0x209160u;
    // NOP
    // 0x209164: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x209164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x209168: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x209168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x20916c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x20916cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x209170: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x209170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x209174: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x209174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x209178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x209178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20917c: 0x0  nop
    ctx->pc = 0x20917cu;
    // NOP
    // 0x209180: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x209180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x209184: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x209184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x209188: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x209188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x20918c: 0x24459280  addiu       $a1, $v0, -0x6D80
    ctx->pc = 0x20918cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x209190: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x209190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x209194: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x209194u;
    SET_GPR_U32(ctx, 31, 0x20919Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x20919Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20919Cu) { return; }
    ctx->pc = 0x20919Cu;
label_20919c:
    // 0x20919c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x20919cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2091a0: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x2091a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2091a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2091a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2091a8: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x2091a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2091ac: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2091acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2091b0: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x2091B0u;
    SET_GPR_U32(ctx, 31, 0x2091B8u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x2091B8u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2091B8u) { return; }
    ctx->pc = 0x2091B8u;
label_2091b8:
    // 0x2091b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2091b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2091bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2091bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2091c0: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x2091c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192C4u, _value); } while (0); }
    // 0x2091c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2091c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2091c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2091c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2091cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2091ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2091d0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2091d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2091d4: 0xc42092d4  lwc1        $f0, -0x6D2C($at)
    ctx->pc = 0x2091d4u;
    { uint32_t bits = FAST_READ32(0x6192D4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2091d8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2091d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2091dc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2091DCu;
    SET_GPR_U32(ctx, 31, 0x2091E4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2091DCu, 0x2091E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091E4u;
label_2091e4:
    // 0x2091e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2091e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2091e8: 0xe42092d4  swc1        $f0, -0x6D2C($at)
    ctx->pc = 0x2091e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192D4u, _value); } while (0); }
    // 0x2091ec: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2091ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2091f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2091f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2091f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2091f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2091f8: 0x244692c0  addiu       $a2, $v0, -0x6D40
    ctx->pc = 0x2091f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x2091fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2091fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x209200: 0x244792d0  addiu       $a3, $v0, -0x6D30
    ctx->pc = 0x209200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939344));
    // 0x209204: 0xc0bb3e8  jal         func_2ECFA0
    ctx->pc = 0x209204u;
    SET_GPR_U32(ctx, 31, 0x20920Cu);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x209204u, 0x20920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20920Cu;
label_20920c:
    // 0x20920c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x20920Cu;
    {
        const bool branch_taken_0x20920c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20920c) {
            ctx->pc = 0x2094A0u;
            return;
        }
    }
    ctx->pc = 0x209214u;
}
