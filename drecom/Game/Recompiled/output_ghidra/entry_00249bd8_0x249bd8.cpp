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

// Function: entry_00249bd8
// Address: 0x249bd8 - 0x249ce8
void entry_00249bd8_0x249bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249bd8_0x249bd8");
#endif

    switch (ctx->pc) {
        case 0x249c4cu: goto label_249c4c;
        case 0x249c60u: goto label_249c60;
        case 0x249c74u: goto label_249c74;
        case 0x249ca0u: goto label_249ca0;
        default: break;
    }

    ctx->pc = 0x249bd8u;

    // 0x249bd8: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x249bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249bdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x249bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x249be0: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x249be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x249be4: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x249be8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x249be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x249bec: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x249becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x249bf0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x249bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x249bf4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x249bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x249bf8: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x249bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x249bfc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x249bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x249c00: 0x3903c  dsll32      $s2, $v1, 0
    ctx->pc = 0x249c00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 0));
    // 0x249c04: 0x36540006  ori         $s4, $s2, 0x6
    ctx->pc = 0x249c04u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)6);
    // 0x249c08: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x249c08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x249c0c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x249c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x249c10: 0x2464b420  addiu       $a0, $v1, -0x4BE0
    ctx->pc = 0x249c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947872));
    // 0x249c14: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x249c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x249c18: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x249c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x249c1c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x249c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x249c20: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x249c20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x249c24: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x249c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x249c28: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x249c2c: 0x64a821  addu        $s5, $v1, $a0
    ctx->pc = 0x249c2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x249c30: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x249c30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x249c34: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x249c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x249c38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x249c38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x249c3c: 0x72a03e28  paddub      $a3, $s5, $zero
    ctx->pc = 0x249c3cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x249c40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x249c40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x249c44: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x249C44u;
    SET_GPR_U32(ctx, 31, 0x249C4Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x249C44u, 0x249C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C4Cu;
label_249c4c:
    // 0x249c4c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x249c4cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249c50: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x249c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x249c54: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x249c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x249c58: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x249C58u;
    SET_GPR_U32(ctx, 31, 0x249C60u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x249C58u, 0x249C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C60u;
label_249c60:
    // 0x249c60: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249c60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249c64: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x249c64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x249c68: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x249c68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x249c6c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x249C6Cu;
    SET_GPR_U32(ctx, 31, 0x249C74u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x249C6Cu, 0x249C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249C74u;
label_249c74:
    // 0x249c74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x249c74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249c78: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x249c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x249c7c: 0x34864000  ori         $a2, $a0, 0x4000
    ctx->pc = 0x249c7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x249c80: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x249c80u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x249c84: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x249c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x249c88: 0x24070511  addiu       $a3, $zero, 0x511
    ctx->pc = 0x249c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x249c8c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x249c8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x249c90: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x249c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x249c94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x249c94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x249c98: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x249C98u;
    SET_GPR_U32(ctx, 31, 0x249CA0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x249C98u, 0x249CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CA0u;
label_249ca0:
    // 0x249ca0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x249ca0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249ca4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x249ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x249ca8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249cac: 0xa4a4002c  sh          $a0, 0x2C($a1)
    ctx->pc = 0x249cacu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x249cb0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249cb4: 0x8464002a  lh          $a0, 0x2A($v1)
    ctx->pc = 0x249cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x249cb8: 0x2485fffb  addiu       $a1, $a0, -0x5
    ctx->pc = 0x249cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967291));
    // 0x249cbc: 0xa465002a  sh          $a1, 0x2A($v1)
    ctx->pc = 0x249cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 5));
    // 0x249cc0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249cc4: 0x8464002a  lh          $a0, 0x2A($v1)
    ctx->pc = 0x249cc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x249cc8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x249cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x249ccc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x249cccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x249cd0: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x249CD0u;
    {
        const bool branch_taken_0x249cd0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x249cd0) {
            ctx->pc = 0x249CE8u;
            return;
        }
    }
    ctx->pc = 0x249CD8u;
    // 0x249cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x249cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249cdc: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249ce0: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x249ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x249ce4: 0x0  nop
    ctx->pc = 0x249ce4u;
    // NOP
    ctx->pc = 0x249ce8u;
}
