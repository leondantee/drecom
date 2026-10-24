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

// Function: entry_00121d30
// Address: 0x121d30 - 0x121df0
void entry_00121d30_0x121d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121d30_0x121d30");
#endif

    switch (ctx->pc) {
        case 0x121d58u: goto label_121d58;
        case 0x121d70u: goto label_121d70;
        case 0x121db0u: goto label_121db0;
        default: break;
    }

    ctx->pc = 0x121d30u;

    // 0x121d30: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121d34: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x121d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x121d38: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x121d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x121d3c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x121d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x121d40: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x121d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x121d44: 0x24040502  addiu       $a0, $zero, 0x502
    ctx->pc = 0x121d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x121d48: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x121d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x121d4c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x121d4cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x121d50: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x121D50u;
    SET_GPR_U32(ctx, 31, 0x121D58u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x121D50u, 0x121D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D58u;
label_121d58:
    // 0x121d58: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x121d58u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121d5c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121d60: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x121d60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x121d64: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x121d64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x121d68: 0xc047ff4  jal         func_11FFD0
    ctx->pc = 0x121D68u;
    SET_GPR_U32(ctx, 31, 0x121D70u);
    ctx->pc = 0x11FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FFD0u, 0x121D68u, 0x121D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D70u;
label_121d70:
    // 0x121d70: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x121d70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x121d74: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121d78: 0x946311f4  lhu         $v1, 0x11F4($v1)
    ctx->pc = 0x121d78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x121d7c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x121d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x121d80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x121d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x121d84: 0x1483001a  bne         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x121D84u;
    {
        const bool branch_taken_0x121d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x121d84) {
            ctx->pc = 0x121DF0u;
            return;
        }
    }
    ctx->pc = 0x121D8Cu;
    // 0x121d8c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121d90: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x121d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x121d94: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x121d94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x121d98: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x121d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x121d9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x121d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x121da0: 0x0  nop
    ctx->pc = 0x121da0u;
    // NOP
    // 0x121da4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x121da4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x121da8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x121DA8u;
    SET_GPR_U32(ctx, 31, 0x121DB0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x121DA8u, 0x121DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DB0u;
label_121db0:
    // 0x121db0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121db4: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x121db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x121db8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121dbc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x121dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121dc0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x121dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x121dc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x121dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x121dc8: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x121dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121dcc: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x121dccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x121dd0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x121dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121dd4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x121dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x121dd8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121ddc: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x121ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x121de0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x121de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x121de4: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x121de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x121de8: 0x100003d1  b           . + 4 + (0x3D1 << 2)
    ctx->pc = 0x121DE8u;
    {
        const bool branch_taken_0x121de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121de8) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x121DF0u;
}
