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

// Function: caseD_0
// Address: 0x353ca0 - 0x353d98
void caseD_0_0x353ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x353ca0");
#endif

    switch (ctx->pc) {
        case 0x353cc4u: goto label_353cc4;
        case 0x353cd4u: goto label_353cd4;
        case 0x353ce0u: goto label_353ce0;
        case 0x353d38u: goto label_353d38;
        case 0x353d90u: goto label_353d90;
        default: break;
    }

    ctx->pc = 0x353ca0u;

    // 0x353ca0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x353ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x353ca4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x353ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353ca8: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x353ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x353cac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x353cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353cb0: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x353cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x353cb4: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x353cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x353cb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x353cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x353cbc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x353CBCu;
    SET_GPR_U32(ctx, 31, 0x353CC4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x353CBCu, 0x353CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CC4u;
label_353cc4:
    // 0x353cc4: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x353cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x353cc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x353cc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x353ccc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x353CCCu;
    SET_GPR_U32(ctx, 31, 0x353CD4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x353CCCu, 0x353CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CD4u;
label_353cd4:
    // 0x353cd4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x353cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x353cd8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x353CD8u;
    SET_GPR_U32(ctx, 31, 0x353CE0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x353CD8u, 0x353CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353CE0u;
label_353ce0:
    // 0x353ce0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x353ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353ce4: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x353ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x353ce8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x353ce8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353cec: 0x0  nop
    ctx->pc = 0x353cecu;
    // NOP
    // 0x353cf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x353cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x353cf4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x353cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x353cf8: 0x3c0543c8  lui         $a1, 0x43C8
    ctx->pc = 0x353cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17352 << 16));
    // 0x353cfc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x353cfcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x353d00: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x353d00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x353d04: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x353d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x353d08: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x353d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x353d0c: 0x9083010c  lbu         $v1, 0x10C($a0)
    ctx->pc = 0x353d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x353d10: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x353d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x353d14: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x353d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x353d18: 0x3467d70a  ori         $a3, $v1, 0xD70A
    ctx->pc = 0x353d18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x353d1c: 0x44876800  mtc1        $a3, $f13
    ctx->pc = 0x353d1cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x353d20: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x353d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x353d24: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x353d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x353d28: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x353d28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x353d2c: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x353d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x353d30: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x353D30u;
    SET_GPR_U32(ctx, 31, 0x353D38u);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x353D30u, 0x353D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D38u;
label_353d38:
    // 0x353d38: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x353d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353d3c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x353d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x353d40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x353d40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353d44: 0x0  nop
    ctx->pc = 0x353d44u;
    // NOP
    // 0x353d48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x353d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x353d4c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x353d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x353d50: 0x3c074396  lui         $a3, 0x4396
    ctx->pc = 0x353d50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17302 << 16));
    // 0x353d54: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x353d54u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x353d58: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x353d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x353d5c: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x353d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x353d60: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x353d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x353d64: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x353d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x353d68: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x353d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x353d6c: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x353d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x353d70: 0x9085010c  lbu         $a1, 0x10C($a0)
    ctx->pc = 0x353d70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x353d74: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x353d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x353d78: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x353d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x353d7c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x353d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x353d80: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x353d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x353d84: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x353d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x353d88: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x353D88u;
    SET_GPR_U32(ctx, 31, 0x353D90u);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x353D88u, 0x353D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353D90u;
label_353d90:
    // 0x353d90: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x353d90u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x353d94: 0x0  nop
    ctx->pc = 0x353d94u;
    // NOP
    ctx->pc = 0x353d98u;
}
