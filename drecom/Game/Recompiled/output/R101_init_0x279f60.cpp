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

// Function: R101_init
// Address: 0x279f60 - 0x27a094
void R101_init_0x279f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R101_init_0x279f60");
#endif

    switch (ctx->pc) {
        case 0x279f70u: goto label_279f70;
        case 0x279f80u: goto label_279f80;
        case 0x279fd0u: goto label_279fd0;
        case 0x279fe8u: goto label_279fe8;
        case 0x27a034u: goto label_27a034;
        case 0x27a044u: goto label_27a044;
        default: break;
    }

    ctx->pc = 0x279f60u;

    // 0x279f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279f64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x279f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x279f68: 0xc09e884  jal         func_27A210
    ctx->pc = 0x279F68u;
    SET_GPR_U32(ctx, 31, 0x279F70u);
    ctx->pc = 0x27A210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A210u, 0x279F68u, 0x279F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F70u;
label_279f70:
    // 0x279f70: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x279f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279f74: 0x24440560  addiu       $a0, $v0, 0x560
    ctx->pc = 0x279f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1376));
    // 0x279f78: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x279F78u;
    SET_GPR_U32(ctx, 31, 0x279F80u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x279F78u, 0x279F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F80u;
label_279f80:
    // 0x279f80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279f84: 0x8c22f9e8  lw          $v0, -0x618($at)
    ctx->pc = 0x279f84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x279f88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279f8c: 0xac221aa8  sw          $v0, 0x1AA8($at)
    ctx->pc = 0x279f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621AA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621AA8u, _value); } while (0);
    // 0x279f90: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x279f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x279f94: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x279f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x279f98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x279f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279f9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279fa0: 0xe4201aac  swc1        $f0, 0x1AAC($at)
    ctx->pc = 0x279fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621AACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621AACu, _value); } while (0); }
    // 0x279fa4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x279fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x279fa8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x279fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x279fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x279facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279fb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279fb4: 0xe4201ab0  swc1        $f0, 0x1AB0($at)
    ctx->pc = 0x279fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x621AB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621AB0u, _value); } while (0); }
    // 0x279fb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279fbc: 0x8c24f9e0  lw          $a0, -0x620($at)
    ctx->pc = 0x279fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x279fc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x279fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279fc4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x279fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x279fc8: 0xc0a11c4  jal         func_284710
    ctx->pc = 0x279FC8u;
    SET_GPR_U32(ctx, 31, 0x279FD0u);
    ctx->pc = 0x284710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284710u, 0x279FC8u, 0x279FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FD0u;
label_279fd0:
    // 0x279fd0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x279fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x279fd4: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x279fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x279fd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x279fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279fdc: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x279fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x279fe0: 0xc0a11c4  jal         func_284710
    ctx->pc = 0x279FE0u;
    SET_GPR_U32(ctx, 31, 0x279FE8u);
    ctx->pc = 0x284710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284710u, 0x279FE0u, 0x279FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FE8u;
label_279fe8:
    // 0x279fe8: 0x3c02450d  lui         $v0, 0x450D
    ctx->pc = 0x279fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17677 << 16));
    // 0x279fec: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x279fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x279ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x279ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279ff4: 0x0  nop
    ctx->pc = 0x279ff4u;
    // NOP
    // 0x279ff8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x279ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x279ffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x279ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a000: 0x0  nop
    ctx->pc = 0x27a000u;
    // NOP
    // 0x27a004: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x27a004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27a008: 0x3c02c280  lui         $v0, 0xC280
    ctx->pc = 0x27a008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
    // 0x27a00c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27a00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a010: 0x0  nop
    ctx->pc = 0x27a010u;
    // NOP
    // 0x27a014: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x27a014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27a018: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x27a018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x27a01c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x27a01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x27a020: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27a020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27a024: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27a024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27a028: 0x24050409  addiu       $a1, $zero, 0x409
    ctx->pc = 0x27a028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x27a02c: 0xc0680e8  jal         func_1A03A0
    ctx->pc = 0x27A02Cu;
    SET_GPR_U32(ctx, 31, 0x27A034u);
    ctx->pc = 0x1A03A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03A0u, 0x27A02Cu, 0x27A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A034u;
label_27a034:
    // 0x27a034: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27a034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27a038: 0x244401d0  addiu       $a0, $v0, 0x1D0
    ctx->pc = 0x27a038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    // 0x27a03c: 0xc0a1048  jal         func_284120
    ctx->pc = 0x27A03Cu;
    SET_GPR_U32(ctx, 31, 0x27A044u);
    ctx->pc = 0x284120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284120u, 0x27A03Cu, 0x27A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A044u;
label_27a044:
    // 0x27a044: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x27a044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27a048: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a04c: 0xa023d4b1  sb          $v1, -0x2B4F($at)
    ctx->pc = 0x27a04cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x27a050: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x27a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x27a054: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a058: 0xa023d4b3  sb          $v1, -0x2B4D($at)
    ctx->pc = 0x27a058u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B3u, _value); } while (0);
    // 0x27a05c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x27a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27a060: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a064: 0xa423d4b8  sh          $v1, -0x2B48($at)
    ctx->pc = 0x27a064u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4B8u, _value); } while (0);
    // 0x27a068: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a06c: 0xa420d4ba  sh          $zero, -0x2B46($at)
    ctx->pc = 0x27a06cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD4BAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4BAu, _value); } while (0);
    // 0x27a070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a078: 0xa423d4bc  sh          $v1, -0x2B44($at)
    ctx->pc = 0x27a078u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4BCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4BCu, _value); } while (0);
    // 0x27a07c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27a07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27a080: 0xa420d4be  sh          $zero, -0x2B42($at)
    ctx->pc = 0x27a080u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD4BEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4BEu, _value); } while (0);
    // 0x27a084: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27a084u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a088: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27a088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27a08c: 0x3e00008  jr          $ra
    ctx->pc = 0x27A08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A094u;
}
