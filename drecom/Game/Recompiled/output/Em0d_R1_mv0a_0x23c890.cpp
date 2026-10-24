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

// Function: Em0d_R1_mv0a
// Address: 0x23c890 - 0x23cec4
void Em0d_R1_mv0a_0x23c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_mv0a_0x23c890");
#endif

    switch (ctx->pc) {
        case 0x23c8b4u: goto label_23c8b4;
        case 0x23c8c0u: goto label_23c8c0;
        case 0x23c934u: goto label_23c934;
        case 0x23ca44u: goto label_23ca44;
        case 0x23ca60u: goto label_23ca60;
        case 0x23ca78u: goto label_23ca78;
        case 0x23ca84u: goto label_23ca84;
        case 0x23cce0u: goto label_23cce0;
        case 0x23cd2cu: goto label_23cd2c;
        default: break;
    }

    ctx->pc = 0x23c890u;

    // 0x23c890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c894: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x23c894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x23c898: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x23c898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x23c89c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c8a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c8a4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x23c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x23c8a8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x23c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x23c8ac: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x23C8ACu;
    SET_GPR_U32(ctx, 31, 0x23C8B4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x23C8ACu, 0x23C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8B4u;
label_23c8b4:
    // 0x23c8b4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x23c8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x23c8b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23C8B8u;
    SET_GPR_U32(ctx, 31, 0x23C8C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23C8B8u, 0x23C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8C0u;
label_23c8c0:
    // 0x23c8c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23c8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23c8c4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x23c8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x23c8c8: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x23c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x23c8cc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23c8ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23c8d0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23c8d0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23c8d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23c8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c8d8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c8dc: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x23c8dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x23c8e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23c8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c8e4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x23c8e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23c8e8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x23c8e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x23c8ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c8f0: 0x10830049  beq         $a0, $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x23C8F0u;
    {
        const bool branch_taken_0x23c8f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23c8f0) {
            ctx->pc = 0x23CA18u;
            goto label_23ca18;
        }
    }
    ctx->pc = 0x23C8F8u;
    // 0x23c8f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23C8F8u;
    {
        const bool branch_taken_0x23c8f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c8f8) {
            ctx->pc = 0x23C908u;
            goto label_23c908;
        }
    }
    ctx->pc = 0x23C900u;
    // 0x23c900: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x23C900u;
    {
        const bool branch_taken_0x23c900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c900) {
            ctx->pc = 0x23CDA0u;
            goto label_23cda0;
        }
    }
    ctx->pc = 0x23C908u;
label_23c908:
    // 0x23c908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23c908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c90c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c910: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23c910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23c914: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c918: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23c918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c91c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c920: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x23c920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x23c924: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c928: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c92c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C92Cu;
    SET_GPR_U32(ctx, 31, 0x23C934u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C92Cu, 0x23C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C934u;
label_23c934:
    // 0x23c934: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c938: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c93c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c940: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x23c940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x23c944: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x23c944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x23c948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c94c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c950: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c954: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x23c954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x23c958: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23c958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23c95c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c960: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c964: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c968: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x23c968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x23c96c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23c970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c974: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c978: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c97c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23c97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23c980: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x23c980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x23c984: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23c984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23c988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c98c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c990: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c994: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23c994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23c998: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x23c998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x23c99c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23c99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23c9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c9a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9a8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c9ac: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23c9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23c9b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9b4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x23c9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x23c9b8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x23c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x23c9bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x23c9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x23c9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c9c4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9c8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c9cc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x23c9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x23c9d0: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x23c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x23c9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c9d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c9e0: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x23c9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x23c9e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x23c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x23c9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c9ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9f0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c9f4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x23c9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x23c9f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23c9fc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ca00: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x23ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x23ca04: 0x34420018  ori         $v0, $v0, 0x18
    ctx->pc = 0x23ca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
    // 0x23ca08: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x23ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x23ca0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23ca10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca14: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x23ca14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
label_23ca18:
    // 0x23ca18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23ca18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca1c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x23ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca24: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x23ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23ca28: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x23ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x23ca2c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x23ca2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ca30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x23ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x23ca34: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x23ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x23ca38: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x23ca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x23ca3c: 0xc05c848  jal         func_172120
    ctx->pc = 0x23CA3Cu;
    SET_GPR_U32(ctx, 31, 0x23CA44u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x23CA3Cu, 0x23CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA44u;
label_23ca44:
    // 0x23ca44: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x23ca44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23ca48: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca4c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x23ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ca50: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x23ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ca54: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x23ca54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23ca58: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x23CA58u;
    SET_GPR_U32(ctx, 31, 0x23CA60u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x23CA58u, 0x23CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA60u;
label_23ca60:
    // 0x23ca60: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca64: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x23ca64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x23ca68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca6c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x23ca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x23ca70: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x23CA70u;
    SET_GPR_U32(ctx, 31, 0x23CA78u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x23CA70u, 0x23CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA78u;
label_23ca78:
    // 0x23ca78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca7c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x23CA7Cu;
    SET_GPR_U32(ctx, 31, 0x23CA84u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x23CA7Cu, 0x23CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CA84u;
label_23ca84:
    // 0x23ca84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ca88: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x23ca88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x23ca8c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23ca8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23ca90: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23ca90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23ca94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23ca94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23ca98: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x23CA98u;
    {
        const bool branch_taken_0x23ca98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ca98) {
            ctx->pc = 0x23CB04u;
            goto label_23cb04;
        }
    }
    ctx->pc = 0x23CAA0u;
    // 0x23caa0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23caa4: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x23caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23caa8: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x23caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x23caac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23caacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cab0: 0x0  nop
    ctx->pc = 0x23cab0u;
    // NOP
    // 0x23cab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23cab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cab8: 0x0  nop
    ctx->pc = 0x23cab8u;
    // NOP
    // 0x23cabc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x23CABCu;
    {
        const bool branch_taken_0x23cabc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cabc) {
            ctx->pc = 0x23CAECu;
            goto label_23caec;
        }
    }
    ctx->pc = 0x23CAC4u;
    // 0x23cac4: 0x3c03c20c  lui         $v1, 0xC20C
    ctx->pc = 0x23cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49676 << 16));
    // 0x23cac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cacc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23caccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cad0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cad4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23cad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23cad8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x23cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x23cadc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cadcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cae0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cae4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cae8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23cae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_23caec:
    // 0x23caec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23caecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23caf0: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x23caf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x23caf4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x23caf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x23caf8: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x23caf8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23cafc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x23CAFCu;
    {
        const bool branch_taken_0x23cafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cafc) {
            ctx->pc = 0x23CB64u;
            goto label_23cb64;
        }
    }
    ctx->pc = 0x23CB04u;
label_23cb04:
    // 0x23cb04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb08: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x23cb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cb0c: 0x3c03c20c  lui         $v1, 0xC20C
    ctx->pc = 0x23cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49676 << 16));
    // 0x23cb10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cb10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cb14: 0x0  nop
    ctx->pc = 0x23cb14u;
    // NOP
    // 0x23cb18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23cb18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cb1c: 0x0  nop
    ctx->pc = 0x23cb1cu;
    // NOP
    // 0x23cb20: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x23CB20u;
    {
        const bool branch_taken_0x23cb20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cb20) {
            ctx->pc = 0x23CB50u;
            goto label_23cb50;
        }
    }
    ctx->pc = 0x23CB28u;
    // 0x23cb28: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x23cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x23cb2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cb2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cb30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb34: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cb38: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23cb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23cb3c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x23cb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x23cb40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cb40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cb44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cb4c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23cb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_23cb50:
    // 0x23cb50: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x23cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb54: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x23cb54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x23cb58: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x23cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x23cb5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23cb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23cb60: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x23cb60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
label_23cb64:
    // 0x23cb64: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb68: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x23cb68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x23cb6c: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x23CB6Cu;
    {
        const bool branch_taken_0x23cb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb6c) {
            ctx->pc = 0x23CC34u;
            goto label_23cc34;
        }
    }
    ctx->pc = 0x23CB74u;
    // 0x23cb74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb78: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x23cb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x23cb7c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23cb80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23cb80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23cb84: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x23cb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x23cb88: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x23CB88u;
    {
        const bool branch_taken_0x23cb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cb88) {
            ctx->pc = 0x23CBE0u;
            goto label_23cbe0;
        }
    }
    ctx->pc = 0x23CB90u;
    // 0x23cb90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cb94: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x23cb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cb98: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x23cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x23cb9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cb9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cba0: 0x0  nop
    ctx->pc = 0x23cba0u;
    // NOP
    // 0x23cba4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23cba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cba8: 0x0  nop
    ctx->pc = 0x23cba8u;
    // NOP
    // 0x23cbac: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23CBACu;
    {
        const bool branch_taken_0x23cbac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cbac) {
            ctx->pc = 0x23CBC8u;
            goto label_23cbc8;
        }
    }
    ctx->pc = 0x23CBB4u;
    // 0x23cbb4: 0x3c03c20c  lui         $v1, 0xC20C
    ctx->pc = 0x23cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49676 << 16));
    // 0x23cbb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cbbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cbc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cbc4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x23cbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_23cbc8:
    // 0x23cbc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cbcc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x23cbccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x23cbd0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x23cbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x23cbd4: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x23cbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23cbd8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x23CBD8u;
    {
        const bool branch_taken_0x23cbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cbd8) {
            ctx->pc = 0x23CC44u;
            goto label_23cc44;
        }
    }
    ctx->pc = 0x23CBE0u;
label_23cbe0:
    // 0x23cbe0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cbe4: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x23cbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cbe8: 0x3c03c20c  lui         $v1, 0xC20C
    ctx->pc = 0x23cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49676 << 16));
    // 0x23cbec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cbecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cbf0: 0x0  nop
    ctx->pc = 0x23cbf0u;
    // NOP
    // 0x23cbf4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23cbf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cbf8: 0x0  nop
    ctx->pc = 0x23cbf8u;
    // NOP
    // 0x23cbfc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23CBFCu;
    {
        const bool branch_taken_0x23cbfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cbfc) {
            ctx->pc = 0x23CC18u;
            goto label_23cc18;
        }
    }
    ctx->pc = 0x23CC04u;
    // 0x23cc04: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x23cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x23cc08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23cc08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23cc0c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cc14: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x23cc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_23cc18:
    // 0x23cc18: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x23cc18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc1c: 0x84a4127a  lh          $a0, 0x127A($a1)
    ctx->pc = 0x23cc1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4730)));
    // 0x23cc20: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x23cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x23cc24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23cc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23cc28: 0xa4a3127a  sh          $v1, 0x127A($a1)
    ctx->pc = 0x23cc28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x23cc2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23CC2Cu;
    {
        const bool branch_taken_0x23cc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc2c) {
            ctx->pc = 0x23CC44u;
            goto label_23cc44;
        }
    }
    ctx->pc = 0x23CC34u;
label_23cc34:
    // 0x23cc34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc38: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x23cc38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x23cc3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23cc40: 0xa483127c  sh          $v1, 0x127C($a0)
    ctx->pc = 0x23cc40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 3));
label_23cc44:
    // 0x23cc44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc48: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x23cc48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x23cc4c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23cc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23cc50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23cc50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x23cc54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CC54u;
    {
        const bool branch_taken_0x23cc54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc54) {
            ctx->pc = 0x23CC6Cu;
            goto label_23cc6c;
        }
    }
    ctx->pc = 0x23CC5Cu;
    // 0x23cc5c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x23cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc60: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x23cc60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x23cc64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23cc68: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x23cc68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_23cc6c:
    // 0x23cc6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc70: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x23cc70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x23cc74: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x23CC74u;
    {
        const bool branch_taken_0x23cc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc74) {
            ctx->pc = 0x23CD60u;
            goto label_23cd60;
        }
    }
    ctx->pc = 0x23CC7Cu;
    // 0x23cc7c: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x23cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x23cc80: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23cc80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23cc84: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23cc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23cc88: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23cc88u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cc8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23cc8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23cc90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cc94: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x23cc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cc98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23cc98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cc9c: 0x0  nop
    ctx->pc = 0x23cc9cu;
    // NOP
    // 0x23cca0: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x23CCA0u;
    {
        const bool branch_taken_0x23cca0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cca0) {
            ctx->pc = 0x23CD60u;
            goto label_23cd60;
        }
    }
    ctx->pc = 0x23CCA8u;
    // 0x23cca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ccac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ccb0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23ccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ccb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ccb8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ccbc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23ccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ccc0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ccc4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x23ccc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ccc8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cccc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23ccccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23ccd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ccd4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x23ccd8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23CCD8u;
    SET_GPR_U32(ctx, 31, 0x23CCE0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23CCD8u, 0x23CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCE0u;
label_23cce0:
    // 0x23cce0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23cce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23cce4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23cce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23cce8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23CCE8u;
    {
        const bool branch_taken_0x23cce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cce8) {
            ctx->pc = 0x23CD24u;
            goto label_23cd24;
        }
    }
    ctx->pc = 0x23CCF0u;
    // 0x23ccf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ccf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ccf8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x23ccf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x23ccfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23ccfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23cd00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd04: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x23cd04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x23cd08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23cd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23cd0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd10: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x23cd10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x23cd14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd18: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x23cd18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23cd1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd20: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_23cd24:
    // 0x23cd24: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23CD24u;
    SET_GPR_U32(ctx, 31, 0x23CD2Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23CD24u, 0x23CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD2Cu;
label_23cd2c:
    // 0x23cd2c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23cd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23cd30: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x23cd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x23cd34: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x23cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x23cd38: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x23cd38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x23cd3c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x23cd3cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x23cd40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd44: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x23cd44u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x23cd48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd4c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cd50: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x23cd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x23cd54: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x23cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x23cd58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23cd58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23cd5c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x23cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
label_23cd60:
    // 0x23cd60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd64: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x23cd64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x23cd68: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x23CD68u;
    {
        const bool branch_taken_0x23cd68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cd68) {
            ctx->pc = 0x23CDA0u;
            goto label_23cda0;
        }
    }
    ctx->pc = 0x23CD70u;
    // 0x23cd70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23cd70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23cd74: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd78: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x23cd78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x23cd7c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x23cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23cd80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd84: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x23cd84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x23cd88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd8c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x23cd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23cd90: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd94: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x23cd94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x23cd98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cd9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_23cda0:
    // 0x23cda0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cda4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cda8: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23cda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cdac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cdb0: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cdb4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x23cdb4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cdb8: 0x0  nop
    ctx->pc = 0x23cdb8u;
    // NOP
    // 0x23cdbc: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x23CDBCu;
    {
        const bool branch_taken_0x23cdbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cdbc) {
            ctx->pc = 0x23CEB4u;
            goto label_23ceb4;
        }
    }
    ctx->pc = 0x23CDC4u;
    // 0x23cdc4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cdc8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cdcc: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cdd0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cdd4: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23cdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cdd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23cdd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23cddc: 0x0  nop
    ctx->pc = 0x23cddcu;
    // NOP
    // 0x23cde0: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x23CDE0u;
    {
        const bool branch_taken_0x23cde0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cde0) {
            ctx->pc = 0x23CE3Cu;
            goto label_23ce3c;
        }
    }
    ctx->pc = 0x23CDE8u;
    // 0x23cde8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cdec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cdf0: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cdf4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cdf8: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cdfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x23cdfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23ce00: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x23ce04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ce0c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23ce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ce10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce14: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23ce18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ce1c: 0x0  nop
    ctx->pc = 0x23ce1cu;
    // NOP
    // 0x23ce20: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x23CE20u;
    {
        const bool branch_taken_0x23ce20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ce20) {
            ctx->pc = 0x23CE3Cu;
            goto label_23ce3c;
        }
    }
    ctx->pc = 0x23CE28u;
    // 0x23ce28: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ce30: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x23ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce38: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_23ce3c:
    // 0x23ce3c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce40: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ce44: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23ce44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ce48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce4c: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23ce50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ce54: 0x0  nop
    ctx->pc = 0x23ce54u;
    // NOP
    // 0x23ce58: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x23CE58u;
    {
        const bool branch_taken_0x23ce58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ce58) {
            ctx->pc = 0x23CEB4u;
            goto label_23ceb4;
        }
    }
    ctx->pc = 0x23CE60u;
    // 0x23ce60: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce64: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ce68: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x23ce68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ce6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce70: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23ce74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23ce78: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x23ce7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce80: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23ce84: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23ce84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ce88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ce8c: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x23ce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ce90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23ce90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ce94: 0x0  nop
    ctx->pc = 0x23ce94u;
    // NOP
    // 0x23ce98: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x23CE98u;
    {
        const bool branch_taken_0x23ce98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ce98) {
            ctx->pc = 0x23CEB4u;
            goto label_23ceb4;
        }
    }
    ctx->pc = 0x23CEA0u;
    // 0x23cea0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23cea4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23cea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23cea8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x23cea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ceac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23ceb0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x23ceb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_23ceb4:
    // 0x23ceb4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x23ceb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ceb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23cebc: 0x3e00008  jr          $ra
    ctx->pc = 0x23CEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CEC4u;
}
