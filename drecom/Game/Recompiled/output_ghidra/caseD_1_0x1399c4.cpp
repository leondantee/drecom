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

// Function: caseD_1
// Address: 0x1399c4 - 0x139ab4
void caseD_1_0x1399c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1399c4");
#endif

    switch (ctx->pc) {
        case 0x1399e8u: goto label_1399e8;
        case 0x139a00u: goto label_139a00;
        case 0x139a14u: goto label_139a14;
        case 0x139a28u: goto label_139a28;
        case 0x139a3cu: goto label_139a3c;
        case 0x139a60u: goto label_139a60;
        case 0x139a8cu: goto label_139a8c;
        default: break;
    }

    ctx->pc = 0x1399c4u;

    // 0x1399c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1399c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1399c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1399c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1399cc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1399ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1399d0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1399d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1399d4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1399d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1399d8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1399d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1399dc: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1399dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1399e0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1399E0u;
    SET_GPR_U32(ctx, 31, 0x1399E8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1399E0u, 0x1399E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399E8u;
label_1399e8:
    // 0x1399e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1399e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1399ec: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1399ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1399f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1399f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1399f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1399f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1399f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1399F8u;
    SET_GPR_U32(ctx, 31, 0x139A00u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1399F8u, 0x139A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A00u;
label_139a00:
    // 0x139a00: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139a04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139a08: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x139a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x139a0c: 0xc05cd58  jal         func_173560
    ctx->pc = 0x139A0Cu;
    SET_GPR_U32(ctx, 31, 0x139A14u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x139A0Cu, 0x139A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A14u;
label_139a14:
    // 0x139a14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139a18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x139a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x139a1c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x139a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x139a20: 0xc040c9e  jal         func_103278
    ctx->pc = 0x139A20u;
    SET_GPR_U32(ctx, 31, 0x139A28u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x139A28u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x139A28u) { return; }
    ctx->pc = 0x139A28u;
label_139a28:
    // 0x139a28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139a2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139a30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139a34: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x139A34u;
    SET_GPR_U32(ctx, 31, 0x139A3Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x139A34u, 0x139A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A3Cu;
label_139a3c:
    // 0x139a3c: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x139a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139a40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139a44: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x139a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x139a48: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x139a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139a4c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x139a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x139a50: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x139a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x139a54: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x139a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x139a58: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x139A58u;
    SET_GPR_U32(ctx, 31, 0x139A60u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x139A58u, 0x139A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A60u;
label_139a60:
    // 0x139a60: 0xc60112a0  lwc1        $f1, 0x12A0($s0)
    ctx->pc = 0x139a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139a64: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x139a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139a68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x139a68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x139a6c: 0xe60012a0  swc1        $f0, 0x12A0($s0)
    ctx->pc = 0x139a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4768), bits); }
    // 0x139a70: 0xc60112a8  lwc1        $f1, 0x12A8($s0)
    ctx->pc = 0x139a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139a74: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x139a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139a78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x139a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x139a7c: 0xe60012a8  swc1        $f0, 0x12A8($s0)
    ctx->pc = 0x139a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4776), bits); }
    // 0x139a80: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x139a80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x139a84: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x139A84u;
    SET_GPR_U32(ctx, 31, 0x139A8Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x139A84u, 0x139A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A8Cu;
label_139a8c:
    // 0x139a8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x139a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139a90: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x139a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x139a94: 0x106000cf  beqz        $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x139A94u;
    {
        const bool branch_taken_0x139a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139a94) {
            ctx->pc = 0x139DD4u;
            return;
        }
    }
    ctx->pc = 0x139A9Cu;
    // 0x139a9c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x139a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x139aa0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x139aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x139aa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139aa8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x139aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x139aac: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x139AACu;
    {
        const bool branch_taken_0x139aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139aac) {
            ctx->pc = 0x139DD4u;
            return;
        }
    }
    ctx->pc = 0x139AB4u;
}
