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

// Function: entry_00231c28
// Address: 0x231c28 - 0x231d0c
void entry_00231c28_0x231c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231c28_0x231c28");
#endif

    switch (ctx->pc) {
        case 0x231c7cu: goto label_231c7c;
        case 0x231c90u: goto label_231c90;
        case 0x231ca4u: goto label_231ca4;
        case 0x231cc8u: goto label_231cc8;
        default: break;
    }

    ctx->pc = 0x231c28u;

    // 0x231c28: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x231c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231c2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x231c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x231c30: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x231c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x231c34: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231c38: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x231c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x231c3c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x231c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x231c40: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x231c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x231c44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x231c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x231c48: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x231c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x231c4c: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x231c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x231c50: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x231c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x231c54: 0x34860006  ori         $a2, $a0, 0x6
    ctx->pc = 0x231c54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x231c58: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x231c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x231c5c: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x231c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x231c60: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x231c60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x231c64: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x231c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x231c68: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x231c68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x231c6c: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x231c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x231c70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x231c70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x231c74: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x231C74u;
    SET_GPR_U32(ctx, 31, 0x231C7Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x231C74u, 0x231C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C7Cu;
label_231c7c:
    // 0x231c7c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231c7cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231c80: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x231c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x231c84: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x231c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x231c88: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x231C88u;
    SET_GPR_U32(ctx, 31, 0x231C90u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x231C88u, 0x231C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C90u;
label_231c90:
    // 0x231c90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231c90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231c94: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x231c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x231c98: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x231c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x231c9c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x231C9Cu;
    SET_GPR_U32(ctx, 31, 0x231CA4u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x231C9Cu, 0x231CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CA4u;
label_231ca4:
    // 0x231ca4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x231ca4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231ca8: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x231ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x231cac: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x231cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x231cb0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x231cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231cb4: 0x24040511  addiu       $a0, $zero, 0x511
    ctx->pc = 0x231cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x231cb8: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x231cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x231cbc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x231cbcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x231cc0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x231CC0u;
    SET_GPR_U32(ctx, 31, 0x231CC8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x231CC0u, 0x231CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CC8u;
label_231cc8:
    // 0x231cc8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x231cc8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231ccc: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x231cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x231cd0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x231cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231cd4: 0xa4a4002c  sh          $a0, 0x2C($a1)
    ctx->pc = 0x231cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x231cd8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231cdc: 0x8483002a  lh          $v1, 0x2A($a0)
    ctx->pc = 0x231cdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x231ce0: 0x2465fffb  addiu       $a1, $v1, -0x5
    ctx->pc = 0x231ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
    // 0x231ce4: 0xa485002a  sh          $a1, 0x2A($a0)
    ctx->pc = 0x231ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 5));
    // 0x231ce8: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x231ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231cec: 0x8483002a  lh          $v1, 0x2A($a0)
    ctx->pc = 0x231cecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x231cf0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x231cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x231cf4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x231cf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x231cf8: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231CF8u;
    {
        const bool branch_taken_0x231cf8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x231cf8) {
            ctx->pc = 0x231D0Cu;
            return;
        }
    }
    ctx->pc = 0x231D00u;
    // 0x231d00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x231d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231d04: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x231d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231d08: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x231d08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x231d0cu;
}
