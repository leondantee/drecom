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

// Function: Em19_R1_flight
// Address: 0x2e5ae0 - 0x2e5d4c
void Em19_R1_flight_0x2e5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em19_R1_flight_0x2e5ae0");
#endif

    switch (ctx->pc) {
        case 0x2e5b34u: goto label_2e5b34;
        case 0x2e5be4u: goto label_2e5be4;
        case 0x2e5c00u: goto label_2e5c00;
        case 0x2e5ca0u: goto label_2e5ca0;
        case 0x2e5cacu: goto label_2e5cac;
        case 0x2e5cbcu: goto label_2e5cbc;
        case 0x2e5cd4u: goto label_2e5cd4;
        case 0x2e5d3cu: goto label_2e5d3c;
        default: break;
    }

    ctx->pc = 0x2e5ae0u;

    // 0x2e5ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5ae4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2e5ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2e5ae8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2e5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2e5aec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5af0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2e5af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5af4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2e5af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e5af8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5afc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E5AFCu;
    {
        const bool branch_taken_0x2e5afc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e5afc) {
            ctx->pc = 0x2E5B44u;
            goto label_2e5b44;
        }
    }
    ctx->pc = 0x2E5B04u;
    // 0x2e5b04: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5B04u;
    {
        const bool branch_taken_0x2e5b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5b04) {
            ctx->pc = 0x2E5B14u;
            goto label_2e5b14;
        }
    }
    ctx->pc = 0x2E5B0Cu;
    // 0x2e5b0c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2E5B0Cu;
    {
        const bool branch_taken_0x2e5b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5b0c) {
            ctx->pc = 0x2E5D3Cu;
            goto label_2e5d3c;
        }
    }
    ctx->pc = 0x2E5B14u;
label_2e5b14:
    // 0x2e5b14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e5b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e5b20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e5b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5b24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e5b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5b28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e5b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e5b2c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E5B2Cu;
    SET_GPR_U32(ctx, 31, 0x2E5B34u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E5B2Cu, 0x2E5B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5B34u;
label_2e5b34:
    // 0x2e5b34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b38: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e5b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2e5b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e5b40: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2e5b40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_2e5b44:
    // 0x2e5b44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b48: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5b4c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e5b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5b54: 0x0  nop
    ctx->pc = 0x2e5b54u;
    // NOP
    // 0x2e5b58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5b5c: 0x0  nop
    ctx->pc = 0x2e5b5cu;
    // NOP
    // 0x2e5b60: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2E5B60u;
    {
        const bool branch_taken_0x2e5b60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5b60) {
            ctx->pc = 0x2E5BB8u;
            goto label_2e5bb8;
        }
    }
    ctx->pc = 0x2E5B68u;
    // 0x2e5b68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b6c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2e5b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5b70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5b78: 0x0  nop
    ctx->pc = 0x2e5b78u;
    // NOP
    // 0x2e5b7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5b80: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e5b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e5b84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b88: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5b8c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e5b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5b94: 0x0  nop
    ctx->pc = 0x2e5b94u;
    // NOP
    // 0x2e5b98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5b9c: 0x0  nop
    ctx->pc = 0x2e5b9cu;
    // NOP
    // 0x2e5ba0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5BA0u;
    {
        const bool branch_taken_0x2e5ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5ba0) {
            ctx->pc = 0x2E5BB8u;
            goto label_2e5bb8;
        }
    }
    ctx->pc = 0x2E5BA8u;
    // 0x2e5ba8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e5bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5bb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5bb4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e5bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
label_2e5bb8:
    // 0x2e5bb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5bbc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2e5bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5bc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5bc4: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2e5bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2e5bc8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e5bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e5bcc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e5bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e5bd0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2e5bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2e5bd4: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x2e5bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e5bd8: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x2e5bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x2e5bdc: 0xc05c848  jal         func_172120
    ctx->pc = 0x2E5BDCu;
    SET_GPR_U32(ctx, 31, 0x2E5BE4u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2E5BDCu, 0x2E5BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5BE4u;
label_2e5be4:
    // 0x2e5be4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e5be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e5be8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5bec: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2e5becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5bf0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2e5bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5bf4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2e5bf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5bf8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E5BF8u;
    SET_GPR_U32(ctx, 31, 0x2E5C00u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E5BF8u, 0x2E5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5C00u;
label_2e5c00:
    // 0x2e5c00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c04: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2e5c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2e5c08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c0c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2e5c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2e5c10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e5c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e5c14: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2e5c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2e5c18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5C18u;
    {
        const bool branch_taken_0x2e5c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5c18) {
            ctx->pc = 0x2E5C30u;
            goto label_2e5c30;
        }
    }
    ctx->pc = 0x2E5C20u;
    // 0x2e5c20: 0x3c024070  lui         $v0, 0x4070
    ctx->pc = 0x2e5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16496 << 16));
    // 0x2e5c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5c28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c2c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e5c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2e5c30:
    // 0x2e5c30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c34: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e5c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5c38: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x2e5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x2e5c3c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2e5c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2e5c40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5c44: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e5c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e5c48: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2e5c48u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5c4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5c50: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2e5c50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5c54: 0x0  nop
    ctx->pc = 0x2e5c54u;
    // NOP
    // 0x2e5c58: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2E5C58u;
    {
        const bool branch_taken_0x2e5c58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5c58) {
            ctx->pc = 0x2E5C84u;
            goto label_2e5c84;
        }
    }
    ctx->pc = 0x2E5C60u;
    // 0x2e5c60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c64: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2e5c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5c68: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2e5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x2e5c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5c70: 0x0  nop
    ctx->pc = 0x2e5c70u;
    // NOP
    // 0x2e5c74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e5c78: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2e5c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2e5c7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5C7Cu;
    {
        const bool branch_taken_0x2e5c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5c7c) {
            ctx->pc = 0x2E5C90u;
            goto label_2e5c90;
        }
    }
    ctx->pc = 0x2E5C84u;
label_2e5c84:
    // 0x2e5c84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c8c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e5c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
label_2e5c90:
    // 0x2e5c90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5c94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e5c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e5c98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2E5C98u;
    SET_GPR_U32(ctx, 31, 0x2E5CA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2E5C98u, 0x2E5CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CA0u;
label_2e5ca0:
    // 0x2e5ca0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5ca4: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2E5CA4u;
    SET_GPR_U32(ctx, 31, 0x2E5CACu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2E5CA4u, 0x2E5CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CACu;
label_2e5cac:
    // 0x2e5cac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5cb0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e5cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e5cb4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2E5CB4u;
    SET_GPR_U32(ctx, 31, 0x2E5CBCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2E5CB4u, 0x2E5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CBCu;
label_2e5cbc:
    // 0x2e5cbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5cc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5cc4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x2e5cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2e5cc8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x2e5cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2e5ccc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x2E5CCCu;
    SET_GPR_U32(ctx, 31, 0x2E5CD4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x2E5CCCu, 0x2E5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5CD4u;
label_2e5cd4:
    // 0x2e5cd4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e5cd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5cdc: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x2e5cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5ce0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5ce4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2e5ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5ce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e5ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e5cec: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e5cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x2e5cf0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5cf4: 0xc4420124  lwc1        $f2, 0x124($v0)
    ctx->pc = 0x2e5cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e5cf8: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e5cfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5d00: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5d04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5d04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5d08: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2e5d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5d0c: 0x0  nop
    ctx->pc = 0x2e5d0cu;
    // NOP
    // 0x2e5d10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5D10u;
    {
        const bool branch_taken_0x2e5d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5d10) {
            ctx->pc = 0x2E5D30u;
            goto label_2e5d30;
        }
    }
    ctx->pc = 0x2E5D18u;
    // 0x2e5d18: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2e5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2e5d1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5d20: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2e5d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5d24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5d28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5d2c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x2e5d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_2e5d30:
    // 0x2e5d30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5d34: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E5D34u;
    SET_GPR_U32(ctx, 31, 0x2E5D3Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E5D34u, 0x2E5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D3Cu;
label_2e5d3c:
    // 0x2e5d3c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2e5d3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5d40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e5d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5d44: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5D4Cu;
}
