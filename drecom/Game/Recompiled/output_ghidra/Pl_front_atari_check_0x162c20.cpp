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

// Function: Pl_front_atari_check
// Address: 0x162c20 - 0x162e5c
void Pl_front_atari_check_0x162c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_front_atari_check_0x162c20");
#endif

    switch (ctx->pc) {
        case 0x162c60u: goto label_162c60;
        case 0x162c74u: goto label_162c74;
        case 0x162c80u: goto label_162c80;
        case 0x162ca8u: goto label_162ca8;
        case 0x162cdcu: goto label_162cdc;
        case 0x162cf0u: goto label_162cf0;
        case 0x162d14u: goto label_162d14;
        case 0x162d34u: goto label_162d34;
        case 0x162d50u: goto label_162d50;
        case 0x162d70u: goto label_162d70;
        case 0x162d88u: goto label_162d88;
        case 0x162d98u: goto label_162d98;
        case 0x162e14u: goto label_162e14;
        case 0x162e38u: goto label_162e38;
        default: break;
    }

    ctx->pc = 0x162c20u;

    // 0x162c20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x162c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x162c24: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x162c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x162c28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x162c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x162c2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x162c34: 0xe7ac00c8  swc1        $f12, 0xC8($sp)
    ctx->pc = 0x162c34u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x162c38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x162c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x162c3c: 0x2452dbc0  addiu       $s2, $v0, -0x2440
    ctx->pc = 0x162c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x162c40: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x162c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x162c44: 0x2450eea0  addiu       $s0, $v0, -0x1160
    ctx->pc = 0x162c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
    // 0x162c48: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x162c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EEEB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEEB4u, _value); } while (0);
    // 0x162c4c: 0xc64100d4  lwc1        $f1, 0xD4($s2)
    ctx->pc = 0x162c4cu;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162c50: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x162c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162c54: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x162c54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162c58: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x162C58u;
    SET_GPR_U32(ctx, 31, 0x162C60u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162C58u, 0x162C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C60u;
label_162c60:
    // 0x162c60: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x162c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x162c64: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x162c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x162c68: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x162c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x162c6c: 0xc067844  jal         func_19E110
    ctx->pc = 0x162C6Cu;
    SET_GPR_U32(ctx, 31, 0x162C74u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x162C6Cu, 0x162C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C74u;
label_162c74:
    // 0x162c74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x162c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162c78: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x162C78u;
    SET_GPR_U32(ctx, 31, 0x162C80u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x162C78u, 0x162C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162C80u;
label_162c80:
    // 0x162c80: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x162c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x162c84: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x162c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x162c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162c8c: 0x0  nop
    ctx->pc = 0x162c8cu;
    // NOP
    // 0x162c90: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x162c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x162c94: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x162c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162c98: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x162c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x162c9c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x162c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162ca0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x162CA0u;
    SET_GPR_U32(ctx, 31, 0x162CA8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x162CA8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x162CA8u) { return; }
    ctx->pc = 0x162CA8u;
label_162ca8:
    // 0x162ca8: 0x26420120  addiu       $v0, $s2, 0x120
    ctx->pc = 0x162ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x162cac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x162cacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162cb0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x162cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x162cb4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x162cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x162cb8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x162cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162cbc: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x162cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x162cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162cc4: 0x0  nop
    ctx->pc = 0x162cc4u;
    // NOP
    // 0x162cc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x162cc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162ccc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x162cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x162cd0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x162cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x162cd4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x162CD4u;
    SET_GPR_U32(ctx, 31, 0x162CDCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x162CDCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x162CDCu) { return; }
    ctx->pc = 0x162CDCu;
label_162cdc:
    // 0x162cdc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x162cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x162ce0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x162ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x162ce4: 0x264600d0  addiu       $a2, $s2, 0xD0
    ctx->pc = 0x162ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x162ce8: 0xc040d62  jal         func_103588
    ctx->pc = 0x162CE8u;
    SET_GPR_U32(ctx, 31, 0x162CF0u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x162CF0u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x162CF0u) { return; }
    ctx->pc = 0x162CF0u;
label_162cf0:
    // 0x162cf0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x162cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x162cf4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x162cf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162cf8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x162cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x162cfc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x162cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x162d00: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x162d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x162d04: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x162d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x162d08: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x162d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x162d0c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x162D0Cu;
    SET_GPR_U32(ctx, 31, 0x162D14u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x162D14u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x162D14u) { return; }
    ctx->pc = 0x162D14u;
label_162d14:
    // 0x162d14: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x162d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162d18: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x162d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x162d1c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x162d1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x162d20: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x162d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x162d24: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x162d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x162d28: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x162d28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x162d2c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x162D2Cu;
    SET_GPR_U32(ctx, 31, 0x162D34u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x162D2Cu, 0x162D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D34u;
label_162d34:
    // 0x162d34: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x162d34u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x162d38: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x162D38u;
    {
        const bool branch_taken_0x162d38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x162d38) {
            ctx->pc = 0x162E3Cu;
            goto label_162e3c;
        }
    }
    ctx->pc = 0x162D40u;
    // 0x162d40: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x162d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x162d44: 0xc62d0028  lwc1        $f13, 0x28($s1)
    ctx->pc = 0x162d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x162d48: 0xc0455e6  jal         func_115798
    ctx->pc = 0x162D48u;
    SET_GPR_U32(ctx, 31, 0x162D50u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x162D48u, 0x162D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D50u;
label_162d50:
    // 0x162d50: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x162d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x162d54: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x162d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x162d58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162d5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162d60: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x162d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162d64: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x162d64u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162d68: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x162D68u;
    SET_GPR_U32(ctx, 31, 0x162D70u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162D68u, 0x162D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D70u;
label_162d70:
    // 0x162d70: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x162d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x162d74: 0xc64100d4  lwc1        $f1, 0xD4($s2)
    ctx->pc = 0x162d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162d78: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x162d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162d7c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x162d7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x162d80: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x162D80u;
    SET_GPR_U32(ctx, 31, 0x162D88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x162D80u, 0x162D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D88u;
label_162d88:
    // 0x162d88: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x162d88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x162d8c: 0xc7ad00b8  lwc1        $f13, 0xB8($sp)
    ctx->pc = 0x162d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x162d90: 0xc058f20  jal         func_163C80
    ctx->pc = 0x162D90u;
    SET_GPR_U32(ctx, 31, 0x162D98u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x162D90u, 0x162D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162D98u;
label_162d98:
    // 0x162d98: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x162d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x162d9c: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x162d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162da0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x162da0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162da4: 0x0  nop
    ctx->pc = 0x162da4u;
    // NOP
    // 0x162da8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162da8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162dac: 0x0  nop
    ctx->pc = 0x162dacu;
    // NOP
    // 0x162db0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x162DB0u;
    {
        const bool branch_taken_0x162db0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162db0) {
            ctx->pc = 0x162DCCu;
            goto label_162dcc;
        }
    }
    ctx->pc = 0x162DB8u;
    // 0x162db8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x162db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x162dbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x162dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x162dc0: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x162dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162dc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x162dc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x162dc8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x162dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_162dcc:
    // 0x162dcc: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x162dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162dd0: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x162dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x162dd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x162dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x162dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x162dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162ddc: 0x0  nop
    ctx->pc = 0x162ddcu;
    // NOP
    // 0x162de0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x162de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162de4: 0x0  nop
    ctx->pc = 0x162de4u;
    // NOP
    // 0x162de8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x162DE8u;
    {
        const bool branch_taken_0x162de8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x162de8) {
            ctx->pc = 0x162E00u;
            goto label_162e00;
        }
    }
    ctx->pc = 0x162DF0u;
    // 0x162df0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x162df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x162df4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x162df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x162df8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x162df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162dfc: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x162dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_162e00:
    // 0x162e00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x162e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x162e04: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x162e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x162e08: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x162e08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x162e0c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x162E0Cu;
    SET_GPR_U32(ctx, 31, 0x162E14u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x162E0Cu, 0x162E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E14u;
label_162e14:
    // 0x162e14: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x162e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162e18: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x162e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162e1c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x162e1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x162e20: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x162e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162e24: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x162e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162e28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x162e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x162e2c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x162e2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x162e30: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x162E30u;
    SET_GPR_U32(ctx, 31, 0x162E38u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x162E30u, 0x162E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E38u;
label_162e38:
    // 0x162e38: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x162e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_162e3c:
    // 0x162e3c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x162e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x162e40: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x162e40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162e44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x162e44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162e48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x162e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162e4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162e50: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x162e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x162e54: 0x3e00008  jr          $ra
    ctx->pc = 0x162E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162E5Cu;
}
