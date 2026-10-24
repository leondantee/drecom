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

// Function: entry_0020abfc
// Address: 0x20abfc - 0x20adb0
void entry_0020abfc_0x20abfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020abfc_0x20abfc");
#endif

    switch (ctx->pc) {
        case 0x20ac38u: goto label_20ac38;
        case 0x20ac54u: goto label_20ac54;
        default: break;
    }

    ctx->pc = 0x20abfcu;

    // 0x20abfc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x20abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x20ac00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20ac00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ac04: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac08: 0xc4209488  lwc1        $f0, -0x6B78($at)
    ctx->pc = 0x20ac08u;
    { uint32_t bits = FAST_READ32(0x619488u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ac0c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20ac0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20ac10: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac14: 0xe4209388  swc1        $f0, -0x6C78($at)
    ctx->pc = 0x20ac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619388u, _value); } while (0); }
    // 0x20ac18: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x20ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x20ac1c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20ac20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac24: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x20ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x20ac28: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x20ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x20ac2c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x20ac30: 0xc05db20  jal         func_176C80
    ctx->pc = 0x20AC30u;
    SET_GPR_U32(ctx, 31, 0x20AC38u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x20AC30u, 0x20AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC38u;
label_20ac38:
    // 0x20ac38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac3c: 0x8c309380  lw          $s0, -0x6C80($at)
    ctx->pc = 0x20ac3cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x619380u));
    // 0x20ac40: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x20ac40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20ac44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac48: 0xc42c9388  lwc1        $f12, -0x6C78($at)
    ctx->pc = 0x20ac48u;
    { uint32_t bits = FAST_READ32(0x619388u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20ac4c: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x20AC4Cu;
    SET_GPR_U32(ctx, 31, 0x20AC54u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x20AC4Cu, 0x20AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC54u;
label_20ac54:
    // 0x20ac54: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x20ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x20ac58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ac58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ac5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac60: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x20ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x20ac64: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20ac64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20ac68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ac6c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x20ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ac70: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20ac74: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x20ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20ac78: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x20ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20ac7c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x20ac7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x20ac80: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x20ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x20ac84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20ac84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ac88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ac88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ac8c: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x20ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619380u));
    // 0x20ac90: 0x39040  sll         $s2, $v1, 1
    ctx->pc = 0x20ac90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20ac94: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x20ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x20ac98: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x20ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ac9c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20aca0: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x20aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20aca4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x20aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20aca8: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x20aca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x20acac: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x20acacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
    // 0x20acb0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20acb0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20acb4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20acb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20acb8: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x20acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619380u));
    // 0x20acbc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20acc0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x20acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20acc4: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x20acc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20acc8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20accc: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20acd0: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x20acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20acd4: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x20acd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x20acd8: 0x3c033d20  lui         $v1, 0x3D20
    ctx->pc = 0x20acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15648 << 16));
    // 0x20acdc: 0x3465a0a1  ori         $a1, $v1, 0xA0A1
    ctx->pc = 0x20acdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41121);
    // 0x20ace0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20ace0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ace4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ace4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ace8: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x20ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x20acec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20acecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20acf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20acf4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x20acf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20acf8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20acfc: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x20acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20ad00: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20ad00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ad04: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x20ad04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x20ad08: 0x3c053d20  lui         $a1, 0x3D20
    ctx->pc = 0x20ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15648 << 16));
    // 0x20ad0c: 0x34a6a0a1  ori         $a2, $a1, 0xA0A1
    ctx->pc = 0x20ad0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)41121);
    // 0x20ad10: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20ad10u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ad14: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ad14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ad18: 0x8c239380  lw          $v1, -0x6C80($at)
    ctx->pc = 0x20ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x619380u));
    // 0x20ad1c: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x20ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x20ad20: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x20ad20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20ad24: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x20ad24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ad28: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20ad2c: 0x2465bd00  addiu       $a1, $v1, -0x4300
    ctx->pc = 0x20ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20ad30: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x20ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20ad34: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x20ad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x20ad38: 0x3c033ec8  lui         $v1, 0x3EC8
    ctx->pc = 0x20ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16072 << 16));
    // 0x20ad3c: 0x3465c8c9  ori         $a1, $v1, 0xC8C9
    ctx->pc = 0x20ad3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51401);
    // 0x20ad40: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x20ad40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ad44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ad44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ad48: 0x8c249380  lw          $a0, -0x6C80($at)
    ctx->pc = 0x20ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x619380u));
    // 0x20ad4c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20ad50: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x20ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ad54: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x20ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20ad58: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x20ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x20ad5c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x20ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x20ad60: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ad64: 0xe4800088  swc1        $f0, 0x88($a0)
    ctx->pc = 0x20ad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x20ad68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20ad68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ad6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20ad6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20ad70: 0x8c259380  lw          $a1, -0x6C80($at)
    ctx->pc = 0x20ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619380u));
    // 0x20ad74: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x20ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20ad78: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x20ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20ad7c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x20ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20ad80: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x20ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x20ad84: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x20ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x20ad88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20ad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x20ad8c: 0xac66007c  sw          $a2, 0x7C($v1)
    ctx->pc = 0x20ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 6));
    // 0x20ad90: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x20ad90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20ad94: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20ad94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ad98: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20ad98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ad9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20ad9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ada0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20ada0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ada4: 0x27bd0220  addiu       $sp, $sp, 0x220
    ctx->pc = 0x20ada4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x20ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x20ADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ADA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ADB0u;
}
