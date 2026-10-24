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

// Function: Em0e_R1_mv01
// Address: 0x243fa0 - 0x2442c0
void Em0e_R1_mv01_0x243fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_mv01_0x243fa0");
#endif

    switch (ctx->pc) {
        case 0x244094u: goto label_244094;
        case 0x2440c0u: goto label_2440c0;
        case 0x2440dcu: goto label_2440dc;
        case 0x2440f4u: goto label_2440f4;
        case 0x244100u: goto label_244100;
        case 0x244130u: goto label_244130;
        case 0x244170u: goto label_244170;
        case 0x24418cu: goto label_24418c;
        case 0x2441a4u: goto label_2441a4;
        case 0x2441b0u: goto label_2441b0;
        default: break;
    }

    ctx->pc = 0x243fa0u;

    // 0x243fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243fa4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x243fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x243fa8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x243fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x243fac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x243facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243fb0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x243fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x243fb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x243fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x243fb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x243fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x243fbc: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x243FBCu;
    {
        const bool branch_taken_0x243fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x243fbc) {
            ctx->pc = 0x244144u;
            goto label_244144;
        }
    }
    ctx->pc = 0x243FC4u;
    // 0x243fc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243fc8: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x243FC8u;
    {
        const bool branch_taken_0x243fc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x243fc8) {
            ctx->pc = 0x244094u;
            goto label_244094;
        }
    }
    ctx->pc = 0x243FD0u;
    // 0x243fd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243FD0u;
    {
        const bool branch_taken_0x243fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x243fd0) {
            ctx->pc = 0x243FE0u;
            goto label_243fe0;
        }
    }
    ctx->pc = 0x243FD8u;
    // 0x243fd8: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x243FD8u;
    {
        const bool branch_taken_0x243fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243fd8) {
            ctx->pc = 0x2441B0u;
            goto label_2441b0;
        }
    }
    ctx->pc = 0x243FE0u;
label_243fe0:
    // 0x243fe0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x243fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243fe4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x243fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x243fe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243fec: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x243fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x243ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243ff4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x243ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243ff8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x243ffc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x243ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x244000: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x244000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x244004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244008: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24400c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244010: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x244010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x244014: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x244014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x244018: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x244018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x24401c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24401cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244020: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244024: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244028: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x244028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x24402c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x24402cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x244030: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x244030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x244034: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244038: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24403c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244040: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x244040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x244044: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x244044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x244048: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x24404c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24404cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244050: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244054: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x244054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244058: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x244058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x24405c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x24405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x244060: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x244064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244068: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24406c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x24406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244070: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x244070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x244074: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244078: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24407c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x24407cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x244080: 0x3406b404  ori         $a2, $zero, 0xB404
    ctx->pc = 0x244080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46084);
    // 0x244084: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244088: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x244088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24408c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x24408Cu;
    SET_GPR_U32(ctx, 31, 0x244094u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x24408Cu, 0x244094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244094u;
label_244094:
    // 0x244094: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244098: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x244098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24409c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2440a0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2440a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2440a4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2440a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2440a8: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2440a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2440ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2440acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2440b0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2440b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2440b4: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x2440b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2440b8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2440B8u;
    SET_GPR_U32(ctx, 31, 0x2440C0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2440B8u, 0x2440C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440C0u;
label_2440c0:
    // 0x2440c0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2440c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2440c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2440c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2440c8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2440c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2440cc: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2440ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2440d0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2440d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2440d4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2440D4u;
    SET_GPR_U32(ctx, 31, 0x2440DCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2440D4u, 0x2440DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440DCu;
label_2440dc:
    // 0x2440dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2440dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2440e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2440e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2440e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2440e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2440e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2440e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2440ec: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2440ECu;
    SET_GPR_U32(ctx, 31, 0x2440F4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2440ECu, 0x2440F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2440F4u;
label_2440f4:
    // 0x2440f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2440f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2440f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2440F8u;
    SET_GPR_U32(ctx, 31, 0x244100u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2440F8u, 0x244100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244100u;
label_244100:
    // 0x244100: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244104: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x244104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x244108: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x244108u;
    {
        const bool branch_taken_0x244108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244108) {
            ctx->pc = 0x2441B0u;
            goto label_2441b0;
        }
    }
    ctx->pc = 0x244110u;
    // 0x244110: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244114: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244118: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x244118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x24411c: 0x3406f005  ori         $a2, $zero, 0xF005
    ctx->pc = 0x24411cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61445);
    // 0x244120: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244124: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x244124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x244128: 0xc0965d0  jal         func_259740
    ctx->pc = 0x244128u;
    SET_GPR_U32(ctx, 31, 0x244130u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x244128u, 0x244130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244130u;
label_244130:
    // 0x244130: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x244130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244134: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244138: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x244138u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x24413c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24413Cu;
    {
        const bool branch_taken_0x24413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24413c) {
            ctx->pc = 0x2441B0u;
            goto label_2441b0;
        }
    }
    ctx->pc = 0x244144u;
label_244144:
    // 0x244144: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244148: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x244148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24414c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244150: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x244150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x244154: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x244154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x244158: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x244158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24415c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24415cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x244160: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x244160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x244164: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x244164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x244168: 0xc05c848  jal         func_172120
    ctx->pc = 0x244168u;
    SET_GPR_U32(ctx, 31, 0x244170u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x244168u, 0x244170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244170u;
label_244170:
    // 0x244170: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x244170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x244174: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x244174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244178: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x244178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24417c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x24417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244180: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x244180u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244184: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x244184u;
    SET_GPR_U32(ctx, 31, 0x24418Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x244184u, 0x24418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24418Cu;
label_24418c:
    // 0x24418c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244190: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x244190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x244194: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x244194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244198: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x244198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24419c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x24419Cu;
    SET_GPR_U32(ctx, 31, 0x2441A4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x24419Cu, 0x2441A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441A4u;
label_2441a4:
    // 0x2441a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2441a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2441a8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2441A8u;
    SET_GPR_U32(ctx, 31, 0x2441B0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2441A8u, 0x2441B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2441B0u;
label_2441b0:
    // 0x2441b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2441b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2441b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2441b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2441b8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2441b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2441bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2441bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2441c0: 0x0  nop
    ctx->pc = 0x2441c0u;
    // NOP
    // 0x2441c4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2441c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2441c8: 0x0  nop
    ctx->pc = 0x2441c8u;
    // NOP
    // 0x2441cc: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x2441CCu;
    {
        const bool branch_taken_0x2441cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2441cc) {
            ctx->pc = 0x2442B0u;
            goto label_2442b0;
        }
    }
    ctx->pc = 0x2441D4u;
    // 0x2441d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2441d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2441d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2441d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2441dc: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2441dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2441e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2441e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2441e4: 0x0  nop
    ctx->pc = 0x2441e4u;
    // NOP
    // 0x2441e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2441e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2441ec: 0x0  nop
    ctx->pc = 0x2441ecu;
    // NOP
    // 0x2441f0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x2441F0u;
    {
        const bool branch_taken_0x2441f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2441f0) {
            ctx->pc = 0x244258u;
            goto label_244258;
        }
    }
    ctx->pc = 0x2441F8u;
    // 0x2441f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2441f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2441fc: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2441fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244200: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x244200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244204: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x244204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x244208: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x24420c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24420cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244210: 0x0  nop
    ctx->pc = 0x244210u;
    // NOP
    // 0x244214: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x244214u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x244218: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x244218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24421c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244220: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244224: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x244224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24422c: 0x0  nop
    ctx->pc = 0x24422cu;
    // NOP
    // 0x244230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244234: 0x0  nop
    ctx->pc = 0x244234u;
    // NOP
    // 0x244238: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x244238u;
    {
        const bool branch_taken_0x244238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244238) {
            ctx->pc = 0x2442B0u;
            goto label_2442b0;
        }
    }
    ctx->pc = 0x244240u;
    // 0x244240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244244: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244248: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24424c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x24424cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x244250: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x244250u;
    {
        const bool branch_taken_0x244250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244250) {
            ctx->pc = 0x2442B0u;
            goto label_2442b0;
        }
    }
    ctx->pc = 0x244258u;
label_244258:
    // 0x244258: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24425c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x24425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244260: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x244260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244264: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x244264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x244268: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x24426c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24426cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244270: 0x0  nop
    ctx->pc = 0x244270u;
    // NOP
    // 0x244274: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x244274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244278: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x244278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24427c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244280: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244284: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x244284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244288: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24428c: 0x0  nop
    ctx->pc = 0x24428cu;
    // NOP
    // 0x244290: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x244290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244294: 0x0  nop
    ctx->pc = 0x244294u;
    // NOP
    // 0x244298: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x244298u;
    {
        const bool branch_taken_0x244298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244298) {
            ctx->pc = 0x2442B0u;
            goto label_2442b0;
        }
    }
    ctx->pc = 0x2442A0u;
    // 0x2442a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2442a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2442a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2442a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2442a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2442a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2442ac: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2442acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2442b0:
    // 0x2442b0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2442b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2442b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2442b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2442b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2442B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2442B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2442C0u;
}
