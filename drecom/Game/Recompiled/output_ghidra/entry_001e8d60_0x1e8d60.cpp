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

// Function: entry_001e8d60
// Address: 0x1e8d60 - 0x1e8eac
void entry_001e8d60_0x1e8d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e8d60_0x1e8d60");
#endif

    switch (ctx->pc) {
        case 0x1e8dc0u: goto label_1e8dc0;
        case 0x1e8dccu: goto label_1e8dcc;
        case 0x1e8e28u: goto label_1e8e28;
        case 0x1e8e34u: goto label_1e8e34;
        case 0x1e8e68u: goto label_1e8e68;
        case 0x1e8e74u: goto label_1e8e74;
        default: break;
    }

    ctx->pc = 0x1e8d60u;

    // 0x1e8d60: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1e8d64: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x1e8d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x1e8d68: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x1e8d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e8d6c: 0x14a0008a  bnez        $a1, . + 4 + (0x8A << 2)
    ctx->pc = 0x1E8D6Cu;
    {
        const bool branch_taken_0x1e8d6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d6c) {
            ctx->pc = 0x1E8F98u;
            return;
        }
    }
    ctx->pc = 0x1E8D74u;
    // 0x1e8d74: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8d78: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x1e8d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8d7c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1e8d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e8d80: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8d84: 0xc4801204  lwc1        $f0, 0x1204($a0)
    ctx->pc = 0x1e8d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8d88: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1e8d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1e8d8c: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8d90: 0xc4a01208  lwc1        $f0, 0x1208($a1)
    ctx->pc = 0x1e8d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8d94: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1e8d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1e8d98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8da0: 0x0  nop
    ctx->pc = 0x1e8da0u;
    // NOP
    // 0x1e8da4: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1e8da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1e8da8: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e8dac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8db0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e8db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e8db4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8db4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8db8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E8DB8u;
    SET_GPR_U32(ctx, 31, 0x1E8DC0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8DB8u, 0x1E8DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DC0u;
label_1e8dc0:
    // 0x1e8dc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8dc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8dc4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E8DC4u;
    SET_GPR_U32(ctx, 31, 0x1E8DCCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8DC4u, 0x1E8DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8DCCu;
label_1e8dcc:
    // 0x1e8dcc: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8dd0: 0xc4a01200  lwc1        $f0, 0x1200($a1)
    ctx->pc = 0x1e8dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8dd4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1e8dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1e8dd8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8ddc: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x1e8ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8de0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1e8de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1e8de4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8dec: 0x0  nop
    ctx->pc = 0x1e8decu;
    // NOP
    // 0x1e8df0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1e8df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1e8df4: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8df8: 0xc4411204  lwc1        $f1, 0x1204($v0)
    ctx->pc = 0x1e8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8dfc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1e8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1e8e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8e04: 0x0  nop
    ctx->pc = 0x1e8e04u;
    // NOP
    // 0x1e8e08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e8e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e8e0c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1e8e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1e8e10: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e8e14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8e14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8e18: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e8e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e8e1c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8e1cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8e20: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E8E20u;
    SET_GPR_U32(ctx, 31, 0x1E8E28u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8E20u, 0x1E8E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E28u;
label_1e8e28:
    // 0x1e8e28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8e28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8e2c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E8E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E34u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8E2Cu, 0x1E8E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E34u;
label_1e8e34:
    // 0x1e8e34: 0x8fb00198  lw          $s0, 0x198($sp)
    ctx->pc = 0x1e8e34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8e38: 0xc6011204  lwc1        $f1, 0x1204($s0)
    ctx->pc = 0x1e8e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8e3c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1e8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1e8e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e8e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8e44: 0x0  nop
    ctx->pc = 0x1e8e44u;
    // NOP
    // 0x1e8e48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e8e48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e8e4c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1e8e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1e8e50: 0x2404170e  addiu       $a0, $zero, 0x170E
    ctx->pc = 0x1e8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5902));
    // 0x1e8e54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1e8e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8e58: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e8e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e8e5c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e8e5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e8e60: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1E8E60u;
    SET_GPR_U32(ctx, 31, 0x1E8E68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1E8E60u, 0x1E8E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E68u;
label_1e8e68:
    // 0x1e8e68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e8e68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e8e6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1E8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E8E74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1E8E6Cu, 0x1E8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8E74u;
label_1e8e74:
    // 0x1e8e74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e8e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e8e78: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8e7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1e8e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e8e80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e8e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e8e84: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8e88: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x1e8e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e8e8c: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8e90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1e8e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8e94: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e8e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8e98: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1e8e98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8e9c: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1e8e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e8ea0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1e8ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1e8ea4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1E8EA4u;
    {
        const bool branch_taken_0x1e8ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8ea4) {
            ctx->pc = 0x1E8F98u;
            return;
        }
    }
    ctx->pc = 0x1E8EACu;
}
