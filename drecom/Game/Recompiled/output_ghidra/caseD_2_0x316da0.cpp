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

// Function: caseD_2
// Address: 0x316da0 - 0x316eb4
void caseD_2_0x316da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x316da0");
#endif

    switch (ctx->pc) {
        case 0x316e34u: goto label_316e34;
        case 0x316e90u: goto label_316e90;
        case 0x316ea0u: goto label_316ea0;
        default: break;
    }

    ctx->pc = 0x316da0u;

    // 0x316da0: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316da4: 0xace01290  sw          $zero, 0x1290($a3)
    ctx->pc = 0x316da4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4752), GPR_U32(ctx, 0));
    // 0x316da8: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316da8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316dac: 0x8ce41298  lw          $a0, 0x1298($a3)
    ctx->pc = 0x316dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4760)));
    // 0x316db0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x316db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x316db4: 0x8e090130  lw          $t1, 0x130($s0)
    ctx->pc = 0x316db4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316db8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x316db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x316dbc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x316dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x316dc0: 0x78880000  lq          $t0, 0x0($a0)
    ctx->pc = 0x316dc0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x316dc4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316dc8: 0x24870120  addiu       $a3, $a0, 0x120
    ctx->pc = 0x316dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x316dcc: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x316dccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x316dd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316dd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316dd4: 0x0  nop
    ctx->pc = 0x316dd4u;
    // NOP
    // 0x316dd8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x316dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x316ddc: 0x3c04c348  lui         $a0, 0xC348
    ctx->pc = 0x316ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49992 << 16));
    // 0x316de0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x316de0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316de4: 0x0  nop
    ctx->pc = 0x316de4u;
    // NOP
    // 0x316de8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x316de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x316dec: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x316decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x316df0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x316df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316df4: 0x0  nop
    ctx->pc = 0x316df4u;
    // NOP
    // 0x316df8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x316df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x316dfc: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x316dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x316e00: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x316e00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x316e04: 0x0  nop
    ctx->pc = 0x316e04u;
    // NOP
    // 0x316e08: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x316e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x316e0c: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x316e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316e10: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x316e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316e14: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x316e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x316e18: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x316e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x316e1c: 0x8e070130  lw          $a3, 0x130($s0)
    ctx->pc = 0x316e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316e20: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x316e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x316e24: 0x25040120  addiu       $a0, $t0, 0x120
    ctx->pc = 0x316e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 288));
    // 0x316e28: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316e2c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x316E2Cu;
    SET_GPR_U32(ctx, 31, 0x316E34u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x316E34u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x316E34u) { return; }
    ctx->pc = 0x316E34u;
label_316e34:
    // 0x316e34: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x316e34u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x316e38: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316e3c: 0x24e30120  addiu       $v1, $a3, 0x120
    ctx->pc = 0x316e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 288));
    // 0x316e40: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x316e40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x316e44: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x316e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316e48: 0x24a30170  addiu       $v1, $a1, 0x170
    ctx->pc = 0x316e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 368));
    // 0x316e4c: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x316e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x316e50: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x316e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316e54: 0x8c831298  lw          $v1, 0x1298($a0)
    ctx->pc = 0x316e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4760)));
    // 0x316e58: 0x34180  sll         $t0, $v1, 6
    ctx->pc = 0x316e58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x316e5c: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x316e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x316e60: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x316e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x316e64: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x316e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x316e68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x316e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x316e6c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x316e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x316e70: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x316e70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x316e74: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x316e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x316e78: 0x643824  and         $a3, $v1, $a0
    ctx->pc = 0x316e78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316e7c: 0x24044600  addiu       $a0, $zero, 0x4600
    ctx->pc = 0x316e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17920));
    // 0x316e80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x316e80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x316e84: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x316e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x316e88: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x316E88u;
    SET_GPR_U32(ctx, 31, 0x316E90u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x316E88u, 0x316E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E90u;
label_316e90:
    // 0x316e90: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x316e90u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x316e94: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x316e94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x316e98: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x316E98u;
    SET_GPR_U32(ctx, 31, 0x316EA0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x316E98u, 0x316EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EA0u;
label_316ea0:
    // 0x316ea0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x316ea0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x316ea4: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x316ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316ea8: 0x91240002  lbu         $a0, 0x2($t1)
    ctx->pc = 0x316ea8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x316eac: 0x248b0001  addiu       $t3, $a0, 0x1
    ctx->pc = 0x316eacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x316eb0: 0xa12b0002  sb          $t3, 0x2($t1)
    ctx->pc = 0x316eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 11));
    ctx->pc = 0x316eb4u;
}
