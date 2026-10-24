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

// Function: Pl_r1_ds_lightning
// Address: 0x1ca910 - 0x1cacb8
void Pl_r1_ds_lightning_0x1ca910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_ds_lightning_0x1ca910");
#endif

    switch (ctx->pc) {
        case 0x1ca99cu: goto label_1ca99c;
        case 0x1caa0cu: goto label_1caa0c;
        case 0x1caa1cu: goto label_1caa1c;
        case 0x1caa28u: goto label_1caa28;
        case 0x1caa3cu: goto label_1caa3c;
        case 0x1caa48u: goto label_1caa48;
        case 0x1caa6cu: goto label_1caa6c;
        case 0x1caabcu: goto label_1caabc;
        case 0x1caadcu: goto label_1caadc;
        case 0x1cab18u: goto label_1cab18;
        case 0x1cab28u: goto label_1cab28;
        case 0x1cab38u: goto label_1cab38;
        case 0x1cab44u: goto label_1cab44;
        case 0x1cab58u: goto label_1cab58;
        case 0x1cab64u: goto label_1cab64;
        case 0x1cab70u: goto label_1cab70;
        case 0x1cab90u: goto label_1cab90;
        case 0x1cabbcu: goto label_1cabbc;
        case 0x1cac28u: goto label_1cac28;
        case 0x1cac84u: goto label_1cac84;
        case 0x1caca8u: goto label_1caca8;
        default: break;
    }

    ctx->pc = 0x1ca910u;

    // 0x1ca910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca914: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ca914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ca918: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1ca918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1ca91c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca920: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1ca920u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ca924: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x1ca924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1ca928: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA928u;
    {
        const bool branch_taken_0x1ca928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca928) {
            ctx->pc = 0x1CA93Cu;
            goto label_1ca93c;
        }
    }
    ctx->pc = 0x1CA930u;
    // 0x1ca930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca934: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ca934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca938: 0xa06413a7  sb          $a0, 0x13A7($v1)
    ctx->pc = 0x1ca938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5031), (uint8_t)GPR_U32(ctx, 4));
label_1ca93c:
    // 0x1ca93c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ca93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca940: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1ca940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ca944: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ca944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ca948: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ca948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca94c: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1CA94Cu;
    {
        const bool branch_taken_0x1ca94c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca94c) {
            ctx->pc = 0x1CAB0Cu;
            goto label_1cab0c;
        }
    }
    ctx->pc = 0x1CA954u;
    // 0x1ca954: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ca954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca958: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1CA958u;
    {
        const bool branch_taken_0x1ca958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca958) {
            ctx->pc = 0x1CAA94u;
            goto label_1caa94;
        }
    }
    ctx->pc = 0x1CA960u;
    // 0x1ca960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca964: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA964u;
    {
        const bool branch_taken_0x1ca964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca964) {
            ctx->pc = 0x1CA9ACu;
            goto label_1ca9ac;
        }
    }
    ctx->pc = 0x1CA96Cu;
    // 0x1ca96c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA96Cu;
    {
        const bool branch_taken_0x1ca96c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca96c) {
            ctx->pc = 0x1CA97Cu;
            goto label_1ca97c;
        }
    }
    ctx->pc = 0x1CA974u;
    // 0x1ca974: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x1CA974u;
    {
        const bool branch_taken_0x1ca974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca974) {
            ctx->pc = 0x1CAC84u;
            goto label_1cac84;
        }
    }
    ctx->pc = 0x1CA97Cu;
label_1ca97c:
    // 0x1ca97c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ca97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca980: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca984: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ca984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ca988: 0x24061e6e  addiu       $a2, $zero, 0x1E6E
    ctx->pc = 0x1ca988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7790));
    // 0x1ca98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca990: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ca990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ca994: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CA994u;
    SET_GPR_U32(ctx, 31, 0x1CA99Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CA994u, 0x1CA99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA99Cu;
label_1ca99c:
    // 0x1ca99c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ca99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9a0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1ca9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ca9a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca9a8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1ca9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1ca9ac:
    // 0x1ca9ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9b0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1ca9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca9b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca9b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca9b8: 0x0  nop
    ctx->pc = 0x1ca9b8u;
    // NOP
    // 0x1ca9bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca9bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ca9c0: 0x0  nop
    ctx->pc = 0x1ca9c0u;
    // NOP
    // 0x1ca9c4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1CA9C4u;
    {
        const bool branch_taken_0x1ca9c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca9c4) {
            ctx->pc = 0x1CA9FCu;
            goto label_1ca9fc;
        }
    }
    ctx->pc = 0x1CA9CCu;
    // 0x1ca9cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9d0: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1ca9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca9d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9d8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1ca9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca9dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ca9dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ca9e0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1ca9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1ca9e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9e8: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1ca9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca9ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1ca9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca9f0: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1ca9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca9f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ca9f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ca9f8: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1ca9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_1ca9fc:
    // 0x1ca9fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ca9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa00: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1caa00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caa04: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CAA04u;
    SET_GPR_U32(ctx, 31, 0x1CAA0Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CAA04u, 0x1CAA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA0Cu;
label_1caa0c:
    // 0x1caa0c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa10: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1caa14: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CAA14u;
    SET_GPR_U32(ctx, 31, 0x1CAA1Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CAA14u, 0x1CAA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA1Cu;
label_1caa1c:
    // 0x1caa1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1caa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa20: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CAA20u;
    SET_GPR_U32(ctx, 31, 0x1CAA28u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CAA20u, 0x1CAA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA28u;
label_1caa28:
    // 0x1caa28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1caa28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1caa2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1caa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1caa30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caa34: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x1CAA34u;
    SET_GPR_U32(ctx, 31, 0x1CAA3Cu);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CAA34u, 0x1CAA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA3Cu;
label_1caa3c:
    // 0x1caa3c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1caa3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caa40: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CAA40u;
    SET_GPR_U32(ctx, 31, 0x1CAA48u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CAA40u, 0x1CAA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA48u;
label_1caa48:
    // 0x1caa48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1caa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa4c: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1caa4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1caa50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1caa50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1caa54: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1caa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1caa58: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAA58u;
    {
        const bool branch_taken_0x1caa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caa58) {
            ctx->pc = 0x1CAA6Cu;
            goto label_1caa6c;
        }
    }
    ctx->pc = 0x1CAA60u;
    // 0x1caa60: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x1caa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1caa64: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x1CAA64u;
    SET_GPR_U32(ctx, 31, 0x1CAA6Cu);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x1CAA64u, 0x1CAA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA6Cu;
label_1caa6c:
    // 0x1caa6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1caa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa70: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1caa70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1caa74: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x1CAA74u;
    {
        const bool branch_taken_0x1caa74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caa74) {
            ctx->pc = 0x1CAC84u;
            goto label_1cac84;
        }
    }
    ctx->pc = 0x1CAA7Cu;
    // 0x1caa7c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1caa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1caa80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1caa84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1caa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1caa88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1caa88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1caa8c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1CAA8Cu;
    {
        const bool branch_taken_0x1caa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caa8c) {
            ctx->pc = 0x1CAC84u;
            goto label_1cac84;
        }
    }
    ctx->pc = 0x1CAA94u;
label_1caa94:
    // 0x1caa94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caa98: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1caa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1caa9c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1caa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1caaa0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1caaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1caaa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1caaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1caaa8: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x1caaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1caaac: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1caaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1caab0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1caab0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caab4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CAAB4u;
    SET_GPR_U32(ctx, 31, 0x1CAABCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CAAB4u, 0x1CAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAABCu;
label_1caabc:
    // 0x1caabc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1caabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caac0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caac4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1caac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1caac8: 0x24061e6f  addiu       $a2, $zero, 0x1E6F
    ctx->pc = 0x1caac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7791));
    // 0x1caacc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1caaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caad0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1caad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1caad4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1CAAD4u;
    SET_GPR_U32(ctx, 31, 0x1CAADCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1CAAD4u, 0x1CAADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAADCu;
label_1caadc:
    // 0x1caadc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caae0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1caae0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x1caae4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1caae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1caae8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caaec: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1caaecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1caaf0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1caaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1caaf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1caaf8: 0xac431b70  sw          $v1, 0x1B70($v0)
    ctx->pc = 0x1caaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7024), GPR_U32(ctx, 3));
    // 0x1caafc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1caafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab00: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1cab00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cab04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cab08: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cab08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1cab0c:
    // 0x1cab0c: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x1cab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1cab10: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x1CAB10u;
    SET_GPR_U32(ctx, 31, 0x1CAB18u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x1CAB10u, 0x1CAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB18u;
label_1cab18:
    // 0x1cab18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1cab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cab1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cab20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1CAB20u;
    SET_GPR_U32(ctx, 31, 0x1CAB28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1CAB20u, 0x1CAB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB28u;
label_1cab28:
    // 0x1cab28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab2c: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1cab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1cab30: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CAB30u;
    SET_GPR_U32(ctx, 31, 0x1CAB38u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CAB30u, 0x1CAB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB38u;
label_1cab38:
    // 0x1cab38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1cab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab3c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1CAB3Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB44u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1CAB3Cu, 0x1CAB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB44u;
label_1cab44:
    // 0x1cab44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cab44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cab48: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1cab48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab4c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1cab4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cab50: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x1CAB50u;
    SET_GPR_U32(ctx, 31, 0x1CAB58u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x1CAB50u, 0x1CAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB58u;
label_1cab58:
    // 0x1cab58: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1cab58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cab5c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1CAB5Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB64u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1CAB5Cu, 0x1CAB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB64u;
label_1cab64:
    // 0x1cab64: 0x240400e6  addiu       $a0, $zero, 0xE6
    ctx->pc = 0x1cab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1cab68: 0xc0bcf50  jal         func_2F3D40
    ctx->pc = 0x1CAB68u;
    SET_GPR_U32(ctx, 31, 0x1CAB70u);
    ctx->pc = 0x2F3D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3D40u, 0x1CAB68u, 0x1CAB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB70u;
label_1cab70:
    // 0x1cab70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab74: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1cab74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1cab78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CAB78u;
    {
        const bool branch_taken_0x1cab78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cab78) {
            ctx->pc = 0x1CABA8u;
            goto label_1caba8;
        }
    }
    ctx->pc = 0x1CAB80u;
    // 0x1cab80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab84: 0x8c441b70  lw          $a0, 0x1B70($v0)
    ctx->pc = 0x1cab84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7024)));
    // 0x1cab88: 0xc09b960  jal         func_26E580
    ctx->pc = 0x1CAB88u;
    SET_GPR_U32(ctx, 31, 0x1CAB90u);
    ctx->pc = 0x26E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E580u, 0x1CAB88u, 0x1CAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB90u;
label_1cab90:
    // 0x1cab90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1cab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cab94: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x1cab94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x1cab98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cab98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cab9c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1cab9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1caba0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1CABA0u;
    {
        const bool branch_taken_0x1caba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caba0) {
            ctx->pc = 0x1CAC28u;
            goto label_1cac28;
        }
    }
    ctx->pc = 0x1CABA8u;
label_1caba8:
    // 0x1caba8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1caba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabac: 0x8c421b70  lw          $v0, 0x1B70($v0)
    ctx->pc = 0x1cabacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7024)));
    // 0x1cabb0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1cabb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cabb4: 0xc09c398  jal         func_270E60
    ctx->pc = 0x1CABB4u;
    SET_GPR_U32(ctx, 31, 0x1CABBCu);
    ctx->pc = 0x270E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E60u, 0x1CABB4u, 0x1CABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABBCu;
label_1cabbc:
    // 0x1cabbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabc0: 0xac621b70  sw          $v0, 0x1B70($v1)
    ctx->pc = 0x1cabc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7024), GPR_U32(ctx, 2));
    // 0x1cabc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabc8: 0x8c631b70  lw          $v1, 0x1B70($v1)
    ctx->pc = 0x1cabc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7024)));
    // 0x1cabcc: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CABCCu;
    {
        const bool branch_taken_0x1cabcc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1cabcc) {
            ctx->pc = 0x1CAC0Cu;
            goto label_1cac0c;
        }
    }
    ctx->pc = 0x1CABD4u;
    // 0x1cabd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cabd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1cabdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cabe0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabe4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1cabe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cabe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1cabecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cabf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cabf4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1cabf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cabf8: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1cabf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1cabfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac00: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1cac00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1cac04: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CAC04u;
    {
        const bool branch_taken_0x1cac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac04) {
            ctx->pc = 0x1CACA8u;
            goto label_1caca8;
        }
    }
    ctx->pc = 0x1CAC0Cu;
label_1cac0c:
    // 0x1cac0c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1cac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cac10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac14: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cac14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cac18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac1c: 0x8c441b70  lw          $a0, 0x1B70($v0)
    ctx->pc = 0x1cac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7024)));
    // 0x1cac20: 0xc09b9b0  jal         func_26E6C0
    ctx->pc = 0x1CAC20u;
    SET_GPR_U32(ctx, 31, 0x1CAC28u);
    ctx->pc = 0x26E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E6C0u, 0x1CAC20u, 0x1CAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC28u;
label_1cac28:
    // 0x1cac28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cac28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac2c: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1cac2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1cac30: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAC30u;
    {
        const bool branch_taken_0x1cac30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac30) {
            ctx->pc = 0x1CAC50u;
            goto label_1cac50;
        }
    }
    ctx->pc = 0x1CAC38u;
    // 0x1cac38: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1cac38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac3c: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x1cac3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x1cac40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cac40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1cac44: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x1cac44u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cac48: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CAC48u;
    {
        const bool branch_taken_0x1cac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cac48) {
            ctx->pc = 0x1CAC84u;
            goto label_1cac84;
        }
    }
    ctx->pc = 0x1CAC50u;
label_1cac50:
    // 0x1cac50: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cac50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1cac54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac58: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x1cac58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cac5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1cac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac60: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1cac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1cac64: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1cac64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1cac68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1cac68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1cac6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cac6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cac70: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x1cac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1cac74: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1cac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1cac78: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1cac78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cac7c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1CAC7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAC84u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1CAC7Cu, 0x1CAC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC84u;
label_1cac84:
    // 0x1cac84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1cac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cac88: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1cac88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1cac8c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1cac8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1cac90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cac90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1cac94: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1cac94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1cac98: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAC98u;
    {
        const bool branch_taken_0x1cac98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cac98) {
            ctx->pc = 0x1CACA8u;
            goto label_1caca8;
        }
    }
    ctx->pc = 0x1CACA0u;
    // 0x1caca0: 0xc0bc094  jal         func_2F0250
    ctx->pc = 0x1CACA0u;
    SET_GPR_U32(ctx, 31, 0x1CACA8u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x1CACA0u, 0x1CACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACA8u;
label_1caca8:
    // 0x1caca8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1caca8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cacac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1cacacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cacb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CACB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CACB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CACB8u;
}
