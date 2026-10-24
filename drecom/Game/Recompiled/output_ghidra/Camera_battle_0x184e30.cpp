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

// Function: Camera_battle
// Address: 0x184e30 - 0x185000
void Camera_battle_0x184e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_battle_0x184e30");
#endif

    switch (ctx->pc) {
        case 0x184eb8u: goto label_184eb8;
        case 0x184ed8u: goto label_184ed8;
        case 0x184f38u: goto label_184f38;
        case 0x184f68u: goto label_184f68;
        case 0x184f70u: goto label_184f70;
        case 0x184f78u: goto label_184f78;
        case 0x184f80u: goto label_184f80;
        case 0x184f88u: goto label_184f88;
        case 0x184f9cu: goto label_184f9c;
        case 0x184fa4u: goto label_184fa4;
        case 0x184facu: goto label_184fac;
        case 0x184fb8u: goto label_184fb8;
        case 0x184fd0u: goto label_184fd0;
        default: break;
    }

    ctx->pc = 0x184e30u;

    // 0x184e30: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x184e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
    // 0x184e34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x184e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x184e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184e3c: 0xafa401f8  sw          $a0, 0x1F8($sp)
    ctx->pc = 0x184e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 4));
    // 0x184e40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184e44: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x184e44u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x184e48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184e4c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x184e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x184e50: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x184e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x184e54: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x184e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x184e58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184e5c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x184e5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x184e60: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x184e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x184e64: 0x8c42016c  lw          $v0, 0x16C($v0)
    ctx->pc = 0x184e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x184e68: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x184e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x184e6c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x184e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x184e70: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x184e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x184e74: 0x24426cd0  addiu       $v0, $v0, 0x6CD0
    ctx->pc = 0x184e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27856));
    // 0x184e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x184e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x184e7c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x184e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184e80: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184e84: 0xa0220348  sb          $v0, 0x348($at)
    ctx->pc = 0x184e84u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x480348u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480348u, _value); } while (0);
    // 0x184e88: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184e8c: 0x90220344  lbu         $v0, 0x344($at)
    ctx->pc = 0x184e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x480344u));
    // 0x184e90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x184e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x184e94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x184e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x184e98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x184E98u;
    {
        const bool branch_taken_0x184e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e98) {
            ctx->pc = 0x184EC0u;
            goto label_184ec0;
        }
    }
    ctx->pc = 0x184EA0u;
    // 0x184ea0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x184ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x184ea4: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x184ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x184ea8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x184ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x184eac: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x184eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x184eb0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x184EB0u;
    SET_GPR_U32(ctx, 31, 0x184EB8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x184EB8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x184EB8u) { return; }
    ctx->pc = 0x184EB8u;
label_184eb8:
    // 0x184eb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x184EB8u;
    {
        const bool branch_taken_0x184eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184eb8) {
            ctx->pc = 0x184EF4u;
            goto label_184ef4;
        }
    }
    ctx->pc = 0x184EC0u;
label_184ec0:
    // 0x184ec0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x184ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x184ec4: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x184ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x184ec8: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x184ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x184ecc: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x184eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x184ed0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x184ED0u;
    SET_GPR_U32(ctx, 31, 0x184ED8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x184ED0u, 0x184ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184ED8u;
label_184ed8:
    // 0x184ed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x184ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184edc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184ee0: 0xe42002f4  swc1        $f0, 0x2F4($at)
    ctx->pc = 0x184ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802F4u, _value); } while (0); }
    // 0x184ee4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x184ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x184ee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184eec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184ef0: 0xe42002fc  swc1        $f0, 0x2FC($at)
    ctx->pc = 0x184ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4802FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4802FCu, _value); } while (0); }
label_184ef4:
    // 0x184ef4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184ef8: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x184ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x184efc: 0x30420140  andi        $v0, $v0, 0x140
    ctx->pc = 0x184efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)320);
    // 0x184f00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x184F00u;
    {
        const bool branch_taken_0x184f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184f00) {
            ctx->pc = 0x184F20u;
            goto label_184f20;
        }
    }
    ctx->pc = 0x184F08u;
    // 0x184f08: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x184f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x184f0c: 0x8c23dbc8  lw          $v1, -0x2438($at)
    ctx->pc = 0x184f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x184f10: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x184f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x184f14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x184f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x184f18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x184F18u;
    {
        const bool branch_taken_0x184f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184f18) {
            ctx->pc = 0x184F2Cu;
            goto label_184f2c;
        }
    }
    ctx->pc = 0x184F20u;
label_184f20:
    // 0x184f20: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x184f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184f24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184f28: 0xe4200338  swc1        $f0, 0x338($at)
    ctx->pc = 0x184f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480338u, _value); } while (0); }
label_184f2c:
    // 0x184f2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x184f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x184f30: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x184f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x184f34: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x184f34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_184f38:
    // 0x184f38: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x184f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184f3c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x184f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x184f40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x184f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x184f44: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x184f44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x184f48: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x184f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x184f4c: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x184F4Cu;
    {
        const bool branch_taken_0x184f4c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x184f4c) {
            ctx->pc = 0x184F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184f38;
        }
    }
    ctx->pc = 0x184F54u;
    // 0x184f54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x184f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x184f58: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x184f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x184f5c: 0x8c44016c  lw          $a0, 0x16C($v0)
    ctx->pc = 0x184f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x184f60: 0xc061400  jal         func_185000
    ctx->pc = 0x184F60u;
    SET_GPR_U32(ctx, 31, 0x184F68u);
    ctx->pc = 0x185000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185000u, 0x184F60u, 0x184F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F68u;
label_184f68:
    // 0x184f68: 0xc061958  jal         func_186560
    ctx->pc = 0x184F68u;
    SET_GPR_U32(ctx, 31, 0x184F70u);
    ctx->pc = 0x186560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186560u, 0x184F68u, 0x184F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F70u;
label_184f70:
    // 0x184f70: 0xc0614a4  jal         func_185290
    ctx->pc = 0x184F70u;
    SET_GPR_U32(ctx, 31, 0x184F78u);
    ctx->pc = 0x185290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185290u, 0x184F70u, 0x184F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F78u;
label_184f78:
    // 0x184f78: 0xc0615a4  jal         func_185690
    ctx->pc = 0x184F78u;
    SET_GPR_U32(ctx, 31, 0x184F80u);
    ctx->pc = 0x185690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185690u, 0x184F78u, 0x184F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F80u;
label_184f80:
    // 0x184f80: 0xc0615f0  jal         func_1857C0
    ctx->pc = 0x184F80u;
    SET_GPR_U32(ctx, 31, 0x184F88u);
    ctx->pc = 0x1857C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1857C0u, 0x184F80u, 0x184F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F88u;
label_184f88:
    // 0x184f88: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x184f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x184f8c: 0x8c42016c  lw          $v0, 0x16C($v0)
    ctx->pc = 0x184f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    // 0x184f90: 0x90440012  lbu         $a0, 0x12($v0)
    ctx->pc = 0x184f90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x184f94: 0xc0616bc  jal         func_185AF0
    ctx->pc = 0x184F94u;
    SET_GPR_U32(ctx, 31, 0x184F9Cu);
    ctx->pc = 0x185AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AF0u, 0x184F94u, 0x184F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F9Cu;
label_184f9c:
    // 0x184f9c: 0xc0617a0  jal         func_185E80
    ctx->pc = 0x184F9Cu;
    SET_GPR_U32(ctx, 31, 0x184FA4u);
    ctx->pc = 0x185E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185E80u, 0x184F9Cu, 0x184FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FA4u;
label_184fa4:
    // 0x184fa4: 0xc06184c  jal         func_186130
    ctx->pc = 0x184FA4u;
    SET_GPR_U32(ctx, 31, 0x184FACu);
    ctx->pc = 0x186130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186130u, 0x184FA4u, 0x184FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FACu;
label_184fac:
    // 0x184fac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x184facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x184fb0: 0xc056518  jal         func_159460
    ctx->pc = 0x184FB0u;
    SET_GPR_U32(ctx, 31, 0x184FB8u);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x184FB0u, 0x184FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FB8u;
label_184fb8:
    // 0x184fb8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x184fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x184fbc: 0x2444ef90  addiu       $a0, $v0, -0x1070
    ctx->pc = 0x184fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x184fc0: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x184fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x184fc4: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x184fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x184fc8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x184FC8u;
    SET_GPR_U32(ctx, 31, 0x184FD0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x184FC8u, 0x184FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184FD0u;
label_184fd0:
    // 0x184fd0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184fd4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x184fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x184fd8: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x184fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x184fdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x184fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x184fe0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x184fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x184fe4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184fe8: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x184fe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x184fec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x184fecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184ff4: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x184ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x184ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x184FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185000u;
}
