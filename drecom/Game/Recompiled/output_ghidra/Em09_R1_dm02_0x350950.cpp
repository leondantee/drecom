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

// Function: Em09_R1_dm02
// Address: 0x350950 - 0x351048
void Em09_R1_dm02_0x350950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R1_dm02_0x350950");
#endif

    switch (ctx->pc) {
        case 0x3509f8u: goto label_3509f8;
        case 0x350ac8u: goto label_350ac8;
        case 0x350c04u: goto label_350c04;
        case 0x350c10u: goto label_350c10;
        case 0x350cd4u: goto label_350cd4;
        case 0x350ce0u: goto label_350ce0;
        case 0x350d1cu: goto label_350d1c;
        case 0x350d40u: goto label_350d40;
        case 0x350d4cu: goto label_350d4c;
        case 0x350e10u: goto label_350e10;
        case 0x350e1cu: goto label_350e1c;
        case 0x350e6cu: goto label_350e6c;
        case 0x350edcu: goto label_350edc;
        case 0x350ee8u: goto label_350ee8;
        case 0x350ef8u: goto label_350ef8;
        case 0x350f04u: goto label_350f04;
        case 0x350f64u: goto label_350f64;
        case 0x350f9cu: goto label_350f9c;
        default: break;
    }

    ctx->pc = 0x350950u;

    // 0x350950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x350950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x350954: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x350954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x350958: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x350958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35095c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35095cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x350960: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x350960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x350964: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x350964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x350968: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35096c: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x35096cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x350970: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x350970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x350974: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x350974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x350978: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35097c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x35097cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350980: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x350980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x350984: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x350984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x350988: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x350988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x35098c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350990: 0x90720002  lbu         $s2, 0x2($v1)
    ctx->pc = 0x350990u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x350994: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x350994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x350998: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35099c: 0x10830148  beq         $a0, $v1, . + 4 + (0x148 << 2)
    ctx->pc = 0x35099Cu;
    {
        const bool branch_taken_0x35099c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35099c) {
            ctx->pc = 0x350EC0u;
            goto label_350ec0;
        }
    }
    ctx->pc = 0x3509A4u;
    // 0x3509a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3509a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3509a8: 0x108300de  beq         $a0, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x3509A8u;
    {
        const bool branch_taken_0x3509a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3509a8) {
            ctx->pc = 0x350D24u;
            goto label_350d24;
        }
    }
    ctx->pc = 0x3509B0u;
    // 0x3509b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3509b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3509b4: 0x1083008c  beq         $a0, $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x3509B4u;
    {
        const bool branch_taken_0x3509b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3509b4) {
            ctx->pc = 0x350BE8u;
            goto label_350be8;
        }
    }
    ctx->pc = 0x3509BCu;
    // 0x3509bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3509BCu;
    {
        const bool branch_taken_0x3509bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3509bc) {
            ctx->pc = 0x3509CCu;
            goto label_3509cc;
        }
    }
    ctx->pc = 0x3509C4u;
    // 0x3509c4: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x3509C4u;
    {
        const bool branch_taken_0x3509c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3509c4) {
            ctx->pc = 0x35102Cu;
            goto label_35102c;
        }
    }
    ctx->pc = 0x3509CCu;
label_3509cc:
    // 0x3509cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3509ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3509d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3509d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3509d4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3509d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3509d8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3509d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3509dc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3509dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3509e0: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x3509e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3509e4: 0x24060422  addiu       $a2, $zero, 0x422
    ctx->pc = 0x3509e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1058));
    // 0x3509e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3509e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3509ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3509ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3509f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3509F0u;
    SET_GPR_U32(ctx, 31, 0x3509F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3509F0u, 0x3509F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3509F8u;
label_3509f8:
    // 0x3509f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3509f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3509fc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x3509fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x350a00: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x350a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x350a04: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x350a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x350a08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x350a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350a0c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x350a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x350a10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x350a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x350a14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a18: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350a1c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x350a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x350a20: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x350a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x350a24: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x350a24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x350a28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a2c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350a30: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x350a30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x350a34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350a38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a3c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350a40: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x350a40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x350a44: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x350a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x350a48: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x350a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x350a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350a50: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a54: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350a58: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x350a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x350a5c: 0xc6210120  lwc1        $f1, 0x120($s1)
    ctx->pc = 0x350a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350a60: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a64: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x350a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350a68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350a6c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x350a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x350a70: 0xc6210124  lwc1        $f1, 0x124($s1)
    ctx->pc = 0x350a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350a74: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x350a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x350a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350a7c: 0x0  nop
    ctx->pc = 0x350a7cu;
    // NOP
    // 0x350a80: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x350a80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350a84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a88: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x350a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350a8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350a8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350a90: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x350a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x350a94: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x350a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350a98: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350a9c: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x350a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350aa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350aa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350aa4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x350aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x350aa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x350aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x350aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350ab0: 0x0  nop
    ctx->pc = 0x350ab0u;
    // NOP
    // 0x350ab4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x350ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x350ab8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x350ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x350abc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x350abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x350ac0: 0xc040c24  jal         func_103090
    ctx->pc = 0x350AC0u;
    SET_GPR_U32(ctx, 31, 0x350AC8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x350AC8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x350AC8u) { return; }
    ctx->pc = 0x350AC8u;
label_350ac8:
    // 0x350ac8: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x350ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x350acc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350ad0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x350ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350ad4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x350ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x350ad8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350adc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350ae0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x350ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x350ae4: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x350ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x350ae8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350aec: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x350aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350af0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x350af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x350af4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350af8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350afc: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x350afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x350b00: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x350b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x350b04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350b08: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x350b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350b0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x350b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x350b10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b18: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x350b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x350b1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b20: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b24: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x350b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x350b28: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x350b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x350b2c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x350b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x350b30: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b34: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b38: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x350b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x350b3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x350b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x350b40: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x350b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x350b44: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x350B44u;
    {
        const bool branch_taken_0x350b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x350b44) {
            ctx->pc = 0x350BBCu;
            goto label_350bbc;
        }
    }
    ctx->pc = 0x350B4Cu;
    // 0x350b4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b54: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x350b54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x350b58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350b5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b60: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b64: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x350b64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x350b68: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x350b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x350b6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x350b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x350b70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350b74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b78: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350b7c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x350b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x350b80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350b84: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x350b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x350b88: 0x24500190  addiu       $s0, $v0, 0x190
    ctx->pc = 0x350b88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x350b8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x350b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x350b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350b94: 0x0  nop
    ctx->pc = 0x350b94u;
    // NOP
    // 0x350b98: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x350b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x350b9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x350b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x350ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350ba4: 0x0  nop
    ctx->pc = 0x350ba4u;
    // NOP
    // 0x350ba8: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x350ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x350bac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x350bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x350bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350bb4: 0x0  nop
    ctx->pc = 0x350bb4u;
    // NOP
    // 0x350bb8: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x350bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_350bbc:
    // 0x350bbc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350bc0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350bc4: 0xa040006e  sb          $zero, 0x6E($v0)
    ctx->pc = 0x350bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x350bc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x350bcc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350bd0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350bd4: 0xa043006f  sb          $v1, 0x6F($v0)
    ctx->pc = 0x350bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x350bd8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x350bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x350bdc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350be0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350be4: 0xa0430072  sb          $v1, 0x72($v0)
    ctx->pc = 0x350be4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 114), (uint8_t)GPR_U32(ctx, 3));
label_350be8:
    // 0x350be8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x350be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x350bec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350bf0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x350bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x350bf4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350bf8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350bf8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350bfc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x350BFCu;
    SET_GPR_U32(ctx, 31, 0x350C04u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x350BFCu, 0x350C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C04u;
label_350c04:
    // 0x350c04: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c08: 0xc05cd10  jal         func_173440
    ctx->pc = 0x350C08u;
    SET_GPR_U32(ctx, 31, 0x350C10u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x350C08u, 0x350C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350C10u;
label_350c10:
    // 0x350c10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c14: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350c18: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x350c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350c1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c20: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x350c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350c28: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x350c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x350c2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c30: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350c34: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x350c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350c38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c3c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x350c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350c44: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x350c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x350c48: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350c50: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x350c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350c54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c58: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x350c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350c60: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x350c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x350c64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c68: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350c6c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x350c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x350c70: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x350c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x350c74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350c78: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x350c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350c80: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x350c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x350c84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350c88: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350c8c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x350c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x350c90: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x350c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x350c94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350c98: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x350c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350c9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350c9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350ca0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x350ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x350ca4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350ca8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350cac: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x350cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350cb0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x350cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x350cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350cb8: 0x0  nop
    ctx->pc = 0x350cb8u;
    // NOP
    // 0x350cbc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350cbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350cc0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x350cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x350cc4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350cc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350cc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350ccc: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350CCCu;
    SET_GPR_U32(ctx, 31, 0x350CD4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350CCCu, 0x350CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CD4u;
label_350cd4:
    // 0x350cd4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350cd8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350CD8u;
    SET_GPR_U32(ctx, 31, 0x350CE0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350CD8u, 0x350CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350CE0u;
label_350ce0:
    // 0x350ce0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350ce4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x350ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x350ce8: 0x106000d0  beqz        $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x350CE8u;
    {
        const bool branch_taken_0x350ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350ce8) {
            ctx->pc = 0x35102Cu;
            goto label_35102c;
        }
    }
    ctx->pc = 0x350CF0u;
    // 0x350cf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350cf4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350cf8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x350cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x350cfc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d00: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d04: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x350d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x350d08: 0x24060423  addiu       $a2, $zero, 0x423
    ctx->pc = 0x350d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1059));
    // 0x350d0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350d10: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x350d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x350d14: 0xc0965d0  jal         func_259740
    ctx->pc = 0x350D14u;
    SET_GPR_U32(ctx, 31, 0x350D1Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x350D14u, 0x350D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D1Cu;
label_350d1c:
    // 0x350d1c: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x350D1Cu;
    {
        const bool branch_taken_0x350d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350d1c) {
            ctx->pc = 0x35102Cu;
            goto label_35102c;
        }
    }
    ctx->pc = 0x350D24u;
label_350d24:
    // 0x350d24: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x350d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x350d28: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d2c: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x350d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x350d30: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d34: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x350d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x350d38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x350D38u;
    SET_GPR_U32(ctx, 31, 0x350D40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x350D38u, 0x350D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D40u;
label_350d40:
    // 0x350d40: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x350D44u;
    SET_GPR_U32(ctx, 31, 0x350D4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x350D44u, 0x350D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350D4Cu;
label_350d4c:
    // 0x350d4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d50: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350d54: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x350d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350d58: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d5c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x350d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350d60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350d64: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x350d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x350d68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d6c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350d70: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x350d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350d74: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d78: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x350d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350d7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350d7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350d80: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x350d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x350d84: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x350d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350d8c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x350d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350d90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350d94: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x350d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350d98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x350d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x350d9c: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x350d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x350da0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350da4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350da8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x350da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x350dac: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x350dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x350db0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350db4: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x350db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350db8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350dbc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x350dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x350dc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350dc4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350dc8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x350dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x350dcc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x350dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x350dd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x350dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x350dd4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x350dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350dd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x350dd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x350ddc: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x350ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x350de0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350de4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x350de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x350de8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x350de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350dec: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x350decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x350df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x350df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350df4: 0x0  nop
    ctx->pc = 0x350df4u;
    // NOP
    // 0x350df8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x350df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x350dfc: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x350dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x350e00: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e04: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350e04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350e08: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350E08u;
    SET_GPR_U32(ctx, 31, 0x350E10u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350E08u, 0x350E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E10u;
label_350e10:
    // 0x350e10: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e14: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350E14u;
    SET_GPR_U32(ctx, 31, 0x350E1Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350E14u, 0x350E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E1Cu;
label_350e1c:
    // 0x350e1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e20: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350e24: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x350e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x350e28: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e2c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x350e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x350e30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x350e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350e34: 0x0  nop
    ctx->pc = 0x350e34u;
    // NOP
    // 0x350e38: 0x4501007c  bc1t        . + 4 + (0x7C << 2)
    ctx->pc = 0x350E38u;
    {
        const bool branch_taken_0x350e38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x350e38) {
            ctx->pc = 0x35102Cu;
            goto label_35102c;
        }
    }
    ctx->pc = 0x350E40u;
    // 0x350e40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x350e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x350e44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e48: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x350e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x350e4c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e50: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e54: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x350e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x350e58: 0x24060424  addiu       $a2, $zero, 0x424
    ctx->pc = 0x350e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1060));
    // 0x350e5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350e60: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x350e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x350e64: 0xc0965d0  jal         func_259740
    ctx->pc = 0x350E64u;
    SET_GPR_U32(ctx, 31, 0x350E6Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x350E64u, 0x350E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E6Cu;
label_350e6c:
    // 0x350e6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e70: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x350e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350e74: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x350e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x350e78: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x350e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x350e7c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x350e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x350e80: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x350e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x350e84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e88: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350e8c: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x350e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x350e90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x350e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350e94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350e98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350e9c: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x350e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x350ea0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x350ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x350ea4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x350ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x350ea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x350ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350eac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350eb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350eb4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x350eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x350eb8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x350EB8u;
    {
        const bool branch_taken_0x350eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x350eb8) {
            ctx->pc = 0x35102Cu;
            goto label_35102c;
        }
    }
    ctx->pc = 0x350EC0u;
label_350ec0:
    // 0x350ec0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x350ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x350ec4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350ec8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x350ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x350ecc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350ed0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350ed0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350ed4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x350ED4u;
    SET_GPR_U32(ctx, 31, 0x350EDCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x350ED4u, 0x350EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EDCu;
label_350edc:
    // 0x350edc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350ee0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x350EE0u;
    SET_GPR_U32(ctx, 31, 0x350EE8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x350EE0u, 0x350EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EE8u;
label_350ee8:
    // 0x350ee8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350eec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x350eecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x350ef0: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x350EF0u;
    SET_GPR_U32(ctx, 31, 0x350EF8u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x350EF0u, 0x350EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EF8u;
label_350ef8:
    // 0x350ef8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350efc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x350EFCu;
    SET_GPR_U32(ctx, 31, 0x350F04u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x350EFCu, 0x350F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F04u;
label_350f04:
    // 0x350f04: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f08: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x350f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x350f0c: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x350F0Cu;
    {
        const bool branch_taken_0x350f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350f0c) {
            ctx->pc = 0x35102Cu;
            goto label_35102c;
        }
    }
    ctx->pc = 0x350F14u;
    // 0x350f14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x350f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350f18: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f1c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x350f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x350f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x350f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350f24: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f28: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x350f28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x350f2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f30: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x350f30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x350f34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f38: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x350f38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x350f3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f40: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x350f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x350f44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x350f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f48: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x350f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f4c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x350f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x350f50: 0x24065a25  addiu       $a2, $zero, 0x5A25
    ctx->pc = 0x350f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23077));
    // 0x350f54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x350f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350f58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x350f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x350f5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x350F5Cu;
    SET_GPR_U32(ctx, 31, 0x350F64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x350F5Cu, 0x350F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F64u;
label_350f64:
    // 0x350f64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x350f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x350f68: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f6c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x350f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x350f70: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x350f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x350f74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f78: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x350f78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x350f7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350f80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350f84: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x350f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x350f88: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x350f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x350f8c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x350F8Cu;
    {
        const bool branch_taken_0x350f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x350f8c) {
            ctx->pc = 0x350FB8u;
            goto label_350fb8;
        }
    }
    ctx->pc = 0x350F94u;
    // 0x350f94: 0xc067694  jal         func_19DA50
    ctx->pc = 0x350F94u;
    SET_GPR_U32(ctx, 31, 0x350F9Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x350F94u, 0x350F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F9Cu;
label_350f9c:
    // 0x350f9c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x350f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x350fa0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x350fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x350fa4: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x350fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x350fa8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x350fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x350fac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x350facu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x350fb0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350fb4: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x350fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_350fb8:
    // 0x350fb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350fbc: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x350fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350fc0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x350fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x350fc4: 0x30710008  andi        $s1, $v1, 0x8
    ctx->pc = 0x350fc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x350fc8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x350FC8u;
    {
        const bool branch_taken_0x350fc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x350fc8) {
            ctx->pc = 0x350FE8u;
            goto label_350fe8;
        }
    }
    ctx->pc = 0x350FD0u;
    // 0x350fd0: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x350fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x350fd4: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x350fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x350fd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x350fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350fdc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350fe0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350fe4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x350fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_350fe8:
    // 0x350fe8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350fec: 0x247210b0  addiu       $s2, $v1, 0x10B0
    ctx->pc = 0x350fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x350ff0: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x350ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x350ff4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x350ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x350ff8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x350ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x350ffc: 0xae4300f0  sw          $v1, 0xF0($s2)
    ctx->pc = 0x350ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 240), GPR_U32(ctx, 3));
    // 0x351000: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x351000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x351004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x351004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351008: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x351008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35100c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x35100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x351010: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x351010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x351014: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x351014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x351018: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x351018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x35101c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35101cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351020: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x351020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x351024: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x351024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x351028: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x351028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_35102c:
    // 0x35102c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x35102cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x351030: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x351030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x351034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35103c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x35103cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x351040: 0x3e00008  jr          $ra
    ctx->pc = 0x351040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351048u;
}
